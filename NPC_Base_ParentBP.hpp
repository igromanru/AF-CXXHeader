#ifndef UE4SS_SDK_NPC_Base_ParentBP_HPP
#define UE4SS_SDK_NPC_Base_ParentBP_HPP

class ANPC_Base_ParentBP_C : public AAbiotic_Character_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x14D8 (size: 0x8)
    class UAbioticTargetingComponent_Sockets* AbioticTargetingComponent_Sockets;      // 0x14E0 (size: 0x8)
    class UAudioComponent* BreathingAudio;                                            // 0x14E8 (size: 0x8)
    class UOptimizationProxyComponent* OptimizationProxy;                             // 0x14F0 (size: 0x8)
    class UStaticMeshComponent* NetMesh;                                              // 0x14F8 (size: 0x8)
    class UTextRenderComponent* LocalSpotValueText;                                   // 0x1500 (size: 0x8)
    class USceneComponent* KneePoint;                                                 // 0x1508 (size: 0x8)
    float FadeBodyTimeline_Opacity_A74321CF4140C66DAED2358C151E0B07;                  // 0x1510 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FadeBodyTimeline__Direction_A74321CF4140C66DAED2358C151E0B07; // 0x1514 (size: 0x1)
    class UTimelineComponent* FadeBodyTimeline;                                       // 0x1518 (size: 0x8)
    FAbiotic_NPCStruct NPCData;                                                       // 0x1520 (size: 0x2F8)
    FName NPCDataTableRow;                                                            // 0x1818 (size: 0x8)
    bool CanSenseSmells;                                                              // 0x1820 (size: 0x1)
    double Smelling Range;                                                            // 0x1828 (size: 0x8)
    bool PrintDebugStrings;                                                           // 0x1830 (size: 0x1)
    TEnumAsByte<ENPCAwarenessState::Type> AwarenessState;                             // 0x1831 (size: 0x1)
    class AAbiotic_AI_Controller_ParentBP_C* NPC_Controller;                          // 0x1838 (size: 0x8)
    FVector LastRangedAttackLocation;                                                 // 0x1840 (size: 0x18)
    FVector LastMeleeAttackLocation;                                                  // 0x1858 (size: 0x18)
    TSoftObjectPtr<UAnimMontage> AggroAnimation;                                      // 0x1870 (size: 0x28)
    bool CombatState;                                                                 // 0x1898 (size: 0x1)
    bool RangedAttack_OnCooldown;                                                     // 0x1899 (size: 0x1)
    bool MeleeAttack_OnCooldown;                                                      // 0x189A (size: 0x1)
    FName MeleeOriginBone;                                                            // 0x189C (size: 0x8)
    FVector LastMeleeOrigin;                                                          // 0x18A8 (size: 0x18)
    double MeleeHitApex;                                                              // 0x18C0 (size: 0x8)
    bool HasDroppedLoot;                                                              // 0x18C8 (size: 0x1)
    bool CanHurtSelfWithRadialDamage;                                                 // 0x18C9 (size: 0x1)
    double DamageTakenAfterDeath;                                                     // 0x18D0 (size: 0x8)
    bool IsGibbed;                                                                    // 0x18D8 (size: 0x1)
    double DefaultNPCBodyFadeOutTime;                                                 // 0x18E0 (size: 0x8)
    bool BodyFadingOut;                                                               // 0x18E8 (size: 0x1)
    TArray<class UMaterialInstanceDynamic*> MeshDynamicMaterials;                     // 0x18F0 (size: 0x10)
    TEnumAsByte<E_SquadMemberNumber::Type> SquadMemberNumber;                         // 0x1900 (size: 0x1)
    float RangedAttack_Cooldown;                                                      // 0x1904 (size: 0x4)
    TSoftObjectPtr<UAnimMontage> StartleAnimation;                                    // 0x1908 (size: 0x28)
    FTimerHandle SpotVisDebugTimer;                                                   // 0x1930 (size: 0x8)
    double StaggerCooldown;                                                           // 0x1938 (size: 0x8)
    TSoftObjectPtr<UAnimMontage> StaggerAnimation;                                    // 0x1940 (size: 0x28)
    double StaggerAnimDuration;                                                       // 0x1968 (size: 0x8)
    TMap<TEnumAsByte<E_NPC_MeleeTypes::Type>, TSoftObjectPtr<UAnimMontage>> MeleeAttacks; // 0x1970 (size: 0x50)
    FName ProjectileFireSocket;                                                       // 0x19C0 (size: 0x8)
    TEnumAsByte<E_NPC_MeleeTypes::Type> LastMeleeAttackType;                          // 0x19C8 (size: 0x1)
    TSoftObjectPtr<UAnimMontage> StaggerAnimationLeft;                                // 0x19D0 (size: 0x28)
    TSoftObjectPtr<UAnimMontage> StaggerAnimationRight;                               // 0x19F8 (size: 0x28)
    TSoftObjectPtr<UAnimMontage> BackstepAnimation;                                   // 0x1A20 (size: 0x28)
    FName GrenadeHoldSocket;                                                          // 0x1A48 (size: 0x8)
    class UStaticMeshComponent* LastGrenadeInHandMesh;                                // 0x1A50 (size: 0x8)
    FDataTableRowHandle GrenadeData;                                                  // 0x1A58 (size: 0x10)
    double TimeOfLastGrabAttempt;                                                     // 0x1A68 (size: 0x8)
    double TimeOfLastSuccessfulGrab;                                                  // 0x1A70 (size: 0x8)
    double GrabCooldown;                                                              // 0x1A78 (size: 0x8)
    TArray<FName> SmellTags;                                                          // 0x1A80 (size: 0x10)
    FTimerHandle GrabEndTimer;                                                        // 0x1A90 (size: 0x8)
    int32 NPC Level;                                                                  // 0x1A98 (size: 0x4)
    double LastIncomingDamage;                                                        // 0x1AA0 (size: 0x8)
    bool PerformingRangedBurst;                                                       // 0x1AA8 (size: 0x1)
    double NPCRangedBulletSpread;                                                     // 0x1AB0 (size: 0x8)
    class AAbiotic_Character_ParentBP_C* LastAttackedTarget;                          // 0x1AB8 (size: 0x8)
    class UNiagaraSystem* GibParticles;                                               // 0x1AC0 (size: 0x8)
    bool ParentLevelDeloaded;                                                         // 0x1AC8 (size: 0x1)
    FNPC_Base_ParentBP_CCombatReset CombatReset;                                      // 0x1AD0 (size: 0x10)
    void CombatReset(bool Success);
    double MeleeRangeTraceExtra;                                                      // 0x1AE0 (size: 0x8)
    bool SpinAttack_OnCooldown;                                                       // 0x1AE8 (size: 0x1)
    bool BehindAttack_OnCooldown;                                                     // 0x1AE9 (size: 0x1)
    double SpinMeleeHitApex;                                                          // 0x1AF0 (size: 0x8)
    double BehindMeleeHitApex;                                                        // 0x1AF8 (size: 0x8)
    bool PowerAttack_OnCooldown;                                                      // 0x1B00 (size: 0x1)
    TArray<class AActor*> LastActorsHit;                                              // 0x1B08 (size: 0x10)
    double SpinAttackCooldown;                                                        // 0x1B18 (size: 0x8)
    double BehindAttackCooldown;                                                      // 0x1B20 (size: 0x8)
    double PowerMeleeHitApex;                                                         // 0x1B28 (size: 0x8)
    float MeleeTraceRadius;                                                           // 0x1B30 (size: 0x4)
    bool ForwardMeleeSwing;                                                           // 0x1B34 (size: 0x1)
    double ClampMeleeDirectionOffset;                                                 // 0x1B38 (size: 0x8)
    bool ClampMeleeDirection;                                                         // 0x1B40 (size: 0x1)
    float SpinLaunchPower;                                                            // 0x1B44 (size: 0x4)
    double PowerAttackCooldown;                                                       // 0x1B48 (size: 0x8)
    TSoftObjectPtr<AActor> SpawnerOwner;                                              // 0x1B50 (size: 0x28)
    bool AlwaysDropGibs;                                                              // 0x1B78 (size: 0x1)
    TEnumAsByte<E_NettedStates::Type> Netted;                                         // 0x1B79 (size: 0x1)
    FVector LocationOfInterest;                                                       // 0x1B80 (size: 0x18)
    double BleedoutTime;                                                              // 0x1B98 (size: 0x8)
    double TimeSinceDBNO;                                                             // 0x1BA0 (size: 0x8)
    double DBNODamageDelay;                                                           // 0x1BA8 (size: 0x8)
    bool FrozenByDirector;                                                            // 0x1BB0 (size: 0x1)
    bool StationaryUntilPlayerEncounter;                                              // 0x1BB1 (size: 0x1)
    bool WaitForGrabMontageEnd;                                                       // 0x1BB2 (size: 0x1)
    double BaseLookUpRate;                                                            // 0x1BB8 (size: 0x8)
    double BaseTurnRate;                                                              // 0x1BC0 (size: 0x8)
    bool Possessable;                                                                 // 0x1BC8 (size: 0x1)
    double WalkSpeed;                                                                 // 0x1BD0 (size: 0x8)
    bool HandleGrabManually;                                                          // 0x1BD8 (size: 0x1)
    float Cooldown_IdleAbility;                                                       // 0x1BDC (size: 0x4)
    float Cooldown_CombatAbility1;                                                    // 0x1BE0 (size: 0x4)
    float Cooldown_CombatAbility2;                                                    // 0x1BE4 (size: 0x4)
    float Cooldown_CombatAbility3;                                                    // 0x1BE8 (size: 0x4)
    float AggroDuration;                                                              // 0x1BEC (size: 0x4)
    class UStaticMesh* LoadedGrenadeMesh;                                             // 0x1BF0 (size: 0x8)
    int32 CurrentAmmoCount;                                                           // 0x1BF8 (size: 0x4)
    int32 MaxAmmoCount;                                                               // 0x1BFC (size: 0x4)
    TSoftObjectPtr<UAnimMontage> Asset;                                               // 0x1C00 (size: 0x28)
    class USoundBase* NettedSound;                                                    // 0x1C28 (size: 0x8)
    FName NettedSocket;                                                               // 0x1C30 (size: 0x8)
    class USoundBase* GibbedSound;                                                    // 0x1C38 (size: 0x8)
    TEnumAsByte<E_ShoveableType::Type> ShoveableType;                                 // 0x1C40 (size: 0x1)
    bool WasRecentlyStartled;                                                         // 0x1C41 (size: 0x1)
    float StartleCooldown;                                                            // 0x1C44 (size: 0x4)
    FGameplayTag GrabTag;                                                             // 0x1C48 (size: 0x8)
    float SpinAttackRadius;                                                           // 0x1C50 (size: 0x4)
    float DespawnDistance;                                                            // 0x1C54 (size: 0x4)
    float DespawnDistanceUnloaded;                                                    // 0x1C58 (size: 0x4)
    double HighMeleeHitApex;                                                          // 0x1C60 (size: 0x8)
    TSoftObjectPtr<UAnimMontage> BackstepLeftAnimation;                               // 0x1C68 (size: 0x28)
    TSoftObjectPtr<UAnimMontage> BackstepRightAnimation;                              // 0x1C90 (size: 0x28)
    TSoftObjectPtr<UAnimMontage> GrenadeThrowAnimation;                               // 0x1CB8 (size: 0x28)
    int32 CurrentHealthTextureIndex;                                                  // 0x1CE0 (size: 0x4)
    TArray<class UTexture2D*> HealthTextures;                                         // 0x1CE8 (size: 0x10)
    bool IsPerformingDoorEnter;                                                       // 0x1CF8 (size: 0x1)
    bool CanMeleeMultiHit;                                                            // 0x1CF9 (size: 0x1)
    TEnumAsByte<E_NPC_MeleeTypes::Type> PreferredHighGroundAttack;                    // 0x1CFA (size: 0x1)
    double BehindAttackDirection;                                                     // 0x1D00 (size: 0x8)
    bool StationaryMode;                                                              // 0x1D08 (size: 0x1)
    class AActor* StationaryTarget;                                                   // 0x1D10 (size: 0x8)
    bool RecentlyWeaknessStaggered;                                                   // 0x1D18 (size: 0x1)
    bool CanInterruptAggroAnim;                                                       // 0x1D19 (size: 0x1)
    TArray<FName> Cages ID to Ignore;                                                 // 0x1D20 (size: 0x10)
    TEnumAsByte<E_SquadDesignations::Type> SquadDesignation;                          // 0x1D30 (size: 0x1)
    double NetDurationReductionPercentage;                                            // 0x1D38 (size: 0x8)
    TSoftObjectPtr<UAnimMontage> StaggerAnimationForward;                             // 0x1D40 (size: 0x28)
    class USoundWave* SFX_Breathing_Idle;                                             // 0x1D68 (size: 0x8)
    class USoundWave* SFX_Breathing_Combat;                                           // 0x1D70 (size: 0x8)
    TSoftObjectPtr<ANPCTetherVolume_C> TetherVolume;                                  // 0x1D78 (size: 0x28)
    TSoftObjectPtr<ABP_SquadManager_C> LinkedSquadManager;                            // 0x1DA0 (size: 0x28)
    double ImmuneDamageMultiplier;                                                    // 0x1DC8 (size: 0x8)
    FNPCVoiceRowHandle NPCVoiceRow;                                                   // 0x1DD0 (size: 0x20)
    FNPCVoice NPCVoiceData;                                                           // 0x1DF0 (size: 0x188)
    bool IsPerformingSpawnFX;                                                         // 0x1F78 (size: 0x1)
    double SpawnFXDuration;                                                           // 0x1F80 (size: 0x8)
    bool SkipSpawnFX;                                                                 // 0x1F88 (size: 0x1)
    bool Stunned;                                                                     // 0x1F89 (size: 0x1)
    double DistanceForDialogSubtitles;                                                // 0x1F90 (size: 0x8)
    TSoftObjectPtr<UWorld> OwningLevel;                                               // 0x1F98 (size: 0x28)
    class UAnimMontage* OverrideIdleMontage;                                          // 0x1FC0 (size: 0x8)
    bool RecentlyCriticalHit;                                                         // 0x1FC8 (size: 0x1)
    float CriticalHit_PreventionDuration;                                             // 0x1FCC (size: 0x4)
    bool ImmuneToBackstabs;                                                           // 0x1FD0 (size: 0x1)
    double RangedTarget_VerticalOffset;                                               // 0x1FD8 (size: 0x8)
    float FootfallTraceDistance;                                                      // 0x1FE0 (size: 0x4)
    class USoundBase* FootstepSFX;                                                    // 0x1FE8 (size: 0x8)
    class UNiagaraSystem* FootfallImpactFX;                                           // 0x1FF0 (size: 0x8)
    FName Left Foot;                                                                  // 0x1FF8 (size: 0x8)
    FName Right Foot;                                                                 // 0x2000 (size: 0x8)
    FName Left Hand;                                                                  // 0x2008 (size: 0x8)
    FName Right Hand;                                                                 // 0x2010 (size: 0x8)
    FNPC_Base_ParentBP_CCombatStateChanged CombatStateChanged;                        // 0x2018 (size: 0x10)
    void CombatStateChanged(class ANPC_Base_ParentBP_C* Target NPC);
    FName BioscrapItem;                                                               // 0x2028 (size: 0x8)
    TArray<FString> DebugActionStack;                                                 // 0x2030 (size: 0x10)
    bool HasDisabledStateApplied;                                                     // 0x2040 (size: 0x1)
    double BackstepTraceDistance;                                                     // 0x2048 (size: 0x8)
    bool NPCEnraged;                                                                  // 0x2050 (size: 0x1)
    FNPC_Base_ParentBP_CFiredWeapon FiredWeapon;                                      // 0x2058 (size: 0x10)
    void FiredWeapon();
    class USpringArmComponent* DynamicSpringArm;                                      // 0x2068 (size: 0x8)
    class UCameraComponent* DynamicCamera;                                            // 0x2070 (size: 0x8)
    double FallDistanceThreshold;                                                     // 0x2078 (size: 0x8)
    FName FallBoneSocket;                                                             // 0x2080 (size: 0x8)
    double LastEvadeTime;                                                             // 0x2088 (size: 0x8)
    bool EvadesProjectiles;                                                           // 0x2090 (size: 0x1)
    double ProjectileEvasionCooldown;                                                 // 0x2098 (size: 0x8)
    bool FreezeAI;                                                                    // 0x20A0 (size: 0x1)

    void DebugInfo_Tick(bool& Success, FString& DebugString, bool& UseBoundsAsOffset, FVector& Offset, FLinearColor& Color);
    void CanUseSharedInteraction(bool& Can Use);
    void IsPowerCord(class UActorComponent*& Cable, bool& Return, TEnumAsByte<E_OutlineMode::Type>& CableInteractionType);
    void GetAttachedPowerCord(TArray<class UCableComponent*>& Power Cord Found);
    bool IsRadioactive();
    void GetInteractionBlocker(class UBoxComponent*& Blocker);
    void Landing Damage Multiplier(double Damage, double& DamageMultiplier);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    FText GetItemNameText();
    void GetStoredString(FString& String);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void CanLongInteractWith_A(bool& Success);
    void CanLongInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void NPC_CanInteractWith(bool& Success);
    void PlayerExitLocations(int32 CurrentSeatIndex, TArray<FVector>& Locations);
    void SitLocations(TArray<FVector>& Locations);
    void HasSitLocations(bool& IsSittable);
    void SitLocationParent(class USceneComponent*& ParentComponent);
    void GetItemChangeableData(FAbiotic_InventoryChangeableDataStruct& ChangeableData);
    void GetConstructionState(bool& UnderConstruction, double& PercentComplete);
    void RequiresToolToDismantle(bool& Tool Required);
    void ShowPotentialInteraction(class UActorComponent*& AlternateHitComponent, bool& Show);
    void ApplyParry(FVector HitOrigin, class AAbiotic_Character_ParentBP_C* ParryCause);
    void Server_OnKilledBy(class AAbioticPlayerController* FoundController);
    void ServerTryScareOffNPC();
    void BodyShieldsResetOnDamage();
    bool CanEvadeProjectile();
    void BeginDropLoot(FGameplayTagContainer& BuffTags);
    void TryApplyFallDamage(double Distance, FHitResult Hit, bool ClientSideCalculationOnly, bool& AppliedFallDamage, int32& Severity);
    class USoundBase* GetLandingSurfaceSound(TEnumAsByte<EPhysicalSurface> surface);
    void Setup Possessable Components();
    void ShootThroughOneSided(const FHitResult& Hit, double BaseDamage, const TSubclassOf<class UDamageType> DamageType);
    void OnNPCEnraged(bool Enabled);
    void GetOutlineComponent(bool& ComponentEnabled, class UOutlineComponent_C*& Components);
    void CanGrabValidTarget(bool& CanGrab);
    void OnRep_NPCEnraged();
    class AActor* GetCurrentCombatTarget();
    void DetermineDodgeDirection(FVector& Origin, bool& Random, bool& ForceBackwards, TEnumAsByte<EStaggerDirection::Type>& Direction);
    void AI_PerformBackstep(FVector HitOrigin, bool Random, bool ForceBackwards);
    void AI_PerformStagger(FVector HitOrigin, bool SkipAnim);
    void ProcessDebugActionStack(FString NewAction);
    void UpdateInternalStates();
    float Get Attacker Loot Chance();
    void GetLootDropInformation(TArray<FDataTableRowHandle>& PotentialLoot);
    void DoFootstepFX(TEnumAsByte<E_4LegFootfalls::Type> LastFootfallType, double CameraShakeIntensity, double CameraShakeDistance);
    void Set New NPCVoice(TArray<FNPCVoiceRowHandle>& NPCVoiceRow);
    void AddCageIDToIgnore(const FName& ID);
    void OnRep_IsPerformingSpawnFX();
    bool IsLevelLoaded(bool RequireAllOverlapped);
    void Does Award Sneaking XP to Player(bool& Return, double& XP Gained);
    FText GetCharacterName();
    void UpdateHealthTextureIndex();
    void TargetStringAppend(FString& Source, class AActor* Actor, double Value);
    void GetGibDropLocation(FVector& Origin);
    void GetMeleeTimeOffset(TEnumAsByte<E_NPC_MeleeTypes::Type> Type, double& LengthOffset);
    void OnRep_CurrentHealthTextureIndex();
    void UpdateHealthTextureFromIndex(int32 HealthIndex, class UTexture2D* Texture);
    void GetHealthValuesForMaterial(double& Current, double& max);
    void GetSquadManager(bool& Success, class ABP_SquadManager_C*& Manager);
    void Squad_CombatAlert(class ANPC_Base_ParentBP_C* Member, class ANPC_Base_ParentBP_C* CombatTarget);
    void Squad_MemberDead(class ANPC_Base_ParentBP_C* Member);
    void Squad_MemberDBNO(class ANPC_Base_ParentBP_C* Member);
    void Server_ForceCriticalHitStagger(FVector StaggerHitOrigin, FVector CritImpactLocation, TSubclassOf<class UAbiotic_DamageType_ParentBP_C> DamageType);
    bool HasBeenGibbed();
    void OnCurrentAmmoUpdated();
    void GetNewNetDuration(double InitialDuration, double& CustomNetDuration);
    void ProcessMeleeHits(TArray<FHitResult>& MeleeHits, bool LaunchTarget, bool OnlyHitSingle);
    bool GetTargetPriority(TEnumAsByte<E_TargetPriority::Type>& Priority);
    void CheckHealthMaterial(double HealthPercentage);
    double GetStaggerDamage();
    void OnTargetDamaged(class AActor* Target, bool FromMelee);
    void ClearInfoOnCurrentTarget();
    bool PerformDoorReach(FVector Location, FRotator Rotation);
    bool PerformDoorEnter(FVector Location, FRotator Rotation);
    bool IsNPCBusy();
    TEnumAsByte<EStaggerDirection::Type> GetStaggerDirection(FVector Origin);
    TSoftObjectPtr<UAnimMontage> GetBackstepAnim(TEnumAsByte<EStaggerDirection::Type> Direction);
    TSoftObjectPtr<UAnimMontage> GetStaggerAnim(TEnumAsByte<EStaggerDirection::Type> Direction);
    void CalculateSmashChance(class AActor* Attacker, bool& Success);
    FVector GetSpinAttackOrigin();
    FVector GetSpinLaunchOrigin();
    void ShouldDropCorrectGibs(double ChanceToAvoidScrap, bool& Success);
    bool IsStunned();
    void GetResponseToDamageType(TSubclassOf<class UDamageType> DamageType, class AActor* DamageCauser, class UActorComponent* HitComponent, FName HitBone, bool& Immune, bool& Weakness, bool& Resisted);
    bool ShouldPlayMeleeFX(class AActor* Target);
    void IsCharacterAllowedToSpeak(bool& Allowed);
    double GetMeleeTraceRadius();
    void Can Grab Character(class AAbiotic_Character_ParentBP_C* CharacterToGrab, bool& Success);
    void IsNetted(bool& Netted);
    void ProcessNearMiss(FHitResult& HitResult, class AAbiotic_Character_ParentBP_C* Owner);
    void ConsumeAmmo();
    void OnRep_CurrentAmmoCount();
    bool RequiresReload();
    void Local_SpawnGrenadeInHand(bool JustRemoveGrenade);
    void SetAbilityOnCooldown(TEnumAsByte<E_NPC_AbilityTypes::Type> Ability, bool OverrideDuration, double NewDuration);
    void CheckForObstruction(bool& FoundSomethingChangeable, class AActor*& Obstruction);
    void OnRep_Possessable();
    void OnRep_WalkSpeed();
    FVector GetAttackLocation(class AActor* Target);
    void HasEnoughHitCountToGib(double DamagePerHit, bool& CanGib);
    void ApplyDBNODamage();
    void RestoreHealthFromDBNO();
    double GetMaxBleedoutTime();
    void ToggleState_DownButNotOut(bool Begin (False=End));
    bool Player Is Solo Player();
    void GetNPCAwarenessData(TMap<AActor*, float>& LastSeenPotential, TMap<AActor*, float>& ListOfPerceptionTargets, TMap<AActor*, float>& AttackerList);
    TArray<class AActor*> GetNearbyCombatTargets(double Distance);
    void Damage Try Apply Limb Specific Debuff(double Damage, const class UAbiotic_DamageType_ParentBP_C* DamageType, EBodyLimbs DamagedLimb, class AActor* DamageCauser, bool& AppliedDebuff);
    double GetMeleeRangeExtra();
    void NettedComponentUpdate(class USceneComponent* Component);
    void BuffTagsUpdated();
    void LaunchHitTarget(class AActor* Target);
    FVector GetMeleeEndLocation(FVector AttemptLocation);
    TSubclassOf<class UDamageType> GetAttackDamageType();
    bool IsTargetBehind(class AActor* Target);
    void DropHoldingCharacter();
    void OnRep_DamageTakenAfterDeath();
    void UpdateFleshCutWoundVFX();
    void EndAbility_DoCombatReset(bool Success);
    void All_PerformDeathSequence();
    void LocalPerformDeathSequence();
    void CheckForNPCDamageMultiplier(class UObject* Instigator, double InDamage, const class UDamageType* DamageType, FHitResult& HitResult, double& TotalOutDamage);
    double PercentageValueFromNPCLevel();
    void CheckDistanceToPlayer(bool& TooFarFromPlayers, bool& ShouldDespawn);
    void ToggleCombatStateFX(bool IsInCombat);
    void FireRanged_HitscanBullet(double BulletSpread, bool SkipFX, FVector& ActualHitLocation, bool& HitTarget);
    void RefreshGibbedState(bool SkipFX);
    void CheckForStagger(bool ForceStagger, FVector HitOrigin);
    void Tick_DebugVis();
    void ToggleSpotVisDebug(bool On);
    void TryRangedAttackCheck(class AActor* ShootAtActor, FVector ShootAtLocation, int32 BurstCount, bool SkipCooldown, bool& Success);
    void TryMeleeAttackCheck(class AActor* SwingAtActor, FVector SwingAtLocation, bool& Success);
    bool CanPowerAttack(bool& BecauseCooldown);
    bool CanBehindAttack();
    bool CanSpinAttack();
    void FindBestMeleeAttack(class AActor* SwingAtActor, FVector SwingAtTarget, bool& TurnToFaceTarget);
    void DoesAwardSkillXPWhenHit(bool& MeleeXP, bool& RangedXP, double& XPMultiplier);
    void LocalUpdateWalkSpeed();
    void OnRep_BodyFadingOut();
    void OnRep_IsGibbed();
    void TryGibbingNPC(const class UDamageType* DamageType, class AActor* Attacker, bool ForceOnlyScrap, bool ForceGibNPC);
    void DropLoot();
    void OnRep_CombatState();
    void Server_TrySpeakDialog(TSoftObjectPtr<USoundBase> CueToPlay, TEnumAsByte<E_AudioImportance::Type> Importance);
    void Server_PerformDeathSequence();
    void InitalizeHealthValues(bool AdjustDifficulty);
    void GetFactionTeam(TEnumAsByte<E_Factions::Type>& Faction);
    void InitializeNPCVariables();
    void UserConstructionScript();
    void FadeBodyTimeline__FinishedFunc();
    void FadeBodyTimeline__UpdateFunc();
    void OnLoaded_39233B8749F2696E985E7CA54F3823D0(class UObject* Loaded);
    void OnLoaded_923971EF40341DFE96F99694939FF403(class UObject* Loaded);
    void OnLoaded_7AB7746B4BA2E10AB7405BA80AF896AB(class UObject* Loaded);
    void OnLoaded_AF38B3B3486B5A56E2A597A871D55692(class UObject* Loaded);
    void OnLoaded_1F0C60A644C3B5C2262B7499FDD54266(class UObject* Loaded);
    void OnNotifyEnd_693F37CE4AF7D2599AF0EF80C2E1538D(FName NotifyName);
    void OnNotifyBegin_693F37CE4AF7D2599AF0EF80C2E1538D(FName NotifyName);
    void OnInterrupted_693F37CE4AF7D2599AF0EF80C2E1538D(FName NotifyName);
    void OnBlendOut_693F37CE4AF7D2599AF0EF80C2E1538D(FName NotifyName);
    void OnCompleted_693F37CE4AF7D2599AF0EF80C2E1538D(FName NotifyName);
    void OnLoaded_29DD91B14AA9587E167F7DB38AD0D6DF(UClass* Loaded);
    void OnNotifyEnd_4DAC729F4E4D40298518719DD4185339(FName NotifyName);
    void OnNotifyBegin_4DAC729F4E4D40298518719DD4185339(FName NotifyName);
    void OnInterrupted_4DAC729F4E4D40298518719DD4185339(FName NotifyName);
    void OnBlendOut_4DAC729F4E4D40298518719DD4185339(FName NotifyName);
    void OnCompleted_4DAC729F4E4D40298518719DD4185339(FName NotifyName);
    void OnLoaded_6928B5784603D5E89BDB519EBDDE591F(class UObject* Loaded);
    void InpActEvt_Fire_K2Node_InputActionEvent_10(FKey Key);
    void InpActEvt_AltFire_K2Node_InputActionEvent_9(FKey Key);
    void InpActEvt_ReloadWeapon_K2Node_InputActionEvent_8(FKey Key);
    void InpActEvt_Jump_K2Node_InputActionEvent_7(FKey Key);
    void InpActEvt_HotbarSlot1_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_HotbarSlot2_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_HotbarSlot3_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_HotbarSlot4_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_HotbarSlot5_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_HotbarSlot6_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_InteractB_K2Node_InputActionEvent_0(FKey Key);
    void OnLoaded_19394BDD4A777A2D481F618038E3B07C(class UObject* Loaded);
    void OnLoaded_B12D39A848C9C8C35E6F30AD122EA8F2(class UObject* Loaded);
    void OnNotifyEnd_D51CE1614D9A47B37B6A1D86910BB8DC(FName NotifyName);
    void OnNotifyBegin_D51CE1614D9A47B37B6A1D86910BB8DC(FName NotifyName);
    void OnInterrupted_D51CE1614D9A47B37B6A1D86910BB8DC(FName NotifyName);
    void OnBlendOut_D51CE1614D9A47B37B6A1D86910BB8DC(FName NotifyName);
    void OnCompleted_D51CE1614D9A47B37B6A1D86910BB8DC(FName NotifyName);
    void Broadcast_PerformBackstep(TEnumAsByte<EStaggerDirection::Type> Direction);
    void Broadcast_PerformIdleStartle();
    void Server_AttemptStartle();
    void Server_Set_RecentlyCriticalHit();
    void Broadcast_PlayCriticalHitFX(FVector Location, FRotator Rotation, TSubclassOf<class UAbiotic_DamageType_ParentBP_C> DamageType);
    void PerformAggroAnimation(bool Startled, bool RunDecisionTickImmediately);
    void Broadcast_PerformStagger(TEnumAsByte<EStaggerDirection::Type> Direction);
    void ForceStaggerOnCooldown();
    void OnLanded(const FHitResult& Hit);
    void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);
    void NotifyIncomingDanger(FVector DangerOrigin, class APawn* DangerInstigator);
    void ResetStagger();
    void InteractTeleportUpdate(class AAbiotic_Character_ParentBP_C* InteractingCharacter, bool TryingToTeleport, bool TeleportSuccessful);
    void Broadcast_ThrowGrenade();
    void Broadcast_CombatAbility1();
    void Broadcast_CombatAbility2();
    void Broadcast_CombatAbility3();
    void DeliverDynamicProperty(bool FromSave, FDynamicProperty Property);
    void PerformIdleAbility();
    void PerformEvadeAbility(FVector DangerOrigin, class APawn* DangerInstigator);
    void RadialWheelInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed, FName SelectionWheelContentName);
    void SetRangedAttackOnCooldown();
    void FireRanged_Projectile(FDataTableRowHandle ProjectileDataRowHandle, double DamageFromWeapon);
    void Broadcast_DoRangedAttackFX();
    void Set New Attached Power Cord(class UCableComponent* New Power Cord);
    void Broadcast_NPCHitscanImpact(FVector HitLocation, FRotator HitNormalRotation, class AActor* HitActor, class UActorComponent* Hit Component, const FVector EndTrace, const TSubclassOf<class UDamageType> DamageType, class UPhysicalMaterial* PhysicalMaterial, FName HitBone);
    void Server_DoRangedAttack(class AActor* ShootAtTarget, FVector ShootAtLocation, int32 BurstCount);
    void DeliverInt(bool FromSave, const int32 New Int);
    void OnInteractHighlightEnd(class UActorComponent* Component);
    void OnInteractHighlightStart(class UActorComponent* Component);
    void Try_DealMeleeDamage(FVector AttemptLocation);
    void Actor_RemoveFromCage(class AAbiotic_Character_ParentBP_C* OwningCharacter, FAbiotic_InventoryItemSlotStruct SlotData, FTransform ShootProjectileTransform, FTransform AttachedSocketTransform);
    void Actor Add to Cage(class AAbiotic_Character_ParentBP_C* OwningCharacter, class AActor* ActorToInteractWith, FAbiotic_InventoryItemSlotStruct SlotData);
    void TryDealSpinOrBehindDamage();
    void DeliverString(FString String, bool FromSave);
    void NPC_InteractWith(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void SetSpinAttackOnCooldown();
    void SetBehindAttackOnCooldown();
    void InteractWith_B_LocalFX(bool Hold);
    void InteractWith_A_LocalFX(bool Hold);
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void SetPowerAttackOnCooldown();
    void Server_DoMeleeAttack(class AActor* SwingAtActor, FVector SwingAtLocation);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void Server_DoMeleeAttackCustom(TEnumAsByte<E_NPC_MeleeTypes::Type> MeleeAttackType, FVector Location);
    void TargetBlockedAttack(class AActor* Target);
    void PerformMeleeDamage(FVector AttemptLocation);
    void JumpThroughSmashDestructible(class AActor* ActorToDestroy);
    void SuccessfulGrab_CheckForAnimEnd();
    void Broadcast_MeleeAttackImpact(FHitResult Hit, TSubclassOf<class UDamageType> DamageHitType);
    void FailedGrab_CheckForAnimEnd();
    void Broadcast_DoMeleeAttackFX(TEnumAsByte<E_NPC_MeleeTypes::Type> MeleeAttackType);
    void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181(float AxisValue);
    void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192(float AxisValue);
    void InpAxisEvt_Turn_K2Node_InputAxisEvent_157(float AxisValue);
    void InpAxisEvt_LookUp_K2Node_InputAxisEvent_172(float AxisValue);
    void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34(float AxisValue);
    void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62(float AxisValue);
    void Request_ToggleCombatState();
    void Request_CombatAbility();
    void Request_MeleeAttack(FVector SwingAtLocation, TEnumAsByte<E_NPC_MeleeTypes::Type> MeleeAttackType);
    void CheckPlayerUnpossess();
    void Request_RangedAttack(FVector ShootAtLocation);
    void PossessMeleeAttack(TEnumAsByte<E_NPC_MeleeTypes::Type> Type);
    void Request_DebugOpenDoor();
    void ReceiveBeginPlay();
    void ReceivePossessed(class AController* NewController);
    void Server_TryFadeOutCorpse();
    void ReceiveRadialDamage(float DamageReceived, const class UDamageType* DamageType, FVector Origin, const FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
    void FadeBodyFX(bool FadeIn, bool DestroyAfterFadeOut);
    void ProcessDamage(double Damage, const class UDamageType* DamageType, FVector HitLocation, FVector HitNormal, class UPrimitiveComponent* HitComponent, FName BoneHitName, FVector DirectionOfSource, class AActor* Instigator, class AActor* DamageCauser, FHitResult HitInfo);
    void BndEvt__NPC_Base_ParentBP_AIPerception_K2Node_ComponentBoundEvent_4_PerceptionUpdatedDelegate__DelegateSignature(const TArray<class AActor*>& UpdatedActors);
    void TICK_DeathSequence_FallToGround();
    void OnLevelLoadUpdated(class ULevelStreaming* Level);
    void UpdateDisabledState();
    void CheckForDisabledState();
    void ReceiveDestroyed();
    void Broadcast_ReloadWeapon();
    void LevelVolumesUpdated();
    void OnHealthChanged_Event();
    void ReceiveTick(float DeltaSeconds);
    void DelayedRagdollImpulse();
    void OnDespawn();
    void UpdateBreathingAudio(EAudioComponentPlayState PlayState);
    void OnSpawnFXStarted();
    void OnSpawnFXEnded();
    void Server_HeardSound(class AActor* Actor, const FAIStimulus& Stimulus, bool Loud);
    void OnCharacterSpeakingStart();
    void NPC_CreateDynamicMaterials();
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void OnBuffTagContainerRefreshed();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_NPC_Base_ParentBP(int32 EntryPoint);
    void FiredWeapon__DelegateSignature();
    void CombatStateChanged__DelegateSignature(class ANPC_Base_ParentBP_C* Target NPC);
    void CombatReset__DelegateSignature(bool Success);
}; // Size: 0x20A1

#endif
