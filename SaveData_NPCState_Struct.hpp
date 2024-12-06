#ifndef UE4SS_SDK_SaveData_NPCState_Struct_HPP
#define UE4SS_SDK_SaveData_NPCState_Struct_HPP

struct FSaveData_NPCState_Struct
{
    FSoftObjectPath ActorPath_10_AA8197574CDA01EA496CFC9ABD7354E7;                    // 0x0000 (size: 0x20)
    bool IsDead_4_CA620DAE4DEEF38E5F98EF83FB456F5E;                                   // 0x0020 (size: 0x1)
    TEnumAsByte<E_NarrativeNPCStates::Type> NarrativeState_7_4356CFB54CE55C60875D739B0062A5C1; // 0x0021 (size: 0x1)
    FText CustomName_19_3542D8E24BE07A9FD2793886625856FB;                             // 0x0028 (size: 0x10)
    FVector Location_22_4A2FC732466C4BFB7DD7D28401ECCA3C;                             // 0x0038 (size: 0x18)
    TMap<EBodyLimbs, double> CurrentHealthMap_37_3DCC36A344E90F15026001BAEBBFFA26;    // 0x0050 (size: 0x50)
    TSoftClassPtr<ANPC_Base_ParentBP_C> NPCClass_40_6B707D0B4E3EA501567782B7473C4B3C; // 0x00A0 (size: 0x28)

}; // Size: 0xC8

#endif
