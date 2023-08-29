#include "global.h"
#include "malloc.h"
#include "decompress.h"
#include "ereader_helpers.h"
#include "link.h"
#include "main.h"
#include "mystery_gift_menu.h"
#include "mystery_gift_client.h"
#include "save.h"
#include "sound.h"
#include "sprite.h"
#include "task.h"
#include "strings.h"
#include "util.h"
#include "constants/songs.h"

// Equivalent to MysteryGiftTaskData
struct EReaderTaskData
{
    u16 timer;
    u16 unused1;
    u16 unused2;
    u16 unused3;
    u8 state;
    u8 textState;
    u8 unused4;
    u8 unused5;
    u8 unused6;
    u8 unused7;
    u8 status;
    u8 *unusedBuffer;
};

struct EReaderData
{
    u16 status;
    u32 size;
    u32 *data;
};

static void Task_EReader(u8);

struct EReaderData gEReaderData;

extern const u8 gMultiBootProgram_EReader_Start[];
extern const u8 gMultiBootProgram_EReader_End[];

