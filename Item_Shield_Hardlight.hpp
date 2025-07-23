#ifndef UE4SS_SDK_Item_Shield_Hardlight_HPP
#define UE4SS_SDK_Item_Shield_Hardlight_HPP

class AItem_Shield_Hardlight_C : public AItem_Shield_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B68 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0B70 (size: 0x8)
    class ULaserComponent_C* LaserComponent;                                          // 0x0B78 (size: 0x8)
    class URechargeableComponent_C* RechargeableComponent;                            // 0x0B80 (size: 0x8)
    bool IsLocalWeapon;                                                               // 0x0B88 (size: 0x1)
    TArray<FHitResult> RecentHitArray;                                                // 0x0B90 (size: 0x10)
    TArray<class TSubclassOf<UDamageType>> DamageTypes;                               // 0x0BA0 (size: 0x10)
    float DeflectedHitscanConeAngle;                                                  // 0x0BB0 (size: 0x4)

    void ReceiveLaserHit(class ULaserComponent_C* Laser, int32 CurrentBounce, FHitResult& HitResult, bool& Handled);
    bool CheckProjectileBlockOverridden(class AAbioticProjectile_ParentBP_C* Projectile, FHitResult& Hit);
    bool CanCurrentlyShieldBlock(class AActor* DamageCauser, TSubclassOf<class UAbiotic_DamageType_ParentBP_C> DamageTypeClass, double& DamagePassthroughPercent);
    void StopLaserHitUpdate(class ULaserComponent_C* Laser);
    void ReceiveBeginPlay();
    void Server_DamageBlockedByWeapon(FHitResult Hit Result, class AActor* Instigator);
    void OverrideProjectileBlock(FHitResult Hit Result, class AAbioticProjectile_ParentBP_C* Projectile);
    void Server_BlockHitscanRangedWeapon(FHitResult HitResult, class AActor* Instigator, double BaseDamage, TSubclassOf<class UDamageType> DamageType);
    void Broadcast_RangedAttack(const TArray<FHitResult>& Hits, const TArray<class TSubclassOf<UDamageType>>& DamageTypes);
    void Broadcast_BriefLight();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_Item_Shield_Hardlight(int32 EntryPoint);
}; // Size: 0xBB4

#endif
