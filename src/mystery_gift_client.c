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
    // process command
    struct MysteryGiftClientCmd * cmd = &client->script[client->cmdidx];
    client->cmdidx++;
    switch (cmd->instr)
    {
    case CLI_NONE:
        break;
    case CLI_RETURN:
        client->param = cmd->parameter; // Set for endVal in MysteryGiftClient_Run
        client->funcId = FUNC_DONE;
        client->funcState = 0;
        break;
    case CLI_RECV:
        MysteryGiftLink_InitRecv(&client->link, cmd->parameter, client->recvBuffer);
        client->funcId = FUNC_RECV;
        client->funcState = 0;
        break;
    case CLI_SEND_LOADED:
        // Send without a MysteryGiftLink_InitSend
        // Sends whatever has been loaded already
        client->funcId = FUNC_SEND;
        client->funcState = 0;
        break;
    case CLI_SEND_READY_END:
        MysteryGiftLink_InitSend(&client->link, MG_LINKID_READY_END, client->sendBuffer, 0);
        client->funcId = FUNC_SEND;
        client->funcState = 0;
        break;
    case CLI_SEND_STAT:
        MysteryGiftClient_InitSendWord(client, MG_LINKID_GAME_STAT, GetGameStat(cmd->parameter));
        client->funcId = FUNC_SEND;
        client->funcState = 0;
        break;
    case CLI_COPY_RECV_IF_N:
        if (client->param == FALSE)
            MysteryGiftClient_CopyRecvScript(client);
        break;
    case CLI_COPY_RECV_IF:
        if (client->param == TRUE)
            MysteryGiftClient_CopyRecvScript(client);
        break;
    case CLI_COPY_RECV:
        MysteryGiftClient_CopyRecvScript(client);
        break;
    case CLI_YES_NO:
        memcpy(client->msg, client->recvBuffer, CLIENT_MAX_MSG_SIZE);
        client->funcId = FUNC_WAIT;
        client->funcState = 0;
        return CLI_RET_YES_NO;
    case CLI_PRINT_MSG:
        memcpy(client->msg, client->recvBuffer, CLIENT_MAX_MSG_SIZE);
        client->funcId = FUNC_WAIT;
        client->funcState = 0;
        return CLI_RET_PRINT_MSG;
    case CLI_COPY_MSG:
        memcpy(client->msg, client->recvBuffer, CLIENT_MAX_MSG_SIZE);
        client->funcId = FUNC_WAIT;
        client->funcState = 0;
        return CLI_RET_COPY_MSG;
    case CLI_ASK_TOSS:
        client->funcId = FUNC_WAIT;
        client->funcState = 0;
        return CLI_RET_ASK_TOSS;
    case CLI_LOAD_GAME_DATA:
        MysteryGift_LoadLinkGameData(client->sendBuffer, client->isWonderNews);
        MysteryGiftLink_InitSend(&client->link, MG_LINKID_GAME_DATA, client->sendBuffer, sizeof(struct MysteryGiftLinkGameData));
        break;
    case CLI_LOAD_TOSS_RESPONSE:
        // param here is set by MG_STATE_CLIENT_ASK_TOSS or MG_STATE_CLIENT_ASK_TOSS_UNRECEIVED
        MysteryGiftClient_InitSendWord(client, MG_LINKID_RESPONSE, client->param);
        break;
    case CLI_SAVE_CARD:
        SaveWonderCard(client->recvBuffer);
        break;
    case CLI_SAVE_NEWS:
        if (!IsWonderNewsSameAsSaved(client->recvBuffer))
        {
            SaveWonderNews(client->recvBuffer);
            MysteryGiftClient_InitSendWord(client, MG_LINKID_RESPONSE, FALSE);
        }
        else
        {
            // Wonder News has already been saved (or is invalid).
            // Prepare a signal to indicate it was not saved.
            MysteryGiftClient_InitSendWord(client, MG_LINKID_RESPONSE, TRUE);
        }
        break;
    case CLI_RUN_MEVENT_SCRIPT:
        client->funcId = FUNC_RUN_MEVENT;
        client->funcState = 0;
        break;
    case CLI_SAVE_STAMP:
        MysteryGift_TrySaveStamp(client->recvBuffer);
        break;
    case CLI_SAVE_RAM_SCRIPT:
        InitRamScript_NoObjectEvent(client->recvBuffer, sizeof(struct RamScriptData));
        break;
    case CLI_RECV_EREADER_TRAINER:
    #if FREE_BATTLE_TOWER_E_READER == FALSE
        memcpy(&gSaveBlock2Ptr->frontier.ereaderTrainer, client->recvBuffer, sizeof(gSaveBlock2Ptr->frontier.ereaderTrainer));
        ValidateEReaderTrainer();
    #endif //FREE_BATTLE_TOWER_E_READER
        break;
    case CLI_RUN_BUFFER_SCRIPT:
        memcpy(gDecompressionBuffer, client->recvBuffer, MG_LINK_BUFFER_SIZE);
        client->funcId = FUNC_RUN_BUFFER;
        client->funcState = 0;
        break;
    }

    return CLI_RET_ACTIVE;
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
