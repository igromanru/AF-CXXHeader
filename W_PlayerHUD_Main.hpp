#ifndef UE4SS_SDK_W_PlayerHUD_Main_HPP
#define UE4SS_SDK_W_PlayerHUD_Main_HPP

class UW_PlayerHUD_Main_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* OverlayRedDamagePulse;                                    // 0x02E8 (size: 0x8)
    class UWidgetAnimation* PulseBedWidget;                                           // 0x02F0 (size: 0x8)
    class UWidgetAnimation* DurabilityWarning;                                        // 0x02F8 (size: 0x8)
    class UWidgetAnimation* FlashJumpCDText;                                          // 0x0300 (size: 0x8)
    class UWidgetAnimation* FadeFromBlack;                                            // 0x0308 (size: 0x8)
    class UWidgetAnimation* FadeInRadio;                                              // 0x0310 (size: 0x8)
    class UWidgetAnimation* FadeInDream;                                              // 0x0318 (size: 0x8)
    class UWidgetAnimation* PulseBrokenText;                                          // 0x0320 (size: 0x8)
    class UWidgetAnimation* FadeInJournalIcon;                                        // 0x0328 (size: 0x8)
    class UWidgetAnimation* CutsceneFadeHUD;                                          // 0x0330 (size: 0x8)
    class UWidgetAnimation* PulseStaminaBar;                                          // 0x0338 (size: 0x8)
    class UCanvasPanel* BigTutorialPanel;                                             // 0x0340 (size: 0x8)
    class UImage* Bleeding_Head;                                                      // 0x0348 (size: 0x8)
    class UImage* Bleeding_LeftArm;                                                   // 0x0350 (size: 0x8)
    class UImage* Bleeding_LeftLeg;                                                   // 0x0358 (size: 0x8)
    class UImage* Bleeding_RightArm;                                                  // 0x0360 (size: 0x8)
    class UImage* Bleeding_RightLeg;                                                  // 0x0368 (size: 0x8)
    class UImage* Bleeding_Torso;                                                     // 0x0370 (size: 0x8)
    class UW_HUD_PlayerConditionBar_C* ConditionBar_Hunger;                           // 0x0378 (size: 0x8)
    class UW_HUD_PlayerConditionBar_C* ConditionBar_Thirst;                           // 0x0380 (size: 0x8)
    class UBorder* DamageFlashWidget;                                                 // 0x0388 (size: 0x8)
    class UTextBlock* DBNO_BleedoutText;                                              // 0x0390 (size: 0x8)
    class UTextBlock* DBNO_NoticeText;                                                // 0x0398 (size: 0x8)
    class UTextBlock* DBNO_RespawnText;                                               // 0x03A0 (size: 0x8)
    class UW_Keybind_C* DBNOKeybind;                                                  // 0x03A8 (size: 0x8)
    class UScaleBox* DBNOKeybindScaleBox;                                             // 0x03B0 (size: 0x8)
    class UTextBlock* DEBUG_LevelStream;                                              // 0x03B8 (size: 0x8)
    class UTextBlock* DEBUG_NavMesh;                                                  // 0x03C0 (size: 0x8)
    class UTextBlock* DebugBrokenText;                                                // 0x03C8 (size: 0x8)
    class UImage* EyeLid_Bottom;                                                      // 0x03D0 (size: 0x8)
    class UImage* EyeLid_Top;                                                         // 0x03D8 (size: 0x8)
    class UBorder* FadeInWidget;                                                      // 0x03E0 (size: 0x8)
    class UHorizontalBox* Hbox_Gadgets;                                               // 0x03E8 (size: 0x8)
    class UImage* HeadIndicator;                                                      // 0x03F0 (size: 0x8)
    class UVerticalBox* HealthArrowVBox;                                              // 0x03F8 (size: 0x8)
    class UVerticalBox* HealthArrowVBox_Down;                                         // 0x0400 (size: 0x8)
    class UProgressBar* HealthBar;                                                    // 0x0408 (size: 0x8)
    class UImage* HealthHeartIcon;                                                    // 0x0410 (size: 0x8)
    class UImage* Icon_Inventory;                                                     // 0x0418 (size: 0x8)
    class UImage* Icon_RadialWheel_Gestures;                                          // 0x0420 (size: 0x8)
    class UImage* Icon_RadialWheel_Health;                                            // 0x0428 (size: 0x8)
    class UImage* icon_shield;                                                        // 0x0430 (size: 0x8)
    class UImage* icon_watch;                                                         // 0x0438 (size: 0x8)
    class UImage* Journal_Icon;                                                       // 0x0440 (size: 0x8)
    class UW_Keybind_C* JournalPrompt;                                                // 0x0448 (size: 0x8)
    class UImage* JumpCDIcon;                                                         // 0x0450 (size: 0x8)
    class UTextBlock* JumpCDText;                                                     // 0x0458 (size: 0x8)
    class UW_Keybind_C* Keybind_Backpack;                                             // 0x0460 (size: 0x8)
    class UW_Keybind_C* Keybind_Emote;                                                // 0x0468 (size: 0x8)
    class UW_Keybind_C* Keybind_HealthPanel;                                          // 0x0470 (size: 0x8)
    class UW_Keybind_C* Keybind_Shield;                                               // 0x0478 (size: 0x8)
    class UW_Keybind_C* Keybind_Watch;                                                // 0x0480 (size: 0x8)
    class UW_PlayerHUD_BodyDiagram_C* OtherPlayerBodyDiagram;                         // 0x0488 (size: 0x8)
    class UW_Player_BuffBar_C* OtherPlayerBuffBar;                                    // 0x0490 (size: 0x8)
    class UImage* PagerIcon;                                                          // 0x0498 (size: 0x8)
    class UW_PlayerHUD_PinnedRecipesList_C* PinnedRecipesList;                        // 0x04A0 (size: 0x8)
    class UTextBlock* PlayerNameText;                                                 // 0x04A8 (size: 0x8)
    class UScaleBox* PopupScalebox;                                                   // 0x04B0 (size: 0x8)
    class UCanvasPanel* PrimaryHUDCanvas;                                             // 0x04B8 (size: 0x8)
    class UProgressBar* ProgressBar_BleedOut;                                         // 0x04C0 (size: 0x8)
    class UImage* SitIcon;                                                            // 0x04C8 (size: 0x8)
    class UImage* SleepMinigameDream;                                                 // 0x04D0 (size: 0x8)
    class UProgressBar* StaminaBar;                                                   // 0x04D8 (size: 0x8)
    class UImage* StaminaExertionBar;                                                 // 0x04E0 (size: 0x8)
    class UCanvasPanel* UIPopupPanel;                                                 // 0x04E8 (size: 0x8)
    class UVerticalBox* VBox_Itempickups;                                             // 0x04F0 (size: 0x8)
    class UW_AutosaveNotification_C* W_AutosaveNotification_106;                      // 0x04F8 (size: 0x8)
    class UW_EscapeMenu_Main_C* W_EscapeMenu_Main;                                    // 0x0500 (size: 0x8)
    class UW_HUD_AmmoCounter_C* W_HUD_AmmoCounter;                                    // 0x0508 (size: 0x8)
    class UW_HUD_BuffBar_C* W_HUD_BuffBar;                                            // 0x0510 (size: 0x8)
    class UW_HUD_ContinenceMinigame_C* W_HUD_ContinenceMinigame;                      // 0x0518 (size: 0x8)
    class UW_HUD_Crosshair_C* W_HUD_Crosshair;                                        // 0x0520 (size: 0x8)
    class UW_HUD_DurabilityWarning_C* W_HUD_DurabilityWarning;                        // 0x0528 (size: 0x8)
    class UW_HUD_GadgetBar_C* W_HUD_GadgetBar_ActiveFlashlight;                       // 0x0530 (size: 0x8)
    class UW_HUD_GadgetBar_C* W_HUD_GadgetBar_CrouchRoll;                             // 0x0538 (size: 0x8)
    class UW_HUD_GadgetBar_C* W_HUD_GadgetBar_GeigerCounter;                          // 0x0540 (size: 0x8)
    class UW_HUD_GadgetBar_C* W_HUD_GadgetBar_Jetpack;                                // 0x0548 (size: 0x8)
    class UW_HUD_GadgetBar_C* W_HUD_GadgetBar_Oxygen;                                 // 0x0550 (size: 0x8)
    class UW_HUD_GadgetBar_Shield_C* W_HUD_GadgetBar_Shield;                          // 0x0558 (size: 0x8)
    class UW_HUD_GadgetBar_C* W_HUD_GadgetBar_Stamina;                                // 0x0560 (size: 0x8)
    class UW_HUD_Location_C* W_HUD_Location;                                          // 0x0568 (size: 0x8)
    class UW_HUD_PinnedJournals_C* W_HUD_PinnedJournals;                              // 0x0570 (size: 0x8)
    class UW_HUD_QuestObjective_C* W_HUD_QuestObjective;                              // 0x0578 (size: 0x8)
    class UW_HUD_SkillUp_C* W_HUD_SkillUp;                                            // 0x0580 (size: 0x8)
    class UW_HUD_SleepingPlayers_C* W_HUD_SleepingPlayers;                            // 0x0588 (size: 0x8)
    class UW_HUD_TemperatureBar_C* W_HUD_TemperatureBar;                              // 0x0590 (size: 0x8)
    class UW_InventoryWeight_C* W_InventoryWeight;                                    // 0x0598 (size: 0x8)
    class UW_LevelLoadingScreen_C* W_LevelLoadingScreen;                              // 0x05A0 (size: 0x8)
    class UW_PlayerHUD_BodyDiagram_C* W_PlayerHUD_BodyDiagram;                        // 0x05A8 (size: 0x8)
    class UW_PlayerHUD_Hotbar_C* W_PlayerHUD_Hotbar;                                  // 0x05B0 (size: 0x8)
    class UW_PlayerHUD_ItemActionList_C* W_PlayerHUD_ItemActionList;                  // 0x05B8 (size: 0x8)
    class UW_PlayerInventory_Main_C* W_PlayerInventory_Main;                          // 0x05C0 (size: 0x8)
    class UW_RadioNotification_C* W_RadioNotification;                                // 0x05C8 (size: 0x8)
    class UW_RespawnOptions_C* W_RespawnOptions;                                      // 0x05D0 (size: 0x8)
    class UW_SkillXPGain_C* W_SkillXPGain;                                            // 0x05D8 (size: 0x8)
    class UW_SubtitleManager_C* W_SubtitleManager;                                    // 0x05E0 (size: 0x8)
    class UW_TextChatBox_C* W_TextChatBox;                                            // 0x05E8 (size: 0x8)
    class UW_UIPopupOverlay_C* W_UIPopupOverlay;                                      // 0x05F0 (size: 0x8)
    class UW_VoiceChat_PlayerList_C* W_VoiceChat_PlayerList;                          // 0x05F8 (size: 0x8)
    class UW_VOIPIndicator_C* W_VOIPIndicator;                                        // 0x0600 (size: 0x8)
    class UW_WaypointOverlay_C* W_WaypointOverlay;                                    // 0x0608 (size: 0x8)
    class UVerticalBox* Warning_VBox;                                                 // 0x0610 (size: 0x8)
    class AAbiotic_PlayerCharacter_C* OwningCharacter;                                // 0x0618 (size: 0x8)
    FLinearColor DefaultHUDColor;                                                     // 0x0620 (size: 0x10)
    FTimerHandle HUD_BleedoutTimer;                                                   // 0x0630 (size: 0x8)
    FTimerHandle HoldTimer;                                                           // 0x0638 (size: 0x8)
    FText DBNO_Notice_Long;                                                           // 0x0640 (size: 0x10)
    FText Dead_Notice_Long;                                                           // 0x0650 (size: 0x10)
    FText DBNO_ItemAction_GiveUp;                                                     // 0x0660 (size: 0x10)
    FText Dead_ItemAction_Respawn;                                                    // 0x0670 (size: 0x10)
    double RespawnPenaltyDuration;                                                    // 0x0680 (size: 0x8)
    FLinearColor ErrorHUDColor;                                                       // 0x0688 (size: 0x10)
    TArray<class UW_Waypoint_Generic_C*> Waypoints;                                   // 0x0698 (size: 0x10)
    double LastHealthPercentage;                                                      // 0x06A8 (size: 0x8)
    class UW_PlayerHUD_InteractionPrompt_C* InteractButtonPrompt;                     // 0x06B0 (size: 0x8)
    TArray<class UW_HUD_ItemPickupNotify_C*> CurrentItemPickupNotifies;               // 0x06B8 (size: 0x10)
    FW_PlayerHUD_Main_CSetup Sleep Score Widget Setup Sleep Score Widget;             // 0x06C8 (size: 0x10)
    void Setup Sleep Score Widget(ESlateVisibility Set Visibility);
    FW_PlayerHUD_Main_CUpdate Sleep Minigame Scores Update Sleep Minigame Scores;     // 0x06D8 (size: 0x10)
    void Update Sleep Minigame Scores(int32 Score);
    FW_PlayerHUD_Main_CJournal Icon Update Journal Icon Update;                       // 0x06E8 (size: 0x10)
    void Journal Icon Update();
    TArray<FName> PendingTutorialTips;                                                // 0x06F8 (size: 0x10)
    TEnumAsByte<E_WaypointMode::Type> Current Waypoint Mode;                          // 0x0708 (size: 0x1)
    FW_PlayerHUD_Main_CPinnedRecipeUpdate PinnedRecipeUpdate;                         // 0x0710 (size: 0x10)
    void PinnedRecipeUpdate(FName RecipesToPin, bool UnpinAllRecipes);
    FW_PlayerHUD_Main_CUnpinnedButtonVisibilityUpdate UnpinnedButtonVisibilityUpdate; // 0x0720 (size: 0x10)
    void UnpinnedButtonVisibilityUpdate(bool Show);
    TSet<FName> PinnedRecipeList;                                                     // 0x0730 (size: 0x50)
    TMap<class FUIPopupRowHandle, class UW_UIPopup_ParentBP_C*> ActiveUIPopups;       // 0x0780 (size: 0x50)
    TMap<class FUIPopupRowHandle, class EInventoryMode> PendingUIPopups;              // 0x07D0 (size: 0x50)
    bool DebugUIPopups;                                                               // 0x0820 (size: 0x1)
    TArray<FName> UIPopupsSeen;                                                       // 0x0828 (size: 0x10)
    class USoundBase* RecipeNotifyUnlockSound;                                        // 0x0838 (size: 0x8)
    class USoundBase* MapPickupSound;                                                 // 0x0840 (size: 0x8)
    FTimerHandle Timer_OxygenTick;                                                    // 0x0848 (size: 0x8)
    double OxygenTickStartedTime;                                                     // 0x0850 (size: 0x8)
    FW_PlayerHUD_Main_CBeaconWaypointUpdate BeaconWaypointUpdate;                     // 0x0858 (size: 0x10)
    void BeaconWaypointUpdate(FString WaypointStringData);

    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void GetDBNOGiveUpText(class AAbiotic_Character_ParentBP_C* Character, FText& DBNOText);
    void Timer_Tick_OxygenBar();
    void Get New Widget Screen Position(FVector2D ScreenPosition, double Multiplier From Center, FVector2D& New Position);
    bool IsHUDVisible?();
    void InitSeenUIPopups();
    void ProcessPendingUIPopups();
    void ClearInventoryUIPopups(EInventoryMode InventoryMode);
    void RemoveUIPopup(FUIPopupRowHandle PopupRow);
    void AddUIPopupToScreen(FUIPopupRowHandle PopupRow);
    void TryAddUIPopup(FUIPopupRowHandle PopupRow, bool ForceIfSeen);
    void DBNOWaypointUpdate(class UObject* OwningActor);
    FVector GetLinkedActorLocation(class AActor* Actor);
    void CreateNewItemPickupErrorNotify(FText WarningText, TSoftObjectPtr<UTexture2D> IconTexture);
    void OnBuffsUpdated(class UCharacterBuffComponent* BuffComponent);
    void AddSuddenDeathBar(FBuffDebuffRowHandle BuffRow, double MaxTime);
    void ToggleIngestionWarning(bool Show, bool Lethal, bool InteractA, TEnumAsByte<E_DangerousActPrompt::Type> DangerousActType);
    void FlashDurabilityText();
    void CreateNewItemPickupNotify(FName ItemRow, FText ItemName, int32 Count, TSoftObjectPtr<UTexture2D> IconTexture);
    void ClearEmptyItemPickupNotifies();
    void Tick_InteractionPromptPosition();
    void CalculateHealthDirection(double NewHealthPercentage, bool& SomethingVisible);
    void Tick_ProcessWaypoints();
    void RemoveWaypointsFromLinkedActor(class AActor* LinkedActor);
    void CreateNewWaypointOnHUD(class AActor* LinkedActor, FDataTableRowHandle WaypointData, double Duration);
    void RemoveRedundantWarningMessages(FText Text);
    void UpdatedBleedoutBar();
    void Toggle_DBNO_Bleedout(bool Start);
    void SetParentageAndColorizeHUDElements(bool JustColorize);
    void Update_DeadAlive(class AAbiotic_Character_ParentBP_C* Character);
    void DisplayWarningMessage(FText Text, TEnumAsByte<ECriticalityLevels::Type> Color);
    void UpdateSitSleepState();
    void Toggle_InteractionHold(bool StartAndShow, bool TypeA);
    void SkillLevelUp(TEnumAsByte<E_CharacterSkills::Type> Skill, int32 NewLevel);
    void ShowItemPickupNotification(FName ItemRow, int32 Count, const FAbiotic_InventoryChangeableDataStruct& ChangeableData);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void DisplayNewRecipeUnlock(FName RecipeRow);
    void FlashStaminaBar();
    void ChangeFatigueIndicators();
    void UpdateStamina();
    void UpdateBodyTemp();
    void DisplayNewLocation(FText LocationText);
    void InventoryWeightChanged();
    void DisplayNewJournalUnlock(FName JournalRow);
    void ZiplineStateChanged();
    void ShowTutorialHint(FName HintRowName);
    void PushTutorialPanelTip(const FName& TutorialPanelTipRow);
    void CloseCurrentTutorialPanelTip();
    void ToggleRadiationUI(bool On);
    void ToggleSleepMinigame(bool Active);
    void ShowMapPickupNotify();
    void Update_Respawning();
    void UpdateDBNOState(class AAbiotic_Character_ParentBP_C* Character);
    void UpdatePinnedRecipes(FName RecipesToPin, bool UnpinAllRecipes);
    void UpdateUnpinButtonVisibility(ESlateVisibility InVisibility);
    void StatContainerRefreshed();
    void UpdateRadioName(FName NarrativeRow);
    void Construct();
    void ToggleRadioVisuals(bool Show);
    void UpdateHealth();
    void BndEvt__W_PlayerHUD_Main_W_PlayerInventory_Main_K2Node_ComponentBoundEvent_0_InventoryModeRefreshed__DelegateSignature(EInventoryMode InventoryMode);
    void OnLevelLoadingUpdated(bool bIsLoading);
    void UpdateNavigationIndicator();
    void OnHungerRestored_Event(double CurrentHunger);
    void OnThirstRestored_Event(double CurrentThirst);
    void Update Skill XP Gained(TEnumAsByte<E_CharacterSkills::Type> Skill, double XP Gained);
    void DisplayNewCustomizationUnlock(FDataTableRowHandle CustomizationRow);
    void EnableLoadingBlackout();
    void DisableLoadingBlackout();
    void Journal Update Notify Icon Status();
    void CheckCrouchingStealthState();
    void Toggle_JumpCooldown(bool Hide);
    void ShowLowWeaponDurability(double Percentage);
    void OnSleepingPlayersUpdated_Event(int32 TotalPlayersSleeping);
    void OnShieldHeldUpdated_Event(bool ShieldHeld);
    void OnAutosave_Event();
    void DisplayNewCompendiumUnlock(FName CompendiumRow);
    void ShieldStateUpdated(bool ShieldHeld);
    void HUD_DisplayFishUnlock(FName FishRow);
    void UpdateGadgetBatteryLevel(double CurrentLevel, double MaxLevel, FString GadgetID);
    void ExecuteUbergraph_W_PlayerHUD_Main(int32 EntryPoint);
    void BeaconWaypointUpdate__DelegateSignature(FString WaypointStringData);
    void UnpinnedButtonVisibilityUpdate__DelegateSignature(bool Show);
    void PinnedRecipeUpdate__DelegateSignature(FName RecipesToPin, bool UnpinAllRecipes);
    void Journal Icon Update__DelegateSignature();
    void Update Sleep Minigame Scores__DelegateSignature(int32 Score);
    void Setup Sleep Score Widget__DelegateSignature(ESlateVisibility Set Visibility);
}; // Size: 0x868

#endif
