#ifndef UE4SS_SDK_BuffObject_StunningSlam_HPP
#define UE4SS_SDK_BuffObject_StunningSlam_HPP

class UBuffObject_StunningSlam_C : public UBuffObject_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0050 (size: 0x8)
    double StaminaDamageMultiplier;                                                   // 0x0058 (size: 0x8)

    void Server_OnBuffApply(class AAbioticCharacter* Character);
    void OnDamageApplied_Event(class AActor* DamagedActor, double RawDamage, TSubclassOf<class UAbioticDamageType> DamageType, FHitResult HitResult, bool IsMelee, class AActor* DamageCauser);
    void ExecuteUbergraph_BuffObject_StunningSlam(int32 EntryPoint);
}; // Size: 0x60

#endif
