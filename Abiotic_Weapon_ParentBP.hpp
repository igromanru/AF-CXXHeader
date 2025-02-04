#ifndef UE4SS_SDK_Abiotic_Weapon_ParentBP_HPP
#define UE4SS_SDK_Abiotic_Weapon_ParentBP_HPP

class AAbiotic_Weapon_ParentBP_C : public AAbiotic_Item_Held_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B18 (size: 0x8)
    int32 MaxMagazineSize;                                                            // 0x0B20 (size: 0x4)
    int32 CurrentRoundsInMagazine;                                                    // 0x0B24 (size: 0x4)
    int32 CurrentAmmoIndex;                                                           // 0x0B28 (size: 0x4)
    double FireDelayDuration;                                                         // 0x0B30 (size: 0x8)
    bool OnHitOnlyOncePerAttack;                                                      // 0x0B38 (size: 0x1)
    bool OnHitBlocked;                                                                // 0x0B39 (size: 0x1)
    bool IsCharging;                                                                  // 0x0B3A (size: 0x1)
    bool UsesChargingLogic;                                                           // 0x0B3B (size: 0x1)
    double ChargeAmount;                                                              // 0x0B40 (size: 0x8)
    double ChargeSpeed;                                                               // 0x0B48 (size: 0x8)
    class AAbiotic_PlayerCharacter_C* CurrentOwner;                                   // 0x0B50 (size: 0x8)
    bool OnAmmoHit;                                                                   // 0x0B58 (size: 0x1)
    bool HasAmmoVisualsLoaded;                                                        // 0x0B59 (size: 0x1)
    TArray<FDataTableRowHandle> CompatibleAmmoTypes;                                  // 0x0B60 (size: 0x10)
    bool ConsumeAmmoOnFire;                                                           // 0x0B70 (size: 0x1)

    void CanCurrentlyMeleeAttack(bool& CanMelee);
    void Local_CheckAmmo(bool& CanFire);
    void GetProjectileInfoFromItemData(TSoftClassPtr<AAbioticProjectile_ParentBP_C>& OptionalProjectileToFire, TSubclassOf<class UDamageType>& DamageType_Hitscan);
    void Local_TriggerDryFireMessage();
    void Local_GetCurrentChargeValue(double& ChargeAmount);
    void InventoryHasAmmoForCurrentWeapon(bool& HasAmmo, int32& Count, FDataTableRowHandle& OutAmmoType);
    void ManualStopReload(bool& Stopped);
    void ShouldUseReloadOverride(bool& Override);
    void IsGunMagazineFull?(bool& Full);
    void RequireAmmo?(bool& Return);
    void SetNewActiveAmmo(FName AmmoType);
    void FindCorrectAmmoIndex(FName ItemName, bool& Found, int32& Index);
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
    double GetDamageMultiplier(FHitResult HitResult);
    void Get Magazine Ammo Deficit(int32& MissingRounds);
    void SetupItem();
    void LoadAmmoVisuals(int32 AmmoCount, const class AAbiotic_PlayerCharacter_C*& OwningCharacter, double ReloadDuration);
    void Use Item_Secondary(class AAbiotic_Character_ParentBP_C* UsingCharacter, FTransform Transform, class AActor* TargetActor);
    void Local_DamagedBlockedByWeapon();
    void Server_OnHit(FHitResult HitResult);
    void Broadcast_ParticleEffectAndSound(class UNiagaraSystem* NiagaraParticle, FVector Location, class USoundBase* OptionalSound);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void Request_SetCharging(bool Charging);
    void Server_DamageBlockedByWeapon(FHitResult Hit Result, class AActor* Instigator);
    void  Modify Reload XP From Reload Amount(int32 AmmoToReload);
    void Request_AmmoWarningMessage(const class AAbiotic_PlayerCharacter_C*& UsingCharacter, const FText& AmmoType);
    void Local_NewAmmoSelected(FName AmmoType);
    void Request_ChangeAmmoType(int32 Index);
    void Get and Set Compatible Ammo Types();
    void RadialWheelInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed, FName SelectionWheelContentName);
    void Local_SetCharging();
    void ExecuteUbergraph_Abiotic_Weapon_ParentBP(int32 EntryPoint);
}; // Size: 0xB71

#endif
