#ifndef UE4SS_SDK_BuffObject_StunningSlam_HPP
#define UE4SS_SDK_BuffObject_StunningSlam_HPP

class UBuffObject_StunningSlam_C : public UBuffObject_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0060 (size: 0x8)
    double StaminaDamageMultiplier;                                                   // 0x0068 (size: 0x8)

    void Server_OnBuffApply(class AAbioticCharacter* Character);
    void OnDamageApplied_Event(class AActor* DamagedActor, double RawDamage, TSubclassOf<class UAbiotic_DamageType_ParentBP_C> DamageType, FHitResult HitResult, bool IsMelee, class AActor* DamageCauser);
    void ExecuteUbergraph_BuffObject_StunningSlam(int32 EntryPoint);
}; // Size: 0x70

#endif
