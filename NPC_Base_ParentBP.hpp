#ifndef UE4SS_SDK_NPC_Base_ParentBP_HPP
#define UE4SS_SDK_NPC_Base_ParentBP_HPP

class ANPC_Base_ParentBP_C : public AAbiotic_Character_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1408 (size: 0x8)
    class UAbioticTargetingComponent_Sockets* AbioticTargetingComponent_Sockets;      // 0x1410 (size: 0x8)
    class UAudioComponent* BreathingAudio;                                            // 0x1418 (size: 0x8)
    class UOptimizationProxyComponent* OptimizationProxy;                             // 0x1420 (size: 0x8)
    class UStaticMeshComponent* NetMesh;                                              // 0x1428 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1430 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x1438 (size: 0x8)
    class UTextRenderComponent* LocalSpotValueText;                                   // 0x1440 (size: 0x8)
    class USceneComponent* KneePoint;                                                 // 0x1448 (size: 0x8)
    float FadeBodyTimeline_Opacity_A74321CF4140C66DAED2358C151E0B07;                  // 0x1450 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FadeBodyTimeline__Direction_A74321CF4140C66DAED2358C151E0B07; // 0x1454 (size: 0x1)
    class UTimelineComponent* FadeBodyTimeline;                                       // 0x1458 (size: 0x8)
    FAbiotic_NPCStruct NPCData;                                                       // 0x1460 (size: 0x250)
    FName NPCDataTableRow;                                                            // 0x16B0 (size: 0x8)
    bool CanSenseSmells;                                                              // 0x16B8 (size: 0x1)
    double Smelling Range;                                                            // 0x16C0 (size: 0x8)
    bool PrintDebugStrings;                                                           // 0x16C8 (size: 0x1)
    TEnumAsByte<ENPCAwarenessState::Type> AwarenessState;                             // 0x16C9 (size: 0x1)
    class AAbiotic_AI_Controller_ParentBP_C* NPC_Controller;                          // 0x16D0 (size: 0x8)
    FVector LastRangedAttackLocation;                                                 // 0x16D8 (size: 0x18)
    FVector LastMeleeAttackLocation;                                                  // 0x16F0 (size: 0x18)
    TSoftObjectPtr<UAnimMontage> AggroAnimation;                                      // 0x1708 (size: 0x28)
    bool CombatState;                                                                 // 0x1730 (size: 0x1)
    bool RangedAttack_OnCooldown;                                                     // 0x1731 (size: 0x1)
    bool MeleeAttack_OnCooldown;                                                      // 0x1732 (size: 0x1)
    FName MeleeOriginBone;                                                            // 0x1734 (size: 0x8)
    FVector LastMeleeOrigin;                                                          // 0x1740 (size: 0x18)
    double MeleeHitApex;                                                              // 0x1758 (size: 0x8)
    bool HasDroppedLoot;                                                              // 0x1760 (size: 0x1)
    bool CanHurtSelfWithRadialDamage;                                                 // 0x1761 (size: 0x1)
    double DamageTakenAfterDeath;                                                     // 0x1768 (size: 0x8)
    bool IsGibbed;                                                                    // 0x1770 (size: 0x1)
    double DefaultNPCBodyFadeOutTime;                                                 // 0x1778 (size: 0x8)
    bool BodyFadingOut;                                                               // 0x1780 (size: 0x1)
    TArray<class UMaterialInstanceDynamic*> MeshDynamicMaterials;                     // 0x1788 (size: 0x10)
    TEnumAsByte<E_SquadMemberNumber::Type> SquadMemberNumber;                         // 0x1798 (size: 0x1)
    float RangedAttack_Cooldown;                                                      // 0x179C (size: 0x4)
    TSoftObjectPtr<UAnimMontage> StartleAnimation;                                    // 0x17A0 (size: 0x28)
    FTimerHandle SpotVisDebugTimer;                                                   // 0x17C8 (size: 0x8)
    double StaggerCooldown;                                                           // 0x17D0 (size: 0x8)
    TSoftObjectPtr<UAnimMontage> StaggerAnimation;                                    // 0x17D8 (size: 0x28)
    double StaggerAnimDuration;                                                       // 0x1800 (size: 0x8)
    TMap<TEnumAsByte<E_NPC_MeleeTypes::Type>, TSoftObjectPtr<UAnimMontage>> MeleeAttacks; // 0x1808 (size: 0x50)
    FName ProjectileFireSocket;                                                       // 0x1858 (size: 0x8)
    TEnumAsByte<E_NPC_MeleeTypes::Type> LastMeleeAttackType;                          // 0x1860 (size: 0x1)
    TSoftObjectPtr<UAnimMontage> StaggerAnimationLeft;                                // 0x1868 (size: 0x28)
    TSoftObjectPtr<UAnimMontage> StaggerAnimationRight;                               // 0x1890 (size: 0x28)
    TSoftObjectPtr<UAnimMontage> BackstepAnimation;                                   // 0x18B8 (size: 0x28)
    FName GrenadeHoldSocket;                                                          // 0x18E0 (size: 0x8)
    class UStaticMeshComponent* LastGrenadeInHandMesh;                                // 0x18E8 (size: 0x8)
    FDataTableRowHandle GrenadeData;                                                  // 0x18F0 (size: 0x10)
    double TimeOfLastGrabAttempt;                                                     // 0x1900 (size: 0x8)
    double TimeOfLastSuccessfulGrab;                                                  // 0x1908 (size: 0x8)
    double GrabCooldown;                                                              // 0x1910 (size: 0x8)
    TArray<FName> SmellTags;                                                          // 0x1918 (size: 0x10)
    FTimerHandle GrabEndTimer;                                                        // 0x1928 (size: 0x8)
    int32 NPC Level;                                                                  // 0x1930 (size: 0x4)
    double LastIncomingDamage;                                                        // 0x1938 (size: 0x8)
    bool PerformingRangedBurst;                                                       // 0x1940 (size: 0x1)
    double NPCRangedBulletSpread;                                                     // 0x1948 (size: 0x8)
    class AAbiotic_Character_ParentBP_C* LastAttackedTarget;                          // 0x1950 (size: 0x8)
    class UNiagaraSystem* GibParticles;                                               // 0x1958 (size: 0x8)
    bool ParentLevelDeloaded;                                                         // 0x1960 (size: 0x1)
    FNPC_Base_ParentBP_CCombatReset CombatReset;                                      // 0x1968 (size: 0x10)
    void CombatReset(bool Success);
    double MeleeRangeTraceExtra;                                                      // 0x1978 (size: 0x8)
    bool SpinAttack_OnCooldown;                                                       // 0x1980 (size: 0x1)
    bool BehindAttack_OnCooldown;                                                     // 0x1981 (size: 0x1)
    double SpinMeleeHitApex;                                                          // 0x1988 (size: 0x8)
    double BehindMeleeHitApex;                                                        // 0x1990 (size: 0x8)
    bool PowerAttack_OnCooldown;                                                      // 0x1998 (size: 0x1)
    TArray<class AActor*> LastActorsHit;                                              // 0x19A0 (size: 0x10)
    double SpinAttackCooldown;                                                        // 0x19B0 (size: 0x8)
    double BehindAttackCooldown;                                                      // 0x19B8 (size: 0x8)
    double PowerMeleeHitApex;                                                         // 0x19C0 (size: 0x8)
    float MeleeTraceRadius;                                                           // 0x19C8 (size: 0x4)
    bool ForwardMeleeSwing;                                                           // 0x19CC (size: 0x1)
    double MinimumMeleeDirectOffset;                                                  // 0x19D0 (size: 0x8)
    float SpinLaunchPower;                                                            // 0x19D8 (size: 0x4)
    double PowerAttackCooldown;                                                       // 0x19E0 (size: 0x8)
    TSoftObjectPtr<AActor> SpawnerOwner;                                              // 0x19E8 (size: 0x28)
    bool AlwaysDropGibs;                                                              // 0x1A10 (size: 0x1)
    TEnumAsByte<E_NettedStates::Type> Netted;                                         // 0x1A11 (size: 0x1)
    FVector LocationOfInterest;                                                       // 0x1A18 (size: 0x18)
    double BleedoutTime;                                                              // 0x1A30 (size: 0x8)
    double TimeSinceDBNO;                                                             // 0x1A38 (size: 0x8)
    double DBNODamageDelay;                                                           // 0x1A40 (size: 0x8)
    bool FrozenByDirector;                                                            // 0x1A48 (size: 0x1)
    bool StationaryUntilPlayerEncounter;                                              // 0x1A49 (size: 0x1)
    bool WaitForGrabMontageEnd;                                                       // 0x1A4A (size: 0x1)
    double BaseLookUpRate;                                                            // 0x1A50 (size: 0x8)
    double BaseTurnRate;                                                              // 0x1A58 (size: 0x8)
    bool Possessable;                                                                 // 0x1A60 (size: 0x1)
    double WalkSpeed;                                                                 // 0x1A68 (size: 0x8)
    bool HandleGrabManually;                                                          // 0x1A70 (size: 0x1)
    float Cooldown_IdleAbility;                                                       // 0x1A74 (size: 0x4)
    float Cooldown_CombatAbility1;                                                    // 0x1A78 (size: 0x4)
    float Cooldown_CombatAbility2;                                                    // 0x1A7C (size: 0x4)
    float Cooldown_CombatAbility3;                                                    // 0x1A80 (size: 0x4)
    float AggroDuration;                                                              // 0x1A84 (size: 0x4)
    class UStaticMesh* LoadedGrenadeMesh;                                             // 0x1A88 (size: 0x8)
    int32 CurrentAmmoCount;                                                           // 0x1A90 (size: 0x4)
    int32 MaxAmmoCount;                                                               // 0x1A94 (size: 0x4)
    TSoftObjectPtr<UAnimMontage> Asset;                                               // 0x1A98 (size: 0x28)
    class USoundBase* NettedSound;                                                    // 0x1AC0 (size: 0x8)
    FName NettedSocket;                                                               // 0x1AC8 (size: 0x8)
    class USoundBase* GibbedSound;                                                    // 0x1AD0 (size: 0x8)
    TEnumAsByte<E_ShoveableType::Type> ShoveableType;                                 // 0x1AD8 (size: 0x1)
    bool WasRecentlyStartled;                                                         // 0x1AD9 (size: 0x1)
    float StartleCooldown;                                                            // 0x1ADC (size: 0x4)
    FGameplayTag GrabTag;                                                             // 0x1AE0 (size: 0x8)
    float SpinAttackRadius;                                                           // 0x1AE8 (size: 0x4)
    float DespawnDistance;                                                            // 0x1AEC (size: 0x4)
    float DespawnDistanceUnloaded;                                                    // 0x1AF0 (size: 0x4)
    double HighMeleeHitApex;                                                          // 0x1AF8 (size: 0x8)
    TSoftObjectPtr<UAnimMontage> BackstepLeftAnimation;                               // 0x1B00 (size: 0x28)
    TSoftObjectPtr<UAnimMontage> BackstepRightAnimation;                              // 0x1B28 (size: 0x28)
    TSoftObjectPtr<UAnimMontage> GrenadeThrowAnimation;                               // 0x1B50 (size: 0x28)
    int32 CurrentHealthTextureIndex;                                                  // 0x1B78 (size: 0x4)
    TArray<class UTexture2D*> HealthTextures;                                         // 0x1B80 (size: 0x10)
    bool IsPerformingDoorEnter;                                                       // 0x1B90 (size: 0x1)
    bool CanMeleeMultiHit;                                                            // 0x1B91 (size: 0x1)
    TEnumAsByte<E_NPC_MeleeTypes::Type> PreferredHighGroundAttack;                    // 0x1B92 (size: 0x1)
    double BehindAttackDirection;                                                     // 0x1B98 (size: 0x8)
    bool StationaryMode;                                                              // 0x1BA0 (size: 0x1)
    class AActor* StationaryTarget;                                                   // 0x1BA8 (size: 0x8)
    bool RecentlyWeaknessStaggered;                                                   // 0x1BB0 (size: 0x1)
    bool CanInterruptAggroAnim;                                                       // 0x1BB1 (size: 0x1)
    TArray<FName> Cages ID to Ignore;                                                 // 0x1BB8 (size: 0x10)
    TEnumAsByte<E_SquadDesignations::Type> SquadDesignation;                          // 0x1BC8 (size: 0x1)
    double NetDurationReductionPercentage;                                            // 0x1BD0 (size: 0x8)
    TSoftObjectPtr<UAnimMontage> StaggerAnimationForward;                             // 0x1BD8 (size: 0x28)
    class USoundWave* SFX_Breathing_Idle;                                             // 0x1C00 (size: 0x8)
    class USoundWave* SFX_Breathing_Combat;                                           // 0x1C08 (size: 0x8)
    TSoftObjectPtr<ANPCTetherVolume_C> TetherVolume;                                  // 0x1C10 (size: 0x28)
    TSoftObjectPtr<ABP_SquadManager_C> LinkedSquadManager;                            // 0x1C38 (size: 0x28)
    double ImmuneDamageMultiplier;                                                    // 0x1C60 (size: 0x8)
    FNPCVoiceRowHandle NPCVoiceRow;                                                   // 0x1C68 (size: 0x20)
    FNPCVoice NPCVoiceData;                                                           // 0x1C88 (size: 0x188)
    bool IsPerformingSpawnFX;                                                         // 0x1E10 (size: 0x1)
    double SpawnFXDuration;                                                           // 0x1E18 (size: 0x8)
    bool SkipSpawnFX;                                                                 // 0x1E20 (size: 0x1)
    bool Stunned;                                                                     // 0x1E21 (size: 0x1)
    double DistanceForDialogSubtitles;                                                // 0x1E28 (size: 0x8)
    TSoftObjectPtr<UWorld> OwningLevel;                                               // 0x1E30 (size: 0x28)
    class UAnimMontage* OverrideIdleMontage;                                          // 0x1E58 (size: 0x8)
    bool RecentlyCriticalHit;                                                         // 0x1E60 (size: 0x1)
    float CriticalHit_PreventionDuration;                                             // 0x1E64 (size: 0x4)
    bool ImmuneToBackstabs;                                                           // 0x1E68 (size: 0x1)
    bool ClampMeleeDirection;                                                         // 0x1E69 (size: 0x1)
    double RangedTarget_VerticalOffset;                                               // 0x1E70 (size: 0x8)
    float FootfallTraceDistance;                                                      // 0x1E78 (size: 0x4)
    class USoundBase* FootstepSFX;                                                    // 0x1E80 (size: 0x8)
    class UNiagaraSystem* FootfallImpactFX;                                           // 0x1E88 (size: 0x8)
    FName Left Foot;                                                                  // 0x1E90 (size: 0x8)
    FName Right Foot;                                                                 // 0x1E98 (size: 0x8)
    FName Left Hand;                                                                  // 0x1EA0 (size: 0x8)
    FName Right Hand;                                                                 // 0x1EA8 (size: 0x8)
    FNPC_Base_ParentBP_CCombatStateChanged CombatStateChanged;                        // 0x1EB0 (size: 0x10)
    void CombatStateChanged(class ANPC_Base_ParentBP_C* Target NPC);
    FName BioscrapItem;                                                               // 0x1EC0 (size: 0x8)

    void DebugInfo_Tick(bool& Success, FString& DebugString, bool& UseBoundsAsOffset, FVector& Offset, FLinearColor& Color);
    void CanUseSharedInteraction(bool& Can Use);
    void GetPowerCordHighlightColor(class UActorComponent*& Cable, int32& Color);
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
    void ShowPotentialInteraction(bool& Show);
    void UpdateInternalStates();
    float Get Attacker Loot Chance();
    void GetLootDropInformation(TArray<FDataTableRowHandle>& PotentialLoot);
    void DoFootstepFX(TEnumAsByte<E_4LegFootfalls::Type> LastFootfallType, double CameraShakeIntensity, double CameraShakeDistance);
    void Set New NPCVoice(TArray<FNPCVoiceRowHandle>& NPCVoiceRow);
    void AddCageIDToIgnore(const FName& ID);
    bool IsLevelLoaded(bool RequireAllOverlapped);
    void Does Award Sneaking XP to Player(bool& Return, double& XP Gained);
    FText GetCharacterName();
    void UpdateHealthTextureIndex();
    void TargetStringAppend(FString& Source, class AActor* Actor, double Value);
    void GetGibDropLocation(FVector& Origin);
    void GetMeleeTimeOffset(TEnumAsByte<E_NPC_MeleeTypes::Type> Type, double& LengthOffset);
    void OnRep_IsPerformingSpawnFX();
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
    void OnRep_CurrentAmmoCount();
    void GetNewNetDuration(double InitialDuration, double& CustomNetDuration);
    void ProcessMeleeHits(TArray<FHitResult>& MeleeHits, bool LaunchTarget, bool OnlyHitSingle);
    bool GetTargetPriority(TEnumAsByte<E_TargetPriority::Type>& Priority);
    void CheckHealthMaterial(double HealthPercentage);
    double GetStaggerDamage();
    void OnTargetDamaged(class AActor* Target);
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
    bool CanPowerAttack(bool& BecauseCooldown);
    bool CanBehindAttack();
    bool CanSpinAttack();
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
    void RefreshGibbedState();
    void FindBestMeleeAttack(class AActor* SwingAtActor, FVector SwingAtTarget, bool& TurnToFaceTarget);
    void CheckForStagger(bool ForceStagger, FVector HitOrigin);
    void Tick_DebugVis();
    void ToggleSpotVisDebug(bool On);
    void TryRangedAttackCheck(class AActor* ShootAtActor, FVector ShootAtLocation, int32 BurstCount, bool& Success);
    void TryMeleeAttackCheck(class AActor* SwingAtActor, FVector SwingAtLocation, bool& Success);
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
    void OnLoaded_E322FD364A5AD59C7684288A850A03C0(class UObject* Loaded);
    void OnLoaded_DEB0E7C44A3D50F3E55781AD634249AC(class UObject* Loaded);
    void OnLoaded_8F84898045C4FC7C08920D813762E7B9(class UObject* Loaded);
    void OnNotifyEnd_101B7A264881F51E8510BDAAF3D3711A(FName NotifyName);
    void OnNotifyBegin_101B7A264881F51E8510BDAAF3D3711A(FName NotifyName);
    void OnInterrupted_101B7A264881F51E8510BDAAF3D3711A(FName NotifyName);
    void OnBlendOut_101B7A264881F51E8510BDAAF3D3711A(FName NotifyName);
    void OnCompleted_101B7A264881F51E8510BDAAF3D3711A(FName NotifyName);
    void OnLoaded_D5B1382A44A80CE866C12A87306268BA(class UObject* Loaded);
    void OnLoaded_0D5F20754DF3ECAF2CEA9EA8EDAC82C8(class UObject* Loaded);
    void OnLoaded_75FED48D45F89955E01D909852683ADE(UClass* Loaded);
    void OnLoaded_19394BDD4A777A2D481F618038E3B07C(class UObject* Loaded);
    void OnNotifyEnd_032854184D5ED546FC3B9089A49AA910(FName NotifyName);
    void OnNotifyBegin_032854184D5ED546FC3B9089A49AA910(FName NotifyName);
    void OnInterrupted_032854184D5ED546FC3B9089A49AA910(FName NotifyName);
    void OnBlendOut_032854184D5ED546FC3B9089A49AA910(FName NotifyName);
    void OnCompleted_032854184D5ED546FC3B9089A49AA910(FName NotifyName);
    void OnLoaded_B12D39A848C9C8C35E6F30AD122EA8F2(class UObject* Loaded);
    void OnNotifyEnd_D51CE1614D9A47B37B6A1D86910BB8DC(FName NotifyName);
    void OnNotifyBegin_D51CE1614D9A47B37B6A1D86910BB8DC(FName NotifyName);
    void OnInterrupted_D51CE1614D9A47B37B6A1D86910BB8DC(FName NotifyName);
    void OnBlendOut_D51CE1614D9A47B37B6A1D86910BB8DC(FName NotifyName);
    void OnCompleted_D51CE1614D9A47B37B6A1D86910BB8DC(FName NotifyName);
    void OnLoaded_9BB9E2F84F0B0ED8C01FA9B5E54B27AC(class UObject* Loaded);
    void InpAxisEvt_Turn_K2Node_InputAxisEvent_157(float AxisValue);
    void InpAxisEvt_LookUp_K2Node_InputAxisEvent_172(float AxisValue);
    void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34(float AxisValue);
    void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62(float AxisValue);
    void Request_ToggleCombatState();
    void Request_CombatAbility();
    void Request_MeleeAttack(FVector SwingAtLocation, TEnumAsByte<E_NPC_MeleeTypes::Type> MeleeAttackType);
    void CheckPlayerUnpossess();
    void Request_RangedAttack(FVector ShootAtLocation);
    void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192(float AxisValue);
    void PossessMeleeAttack(TEnumAsByte<E_NPC_MeleeTypes::Type> Type);
    void Request_DebugOpenDoor();
    void ReceiveBeginPlay();
    void ReceivePossessed(class AController* NewController);
    void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181(float AxisValue);
    void Server_DoRangedAttack(class AActor* ShootAtTarget, FVector ShootAtLocation, int32 BurstCount);
    void Server_DoMeleeAttack(class AActor* SwingAtActor, FVector SwingAtLocation);
    void InteractTeleportUpdate(class AAbiotic_Character_ParentBP_C* InteractingCharacter, bool TryingToTeleport, bool TeleportSuccessful);
    void Broadcast_DoRangedAttackFX();
    void Broadcast_DoMeleeAttackFX(TEnumAsByte<E_NPC_MeleeTypes::Type> MeleeAttackType);
    void DeliverDynamicProperty(bool FromSave, FDynamicProperty Property);
    void PerformAggroAnimation(bool Startled, bool RunDecisionTickImmediately);
    void Try_DealMeleeDamage(FVector AttemptLocation);
    void RadialWheelInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed, FName SelectionWheelContentName);
    void Set New Attached Power Cord(class UCableComponent* New Power Cord);
    void Server_TryFadeOutCorpse();
    void DeliverInt(bool FromSave, const int32 New Int);
    void OnInteractHighlightEnd(class UActorComponent* Component);
    void ReceiveRadialDamage(float DamageReceived, const class UDamageType* DamageType, FVector Origin, const FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
    void OnInteractHighlightStart(class UActorComponent* Component);
    void FadeBodyFX(bool FadeIn, bool DestroyAfterFadeOut);
    void Actor_RemoveFromCage(class AAbiotic_Character_ParentBP_C* OwningCharacter, FAbiotic_InventoryItemSlotStruct SlotData, FTransform ShootProjectileTransform, FTransform AttachedSocketTransform);
    void ProcessDamage(double Damage, const class UDamageType* DamageType, FVector HitLocation, FVector HitNormal, class UPrimitiveComponent* HitComponent, FName BoneHitName, FVector DirectionOfSource, class AActor* Instigator, class AActor* DamageCauser, FHitResult HitInfo);
    void SetRangedAttackOnCooldown();
    void BndEvt__NPC_Base_ParentBP_AIPerception_K2Node_ComponentBoundEvent_4_PerceptionUpdatedDelegate__DelegateSignature(const TArray<class AActor*>& UpdatedActors);
    void Actor Add to Cage(class AAbiotic_Character_ParentBP_C* OwningCharacter, class AActor* ActorToInteractWith, FAbiotic_InventoryItemSlotStruct SlotData);
    void ResetStagger();
    void Broadcast_PerformStagger(TEnumAsByte<EStaggerDirection::Type> Direction);
    void DeliverString(FString String, bool FromSave);
    void NPC_InteractWith(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void InteractWith_B_LocalFX(bool Hold);
    void JumpThroughSmashDestructible(class AActor* ActorToDestroy);
    void Broadcast_PerformBackstep(TEnumAsByte<EStaggerDirection::Type> Direction);
    void InteractWith_A_LocalFX(bool Hold);
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void Broadcast_ThrowGrenade();
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void Broadcast_NPCHitscanImpact(FVector HitLocation, FRotator HitNormalRotation, class AActor* HitActor, class UActorComponent* Hit Component, const FVector EndTrace, const TSubclassOf<class UDamageType> DamageType, class UPhysicalMaterial* PhysicalMaterial, FName HitBone);
    void FireRanged_Projectile(FDataTableRowHandle ProjectileDataRowHandle, double DamageFromWeapon);
    void SuccessfulGrab_CheckForAnimEnd();
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void Broadcast_CombatAbility1();
    void Broadcast_CombatAbility2();
    void Broadcast_CombatAbility3();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void Broadcast_MeleeAttackImpact(FHitResult Hit, TSubclassOf<class UDamageType> DamageHitType);
    void TICK_DeathSequence_FallToGround();
    void OnLevelLoadUpdated(class ULevelStreaming* Level);
    void TryDealSpinOrBehindDamage();
    void SetSpinAttackOnCooldown();
    void SetBehindAttackOnCooldown();
    void SetPowerAttackOnCooldown();
    void UpdateDisabledState();
    void CheckForDisabledState();
    void FailedGrab_CheckForAnimEnd();
    void ReceiveDestroyed();
    void Server_DoMeleeAttackCustom(TEnumAsByte<E_NPC_MeleeTypes::Type> MeleeAttackType, FVector Location);
    void PerformIdleAbility();
    void Broadcast_ReloadWeapon();
    void LevelVolumesUpdated();
    void Broadcast_PerformIdleStartle();
    void Server_AttemptStartle();
    void TargetBlockedAttack(class AActor* Target);
    void OnHealthChanged_Event();
    void ReceiveTick(float DeltaSeconds);
    void Broadcast_PlayCriticalHitFX(FVector Location, FRotator Rotation, TSubclassOf<class UAbiotic_DamageType_ParentBP_C> DamageType);
    void PerformMeleeDamage(FVector AttemptLocation);
    void DelayedRagdollImpulse();
    void OnDespawn();
    void UpdateBreathingAudio(EAudioComponentPlayState PlayState);
    void OnSpawnFXStarted();
    void OnSpawnFXEnded();
    void Server_HeardSound(class AActor* Actor, const FAIStimulus& Stimulus, bool Loud);
    void OnCharacterSpeakingStart();
    void NPC_CreateDynamicMaterials();
    void Server_Set_RecentlyCriticalHit();
    void ExecuteUbergraph_NPC_Base_ParentBP(int32 EntryPoint);
    void CombatStateChanged__DelegateSignature(class ANPC_Base_ParentBP_C* Target NPC);
    void CombatReset__DelegateSignature(bool Success);
}; // Size: 0x1EC8

#endif
