#include "global.h"
#include "walda_phrase.h"
#include "string_util.h"
#include "event_data.h"
#include "naming_screen.h"
#include "main.h"
#include "text.h"
#include "new_game.h"
#include "overworld.h"
#include "pokemon_storage_system.h"
#include "field_screen_effect.h"

extern const u8 gText_Peekaboo[];
extern const u8 gText_TransRights[];

static void CB2_HandleGivenWaldaPhrase(void);
static u32 GetWaldaPhraseInputCase(u8 *);
static bool32 TryCalculateWallpaper(u16 *, u16 *, u8 *, u8 *, u16, u8 *);
static void SetWallpaperDataFromLetter(u8 *, u8 *, u32, u32, u32);
static u32 GetWallpaperDataBits(u8 *, u32, u32);
static void RotateWallpaperDataLeft(u8 *, s32, s32);
static void MaskWallpaperData(u8 *, u32, u8);

// There are 32 (2^5) unique letters allowed in a successful phrase for Walda.
#define BITS_PER_LETTER 5

// The letters allowed in a successful phrase for Walda
// All vowels are excluded, as well as X/x, Y/y, l, r, t, v, w, and z.
static const u8 sWaldaLettersTable[1 << BITS_PER_LETTER] =
{
    CHAR_B, CHAR_C, CHAR_D, CHAR_F, CHAR_G, CHAR_H, CHAR_J, CHAR_K, CHAR_L, CHAR_M, CHAR_N, CHAR_P, CHAR_Q, CHAR_R, CHAR_S, CHAR_T, CHAR_V, CHAR_W, CHAR_Z,
    CHAR_b, CHAR_c, CHAR_d, CHAR_f, CHAR_g, CHAR_h, CHAR_j, CHAR_k,         CHAR_m, CHAR_n, CHAR_p, CHAR_q,         CHAR_s
};

enum
{
    PHRASE_CHANGED,
    PHRASE_NO_CHANGE,
    PHRASE_EMPTY
};

u16 TryBufferWaldaPhrase(void)
{
    if (IsWaldaPhraseEmpty())
        return FALSE;

    StringCopy(gStringVar1, GetWaldaPhrasePtr());
    return TRUE;
}

void DoWaldaNamingScreen(void)
{
    StringCopy(gStringVar2, GetWaldaPhrasePtr());
    DoNamingScreen(NAMING_SCREEN_WALDA, gStringVar2, 0, 0, 0, CB2_HandleGivenWaldaPhrase);
}

static void CB2_HandleGivenWaldaPhrase(void)
{
    gSpecialVar_0x8004 = GetWaldaPhraseInputCase(gStringVar2);

    switch (gSpecialVar_0x8004)
    {
    case PHRASE_EMPTY:
        // If saved phrase is also empty, set default phrase
        // Otherwise keep saved phrase
        if (IsWaldaPhraseEmpty())
            SetWaldaPhrase(gText_Peekaboo);
        else
            gSpecialVar_0x8004 = PHRASE_NO_CHANGE;
        break;
    case PHRASE_CHANGED:
        SetWaldaPhrase(gStringVar2);
        break;
    case PHRASE_NO_CHANGE:
        break;
    }

    StringCopy(gStringVar1, GetWaldaPhrasePtr());
    gFieldCallback = FieldCB_ContinueScriptHandleMusic;
    SetMainCallback2(CB2_ReturnToField);
}

static u32 GetWaldaPhraseInputCase(u8 *inputPtr)
{
    // No input given
    if (inputPtr[0] == EOS)
        return PHRASE_EMPTY;

    // Input given is the same as saved phrase
    if (StringCompare(inputPtr, GetWaldaPhrasePtr()) == 0)
        return PHRASE_NO_CHANGE;

    // Input is new phrase
    return PHRASE_CHANGED;
}

u16 TryGetWallpaperWithWaldaPhrase(void)
{
    if (StringCompare(GetWaldaPhrasePtr(), gText_TransRights) == 0)
        return TRUE;
    return FALSE;
}

static u8 GetLetterTableId(u8 letter)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(sWaldaLettersTable); i++)
    {
        if (sWaldaLettersTable[i] == letter)
            return i;
    }

    return ARRAY_COUNT(sWaldaLettersTable);
}

// Attempts to generate a wallpaper based on the given trainer id and phrase.
// Returns TRUE if successful and sets the wallpaper results to the given pointers.
// Returns FALSE if no wallpaper was generated (Walda "didn't like" the phrase).
// A 9-byte array is used to calculate the wallpaper's data.
// The elements of this array are defined below.
#define BG_COLOR_LO  data[0]
#define BG_COLOR_HI  data[1]
#define FG_COLOR_LO  data[2]
#define FG_COLOR_HI  data[3]
#define ICON_ID      data[4]
#define PATTERN_ID   data[5]
#define TID_CHECK_HI data[6]
#define TID_CHECK_LO data[7]
#define KEY          data[8]
#define NUM_WALLPAPER_DATA_BYTES 9
#define TO_BIT_OFFSET(i)  (3 + (8 * (i))) // Convert a position in the phrase to a bit number into the wallpaper data array
static bool32 TryCalculateWallpaper(u16 *backgroundClr, u16 *foregroundClr, u8 *iconId, u8 *patternId, u16 trainerId, u8 *phrase)
{
    return TRUE;
}

static void RotateWallpaperDataLeft(u8 *data, s32 size, s32 numShifts)
{
    s32 i, j;
    u8 temp1, temp2;

    for (i = numShifts - 1; i != -1; i--)
    {
        temp1 = (data[0] & (1 << 7)) >> 7;

        for (j = size - 1; j >= 0; j--)
        {
            temp2 = (data[j] & (1 << 7)) >> 7;
            data[j] <<= 1;
            data[j] |= temp1;
            temp1 = temp2;
        }
    }
}

static void MaskWallpaperData(u8 *data, u32 size, u8 mask)
{
    u32 i;

    mask |= (mask << 4);

    for (i = 0; i < size; i++)
        data[i] ^= mask;
}

static bool8 GetWallpaperDataBit(u8 *data, u32 bitNum)
{
    u32 i = bitNum / 8;
    u32 flag = (1 << 7) >> (bitNum % 8);

    return (data[i] & flag) != 0;
}

static void SetWallpaperDataBit(u8 *data, u32 bitNum)
{
    u32 i = bitNum / 8;
    u8 flag = (1 << 7) >> (bitNum % 8);

    data[i] |= flag;
}

static void ClearWallpaperDataBit(u8 *data, u32 bitNum)
{
    u32 i = bitNum / 8;
    u8 mask = ~((1 << 7) >> (bitNum % 8));

    data[i] &= mask;
}

static void SetWallpaperDataFromLetter(u8 *data, u8 *letterTableIds, u32 setOffset, u32 getOffset, u32 numBits)
{
    u32 i;

    for (i = 0; i < numBits; i++)
    {
        if (GetWallpaperDataBit(letterTableIds, getOffset + i))
            SetWallpaperDataBit(data, setOffset + i);
        else
            ClearWallpaperDataBit(data, setOffset + i);
    }
}

static u32 GetWallpaperDataBits(u8 *data, u32 offset, u32 numBits)
{
    u32 bits, i;

    for (bits = 0, i = 0; i < numBits; i++)
    {
        bits <<= 1;
        bits |= GetWallpaperDataBit(data, offset + i);
    }

    return bits;
}
