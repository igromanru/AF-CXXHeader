#ifndef UE4SS_SDK_AbioticProjectile_ParentBP_HPP
#define UE4SS_SDK_AbioticProjectile_ParentBP_HPP

class AAbioticProjectile_ParentBP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UAbioticProjectileComponent* ProjectileMovement;                            // 0x02A0 (size: 0x8)
    class UNiagaraComponent* ProjectileGlint;                                         // 0x02A8 (size: 0x8)
    class UAudioComponent* TravelLoopAudio;                                           // 0x02B0 (size: 0x8)
    class USphereComponent* ProjectileCollision;                                      // 0x02B8 (size: 0x8)
    class USkeletalMeshComponent* SK_Appearance;                                      // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* SM_Appearance;                                        // 0x02C8 (size: 0x8)
    FDataTableRowHandle ProjectileDataRowHandle;                                      // 0x02D0 (size: 0x10)
    FAbiotic_InventoryChangeableDataStruct ChangeableData;                            // 0x02E0 (size: 0x88)
    FAbiotic_ProjectileStruct ProjectileData;                                         // 0x0368 (size: 0x158)
    double DamageFromWeapon;                                                          // 0x04C0 (size: 0x8)
    TSubclassOf<class UAbiotic_DamageType_ParentBP_C> DamageType;                     // 0x04C8 (size: 0x8)
    bool HasImpacted;                                                                 // 0x04D0 (size: 0x1)
    class AActor* LastHitActor;                                                       // 0x04D8 (size: 0x8)
    FHitResult LastHitInfo;                                                           // 0x04E0 (size: 0xF8)
    class UNiagaraSystem* ExplosionParticleFX;                                        // 0x05D8 (size: 0x8)
    class USoundBase* ExplosionSFX;                                                   // 0x05E0 (size: 0x8)
    TArray<FName> BuffsToApplyToTargets;                                              // 0x05E8 (size: 0x10)
    int32 MaxBounces;                                                                 // 0x05F8 (size: 0x4)
    int32 CurrentBounceCount;                                                         // 0x05FC (size: 0x4)
    TSoftObjectPtr<USoundBase> BounceSFX;                                             // 0x0600 (size: 0x28)
    class USoundBase* LoadedBounceSFX;                                                // 0x0628 (size: 0x8)
    double LastBounceSFXPlayTime;                                                     // 0x0630 (size: 0x8)
    TSoftObjectPtr<USoundBase> LoopingAudio;                                          // 0x0638 (size: 0x28)
    FDataTableRowHandle ImpactItem;                                                   // 0x0660 (size: 0x10)
    bool ImpactItemNoPhysics;                                                         // 0x0670 (size: 0x1)
    double ImpactItem_ChanceToBreak;                                                  // 0x0678 (size: 0x8)
    double ProjectileSpeedMultiplier;                                                 // 0x0680 (size: 0x8)
    bool SpawnImpactItemIfBuffApplyFails;                                             // 0x0688 (size: 0x1)
    bool SpawnImpactItemAfterHit;                                                     // 0x0689 (size: 0x1)
    bool ReportNoiseOnImpact;                                                         // 0x068A (size: 0x1)
    bool PlayPhysicalMaterialImpactSound;                                             // 0x068B (size: 0x1)
    bool Simulate Projectile;                                                         // 0x068C (size: 0x1)
    bool WasThrown;                                                                   // 0x068D (size: 0x1)
    double ChargeFromWeapon;                                                          // 0x0690 (size: 0x8)
    bool BuffsIgnoreAllies;                                                           // 0x0698 (size: 0x1)
    double ExtraTimeLeftBeforeExplosion;                                              // 0x06A0 (size: 0x8)
    bool NoDamageFromProjectile;                                                      // 0x06A8 (size: 0x1)
    FVector VelocityOverride;                                                         // 0x06B0 (size: 0x18)
    class UCurveFloat* ProjectileCurveSpeed;                                          // 0x06C8 (size: 0x8)
    bool ExplosionCreatesCameraShake;                                                 // 0x06D0 (size: 0x1)
    FAbioticProjectile_ParentBP_CProjectileHitUpdate ProjectileHitUpdate;             // 0x06D8 (size: 0x10)
    void ProjectileHitUpdate(bool Hit Established);
    class AActor* HomingTarget;                                                       // 0x06E8 (size: 0x8)
    class USoundBase* ExtraCharacterImpactSound;                                      // 0x06F0 (size: 0x8)
    bool DisruptElectronicsInRadius;                                                  // 0x06F8 (size: 0x1)
    bool PlayFallbackExplosionSFX;                                                    // 0x06F9 (size: 0x1)
    bool StopIgnoringOwnerAfterShortPeriod;                                           // 0x06FA (size: 0x1)
    float IgnoreOwnerDuration;                                                        // 0x06FC (size: 0x4)
    TArray<class UMaterialInterface*> ExposionDecalMaterials;                         // 0x0700 (size: 0x10)

    class APawn* GetInstigatorPawn();
    void SpawnExplosionSurfaceDecal(FHitResult HitOverride);
    void ApplyHomingSettings();
    void NotifyNPCsOfIncomingProjectile(double Radius, float MaxDistance);
    bool TryOverrideBlock(const FHitResult& Hit);
    bool CheckOverriddenByBlock(const FHitResult& Hit);
    class AAbiotic_Item_Dropped_C* SpawnDroppedProjectile(bool& Spawned);
    void BodyShieldCheck(class AActor* Target, bool& DamageNotBlocked);
    void IgnoreOwnerCollision();
    void GetFXLocation(FVector& Location);
    void PointDamageTargetWasHit(class AActor* Target);
    void GetOwningWeapon(class AAbiotic_PlayerCharacter_C* OwningCharacter, class AAbiotic_Weapon_ParentBP_C*& Weapon);
    void AlertNPCToHit(class AActor* HitActor);
    void UpdateProjectileChargeFX();
    void OnRep_ChargeFromWeapon();
    void Projectile Simulate Update();
    double Get New Speed Based On Throwing Skill(float BaseValue);
    class AAbiotic_Item_Dropped_C* TrySpawnImpactItem(bool& Spawned);
    void TryPlayBounceFX(FHitResult Hit);
    void Try Award XP to Instigating Player(class AActor* HitActor);
    void OnLoaded_4E84ABD94E910DF42CD130B3503C4FE4(UClass* Loaded);
    void OnLoaded_4E84ABD94E910DF42CD130B3597CD844(UClass* Loaded);
    void OnLoaded_4E84ABD94E910DF42CD130B353A1D950(UClass* Loaded);
    void OnLoaded_9D711A4A49C19E770AAC7AA047D652A9(class UObject* Loaded);
    void OnLoaded_B37D74BC4E8596833ACDB1BB9E7EB998(class UObject* Loaded);
    void OnLoaded_2CA42583457F1E41AE511889DAC8007A(class UObject* Loaded);
    void OnLoaded_1008292C4C998665956B69A95F208EC1(class UObject* Loaded);
    void OnLoaded_638849234CDFE87D793FE7ABC6F4D928(class UObject* Loaded);
    void ReceiveBeginPlay();
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void Broadcast_ProjectileExplodeFX();
    void BndEvt__AbioticProjectile_ParentBP_ProjectileCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void DoProjectileDamageEvent();
    void BndEvt__AbioticProjectile_ParentBP_ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void SM_Updated();
    void ProjectileOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp);
    void Broadcast_SurfaceImpactFX(FHitResult HitData);
    void SetProjectileMesh(TSoftObjectPtr<UStaticMesh> StaticMesh, TSoftObjectPtr<USkeletalMesh> SkeletalMesh, double WorldScale);
    void Server_StartDealDamage();
    void Server_ApplyPointDamage();
    void SetAlternateProjectileMesh();
    void DoActionBeforeProjectileDestroy(const class AActor*& SpawnImpactActor);
    void TryApplyBounceDamage();
    void Broadcast_TryDisruptLights(double Radius);
    void PlaySurfaceHitSound(TEnumAsByte<EPhysicalSurface> surface, TSubclassOf<class UAbiotic_DamageType_ParentBP_C> DamageType, FVector Location);
    void SetVelocityNextTick(FVector Velocity);
    void DelayedStopIgnoringOwner();
    void ExecuteUbergraph_AbioticProjectile_ParentBP(int32 EntryPoint);
    void ProjectileHitUpdate__DelegateSignature(bool Hit Established);
}; // Size: 0x710

#endif
