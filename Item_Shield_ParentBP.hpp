#ifndef UE4SS_SDK_Item_Shield_ParentBP_HPP
#define UE4SS_SDK_Item_Shield_ParentBP_HPP

class AItem_Shield_ParentBP_C : public AItem_Gear_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B18 (size: 0x8)
    double LastBlockTime;                                                             // 0x0B20 (size: 0x8)
    double CounterAttackWindow;                                                       // 0x0B28 (size: 0x8)
    double CounterAttackDamageMultiplier;                                             // 0x0B30 (size: 0x8)
    double BlockTimeWindow;                                                           // 0x0B38 (size: 0x8)
    bool ShieldBlocking;                                                              // 0x0B40 (size: 0x1)
    class USoundBase* ShieldBlockStartSound;                                          // 0x0B48 (size: 0x8)
    class USoundBase* ShieldBlockEndSound;                                            // 0x0B50 (size: 0x8)
    class UAudioComponent* StartAndEndAudioComponent;                                 // 0x0B58 (size: 0x8)
    double PartialPassthroughAmount;                                                  // 0x0B60 (size: 0x8)

    double GetDamagePassthroughPercent(TSubclassOf<class UAbiotic_DamageType_ParentBP_C> DamageType);
    uint8 GetDamageShieldPierceStrength(TSubclassOf<class UAbiotic_DamageType_ParentBP_C> DamageType, class UObject* __WorldContext);
    uint8 GetShieldBlockingStrength();
    void UpdateDurabilityVFX(class UMeshComponent*& PlayerGearMeshComponent);
    TArray<FItemActionRowHandle> GetSecondaryItemActionArray();
    bool CheckProjectileBlockOverridden(class AAbioticProjectile_ParentBP_C* Projectile, FHitResult& Hit);
    bool CanCurrentlyShieldBlock(class AActor* DamageCauser, TSubclassOf<class UAbiotic_DamageType_ParentBP_C> DamageTypeClass, double& DamagePassthroughPercent);
    bool GetFPUseMontageOverride(bool Secondary, TSoftObjectPtr<UAnimMontage>& Montage);
    bool CanCounterAttack();
    double GetDamageMultiplier(FHitResult HitResult);
    void Local_ApplyCounterAttack(class AActor* Target);
    void Local_OnMeleeHit_1(FHitResult HitResult);
    void Local_DamagedBlockedByWeapon();
    void Server_DamageBlockedByWeapon(FHitResult Hit Result, class AActor* Instigator);
    void Broadcast_ParticleEffectAndSound(class UNiagaraSystem* NiagaraParticle, FVector Location, class USoundBase* OptionalSound);
    void OverrideProjectileBlock(FHitResult Hit Result, class AAbioticProjectile_ParentBP_C* Projectile);
    void Server_BlockHitscanRangedWeapon(FHitResult HitResult, class AActor* Instigator, double BaseDamage, TSubclassOf<class UDamageType> DamageType);
    void ShieldBlockUpdated(bool Blocking);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_Item_Shield_ParentBP(int32 EntryPoint);
}; // Size: 0xB68

#endif
