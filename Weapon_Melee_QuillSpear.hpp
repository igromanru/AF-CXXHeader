#ifndef UE4SS_SDK_Weapon_Melee_QuillSpear_HPP
#define UE4SS_SDK_Weapon_Melee_QuillSpear_HPP

class AWeapon_Melee_QuillSpear_C : public AAbiotic_Weapon_Melee_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B68 (size: 0x8)
    class AActor* LastHomingTarget;                                                   // 0x0B70 (size: 0x8)
    double HomingMaxRange;                                                            // 0x0B78 (size: 0x8)
    bool SaveChargingProgress;                                                        // 0x0B80 (size: 0x1)
    bool AutoFire;                                                                    // 0x0B81 (size: 0x1)

    void ReloadOverride(bool& Handled);
    void Local_AltFireReleased(bool& ConsumedByWeapon);
    void Server_GetAmmoConsumeAmount(double ChargeAmount, int32& AmountToConsume);
    void GetOverrideProjectileClass(bool& Override, TSoftClassPtr<AAbioticProjectile_ParentBP_C>& ProjectileClass);
    void GetHomingTarget(class AActor*& Target);
    void Local_CheckNewHomingTarget();
    void Can Use_Secondary(bool& Can Use, class AActor*& TargetActor, bool& OverrideLogic);
    void UseItemSecondary_LocalFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, class AActor* TargetActor);
    void UpdateHomingTarget(class AActor* LastHomingTarget);
    void Request_UpdateHomingTarget(class AActor* Target);
    void ReceiveBeginPlay();
    void LocalShoot();
    void ReceiveTick(float DeltaSeconds);
    void Local_SetCharging();
    void TryShootAfterReload();
    void ExecuteUbergraph_Weapon_Melee_QuillSpear(int32 EntryPoint);
}; // Size: 0xB82

#endif
