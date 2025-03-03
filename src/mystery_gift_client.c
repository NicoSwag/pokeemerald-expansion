#include "global.h"
#include "malloc.h"
#include "decompress.h"
#include "overworld.h"
#include "script.h"
#include "battle_tower.h"
#include "mystery_gift.h"
#include "mystery_event_script.h"
#include "mystery_gift_client.h"

enum {
    FUNC_INIT,
    FUNC_DONE,
    FUNC_RECV,
    FUNC_SEND,
    FUNC_RUN,
    FUNC_WAIT,
    FUNC_RUN_MEVENT,
    FUNC_RUN_BUFFER,
};

EWRAM_DATA static struct MysteryGiftClient * sClient = NULL;

static void MysteryGiftClient_Init(struct MysteryGiftClient *, u32, u32);
static u32 MysteryGiftClient_CallFunc(struct MysteryGiftClient *);
static void MysteryGiftClient_Free(struct MysteryGiftClient *);



u32 MysteryGiftClient_Run(u16 * endVal)
{
}

void MysteryGiftClient_AdvanceState(void)
{
}

void * MysteryGiftClient_GetMsg(void)
{
}

void MysteryGiftClient_SetParam(u32 val)
{
}

static void MysteryGiftClient_Init(struct MysteryGiftClient * client, u32 sendPlayerId, u32 recvPlayerId)
{
}

static void MysteryGiftClient_Free(struct MysteryGiftClient * client)
{
}

static void MysteryGiftClient_CopyRecvScript(struct MysteryGiftClient * client)
{
}

static void MysteryGiftClient_InitSendWord(struct MysteryGiftClient * client, u32 ident, u32 word)
{
}

static u32 Client_Init(struct MysteryGiftClient * client)
{}

static u32 Client_Done(struct MysteryGiftClient * client)
{
}


static u32 Client_Recv(struct MysteryGiftClient * client)
{
}

static u32 Client_Send(struct MysteryGiftClient * client)
{
}

static u32 Client_Run(struct MysteryGiftClient * client)
{
    
}

static u32 Client_Wait(struct MysteryGiftClient * client)
{


}

static u32 Client_RunMysteryEventScript(struct MysteryGiftClient * client)
{

}

static u32 Client_RunBufferScript(struct MysteryGiftClient * client)
{

}

static u32 MysteryGiftClient_CallFunc(struct MysteryGiftClient * client)
{

}