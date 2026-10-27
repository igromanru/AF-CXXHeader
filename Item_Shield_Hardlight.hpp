#ifndef UE4SS_SDK_Item_Shield_Hardlight_HPP
#define UE4SS_SDK_Item_Shield_Hardlight_HPP

class AItem_Shield_Hardlight_C : public AItem_Shield_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0BC8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0BD0 (size: 0x8)
    class ULaserComponent_C* LaserComponent;                                          // 0x0BD8 (size: 0x8)
    class URechargeableComponent_C* RechargeableComponent;                            // 0x0BE0 (size: 0x8)
    bool IsLocalWeapon;                                                               // 0x0BE8 (size: 0x1)
    TArray<FHitResult> RecentHitArray;                                                // 0x0BF0 (size: 0x10)
    TArray<TSubclassOf<class UDamageType>> DamageTypes;                               // 0x0C00 (size: 0x10)
    float DeflectedHitscanConeAngle;                                                  // 0x0C10 (size: 0x4)

    void ReceiveLaserHit(class ULaserComponent_C* Laser, int32 CurrentBounce, FHitResult& HitResult, bool& Handled);
    void CheckProjectileBlockOverridden(class AAbioticProjectile_ParentBP_C* Projectile, FHitResult& Hit);
    void CanCurrentlyShieldBlock(class AActor* DamageCauser, TSubclassOf<class UAbioticDamageType> DamageTypeClass, double& DamagePassthroughPercent);
    void StopLaserHitUpdate(class ULaserComponent_C* Laser);
    void ReceiveBeginPlay();
    void Server_DamageBlockedByWeapon(FHitResult Hit Result, class AActor* Instigator);
    void Broadcast_RangedAttack(const TArray<FHitResult>& Hits, const TArray<TSubclassOf<class UDamageType>>& DamageTypes);
    void Broadcast_BriefLight();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BlockProjectile(FHitResult Hit Result, class AAbioticProjectile_ParentBP_C* Projectile);
    void BlockHitscanRanged(FHitResult HitResult, class AActor* Instigator, double BaseDamage, TSubclassOf<class UDamageType> DamageType);
    void ExecuteUbergraph_Item_Shield_Hardlight(int32 EntryPoint);
}; // Size: 0xC14

#endif
