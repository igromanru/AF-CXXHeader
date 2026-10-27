#ifndef UE4SS_SDK_Item_Shield_ParentBP_HPP
#define UE4SS_SDK_Item_Shield_ParentBP_HPP

class AItem_Shield_ParentBP_C : public AItem_Gear_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B78 (size: 0x8)
    double LastBlockTime;                                                             // 0x0B80 (size: 0x8)
    double CounterAttackWindow;                                                       // 0x0B88 (size: 0x8)
    double CounterAttackDamageMultiplier;                                             // 0x0B90 (size: 0x8)
    double BlockTimeWindow;                                                           // 0x0B98 (size: 0x8)
    bool ShieldBlocking;                                                              // 0x0BA0 (size: 0x1)
    class USoundBase* ShieldBlockStartSound;                                          // 0x0BA8 (size: 0x8)
    class USoundBase* ShieldBlockEndSound;                                            // 0x0BB0 (size: 0x8)
    class UAudioComponent* StartAndEndAudioComponent;                                 // 0x0BB8 (size: 0x8)
    double PartialPassthroughAmount;                                                  // 0x0BC0 (size: 0x8)

    void CheckProjectileBlockOverridden(class AAbioticProjectile_ParentBP_C* Projectile, FHitResult& Hit);
    void CanCurrentlyShieldBlock(class AActor* DamageCauser, TSubclassOf<class UAbioticDamageType> DamageTypeClass, double& DamagePassthroughPercent);
    void BlockDamageEvent(double TotalDamageReceived, double DamagePassthroughPercent, FVector DamageDirection, FHitResult Hit Result, class AActor* Instigator, const class UAbioticDamageType* DamageType, bool& CompletelyOverridden);
    void CanStartBlocking(bool& StartBlocking);
    void GetDamagePassthroughPercent(TSubclassOf<class UAbioticDamageType> DamageType);
    void GetDamageShieldPierceStrength(TSubclassOf<class UAbioticDamageType> DamageType, class UObject* __WorldContext);
    void GetShieldBlockingStrength();
    void UpdateDurabilityVFX(class UMeshComponent*& PlayerGearMeshComponent);
    void GetSecondaryItemActionArray();
    void GetFPUseMontageOverride(bool Secondary, TSoftObjectPtr<class UAnimMontage>& Montage);
    void CanCounterAttack();
    void GetDamageMultiplier(FHitResult HitResult);
    void BlockHitscanRanged(FHitResult HitResult, class AActor* Instigator, double BaseDamage, TSubclassOf<class UDamageType> DamageType);
    void Server_DamageBlockedByWeapon(FHitResult Hit Result, class AActor* Instigator);
    void BlockProjectile(FHitResult Hit Result, class AAbioticProjectile_ParentBP_C* Projectile);
    void ModifyStaminaOnBlock(double DamageReceived);
    void Local_ApplyCounterAttack(class AActor* Target);
    void Local_OnMeleeHit_1(FHitResult HitResult);
    void Broadcast_ParticleEffectAndSound(class UNiagaraSystem* NiagaraParticle, FVector Location, class USoundBase* OptionalSound);
    void Server_BlockHitscanRangedWeapon(FHitResult HitResult, class AActor* Instigator, double BaseDamage, TSubclassOf<class UDamageType> DamageType);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ShieldBlockUpdated(bool Blocking);
    void Local_DamageBlockedByWeapon();
    void ExecuteUbergraph_Item_Shield_ParentBP(int32 EntryPoint);
}; // Size: 0xBC8

#endif
