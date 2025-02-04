#ifndef UE4SS_SDK_Abiotic_Weapon_Melee_ParentBP_HPP
#define UE4SS_SDK_Abiotic_Weapon_Melee_ParentBP_HPP

class AAbiotic_Weapon_Melee_ParentBP_C : public AAbiotic_Weapon_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B78 (size: 0x8)

    void GetOverrideSwingTrace(bool& Override, FDataTableRowHandle& MeleeSwingData);
    void GetSwingData(FDataTableRowHandle& MeleeSwingData);
    void Local_MeleeHitResult(FHitResult Hit Result, class AController* InstigatedByController);
    void Local_MeleeStartHitting();
    void Local_OnMeleeHit(FHitResult HitResult);
    void Local_OnMeleeTraceCosmetic(const FHitResult HitResult);
    void Broadcast_OnMeleeSwing();
    void ExecuteUbergraph_Abiotic_Weapon_Melee_ParentBP(int32 EntryPoint);
}; // Size: 0xB80

#endif
