#ifndef UE4SS_SDK_NarrativeNPC_ParentBP_HPP
#define UE4SS_SDK_NarrativeNPC_ParentBP_HPP

class ANarrativeNPC_ParentBP_C : public AAbiotic_Character_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1408 (size: 0x8)
    class USceneComponent* ButtonPrompt;                                              // 0x1410 (size: 0x8)
    class UBoxComponent* ExternalInteractBox;                                         // 0x1418 (size: 0x8)
    class UBoxComponent* DialogZone;                                                  // 0x1420 (size: 0x8)
    class UBoxComponent* BeckonZone;                                                  // 0x1428 (size: 0x8)
    float LookAtTimeline_NewTrack_0_F8E77C5040FF1DE65474A28ED34C66CE;                 // 0x1430 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> LookAtTimeline__Direction_F8E77C5040FF1DE65474A28ED34C66CE; // 0x1434 (size: 0x1)
    class UTimelineComponent* LookAtTimeline;                                         // 0x1438 (size: 0x8)
    FWorldFlagRowHandle WorldFlagToAppear;                                            // 0x1440 (size: 0x20)
    FWorldFlagRowHandle WorldFlagToDisappear;                                         // 0x1460 (size: 0x20)
    bool IsCorpse;                                                                    // 0x1480 (size: 0x1)
    FDataTableRowHandle NarrativeNPC_ConversationRow;                                 // 0x1488 (size: 0x10)
    TMap<class FWorldFlagRowHandle, class FNPCConversationRowHandle> ConversationOverrides; // 0x1498 (size: 0x50)
    bool HeadBoneLookAtTarget;                                                        // 0x14E8 (size: 0x1)
    TEnumAsByte<E_NarrativeNPCStates::Type> NarrativeState;                           // 0x14E9 (size: 0x1)
    TEnumAsByte<E_NarrativeNPCStates::Type> LastPlayedNarrativeState;                 // 0x14EA (size: 0x1)
    FTimerHandle BeckonTimer;                                                         // 0x14F0 (size: 0x8)
    TSoftObjectPtr<UDialogueWave> LastDialogCue;                                      // 0x14F8 (size: 0x28)
    TArray<class AAbiotic_PlayerCharacter_C*> PlayerCharactersInDialogZone;           // 0x1520 (size: 0x10)
    bool IsSpeakingDialog;                                                            // 0x1530 (size: 0x1)
    TArray<class AAbiotic_PlayerCharacter_C*> PlayerCharactersInBeckon;               // 0x1538 (size: 0x10)
    FTimerHandle AttemptToSpeakTimer;                                                 // 0x1548 (size: 0x8)
    class UAnimSequence* IdleAnimation;                                               // 0x1550 (size: 0x8)
    int32 CurrentMessageIndex;                                                        // 0x1558 (size: 0x4)
    class UAnimSequence* AimOffsetBase;                                               // 0x1560 (size: 0x8)
    class UAimOffsetBlendSpace* AimOffset;                                            // 0x1568 (size: 0x8)
    bool NoHeadLook;                                                                  // 0x1570 (size: 0x1)
    bool NoBeckonZone;                                                                // 0x1571 (size: 0x1)
    bool NoDialogZone;                                                                // 0x1572 (size: 0x1)
    float HeadLookAlpha;                                                              // 0x1574 (size: 0x4)
    float BeckonInterval;                                                             // 0x1578 (size: 0x4)
    bool LastDialogWasBeckon;                                                         // 0x157C (size: 0x1)
    FText To Interact with Text;                                                      // 0x1580 (size: 0x10)
    FTimerHandle EndDialogTimer;                                                      // 0x1590 (size: 0x8)
    int32 LastVoiceLineIndex;                                                         // 0x1598 (size: 0x4)
    bool AutoSpeakNextDialog;                                                         // 0x159C (size: 0x1)
    FNarrativeNPC_ParentBP_CNPCFinishedDialogLine NPCFinishedDialogLine;              // 0x15A0 (size: 0x10)
    void NPCFinishedDialogLine();
    FName ButtonPromptBone;                                                           // 0x15B0 (size: 0x8)
    FText LongInteractBText;                                                          // 0x15B8 (size: 0x10)
    class ANarrativeNPC_ParentBP_C* LinkedNarrativeNPC;                               // 0x15C8 (size: 0x8)
    class ANarrativeNPC_ParentBP_C* ParentNPC;                                        // 0x15D0 (size: 0x8)
    double DistanceForBeckonSubtitles;                                                // 0x15D8 (size: 0x8)
    bool NonInteractable;                                                             // 0x15E0 (size: 0x1)
    TSoftClassPtr<UUserWidget> ActiveSubtitleWidgetClass;                             // 0x15E8 (size: 0x28)

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
    void TargetableByNPCs(bool Maintain, bool& Targetable);
    void DoesAwardSkillXPWhenHit(bool& MeleeXP, bool& RangedXP, double& XPMultiplier);
    void UserConstructionScript();
    void LookAtTimeline__FinishedFunc();
    void LookAtTimeline__UpdateFunc();
    void OnLoaded_4161CFD74F95620BEA25A2BFD9174B9B(class UObject* Loaded);
    void OnLoaded_D721F4C64E32E3ACB8626C83BE8D45BE(class UObject* Loaded);
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
    void DeliverString(FString String, bool FromSave);
    void NPC_InteractWith(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void BndEvt__NarrativeNPC_ParentBP_DialogZone_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void InteractWith_B_LocalFX(bool Hold);
    void TrySpeakAppropriateDialog(bool InterruptCurrentDialog);
    void InteractWith_A_LocalFX(bool Hold);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__NarrativeNPC_ParentBP_BeckonZone_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void ReceiveBeginPlay();
    void BlendLookAt(bool BlendTo, bool Force);
    void All_PerformDeathSequence();
    void RestartBeckonTimer();
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
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
    void ExecuteUbergraph_NarrativeNPC_ParentBP(int32 EntryPoint);
    void NPCFinishedDialogLine__DelegateSignature();
}; // Size: 0x1610

#endif
