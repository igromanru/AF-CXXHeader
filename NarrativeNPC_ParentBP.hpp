#ifndef UE4SS_SDK_NarrativeNPC_ParentBP_HPP
#define UE4SS_SDK_NarrativeNPC_ParentBP_HPP

class ANarrativeNPC_ParentBP_C : public AAbiotic_Character_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x15B0 (size: 0x8)
    class USceneComponent* ButtonPrompt;                                              // 0x15B8 (size: 0x8)
    class UBoxComponent* ExternalInteractBox;                                         // 0x15C0 (size: 0x8)
    class UBoxComponent* DialogZone;                                                  // 0x15C8 (size: 0x8)
    class UBoxComponent* BeckonZone;                                                  // 0x15D0 (size: 0x8)
    float LookAtTimeline_NewTrack_0_F8E77C5040FF1DE65474A28ED34C66CE;                 // 0x15D8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> LookAtTimeline__Direction_F8E77C5040FF1DE65474A28ED34C66CE; // 0x15DC (size: 0x1)
    class UTimelineComponent* LookAtTimeline;                                         // 0x15E0 (size: 0x8)
    FWorldFlagRowHandle WorldFlagToAppear;                                            // 0x15E8 (size: 0x20)
    FWorldFlagRowHandle WorldFlagToDisappear;                                         // 0x1608 (size: 0x20)
    bool IsCorpse;                                                                    // 0x1628 (size: 0x1)
    FDataTableRowHandle NarrativeNPC_ConversationRow;                                 // 0x1630 (size: 0x10)
    TMap<class FWorldFlagRowHandle, class FNPCConversationRowHandle> ConversationOverrides; // 0x1640 (size: 0x50)
    bool HeadBoneLookAtTarget;                                                        // 0x1690 (size: 0x1)
    TEnumAsByte<E_NarrativeNPCStates::Type> NarrativeState;                           // 0x1691 (size: 0x1)
    TEnumAsByte<E_NarrativeNPCStates::Type> LastPlayedNarrativeState;                 // 0x1692 (size: 0x1)
    FTimerHandle BeckonTimer;                                                         // 0x1698 (size: 0x8)
    TSoftObjectPtr<UDialogueWave> LastDialogCue;                                      // 0x16A0 (size: 0x28)
    TArray<class AAbiotic_PlayerCharacter_C*> PlayerCharactersInDialogZone;           // 0x16C8 (size: 0x10)
    bool IsSpeakingDialog;                                                            // 0x16D8 (size: 0x1)
    TArray<class AAbiotic_PlayerCharacter_C*> PlayerCharactersInBeckon;               // 0x16E0 (size: 0x10)
    FTimerHandle AttemptToSpeakTimer;                                                 // 0x16F0 (size: 0x8)
    class UAnimSequence* IdleAnimation;                                               // 0x16F8 (size: 0x8)
    int32 CurrentMessageIndex;                                                        // 0x1700 (size: 0x4)
    class UAnimSequence* AimOffsetBase;                                               // 0x1708 (size: 0x8)
    class UAimOffsetBlendSpace* AimOffset;                                            // 0x1710 (size: 0x8)
    bool NoHeadLook;                                                                  // 0x1718 (size: 0x1)
    bool NoBeckonZone;                                                                // 0x1719 (size: 0x1)
    bool NoDialogZone;                                                                // 0x171A (size: 0x1)
    float HeadLookAlpha;                                                              // 0x171C (size: 0x4)
    float BeckonInterval;                                                             // 0x1720 (size: 0x4)
    bool LastDialogWasBeckon;                                                         // 0x1724 (size: 0x1)
    FText To Interact with Text;                                                      // 0x1728 (size: 0x10)
    FTimerHandle EndDialogTimer;                                                      // 0x1738 (size: 0x8)
    int32 LastVoiceLineIndex;                                                         // 0x1740 (size: 0x4)
    bool AutoSpeakNextDialog;                                                         // 0x1744 (size: 0x1)
    FNarrativeNPC_ParentBP_CNPCFinishedDialogLine NPCFinishedDialogLine;              // 0x1748 (size: 0x10)
    void NPCFinishedDialogLine();
    FName ButtonPromptBone;                                                           // 0x1758 (size: 0x8)
    FText LongInteractBText;                                                          // 0x1760 (size: 0x10)
    class ANarrativeNPC_ParentBP_C* LinkedNarrativeNPC;                               // 0x1770 (size: 0x8)
    class ANarrativeNPC_ParentBP_C* ParentNPC;                                        // 0x1778 (size: 0x8)
    double DistanceForBeckonSubtitles;                                                // 0x1780 (size: 0x8)
    bool NonInteractable;                                                             // 0x1788 (size: 0x1)
    TSoftClassPtr<UUserWidget> ActiveSubtitleWidgetClass;                             // 0x1790 (size: 0x28)
    bool CanWander;                                                                   // 0x17B8 (size: 0x1)
    TSoftObjectPtr<AActor> Spawner;                                                   // 0x17C0 (size: 0x28)
    FGameplayTagContainer TagsRequiredToSpeakWith;                                    // 0x17E8 (size: 0x20)
    FGameplayTagContainer TagsRequiredToTradeWith;                                    // 0x1808 (size: 0x20)
    bool AnimBP_AllowWalking;                                                         // 0x1828 (size: 0x1)
    class UAnimMontage* DamageFlinchMontage;                                          // 0x1830 (size: 0x8)
    bool DamageFlinchCooldown;                                                        // 0x1838 (size: 0x1)
    double DamageFlinchCooldownDuration;                                              // 0x1840 (size: 0x8)
    class UAnimSequenceBase* AdditiveAnimation;                                       // 0x1848 (size: 0x8)
    bool CheckIfNearbyNPCsSpeaking;                                                   // 0x1850 (size: 0x1)
    FNarrativeNPC_ParentBP_COnCombatStateChanged OnCombatStateChanged;                // 0x1858 (size: 0x10)
    void OnCombatStateChanged(class ANarrativeNPC_ParentBP_C* NarrativeNPC);
    FTimerHandle SittingTimer;                                                        // 0x1868 (size: 0x8)
    FNarrativeNPC_ParentBP_COnNarrativeStateChanged OnNarrativeStateChanged;          // 0x1870 (size: 0x10)
    void OnNarrativeStateChanged(class ANarrativeNPC_ParentBP_C* NPC, TEnumAsByte<E_NarrativeNPCStates::Type> NewNarrativeState);
    bool CanEnterCombat;                                                              // 0x1880 (size: 0x1)
    bool AllowAnyForcedDialog;                                                        // 0x1881 (size: 0x1)

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
    void GetHighlightComponents(TArray<class UActorComponent*>& Components, bool& DontHighlightPowerCord);
    void NPC_CanInteractWith(bool& Success);
    void PlayerExitLocations(int32 CurrentSeatIndex, TArray<FVector>& Locations);
    void SitLocations(TArray<FVector>& Locations);
    void HasSitLocations(bool& IsSittable);
    void SitLocationParent(class USceneComponent*& ParentComponent);
    void GetItemChangeableData(FAbiotic_InventoryChangeableDataStruct& ChangeableData);
    void GetConstructionState(bool& UnderConstruction, double& PercentComplete);
    void RequiresToolToDismantle(bool& Tool Required);
    void ShowPotentialInteraction(class UActorComponent*& AlternateHitComponent, bool& Show);
    void CanBePushed(class AAbiotic_Character_ParentBP_C* PushingCharacter, bool& Pushable);
    void StartSittingTimer(float Time);
    void ToggleSitState(bool StartSitting, class AAbioticDeployed_Furniture_ParentBP_C* Seat, bool IgnoreZLocation);
    void SetCombatState(bool NewCombatState);
    bool IsInCombat();
    void LocalUpdateWalkSpeed();
    bool IsNearbyNPCSpeaking();
    void Interaction Tag Check(class AAbioticCharacter* InteractingCharacter, bool TradeCheck, bool& CanInteract);
    bool IsNPCBusy();
    bool ShouldTick();
    void RefreshWanderState();
    void OnRep_CanWander();
    bool GetCanWander();
    void SetWanderEnabled(bool WanderingEnabled);
    void GetOutlineComponent(bool& ComponentEnabled, class UOutlineComponent_C*& Components);
    void UpdateSubtitleWidgetClass();
    void ValidateWorldFlagsFromLoad(TEnumAsByte<E_NarrativeNPCStates::Type> LoadedNarrativeState);
    void CancelDialogOverRadio(TSoftObjectPtr<UDialogueWave> SoundCue);
    FText GetCharacterName();
    void InitLinkedNPC();
    bool IsSpeaking?();
    bool IsLinkedNPC();
    bool IsSecondaryNPC();
    void PlayDialogOverRadio(TSoftObjectPtr<UDialogueWave> SoundCue);
    void On Player Reset Conversation(bool TryStartSpeaking);
    void CheckWorldFlagState(bool NewStateTriggered);
    void GetCurrentVoiceLineDuration(double DelayToAdd, double& Duration);
    void SaveNarrativeState();
    void LoadFromSave(FSaveData_NPCState_Struct NPCState);
    void Get All Lines In Speech Category(TArray<FNPCConversationLine>& ConversationLines, TArray<TSoftObjectPtr<UDialogueWave>>& DialogSounds, TArray<double>& DialogMontage_Times, TArray<TSoftObjectPtr<UAnimMontage>>& DialogMontage_Ref);
    void KillNarrativeNPC();
    void CheckIfConversationZonesActive();
    void IsInBeckonPhase(bool& Beckoning);
    void SetNewNarrativeState(TEnumAsByte<E_NarrativeNPCStates::Type> NarrativeState);
    void TryUnlockCollectiblesAndWorldFlags(int32 FinishedVoiceLineIndex);
    void SetHeadLookAtDirection(bool ResetToZero);
    void IsActorLocalPlayer(class AAbiotic_PlayerCharacter_C* Character, bool& TRUE);
    void IsPlayerInDialogZone(bool& TRUE);
    void IsPlayerInBeckonZone(bool& TRUE);
    void GetSpottablePoints(TArray<FVector>& SpottablePoints);
    void RequiresRangedWeaponToEngage(bool& RequiresRanged);
    void CanBeCarbuncled(bool& Success);
    void GetFactionTeam(TEnumAsByte<E_Factions::Type>& Faction);
    void TargetableByNPCs(bool Maintain, class AActor* TargetingNPC, bool& Targetable);
    void DoesAwardSkillXPWhenHit(bool& MeleeXP, bool& RangedXP, double& XPMultiplier);
    void UserConstructionScript();
    void LookAtTimeline__FinishedFunc();
    void LookAtTimeline__UpdateFunc();
    void OnLoaded_4161CFD74F95620BEA25A2BFD9174B9B(class UObject* Loaded);
    void OnLoaded_D721F4C64E32E3ACB8626C83BE8D45BE(class UObject* Loaded);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void InteractWith_A_LocalFX(bool Hold);
    void NPC_InteractWith(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void DeliverString(FString String, bool FromSave);
    void Actor Add to Cage(class AAbiotic_Character_ParentBP_C* OwningCharacter, class AActor* ActorToInteractWith, FAbiotic_InventoryItemSlotStruct SlotData);
    void Actor_RemoveFromCage(class AAbiotic_Character_ParentBP_C* OwningCharacter, FAbiotic_InventoryItemSlotStruct SlotData, FTransform ShootProjectileTransform, FTransform AttachedSocketTransform);
    void OnInteractHighlightStart(class UActorComponent* Component);
    void OnInteractHighlightEnd(class UActorComponent* Component);
    void DeliverInt(bool FromSave, const int32 New Int);
    void Set New Attached Power Cord(class UCableComponent* New Power Cord);
    void RadialWheelInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed, FName SelectionWheelContentName);
    void DeliverDynamicProperty(bool FromSave, FDynamicProperty Property);
    void InteractTeleportUpdate(class AAbiotic_Character_ParentBP_C* InteractingCharacter, bool TryingToTeleport, bool TeleportSuccessful);
    void BndEvt__NarrativeNPC_ParentBP_BeckonZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void TryBeckon();
    void BndEvt__NarrativeNPC_ParentBP_DialogZone_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__NarrativeNPC_ParentBP_DialogZone_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void TrySpeakAppropriateDialog(bool InterruptCurrentDialog);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__NarrativeNPC_ParentBP_BeckonZone_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveBeginPlay();
    void BlendLookAt(bool BlendTo, bool Force);
    void All_PerformDeathSequence();
    void RestartBeckonTimer();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void SpeakDialog_RetryViaTimer();
    void ClearSpeakingFlag();
    void Broadcast_DialogSpeak(TSoftObjectPtr<UDialogueWave> CueToPlay, TEnumAsByte<E_AudioImportance::Type> AudioImportance);
    void OnWorldFlagsLoaded();
    void OnWorldFlagUpdated();
    void UpdateDisabledState();
    void ForceTryDialog();
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void EndParentDialog();
    void PlaySecondaryDialog(TEnumAsByte<E_NarrativeNPCStates::Type> State, int32 Index);
    void OnCharacterSpeakingStart();
    void Broadcast_UpdateLastDialogSpeak(TSoftObjectPtr<UDialogueWave> Cue);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void InteractWith_B_LocalFX(bool Hold);
    void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void Broadcast_UnlockCustomization(const TArray<FDataTableRowHandle>& CustomizationUnlocks);
    void ExecuteUbergraph_NarrativeNPC_ParentBP(int32 EntryPoint);
    void OnNarrativeStateChanged__DelegateSignature(class ANarrativeNPC_ParentBP_C* NPC, TEnumAsByte<E_NarrativeNPCStates::Type> NewNarrativeState);
    void OnCombatStateChanged__DelegateSignature(class ANarrativeNPC_ParentBP_C* NarrativeNPC);
    void NPCFinishedDialogLine__DelegateSignature();
}; // Size: 0x1882

#endif
