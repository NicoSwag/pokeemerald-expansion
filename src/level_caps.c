#include "global.h"
#include "battle.h"
#include "event_data.h"
#include "level_caps.h"
#include "pokemon.h"


static const u32 sLevelCapFlagMap[][2] =
    {
        {FLAG_BADGE01_GET, 10},
        {FLAG_BADGE02_GET, 14},
        {FLAG_BADGE03_GET, 23},
        {FLAG_BADGE04_GET, 30},
        {FLAG_BADGE05_GET, 31},
        {FLAG_BADGE06_GET, 33},
        {FLAG_BADGE07_GET, 42},
        {FLAG_BADGE08_GET, 46},
        {FLAG_IS_CHAMPION, 58},
    };


u32 GetLevelCeiling(void)
{

    
    u32 i;

        for (i = 0; i < ARRAY_COUNT(sLevelCapFlagMap); i++)
        {
            if (!FlagGet(sLevelCapFlagMap[i][0]))
                return sLevelCapFlagMap[i][1];
        }


    return MAX_LEVEL;
}

u32 GetLevelCeilingPlusOne(void)
{

    
    u32 i;
        if(FlagGet(FLAG_IS_CHAMPION))
            return MAX_LEVEL;

        for (i = 0; i < ARRAY_COUNT(sLevelCapFlagMap); i++)
        {
            if (!FlagGet(sLevelCapFlagMap[i][0]))
                return (sLevelCapFlagMap[i+1][1] - 1);
        }


    return MAX_LEVEL;
}




u32 GetLevelFloor(void)
{

    u32 i;

        for (i = 0; i < ARRAY_COUNT(sLevelCapFlagMap); i++)
        {
            if (!FlagGet(sLevelCapFlagMap[i][0]))
                if(i==0)
                    return 0;
                else return sLevelCapFlagMap[i-1][1];
        }


    return MAX_LEVEL;
}



u32 GetClosestLevelCapToLevel(u8 monLevel)
{
    u32 i;

        for (i = 0; i < ARRAY_COUNT(sLevelCapFlagMap); i++)
        {
            if ((s8) monLevel - (s8) sLevelCapFlagMap[i][1] <= 0) 
                return sLevelCapFlagMap[i][1];
                
        }
    return MAX_LEVEL;
}

u32 GetSoftLevelCapExpValue(u32 level, u32 expValue)
{
    static const u32 sExpScalingDown[7] = { 1.1, 1.2, 1.4, 1.8, 3, 5, 10 };
    static const u32 sExpScalingUp[5]   = { 16, 8, 4, 2, 1 };

    u32 levelDifference;
    u32 currentLevelCap = GetLevelCeilingPlusOne();

    if (B_EXP_CAP_TYPE == EXP_CAP_NONE)
        return expValue;

    if (level < currentLevelCap)
    {
        if (B_LEVEL_CAP_EXP_UP)
        {
            levelDifference = currentLevelCap - level;
            if (levelDifference > ARRAY_COUNT(sExpScalingUp))
                return expValue + (expValue / sExpScalingUp[ARRAY_COUNT(sExpScalingUp) - 1]);
            else
                return expValue + (expValue / sExpScalingUp[levelDifference]);
        }
        else
        {
            return expValue;
        }
    }
    else if (B_EXP_CAP_TYPE == EXP_CAP_HARD)
    {
        return 0;
    }
    else if (B_EXP_CAP_TYPE == EXP_CAP_SOFT)
    {
        levelDifference = level - currentLevelCap;
        if (levelDifference > ARRAY_COUNT(sExpScalingDown))
            return expValue / sExpScalingDown[ARRAY_COUNT(sExpScalingDown) - 1];
        else
            return expValue / sExpScalingDown[levelDifference];
    }
    else
    {
       return expValue;
    }
}
