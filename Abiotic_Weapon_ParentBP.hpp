#ifndef UE4SS_SDK_Abiotic_Weapon_ParentBP_HPP
#define UE4SS_SDK_Abiotic_Weapon_ParentBP_HPP

class AAbiotic_Weapon_ParentBP_C : public AAbiotic_Item_Held_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B58 (size: 0x8)
    int32 MaxMagazineSize;                                                            // 0x0B60 (size: 0x4)
    int32 CurrentRoundsInMagazine;                                                    // 0x0B64 (size: 0x4)
    int32 CurrentAmmoIndex;                                                           // 0x0B68 (size: 0x4)
    double FireDelayDuration;                                                         // 0x0B70 (size: 0x8)
    bool OnHitOnlyOncePerAttack;                                                      // 0x0B78 (size: 0x1)
    bool OnHitBlocked;                                                                // 0x0B79 (size: 0x1)
    bool IsCharging;                                                                  // 0x0B7A (size: 0x1)
    bool UsesChargingLogic;                                                           // 0x0B7B (size: 0x1)
    double ChargeAmount;                                                              // 0x0B80 (size: 0x8)
    double ChargeSpeed;                                                               // 0x0B88 (size: 0x8)
    class AAbiotic_PlayerCharacter_C* CurrentOwner;                                   // 0x0B90 (size: 0x8)
    bool OnAmmoHit;                                                                   // 0x0B98 (size: 0x1)
    bool HasAmmoVisualsLoaded;                                                        // 0x0B99 (size: 0x1)
    TArray<FGlobalItemRowHandle> CompatibleAmmoTypes;                                 // 0x0BA0 (size: 0x10)
    bool ConsumeAmmoOnFire;                                                           // 0x0BB0 (size: 0x1)
    bool UseToggleActive;                                                             // 0x0BB1 (size: 0x1)
    bool LastUseToggleActive;                                                         // 0x0BB2 (size: 0x1)
    bool IsUseToggleable;                                                             // 0x0BB3 (size: 0x1)
    class UAudioComponent* UseSound;                                                  // 0x0BB8 (size: 0x8)
    double MaxXPPerReload;                                                            // 0x0BC0 (size: 0x8)
    bool WeaponCoatingApplied;                                                        // 0x0BC8 (size: 0x1)
    class UMaterialInterface* WeaponCoatingMaterial;                                  // 0x0BD0 (size: 0x8)
    class UWeaponCoating_ParentBP_C* ActiveWeaponCoating;                             // 0x0BD8 (size: 0x8)
    class UPrimitiveComponent* RuntimeThermalVolume;                                  // 0x0BE0 (size: 0x8)
    class UNiagaraSystem* WeaponCoatingHitParticle;                                   // 0x0BE8 (size: 0x8)
    class USoundBase* WeaponCoatingHitSound;                                          // 0x0BF0 (size: 0x8)
    FWeaponCoatingRowHandle ActiveWeaponCoatingRow;                                   // 0x0BF8 (size: 0x10)

    void GetFireDelayDuration();
    void Server_OnItemLiquidUpdated();
    void OnRep_ActiveWeaponCoatingRow();
    void ShouldConsumeResource(bool& Consume);
    void ShouldBypassDamageResistance(bool& ShouldBypass);
    void GetThermalOverlapPrimitives(TArray<UPrimitiveComponent*>& OutPrimitives);
    void UpdateMeshMaterials();
    void UpdateWeaponCoatingMaterials();
    void Server_AddWeaponCoating();
    void Server_RemoveWeaponCoating();
    void GetProjectileSpeedMultiplier();
    void PlayToggleUseAnimationForFirstAndThirdPerson();
    void SetUseToggle(bool NewActive);
    void CanToggleUse(bool& IsUseToggleable);
    void OnRep_UseToggleActive();
    void PlaySoundFirstAndThirdPerson(class USoundBase* Sound, bool Loops);
    void IsUseToggleActive();
    void GetPrimaryItemActionArray();
    void Server_ApplyDamageBuffs(class AActor* HitActor);
    void CheckOverrideRangedDamage(double BaseDamage, double& DamageAmount, bool& CompleteOverride);
    void Local_AltFireReleased(bool& ConsumedByWeapon);
    void CanCurrentlyMeleeAttack(bool& CanMelee);
    void Local_CheckAmmo(bool& CanFire);
    void GetProjectileInfoFromItemData(TSoftClassPtr<AActor>& OptionalProjectileToFire, TSubclassOf<class UDamageType>& DamageType_Hitscan);
    void Local_TriggerDryFireMessage();
    void Local_GetCurrentChargeValue(double& ChargeAmount);
    void InventoryHasAmmoForCurrentWeapon(bool CanOverrideCurrentAmmo, bool& HasAmmo, int32& Count, FGlobalItemRowHandle& OutAmmoType);
    void ManualStopReload(bool& Stopped);
    void ShouldUseReloadOverride(bool& Override);
    void IsGunMagazineFull?(bool& Full);
    void RequireAmmo?(bool& Return);
    void SetNewActiveAmmo(FGlobalItemRowHandle AmmoType);
    void FindCorrectAmmoIndex(FGlobalItemRowHandle ItemName, bool& Found, int32& Index);
    void GetMissingAmmoText(FText ammo type, FText& Return);
    void GetOverrideProjectileClass(bool& Override, TSoftClassPtr<AAbioticProjectile_ParentBP_C>& ProjectileClass);
    void GetOverrideHitscanDamageType(bool& Override, TSubclassOf<class UDamageType>& DamageType);
    void GetHomingTarget(class AActor*& Target);
    void ShouldApplyTraditionalDamage(bool& Apply);
    void ApplyAmmoVisualMaterials(class UStaticMeshComponent* MeshComponent);
    void ReloadOverride(bool& Handled);
    void CanFireAmmoWeapon(bool& CanFire);
    void OnRep_CurrentRoundsInMagazine();
    void Local_FireReleased(bool& ShouldFire);
    void Local_FirePressed(bool& ConsumedByWeapon);
    void OnRep_IsCharging();
    void GetDamageMultiplier(FHitResult HitResult);
    void Get Magazine Ammo Deficit(int32& MissingRounds);
    void OnLoaded_7B573E93411E28451C49AAAD8DAD094F(class UObject* Loaded);
    void OnLoaded_260DF76F412A11E2589ED2B31141E8C2(class UObject* Loaded);
    void SetupItem();
    void LoadAmmoVisuals(int32 AmmoCount, const class AAbiotic_PlayerCharacter_C*& OwningCharacter, double ReloadDuration);
    void Use Item_Secondary(class AAbiotic_Character_ParentBP_C* UsingCharacter, FTransform Transform, class AActor* TargetActor);
    void Local_DamagedBlockedByWeapon();
    void Server_OnHit(FHitResult HitResult);
    void Broadcast_ParticleEffectAndSound(class UNiagaraSystem* NiagaraParticle, FVector Location, class USoundBase* OptionalSound);
    void ReceiveTick(float DeltaSeconds);
    void Request_SetCharging(bool Charging);
    void Server_DamageBlockedByWeapon(FHitResult Hit Result, class AActor* Instigator);
    void  Modify Reload XP From Reload Amount(int32 AmmoToReload, bool Incremental);
    void ReceiveBeginPlay();
    void Request_AmmoWarningMessage(const class AAbiotic_PlayerCharacter_C*& UsingCharacter, const FText& AmmoType);
    void Local_NewAmmoSelected(FGlobalItemRowHandle AmmoType);
    void Request_ChangeAmmoType(int32 Index);
    void Get and Set Compatible Ammo Types();
    void RadialWheelInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed, FName SelectionWheelContentName);
    void Local_SetCharging();
    void UseToggleUpdated(bool NewActive);
    void Local_SetUseToggle(bool NewActive);
    void Request_SetUseToggle(bool NewActive);
    void Server_OnDamageApplied(class AActor* DamagedActor, double RawDamage, TSubclassOf<class UAbioticDamageType> DamageType, FHitResult HitResult, bool IsMelee, class AActor* DamageSource);
    void Server_OnProjectileFired(class AAbioticProjectile_ParentBP_C* Projectile);
    void OnProjectileHitTarget(class AActor* DamagedActor, double RawDamage, TSubclassOf<class UAbioticDamageType> DamageType, FHitResult HitResult, class AAbioticProjectile_ParentBP_C* Projectile);
    void Broadcast_CoatingHitFX(FVector Location, FRotator Rotation);
    void LoadCoatingFX(TSoftObjectPtr<class UNiagaraSystem> particle, TSoftObjectPtr<class USoundBase> Sound);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_Abiotic_Weapon_ParentBP(int32 EntryPoint);
}; // Size: 0xC08

#endif
