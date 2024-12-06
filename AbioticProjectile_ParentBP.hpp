#ifndef UE4SS_SDK_AbioticProjectile_ParentBP_HPP
#define UE4SS_SDK_AbioticProjectile_ParentBP_HPP

class AAbioticProjectile_ParentBP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UNiagaraComponent* ProjectileGlint;                                         // 0x02A0 (size: 0x8)
    class UAudioComponent* TravelLoopAudio;                                           // 0x02A8 (size: 0x8)
    class USphereComponent* ProjectileCollision;                                      // 0x02B0 (size: 0x8)
    class USkeletalMeshComponent* SK_Appearance;                                      // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* SM_Appearance;                                        // 0x02C0 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x02C8 (size: 0x8)
    FDataTableRowHandle ProjectileDataRowHandle;                                      // 0x02D0 (size: 0x10)
    FAbiotic_InventoryChangeableDataStruct ChangeableData;                            // 0x02E0 (size: 0x118)
    FAbiotic_ProjectileStruct ProjectileData;                                         // 0x03F8 (size: 0x158)
    double DamageFromWeapon;                                                          // 0x0550 (size: 0x8)
    TSubclassOf<class UAbiotic_DamageType_ParentBP_C> DamageType;                     // 0x0558 (size: 0x8)
    bool HasImpacted;                                                                 // 0x0560 (size: 0x1)
    class AActor* LastHitActor;                                                       // 0x0568 (size: 0x8)
    FHitResult LastHitInfo;                                                           // 0x0570 (size: 0xF8)
    class UNiagaraSystem* ExplosionParticleFX;                                        // 0x0668 (size: 0x8)
    class USoundBase* ExplosionSFX;                                                   // 0x0670 (size: 0x8)
    TArray<FName> BuffsToApplyToTargets;                                              // 0x0678 (size: 0x10)
    int32 MaxBounces;                                                                 // 0x0688 (size: 0x4)
    int32 CurrentBounceCount;                                                         // 0x068C (size: 0x4)
    TSoftObjectPtr<USoundBase> BounceSFX;                                             // 0x0690 (size: 0x28)
    class USoundBase* LoadedBounceSFX;                                                // 0x06B8 (size: 0x8)
    double LastBounceSFXPlayTime;                                                     // 0x06C0 (size: 0x8)
    TSoftObjectPtr<USoundBase> LoopingAudio;                                          // 0x06C8 (size: 0x28)
    FDataTableRowHandle ImpactItem;                                                   // 0x06F0 (size: 0x10)
    bool ImpactItemNoPhysics;                                                         // 0x0700 (size: 0x1)
    double ImpactItem_ChanceToBreak;                                                  // 0x0708 (size: 0x8)
    double ProjectileSpeedMultiplier;                                                 // 0x0710 (size: 0x8)
    bool SpawnImpactItemIfBuffApplyFails;                                             // 0x0718 (size: 0x1)
    bool SpawnImpactItemAfterHit;                                                     // 0x0719 (size: 0x1)
    bool ReportNoiseOnImpact;                                                         // 0x071A (size: 0x1)
    bool PlayPhysicalMaterialImpactSound;                                             // 0x071B (size: 0x1)
    bool Simulate Projectile;                                                         // 0x071C (size: 0x1)
    bool WasThrown;                                                                   // 0x071D (size: 0x1)
    double ChargeFromWeapon;                                                          // 0x0720 (size: 0x8)
    bool BuffsIgnoreAllies;                                                           // 0x0728 (size: 0x1)
    double ExtraTimeLeftBeforeExplosion;                                              // 0x0730 (size: 0x8)
    bool NoDamageFromProjectile;                                                      // 0x0738 (size: 0x1)
    FVector VelocityOverride;                                                         // 0x0740 (size: 0x18)
    class UCurveFloat* ProjectileCurveSpeed;                                          // 0x0758 (size: 0x8)
    bool ExplosionCreatesCameraShake;                                                 // 0x0760 (size: 0x1)
    FAbioticProjectile_ParentBP_CProjectileHitUpdate ProjectileHitUpdate;             // 0x0768 (size: 0x10)
    void ProjectileHitUpdate(bool Hit Established);
    class AActor* HomingTarget;                                                       // 0x0778 (size: 0x8)
    class USoundBase* ExtraCharacterImpactSound;                                      // 0x0780 (size: 0x8)
    bool DisruptElectronicsInRadius;                                                  // 0x0788 (size: 0x1)
    bool PlayFallbackExplosionSFX;                                                    // 0x0789 (size: 0x1)

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
    void OnLoaded_9D711A4A49C19E770AAC7AA047D652A9(class UObject* Loaded);
    void OnLoaded_14C2D0CD4E42EB77CDD96CBFC7A7067D(UClass* Loaded);
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
    void ProjectileOverlap(class AActor* OtherActor);
    void Broadcast_SurfaceImpactFX(FHitResult HitData);
    void SetProjectileMesh(TSoftObjectPtr<UStaticMesh> StaticMesh, TSoftObjectPtr<USkeletalMesh> SkeletalMesh, double WorldScale);
    void Server_StartDealDamage();
    void Server_ApplyPointDamage();
    void SetAlternateProjectileMesh();
    void DoActionBeforeProjectileDestroy(const class AActor*& SpawnImpactActor);
    void TryApplyBounceDamage();
    void Broadcast_TryDisruptLights(double Radius);
    void PlaySurfaceHitSound(TEnumAsByte<EPhysicalSurface> surface, TSubclassOf<class UAbiotic_DamageType_ParentBP_C> DamageType, FVector Location);
    void ExecuteUbergraph_AbioticProjectile_ParentBP(int32 EntryPoint);
    void ProjectileHitUpdate__DelegateSignature(bool Hit Established);
}; // Size: 0x78A

#endif
