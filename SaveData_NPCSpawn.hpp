#ifndef UE4SS_SDK_SaveData_NPCSpawn_HPP
#define UE4SS_SDK_SaveData_NPCSpawn_HPP

struct FSaveData_NPCSpawn
{
    FSoftObjectPath ActorPath_20_ED536E6F4A900C466BBD05B047427685;                    // 0x0000 (size: 0x20)
    double CurrentCooldownRemaining_4_B3BE986244C5C3E9F62BEE87D2C6A52B;               // 0x0020 (size: 0x8)
    int32 LastDayOnCooldown_27_075C48654ADA3BF2BB6AAB93D644CAB4;                      // 0x0028 (size: 0x4)
    int32 SpawnCount_17_4617365A4F5E3082B09DE8B2C5C433D0;                             // 0x002C (size: 0x4)
    bool HasSpawnedOnce_14_46E5CFD746B7EF4C60EE5490F647695D;                          // 0x0030 (size: 0x1)
    int32 MinutesPassedCooldownStarted_24_8E0DC672460891BCD8830CBAB51AD583;           // 0x0034 (size: 0x4)

}; // Size: 0x38

#endif
