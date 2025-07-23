#ifndef UE4SS_SDK_Abiotic_AI_Controller_ParentBP_HPP
#define UE4SS_SDK_Abiotic_AI_Controller_ParentBP_HPP

class AAbiotic_AI_Controller_ParentBP_C : public AAbioticAIController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    float TurnToFaceTimeline_NewTrack_0_C04E25224DDCD41930F17CB0023E305D;             // 0x03C8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TurnToFaceTimeline__Direction_C04E25224DDCD41930F17CB0023E305D; // 0x03CC (size: 0x1)
    class UTimelineComponent* TurnToFaceTimeline;                                     // 0x03D0 (size: 0x8)
    double DecisionInterval;                                                          // 0x03D8 (size: 0x8)
    FTimerHandle DecisionTimer;                                                       // 0x03E0 (size: 0x8)
    class ANPC_Base_ParentBP_C* MyPawn;                                               // 0x03E8 (size: 0x8)
    TMap<AActor*, double> LastSeenPotentialCombatTargetsList;                         // 0x03F0 (size: 0x50)
    TMap<AActor*, double> ListOfPerceptionTargets;                                    // 0x0440 (size: 0x50)
    double TimeLastCleanedKnownTargets;                                               // 0x0490 (size: 0x8)
    bool ManualDespawnOnly;                                                           // 0x0498 (size: 0x1)
    double TimeOfLastIdlePatrol;                                                      // 0x04A0 (size: 0x8)
    double TimeOfLastIdleQuip;                                                        // 0x04A8 (size: 0x8)
    double IdleQuipFrequency;                                                         // 0x04B0 (size: 0x8)
    double PatrolFrequency;                                                           // 0x04B8 (size: 0x8)
    bool DoesNotPatrol;                                                               // 0x04C0 (size: 0x1)
    double LastFaceDirectionYaw;                                                      // 0x04C8 (size: 0x8)
    bool IsInCombat;                                                                  // 0x04D0 (size: 0x1)
    double LostTargetQuipFrequency;                                                   // 0x04D8 (size: 0x8)
    double TimeOfLastLostTargetQuip;                                                  // 0x04E0 (size: 0x8)
    double TimeOfLastSearchingForTargetQuip;                                          // 0x04E8 (size: 0x8)
    double SearchingForTargetQuipFrequency;                                           // 0x04F0 (size: 0x8)
    double TimeOfLastAngstQuip;                                                       // 0x04F8 (size: 0x8)
    double AngstQuipFrequency;                                                        // 0x0500 (size: 0x8)
    FVector TargetLastKnownLocation;                                                  // 0x0508 (size: 0x18)
    int32 RangedAttackBurstCount;                                                     // 0x0520 (size: 0x4)
    bool RecentlyTookDamage;                                                          // 0x0524 (size: 0x1)
    double TimeOfLastAttackingQuip;                                                   // 0x0528 (size: 0x8)
    double AttackingQuipFrequency;                                                    // 0x0530 (size: 0x8)
    double TimeOfLastMeleeQuip;                                                       // 0x0538 (size: 0x8)
    double MeleeQuipFrequency;                                                        // 0x0540 (size: 0x8)
    bool SetupComplete;                                                               // 0x0548 (size: 0x1)
    int32 NumberOfUnstickAttempts;                                                    // 0x054C (size: 0x4)
    bool Braindead;                                                                   // 0x0550 (size: 0x1)
    class AAI_PatrolPath_C* CurrentPatrolPath;                                        // 0x0558 (size: 0x8)
    class AAI_PatrolPath_C* LastPatrolPath;                                           // 0x0560 (size: 0x8)
    TArray<FVector> PatrolIndeces;                                                    // 0x0568 (size: 0x10)
    bool PatrollingPositively;                                                        // 0x0578 (size: 0x1)
    int32 TimesFailedToGetToPatrolPath;                                               // 0x057C (size: 0x4)
    FAbiotic_AI_Controller_ParentBP_CPatrolPath_ReturnedHome PatrolPath_ReturnedHome; // 0x0580 (size: 0x10)
    void PatrolPath_ReturnedHome();
    FAbiotic_AI_Controller_ParentBP_CPatrolPath_ReachedEndPoint PatrolPath_ReachedEndPoint; // 0x0590 (size: 0x10)
    void PatrolPath_ReachedEndPoint();
    TMap<AActor*, double> AttackerList;                                               // 0x05A0 (size: 0x50)
    double TimeSinceLastTargetSwitch;                                                 // 0x05F0 (size: 0x8)
    double AllowedTargetSwitchFrequency;                                              // 0x05F8 (size: 0x8)
    bool Immobile;                                                                    // 0x0600 (size: 0x1)
    double Eyesight;                                                                  // 0x0608 (size: 0x8)
    bool IgnoreLightLevel;                                                            // 0x0610 (size: 0x1)
    double TargetMemory;                                                              // 0x0618 (size: 0x8)
    int32 LastSeenTargetPoints;                                                       // 0x0620 (size: 0x4)
    double LastBackstepTime;                                                          // 0x0628 (size: 0x8)
    double BackstepCooldown;                                                          // 0x0630 (size: 0x8)
    int32 RecentTargetFaceAttempts;                                                   // 0x0638 (size: 0x4)
    bool CanThrowGrenades;                                                            // 0x063C (size: 0x1)
    double GrenadeCooldown;                                                           // 0x0640 (size: 0x8)
    double TimeLastGrenadeThrow;                                                      // 0x0648 (size: 0x8)
    double TimeOfLastStaggerQuip;                                                     // 0x0650 (size: 0x8)
    double StaggerQuipFrequency;                                                      // 0x0658 (size: 0x8)
    int32 ControllerFailCounter;                                                      // 0x0660 (size: 0x4)
    class AActor* LastObjectBlockingPath;                                             // 0x0668 (size: 0x8)
    TSoftObjectPtr<AAI_PatrolPath_C> PatrolPathSoftRef;                               // 0x0670 (size: 0x28)
    FVector TargetFlightLocation;                                                     // 0x0698 (size: 0x18)
    TArray<FVector> LastSpottablePointsSeen;                                          // 0x06B0 (size: 0x10)
    class UBehaviorTree* BehaviorTree;                                                // 0x06C0 (size: 0x8)
    FAbiotic_AI_Controller_ParentBP_CUniqueIdleReset UniqueIdleReset;                 // 0x06C8 (size: 0x10)
    void UniqueIdleReset(bool Success);
    float TargetFaceDirectionYaw;                                                     // 0x06D8 (size: 0x4)
    bool Stationary;                                                                  // 0x06DC (size: 0x1)
    bool HasEncounteredPlayer;                                                        // 0x06DD (size: 0x1)
    bool HasFocusActor;                                                               // 0x06DE (size: 0x1)
    bool NPCIsMoving;                                                                 // 0x06DF (size: 0x1)
    bool IgnoreMovementWhileFocusing;                                                 // 0x06E0 (size: 0x1)
    class AActor* LastCombatTarget;                                                   // 0x06E8 (size: 0x8)
    double InitialTargetDistanceToStartle;                                            // 0x06F0 (size: 0x8)
    double LastSawTargetCheatDuration;                                                // 0x06F8 (size: 0x8)
    TEnumAsByte<ENPCAwarenessState::Type> InitialAwarenessState;                      // 0x0700 (size: 0x1)
    FTransform InitialSpawnTransform;                                                 // 0x0710 (size: 0x60)
    FVector LastTrueKnownLocation;                                                    // 0x0770 (size: 0x18)
    bool UsePathLocationForObstruction;                                               // 0x0788 (size: 0x1)
    bool IgnoreCombatModeWhileFocusing;                                               // 0x0789 (size: 0x1)
    float DespawnSequenceLength;                                                      // 0x078C (size: 0x4)
    FAbiotic_AI_Controller_ParentBP_COnDespawnStarted OnDespawnStarted;               // 0x0790 (size: 0x10)
    void OnDespawnStarted();
    double TimeOfLastPainLine;                                                        // 0x07A0 (size: 0x8)
    FBuffDebuffRowHandle CombatDebuff;                                                // 0x07A8 (size: 0x20)
    FGameplayTag CombatTagCheck;                                                      // 0x07C8 (size: 0x8)
    TSoftObjectPtr<AAI_PatrolPath_C> PotentialPatrolPath;                             // 0x07D0 (size: 0x28)
    bool UseLegacyVoiceLines;                                                         // 0x07F8 (size: 0x1)
    double BackstepTraceDistance;                                                     // 0x0800 (size: 0x8)
    bool NoBenchWander;                                                               // 0x0808 (size: 0x1)
    bool TurnToFaceSounds;                                                            // 0x0809 (size: 0x1)
    int32 LastKnownDifficulty;                                                        // 0x080C (size: 0x4)
    bool IsPendingDespawn;                                                            // 0x0810 (size: 0x1)
    double TimeOfLastFlankingQuip;                                                    // 0x0818 (size: 0x8)
    double FlankingQuipFrequency;                                                     // 0x0820 (size: 0x8)
    TArray<TEnumAsByte<E_DialogLines::Type>> UsedQuipTypes;                           // 0x0828 (size: 0x10)
    double AllyDeathQuipFrequency;                                                    // 0x0838 (size: 0x8)
    double TimeOfLastAllyDeathQuip;                                                   // 0x0840 (size: 0x8)
    TMap<TEnumAsByte<E_DialogLines::Type>, TEnumAsByte<E_AudioImportance::Type>> DialogImportanceMap; // 0x0848 (size: 0x50)
    double AggroQuipFrequency;                                                        // 0x0898 (size: 0x8)
    double TimeOfLastAggroQuip;                                                       // 0x08A0 (size: 0x8)
    double ExitCombatQuipFrequency;                                                   // 0x08A8 (size: 0x8)
    double TimeOfLastExitCombatQuip;                                                  // 0x08B0 (size: 0x8)

    void GetFriendlyFireDamageMultiplier(bool& Return, double& DamageMultiplier);
    void TargetableByTurrets(bool& Targetable);
    void GetWandererNPC(class ANPC_Base_ParentBP_C*& Wanderer);
    bool GetTargetPriority(TEnumAsByte<E_TargetPriority::Type>& Priority);
    void Targetable By Triggers(bool& Targetable);
    bool GetSpottability(double& Spottability, bool& Crouched);
    bool GetCurrentLightLevel(double& LightLevel);
    void GetBuffOverlayMeshes(TArray<class UMeshComponent*>& Meshes);
    void IsStompable(class AAbiotic_Character_ParentBP_C* AskingCharacter, bool& IsStompable);
    void DoesAwardSkillXPWhenHit(bool& MeleeXP, bool& RangedXP, double& XPMultiplier);
    void RequiresRangedWeaponToEngage(bool& RequiresRanged);
    void TargetableByNPCs(bool Maintain, bool& Targetable);
    void GetSpottablePoints(TArray<FVector>& SpottablePoints);
    void GetFactionTeam(TEnumAsByte<E_Factions::Type>& Faction);
    bool IsTargetInvisible(class AActor* CombatTarget);
    void OnUniqueIdleAbilityAborted();
    void GetCurrentLightLevelFromTarget(class AActor* InTarget, double& OutLightLevel);
    bool HasTouchedTarget(class AActor* TargetActor);
    void AI_PerformBackstep(FVector HitOrigin, bool Random, bool ForceBackwards);
    void AI_PerformStagger(FVector HitOrigin, bool SkipAnim);
    void AdditionalAbilityCheck(TEnumAsByte<E_NPC_AbilityTypes::Type> Ability, bool& Result);
    void AdditionalFocusTurnOverride(bool& Override);
    void DetermineDodgeDirection(FVector& Origin, bool& Random, bool& ForceBackwards, TEnumAsByte<EStaggerDirection::Type>& Direction);
    void TrySpeakFromType(TEnumAsByte<E_DialogLines::Type> Type, TEnumAsByte<E_AudioImportance::Type> Importance, bool& Success);
    void PerformCombatEngage();
    void GetSquadMemberAI(TArray<class AAbiotic_AI_Controller_ParentBP_C*>& AIControllers);
    void TrySpeakAggroLine(bool PlayerCharacterIsTarget);
    void ForgetTarget(const class AActor*& Target);
    bool ExtraFocusCheck();
    void DisableAllPerception();
    FVector GetObstructionDirection();
    void CheckForCombatBuffs();
    bool IsCharacter(class AActor* Target);
    void BT_CheckObstruction();
    void MoveToLocationOfInterest();
    void PerformCombatAlert(FVector Location, class AActor* Target);
    void BT_SetDBNO(bool Stunned);
    void BT_InitBlackboardValues();
    void WasShoved(class AAbiotic_Character_ParentBP_C* Shover);
    void BT_SetAwarenessState(TEnumAsByte<ENPCAwarenessState::Type> AwarenessState);
    void BT_SetStunned(bool Stunned);
    void BT_SetPatrolIndex(int32 Index);
    void BT_ResolveCurrentPatrolPath();
    bool BT_UpdateLastKnownLocation();
    void BT_SetCanSeeTarget(class UObject* TargetActor);
    void SetCurrentCombatTarget(class AActor* CombatTarget);
    class AActor* GetCurrentCombatTarget();
    void BT_SetCombatState(bool State, bool SkipAggroAnimation, bool& Success);
    void BT_SetTargetActor(class UObject* TargetActor);
    void BT_HeardNewSound(class AActor* Actor, FAIStimulus Stimulus);
    void BT_SetLastKnownLocation(FVector Location, bool Target, bool Cheating);
    void BT_SetAbilityCooldown(bool OnCooldown);
    bool BT_ChooseBestTarget(bool Initial);
    void UpdateBehaviorTreeValues();
    void ReFindPatrolPath();
    void TrySpeakPainLine(bool ForceLine);
    void TrySpeakMeleeAttackGruntLine();
    void TrySpeak_GenericAttackingLine();
    void TrySpeak_IdleQuipLine();
    void TrySpeak_LostTargetLine();
    void TrySpeak_SearchingForTargetLine();
    void TrySpeak_AngstLine();
    void AlertSquadToCombat(class AActor* CausedByCombatTarget);
    void IncrementBurstCounter();
    void CheckForBackstepCondition(bool ForceBackstep, FAbiotic_PointDamageStruct LastDamage);
    void UpdateTargetFireAtLocation(bool& CanSee);
    void TryCombatAbility3();
    void TryCombatAbility2();
    void TryCombatAbility1();
    void TurnTowardsTarget(bool AllowTurnDuringMontage, bool FacingToAttack);
    void SetIsInCombatFlag(bool InCombat);
    void ProcessPerceptionList();
    void UpdateTargetSpottedValue(const class AActor*& Target, bool ForceMaximumValue, bool Maintain);
    void IncreasePotentialTargetPerceptionValue(const class AActor*& Target, bool ForceMaximumValue, bool Maintain, bool& MaxSpotValue);
    void TryDialogQuip(TEnumAsByte<E_DialogLines::Type> DialogLineType);
    void HeardNewSound(class AActor* Actor, FAIStimulus Stimulus);
    void DecayAttackerList();
    void CheckForBestTargetOnPerceptionList(bool& FoundNewTarget, class AActor*& Attacker);
    void AddDamageToAttackerList(const class AAbiotic_Character_ParentBP_C*& Attacker, double Damage);
    void Despawn();
    void CheckPatrolPathsValid(bool& Valid);
    void TryUniqueIdleAbility();
    void CheckForObstruction(bool& FoundSomethingChangeable, class AActor*& Obstruction);
    void ClearStuckState();
    void Check if Stuck();
    void GetHostilityTowardsTarget(class AActor* Target, bool& Hostile);
    void GetNPCData(FAbiotic_NPCStruct& NPCData);
    void JustTookDamage(class AAbiotic_Character_ParentBP_C* FromCharacter, FVector FromLocation, double Damage, bool FriendlyFire, bool SkipPainLine);
    bool RollChance(int32 1 in N Chance);
    void CheckLineOfSightToLocations(TArray<FVector>& LocationsMustSee, class AActor* OwningTarget, int32 RequiredLocationsToCount, bool QueryOnly, bool& Can See);
    void CheckForNewBestTarget(bool& Found, bool& SameTargetAsBefore);
    void AddOrUpdatePotentialTarget(const class AActor*& PotentialTarget, bool ForceSpotTargetImmediately);
    void HasTimeElapsedSince(double SinceTime, double ElapsedTimeRequired, bool& Elapsed);
    void CheckForDespawn(bool& DespawnMe);
    void ForgetCurrentTarget();
    void CheckCombatTargetValidity(class AActor* TargetToCheck, bool Maintain, bool& Valid);
    void PrintAIDebug(double Duration, FString String, FLinearColor TextColor);
    void TrySpeakDialogLegacy(TSoftObjectPtr<USoundBase> Legacy CueToPlay, TEnumAsByte<E_AudioImportance::Type> Importance);
    void TrySpeakDialog(TSoftObjectPtr<UDialogueWave> CueToPlay, TEnumAsByte<E_AudioImportance::Type> Importance);
    void TurnToFaceTimeline__FinishedFunc();
    void TurnToFaceTimeline__UpdateFunc();
    void DoActionToSensedTarget(bool SuccessfullySensed);
    void SetNewWandererNPC(class ANPC_Base_ParentBP_C* PotentialWanderer);
    void DecisionTick();
    void ReceiveBeginPlay();
    void TurnToFaceDirection(FVector Direction, bool AllowTurnDuringMontage, bool TurningToAttack);
    void SetRecentlyTookDamage();
    void TryExecuteMeleeAttack(class AActor* TargetActor, FVector Location);
    void TryExecuteRangedAttack(class AAbiotic_Character_ParentBP_C* Character, FVector Location, int32 BurstCount);
    void ReceiveTick(float DeltaSeconds);
    void TryRunBeginPlayAgain();
    void BraindeadIdleTick();
    void ExecuteUbergraph_Abiotic_AI_Controller_ParentBP(int32 EntryPoint);
    void OnDespawnStarted__DelegateSignature();
    void UniqueIdleReset__DelegateSignature(bool Success);
    void PatrolPath_ReachedEndPoint__DelegateSignature();
    void PatrolPath_ReturnedHome__DelegateSignature();
}; // Size: 0x8B8

#endif
