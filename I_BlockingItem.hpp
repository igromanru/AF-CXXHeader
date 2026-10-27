#ifndef UE4SS_SDK_I_BlockingItem_HPP
#define UE4SS_SDK_I_BlockingItem_HPP

class II_BlockingItem_C : public IInterface
{

    void Server_DamageBlockedByWeapon(FHitResult Hit Result, class AActor* Instigator);
    void Local_DamageBlockedByWeapon();
    void ShieldBlockUpdated(bool Blocking);
    void CanStartBlocking(bool& StartBlocking);
    void BlockDamageEvent(double TotalDamageReceived, double DamagePassthroughPercent, FVector DamageDirection, FHitResult Hit Result, class AActor* Instigator, const class UAbioticDamageType* DamageType, bool& CompletelyOverridden);
    void BlockHitscanRanged(FHitResult HitResult, class AActor* Instigator, double BaseDamage, TSubclassOf<class UDamageType> DamageType);
    void BlockProjectile(FHitResult Hit Result, class AAbioticProjectile_ParentBP_C* Projectile);
    void ModifyStaminaOnBlock(double DamageReceived);
    void CanCurrentlyShieldBlock(class AActor* DamageCauser, TSubclassOf<class UAbioticDamageType> DamageTypeClass, double& DamagePassthroughPercent);
    void CheckProjectileBlockOverridden(class AAbioticProjectile_ParentBP_C* Projectile, FHitResult& Hit);
}; // Size: 0x28

#endif
