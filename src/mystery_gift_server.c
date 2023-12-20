#include "global.h"
#include "malloc.h"
#include "script.h"
#include "mystery_gift.h"
#include "mystery_gift_server.h"
#include "mystery_gift_link.h"

enum {
    FUNC_INIT,
    FUNC_DONE,
    FUNC_RECV,
    FUNC_SEND,
    FUNC_RUN,
};

EWRAM_DATA static struct MysteryGiftServer * sServer = NULL;

