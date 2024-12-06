#ifndef UE4SS_SDK_Abiotic_DeathData_Struct_HPP
#define UE4SS_SDK_Abiotic_DeathData_Struct_HPP

struct FAbiotic_DeathData_Struct
{
    bool Dead_1_B45281BD48ABC2CB023B778DD7AF753D;                                     // 0x0000 (size: 0x1)
    bool ShouldRagdoll_14_8D124BB44B67BB57A34BDCBF630A0B16;                           // 0x0001 (size: 0x1)
    TSubclassOf<class UDamageType> DamageType_4_9B3C573A409D17F815087AB455C55BAD;     // 0x0008 (size: 0x8)
    FVector HitLocation_7_FD8EB03146E53578B4F55B897ED40507;                           // 0x0010 (size: 0x18)
    FVector DirectionOfSource_9_C130C24C4E37516DE2FF1186A9FB68B8;                     // 0x0028 (size: 0x18)
    FName BoneHitName_12_D9B1CBA548B29F2270B88EA35177CDB8;                            // 0x0040 (size: 0x8)

}; // Size: 0x48

#endif
