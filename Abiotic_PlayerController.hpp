#ifndef UE4SS_SDK_Abiotic_PlayerController_HPP
#define UE4SS_SDK_Abiotic_PlayerController_HPP

class AAbiotic_PlayerController_C : public AAbioticPlayerController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0880 (size: 0x8)
    class UAudioComponent* NPCMusic;                                                  // 0x0888 (size: 0x8)
    class UAudioComponent* NPCRadioAudio;                                             // 0x0890 (size: 0x8)
    class UCheatComponent_C* CheatComponent;                                          // 0x0898 (size: 0x8)
    float NewFXTimeline_FXTime_C8276CED400572E6FD10CF8A61D816D7;                      // 0x08A0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> NewFXTimeline__Direction_C8276CED400572E6FD10CF8A61D816D7; // 0x08A4 (size: 0x1)
    class UTimelineComponent* NewFXTimeline;                                          // 0x08A8 (size: 0x8)
    class UW_PlayerHUD_Main_C* PlayerHUDRef;                                          // 0x08B0 (size: 0x8)
    bool IsTextChatOpen;                                                              // 0x08B8 (size: 0x1)
    class UW_MainMenu_Master_C* MainMenuRef;                                          // 0x08C0 (size: 0x8)
    class UAudioComponent* CurrentSoundtrackMusic;                                    // 0x08C8 (size: 0x8)
    TEnumAsByte<E_CursorMode::Type> AbioticCursorMode;                                // 0x08D0 (size: 0x1)
    class UDraggableItem_Operation_C* CurrentItemOnCursor;                            // 0x08D8 (size: 0x8)
    double LastMouseGrabItemTime;                                                     // 0x08E0 (size: 0x8)
    class ADirectionalLight* Global_DirectionalLight;                                 // 0x08E8 (size: 0x8)
    class AAbioticSkylight_C* Global_SkyLight;                                        // 0x08F0 (size: 0x8)
    class AExponentialHeightFog* Global_AtmoFog;                                      // 0x08F8 (size: 0x8)
    FLevelFXData_Struct CurrentDaytimeFX;                                             // 0x0900 (size: 0x178)
    FLevelFXData_Struct CurrentNighttimeFX;                                           // 0x0A78 (size: 0x178)
    FLevelFXData_Struct PreviousDaytimeFX;                                            // 0x0BF0 (size: 0x178)
    FLevelFXData_Struct PreviousNighttimeFX;                                          // 0x0D68 (size: 0x178)
    class ADayNightManager_C* DayNightManager;                                        // 0x0EE0 (size: 0x8)
    FName Day_FX_Row;                                                                 // 0x0EE8 (size: 0x8)
    FName Night_FX_Row;                                                               // 0x0EF0 (size: 0x8)
    bool GlobalActorsFound;                                                           // 0x0EF8 (size: 0x1)
    bool NextSoundtrackLoaded;                                                        // 0x0EF9 (size: 0x1)
    FName PreviousDayFXRow;                                                           // 0x0EFC (size: 0x8)
    FName PreviousNightFXRow;                                                         // 0x0F04 (size: 0x8)
    class AAbiotic_PlayerCharacter_C* MyPlayerCharacter;                              // 0x0F10 (size: 0x8)
    class UW_CheatMenu_C* CheatMenu;                                                  // 0x0F18 (size: 0x8)
    bool Location_FoundNewSectorName;                                                 // 0x0F20 (size: 0x1)
    FText Location_PreviousSectorName;                                                // 0x0F28 (size: 0x10)
    FText Location_CurrentSectorName;                                                 // 0x0F38 (size: 0x10)
    bool ContinenceMinigameActive;                                                    // 0x0F48 (size: 0x1)
    double ContinenceMinigameSliderValue;                                             // 0x0F50 (size: 0x8)
    bool ContinenceMinigame_MoveLeft;                                                 // 0x0F58 (size: 0x1)
    double ContinenceMinigame_BigWindowL;                                             // 0x0F60 (size: 0x8)
    double ContinenceMinigame_BigWindowR;                                             // 0x0F68 (size: 0x8)
    double ContinenceMinigame_SmallWindowL;                                           // 0x0F70 (size: 0x8)
    double ContinenceMinigame_SmallWindowR;                                           // 0x0F78 (size: 0x8)
    class UW_HUD_ContinenceMinigame_C* ContinenceMinigameWidget;                      // 0x0F80 (size: 0x8)
    bool ContinenceMinigame_Paused;                                                   // 0x0F88 (size: 0x1)
    int32 ContinenceMinigame_Counter;                                                 // 0x0F8C (size: 0x4)
    FTimerHandle Timer_AutoSaveCharacter;                                             // 0x0F90 (size: 0x8)
    int32 CheatAttempt;                                                               // 0x0F98 (size: 0x4)
    class AMinigame_SleepRunner_BP_C* Sidescoller Minigame Actor;                     // 0x0FA0 (size: 0x8)
    class UAudioComponent* CurrentAmbientTrack;                                       // 0x0FA8 (size: 0x8)
    bool IsOnMousePressed;                                                            // 0x0FB0 (size: 0x1)
    bool IsCurrentlyDraggingItemSlot;                                                 // 0x0FB1 (size: 0x1)
    TSet<FName> CraftableItemsList;                                                   // 0x0FB8 (size: 0x50)
    TArray<FName> HintsSeen;                                                          // 0x1008 (size: 0x10)
    FString BugReportURL;                                                             // 0x1018 (size: 0x10)
    double LastLevelFXTransitionTime;                                                 // 0x1028 (size: 0x8)
    class A3D_ItemDisplay_BP_C* 3DItemDisplayActor;                                   // 0x1030 (size: 0x8)
    TSoftObjectPtr<UWorld> CurrentFXLevel;                                            // 0x1038 (size: 0x28)
    FTimerHandle InteractionHeldTimer;                                                // 0x1060 (size: 0x8)
    FName HeldTimer_LastTutorialPanelRow;                                             // 0x1068 (size: 0x8)
    FAbiotic_PlayerController_CHeldInteractStarted HeldInteractStarted;               // 0x1070 (size: 0x10)
    void HeldInteractStarted(double InteractionDuration);
    FAbiotic_PlayerController_CHeldInteractEnded HeldInteractEnded;                   // 0x1080 (size: 0x10)
    void HeldInteractEnded();
    bool NextAmbientSoundLoaded;                                                      // 0x1090 (size: 0x1)
    FVector LastRadioLocation;                                                        // 0x1098 (size: 0x18)
    double NPC_Radio_MaxVolume;                                                       // 0x10B0 (size: 0x8)
    FAbiotic_PlayerController_CItemDragStarted ItemDragStarted;                       // 0x10B8 (size: 0x10)
    void ItemDragStarted(TEnumAsByte<E_InventorySlotType::Type> Item Type);
    FAbiotic_PlayerController_CItemDragFinished ItemDragFinished;                     // 0x10C8 (size: 0x10)
    void ItemDragFinished();
    bool ClientHasRecievedCharacter;                                                  // 0x10D8 (size: 0x1)
    bool TriedFindGlobalActorsOnce;                                                   // 0x10D9 (size: 0x1)
    bool IsDebugLevel;                                                                // 0x10DA (size: 0x1)
    bool StartupFadeActive;                                                           // 0x10DB (size: 0x1)
    FName ActiveLevelFXName;                                                          // 0x10DC (size: 0x8)
    FName ActiveSubFXName;                                                            // 0x10E4 (size: 0x8)
    FName ActiveWeatherFXName;                                                        // 0x10EC (size: 0x8)
    FName OverrideLevelFXName;                                                        // 0x10F4 (size: 0x8)
    FName CheatLevelFXName;                                                           // 0x10FC (size: 0x8)
    bool DisableAutomaticFX;                                                          // 0x1104 (size: 0x1)
    class UW_MainMenu_CustomizeCharacter_C* TransmogCustomizationHUD;                 // 0x1108 (size: 0x8)
    FString ForumLinkURL;                                                             // 0x1110 (size: 0x10)
    double Local_LastSoundtrackChange;                                                // 0x1120 (size: 0x8)
    TArray<FString> CachedBannedPlayers;                                              // 0x1128 (size: 0x10)
    bool IsModerator;                                                                 // 0x1138 (size: 0x1)
    bool RadioTalking;                                                                // 0x1139 (size: 0x1)
    bool PushToTalkPressed;                                                           // 0x113A (size: 0x1)
    bool InventoryHasRadio;                                                           // 0x113B (size: 0x1)
    bool HotbarHasRadio;                                                              // 0x113C (size: 0x1)
    FString ActiveLevelName;                                                          // 0x1140 (size: 0x10)
    class ABP_WeatherFXCulling_C* WeatherFXCullingActor;                              // 0x1150 (size: 0x8)
    bool NPCMusicActive;                                                              // 0x1158 (size: 0x1)
    FName TerminalRespawnID;                                                          // 0x115C (size: 0x8)
    FVector2D LastMousePosition;                                                      // 0x1168 (size: 0x10)

    void GetJoystickDirection(TEnumAsByte<EJoystickTypes::Type> Stick, FVector2D& StickInput);
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
    void DumpNPCInfo();
    void OnWeatherUpdated(FName NewWeatherEvent);
    void DoesInventoryContainRadio(class UAbiotic_InventoryComponent_C* Inventory, bool& HasRadio);
    void OnRep_RadioTalking();
    void OnRep_IsModerator();
    void ToggleNPCRadio(bool Show);
    void Find Best Announcement(TEnumAsByte<E_AnnouncementType::Type> AnnounceType, FName CustomOverrideRow, bool& CanPlayAnnouncement, FName& AnnouncementRow);
    void AllowNewSoundtrackChange();
    void LocalPlayer_GetTimeOfDay(int32& Hour12, int32& Hour_24_Format, int32& Minute, int32& Seconds, int32& Milliseconds, bool& Daytime, bool& AM);
    bool IsCheatMenuVisible();
    bool IsVOIPActorValid();
    void Server_DoDragDropTransaction(FInventorySlotSelected_Struct IncomingItemSlot, TEnumAsByte<E_InventorySlotType::Type> IncomingSlotType, FInventorySlotSelected_Struct ItemSlotToCheck, TEnumAsByte<E_InventorySlotType::Type> SlotTypeToCheck, bool IsSplitStack, int32 StackSize, TEnumAsByte<E_ItemDragDropOutcome::Type> LocalOutcome);
    void Server_AddToItemStack(class UAbiotic_InventoryComponent_C* Inventory, int32 SlotIndex, int32 StackSize);
    void StopItemDragOperation();
    void StartItemDragOperation(FInventorySlotSelected_Struct ItemOrigin, bool DraggedBySplitStack, int32 StackAmount, class UTexture2D* ItemIcon, TEnumAsByte<E_InventorySlotType::Type> InventorySlotFrom, class UW_InventoryItemSlot_C* SlotOrigin);
    void UpdatePushToTalk(bool Enabled);
    void AttemptVOIPInit();
    void Highlighted Draggable Gear Slot Update (bool StopHighlight, TEnumAsByte<E_InventorySlotType::Type> Slot Type);
    void CloseBetaNotice(bool& ClosedNotice);
    void ContinenceMinigame_Tick(double DeltaSeconds);
    void ContinenceMinigame_Toggle(bool Show);
    void Inventory_RemoveItemContextMenu();
    void Day Night Change();
    void UpdateToNewEnvironmentFX(bool Daytime, double Alpha);
    void SetNewEnvironmentFXVariables(const FDataTableRowHandle& DayFX, const FDataTableRowHandle& NightFX, FText SectorName);
    void DetermineCorrectFX();
    void DetermineSubFXZone();
    void DetermineCorrectWeatherFX();
    void Attempt Level FXChange(TSoftObjectPtr<UWorld> Level, FString AlternativeLevelName);
    void GatherGlobalFXActors();
    void HasItemOnCursor(bool& ItemOnCursor, class UDraggableItem_Operation_C*& CurrentItemOnCursor);
    void AddWatermark();
    void ChangeCursorType(TEnumAsByte<E_CursorMode::Type> AbioticCursorMode, class UDraggableItem_Operation_C* DragDropPackageForItemMove);
    void GetCharacterInventory(class UW_PlayerInventory_Main_C*& Inventory);
    void Toggle_PlayerListDebug();
    void NewFXTimeline__FinishedFunc();
    void NewFXTimeline__UpdateFunc();
    void InpActEvt_TextChat_K2Node_InputActionEvent_23(FKey Key);
    void InpActEvt_EscapeMenu_K2Node_InputActionEvent_22(FKey Key);
    void InpActEvt_Backslash_K2Node_InputKeyEvent_8(FKey Key);
    void InpActEvt_F1_K2Node_InputKeyEvent_7(FKey Key);
    void InpActEvt_LeftShift_K2Node_InputKeyEvent_6(FKey Key);
    void InpActEvt_LeftShift_K2Node_InputKeyEvent_5(FKey Key);
    void OnLoaded_42915D504D5A90FE8CC0B0B16C70B5CA(class UObject* Loaded);
    void InpActEvt_Ctrl_F7_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_HotbarSlot1_K2Node_InputActionEvent_21(FKey Key);
    void InpActEvt_HotbarSlot2_K2Node_InputActionEvent_20(FKey Key);
    void InpActEvt_HotbarSlot3_K2Node_InputActionEvent_19(FKey Key);
    void InpActEvt_HotbarSlot4_K2Node_InputActionEvent_18(FKey Key);
    void InpActEvt_HotbarSlot5_K2Node_InputActionEvent_17(FKey Key);
    void InpActEvt_HotbarSlot6_K2Node_InputActionEvent_16(FKey Key);
    void InpActEvt_HotbarSlot7_K2Node_InputActionEvent_15(FKey Key);
    void InpActEvt_HotbarSlot8_K2Node_InputActionEvent_14(FKey Key);
    void InpActEvt_HotbarSlot9_K2Node_InputActionEvent_13(FKey Key);
    void InpActEvt_HotbarSlot10_K2Node_InputActionEvent_12(FKey Key);
    void InpActEvt_UIBack_K2Node_InputActionEvent_11(FKey Key);
    void InpActEvt_InteractA_K2Node_InputActionEvent_10(FKey Key);
    void InpActEvt_InteractA_K2Node_InputActionEvent_9(FKey Key);
    void InpActEvt_SleepMinigameJump_K2Node_InputActionEvent_8(FKey Key);
    void InpActEvt_SleepMinigameJump_K2Node_InputActionEvent_7(FKey Key);
    void OnLoaded_CCBBB5E1421BB8E4F4A3E6886C24391D(class UObject* Loaded);
    void InpActEvt_BetaFeedback_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_PushToTalk_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_PushToTalk_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_Pager_K2Node_InputActionEvent_3(FKey Key);
    void OnLoaded_B40A884B4F2C71ED14B533AF9F734096(class UObject* Loaded);
    void OnLoaded_45095B3142CB481091AB6FAC14F30144(class UObject* Loaded);
    void InpActEvt_DebugCycleCulture_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_DebugCycleCultureBack_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_ContinenceMinigame_K2Node_InputActionEvent_0(FKey Key);
    void InpActEvt_LeftControl_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_LeftControl_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_RightControl_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_RightControl_K2Node_InputKeyEvent_0(FKey Key);
    void DoActionToSensedTarget(bool SuccessfullySensed);
    void SetNewWandererNPC(class ANPC_Base_ParentBP_C* PotentialWanderer);
    void ToggleReaperTerror(bool Enable);
    void Client_UpdateBannedPlayerList(const TArray<FString>& BannedPlayers);
    void Request_UpdateBannedPlayerList();
    void Request_KickPlayer(class APlayerState* PlayerState);
    void Request_BanPlayer(class APlayerState* PlayerState);
    void Request_RemoveBan(FString BanID);
    void UpdateModeratorState();
    void Request_ForceWorldSave();
    void Request_PerformPlayerDeletion(class APlayerState* PlayerState);
    void Client_Stat_NPCKill(FAchievementStatRowHandle Stat);
    void Client_ACH_Keypad();
    void Client_ACH_Plant();
    void Client_ACH_Poop();
    void Client_ACH_SetBonus();
    void Client_ACH_Mushroom();
    void Client_ACH_Equipment();
    void Client_ACH_LabRat();
    void Client_UnlockAchievement(FAchievementRowHandle Achievement);
    void CloseCheatMenu();
    void ToggleHUD(bool Show);
    void Request_SendTextChatMessage(FString MessageToSend);
    void Local_DisplayTextChatMessage(FString Prefix, FLinearColor PrefixColor, FString MessageToReceive, FLinearColor MessageColor);
    void ReceiveBeginPlay();
    void Try_SpawnIntroSequence();
    void Request_SpawnMeInWorld(class AAbiotic_PlayerState_C* PlayerState);
    void Client_DoTraitSelectionSequence();
    void Server_SetupInitialTraits(FName PhDTrait, const TArray<FName>& TraitRows);
    void AnyPlayerDBNOStateChanged(class AAbiotic_Character_ParentBP_C* Character);
    void TransitionToNewEnvironmentFX(bool UseCurrentFX, FDataTableRowHandle DayFX, FDataTableRowHandle NightFX, double Speed, FText SectorName);
    void Request_UnlockRecipe(FName RecipeRowName);
    void Request_EmailRead(FName EmailRowName);
    void CloseEscapeMenuAndResumeGame();
    void Request_AddNoteToJournal(FName EmailRowName);
    void ReceiveTick(float DeltaSeconds);
    void Request_ContinenceReduction(TEnumAsByte<ECriticalityLevels::Type> SuccessLevel);
    void Client_ForceNewSoundtrack(class USoundBase* NewSoundtrackMusic, bool FadeMusicIn);
    void Cutscene_FadeToBlack(double FadeDuration);
    void Client_ForceMuteAllNPCs_Destructive();
    void SaveCharacter();
    void Client_DisplayTutorialHint(FName DataTableRow);
    void Client_DisplayBetaNotice();
    void Request_CompleteRecipeResearch(FName RecipeRowName);
    void OnLevelLoaded_Event(class ULevelStreaming* Level);
    void OnLevelVisibilityUpdated_Event(class ULevelStreaming* Level, bool bVisible);
    void OnLevelUnloaded_Event(class ULevelStreaming* Level);
    void ToggleLoadingScreen(bool bShow);
    void OnInputTypeChanged(bool bUsingGamepad);
    void Local_Try_FinishHoldInteractionA();
    void Client_ToggleContinenceMinigame(bool Show);
    void Client_AddSuddenDeathTimer(FBuffDebuffRowHandle BuffRow, double MaxTime);
    void SetHardwareCursor(bool NewValue);
    void PushToTalkEnabledCallback(bool NewValue);
    void MicrophoneVolumeCallback(float NewValue);
    void MicrophoneLoopbackCallback(bool NewValue);
    void Request_ResetAllVOIP();
    void Client_PlayNPCRadio(TSoftObjectPtr<UDialogueWave> CueToPlay, FVector Location, FName NarrativeRow);
    void BndEvt__Abiotic_PlayerController_NPCRadioAudio_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature();
    void Request_ApplyDragDrop(FInventorySlotSelected_Struct IncomingItemSlot, TEnumAsByte<E_InventorySlotType::Type> IncomingSlotType, FInventorySlotSelected_Struct ItemSlotToCheck, TEnumAsByte<E_InventorySlotType::Type> SlotTypeToCheck, bool IsSplitStack, int32 StackSize, TEnumAsByte<E_ItemDragDropOutcome::Type> LocalOutcome);
    void Request_SplitStackDrop(const FInventorySlotSelected_Struct& ItemSlot, int32 StackSize);
    void Request_PickupMoney(FInventorySlotSelected_Struct ItemSlot);
    void Local_WaitForLocalPlayerReplication();
    void Request_ConfirmCharacterReplication();
    void ForceCloseTextChat();
    void Local_TogglePager();
    void Client_ForceControlRotation(FRotator InRotation);
    void ReEnableStatupFade();
    void Client_CancelNPCRadio(TSoftObjectPtr<UDialogueWave> LastCue);
    void Request_DamageSelf(float Damage, FName HitBoneName, TSubclassOf<class UDamageType> DamageType);
    void Request_ChangeFatigue(double Value);
    void Request_SaveCustomizationSetting(class ACharacterCustomization_BP_C* CharacterCustomizationRef);
    void DelayedVoiceUpdate();
    void OnInventoryUpdated(class UAbiotic_InventoryComponent_C* Inventory);
    void OnHotbarUpdated(class UAbiotic_InventoryComponent_C* Inventory);
    void Request_SortInventory(class UAbiotic_InventoryComponent_C* Inventory);
    void Ctrl Held Update();
    void Request_ToggleFavoriteSlot(int32 SlotIndex, bool Favorited);
    void Request_DumpNPCInfo();
    void Request_ServerCommand(FString Command);
    void OnDetectAnyInput(const FKey& InKey);
    void OnAchievementUnlocked_Event(FAchievementRowHandle Achievement);
    void Input Changed(bool bUsingGamepad);
    void Client_DisplayTutorialPanel(const FName& TutorialPanelRow);
    void ExecuteUbergraph_Abiotic_PlayerController(int32 EntryPoint);
    void ItemDragFinished__DelegateSignature();
    void ItemDragStarted__DelegateSignature(TEnumAsByte<E_InventorySlotType::Type> Item Type);
    void HeldInteractEnded__DelegateSignature();
    void HeldInteractStarted__DelegateSignature(double InteractionDuration);
}; // Size: 0x1178

#endif
