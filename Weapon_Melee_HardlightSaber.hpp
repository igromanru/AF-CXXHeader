#ifndef UE4SS_SDK_Weapon_Melee_HardlightSaber_HPP
#define UE4SS_SDK_Weapon_Melee_HardlightSaber_HPP

class AWeapon_Melee_HardlightSaber_C : public AAbiotic_Weapon_Melee_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0C10 (size: 0x8)
    class URechargeableComponent_C* RechargeableComponent;                            // 0x0C18 (size: 0x8)
    float DeflectedHitscanConeAngle;                                                  // 0x0C20 (size: 0x4)
    TArray<FHitResult> RecentHitArray;                                                // 0x0C28 (size: 0x10)
    TArray<TSubclassOf<class UDamageType>> DamageTypes;                               // 0x0C38 (size: 0x10)
    bool RecentlyBlocked;                                                             // 0x0C48 (size: 0x1)
    bool RecentlyAttacked;                                                            // 0x0C49 (size: 0x1)

    void CanStartBlocking(bool& StartBlocking);
    void CheckProjectileBlockOverridden(class AAbioticProjectile_ParentBP_C* Projectile, FHitResult& Hit);
    void CanCurrentlyShieldBlock(class AActor* DamageCauser, TSubclassOf<class UAbioticDamageType> DamageTypeClass, double& DamagePassthroughPercent);
    void BlockDamageEvent(double TotalDamageReceived, double DamagePassthroughPercent, FVector DamageDirection, FHitResult Hit Result, class AActor* Instigator, const class UAbioticDamageType* DamageType, bool& CompletelyOverridden);
    void ReduceEnergyOnHit(const FHitResult& Hit);
    void ModifyStaminaOnBlock(double DamageReceived);
    void ShieldBlockUpdated(bool Blocking);
    void Local_DamageBlockedByWeapon();
    void Server_DamageBlockedByWeapon(FHitResult Hit Result, class AActor* Instigator);
    void ReceiveBeginPlay();
    void TryPerformBatteryChangeOnUse();
    void Broadcast_RangedAttack(const TArray<FHitResult>& Hits, const TArray<TSubclassOf<class UDamageType>>& DamageTypes);
    void Broadcast_BlockFX();
    void Broadcast_OnMeleeSwing();
    void Server_FinishBlock();
    void UseItem_BroadcastFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, bool SecondaryUse);
    void BlockProjectile(FHitResult Hit Result, class AAbioticProjectile_ParentBP_C* Projectile);
    void BlockHitscanRanged(FHitResult HitResult, class AActor* Instigator, double BaseDamage, TSubclassOf<class UDamageType> DamageType);
    void ExecuteUbergraph_Weapon_Melee_HardlightSaber(int32 EntryPoint);
}; // Size: 0xC4A

#endif
