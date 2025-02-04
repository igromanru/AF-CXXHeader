#ifndef UE4SS_SDK_Abiotic_GameInstance_HPP
#define UE4SS_SDK_Abiotic_GameInstance_HPP

class UAbiotic_GameInstance_C : public UAbioticGameInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0390 (size: 0x8)
    FString CustomizationSavePrefix;                                                  // 0x0398 (size: 0x10)
    class UAbiotic_SettingsSave_C* SettingsSaveFile;                                  // 0x03A8 (size: 0x8)
    TArray<double> DefaultSkillXPTable;                                               // 0x03B0 (size: 0x10)
    double Skill1XP;                                                                  // 0x03C0 (size: 0x8)
    double SkillXPIncreasePerLevel;                                                   // 0x03C8 (size: 0x8)
    int32 MaxSkillLevel;                                                              // 0x03D0 (size: 0x4)
    TArray<FName> PlayerCraftingExtraCostItems;                                       // 0x03D8 (size: 0x10)
    class UAbiotic_CustomizationSave_C* CurrentCustomizationSave;                     // 0x03E8 (size: 0x8)
    int32 SelectedCustomizationPreset;                                                // 0x03F0 (size: 0x4)
    bool TraitDebugMode;                                                              // 0x03F4 (size: 0x1)
    FAbiotic_GameInstance_CPersistentLevelLoaded PersistentLevelLoaded;               // 0x03F8 (size: 0x10)
    void PersistentLevelLoaded(bool Success);
    double GlobalBuffTickRate;                                                        // 0x0408 (size: 0x8)
    bool HasSeenSplashThisSession;                                                    // 0x0410 (size: 0x1)
    double AutosaveInterval;                                                          // 0x0418 (size: 0x8)
    bool AllowAnalytics;                                                              // 0x0420 (size: 0x1)
    bool AssaultsEnabled;                                                             // 0x0421 (size: 0x1)
    TArray<class UWidget*> UI_PopupStack;                                             // 0x0428 (size: 0x10)
    bool HideWatermark;                                                               // 0x0438 (size: 0x1)
    TArray<class UDataTable*> DataTableReferences;                                    // 0x0440 (size: 0x10)
    FErrorMessageRowHandle PendingErrorMessage;                                       // 0x0450 (size: 0x20)
    FAbiotic_GameInstance_CSessionInviteAccepted SessionInviteAccepted;               // 0x0470 (size: 0x10)
    void SessionInviteAccepted(FBlueprintSessionResult Session);
    bool HasPlayedTutorial;                                                           // 0x0480 (size: 0x1)
    bool IsLanSession;                                                                // 0x0481 (size: 0x1)
    bool IsSingleplayer;                                                              // 0x0482 (size: 0x1)
    int32 SessionMaxPlayers;                                                          // 0x0484 (size: 0x4)
    bool FirstTutorialPlaythrough;                                                    // 0x0488 (size: 0x1)
    TArray<class UObject*> ReferencedAssets;                                          // 0x0490 (size: 0x10)
    bool JustEndedTutorial;                                                           // 0x04A0 (size: 0x1)
    int32 RequiredWorldVersion;                                                       // 0x04A4 (size: 0x4)
    class UAbiotic_CustomizationUnlocks_Save_C* CustomizationUnlocksSaveFile;         // 0x04A8 (size: 0x8)
    double LastAutoSaveTime;                                                          // 0x04B0 (size: 0x8)
    bool PendingBackupSave;                                                           // 0x04B8 (size: 0x1)
    FAbiotic_GameInstance_COnlineLoginComplete OnlineLoginComplete;                   // 0x04C0 (size: 0x10)
    void OnlineLoginComplete(bool bWasSuccessful);
    bool HasLoggedIn;                                                                 // 0x04D0 (size: 0x1)

    void Display_DirectConnect_Popup(class UW_MenuPopup_DirectConnect_C*& Widget);
    void SaveUserPinnedRecipes();
    bool OnRemoteConsoleCommand(FString Command, const TArray<FString>& Arguments);
    void LoadUserCustomizationUnlocks();
    void SaveUserCustomizationUnlocks();
    void CheckCustomizationSpecialConditions(FString Conditions, bool& Unlocked);
    void UnlockCustomization(FName RowName);
    void IsCustomizationRowUnlocked(const FName& RowName, bool& Unlocked);
    void DebugCycleCulture(bool Back);
    void ApplyDayDiscoveredToWorldSave(class UAbiotic_WorldSave_C* Save);
    void ClearUserUIPopupsSeen();
    void SaveUserUIPopupsSeen();
    void GetLevelGUID(FString& Level, FString& Guid);
    void ResetVignettes();
    void AttemptVOIPInit();
    void UpdatePushToTalk(bool Enabled);
    void UpdateVoipMicrophone();
    TArray<FSessionPropertyKeyPair> GetSessionSettings(int32 PlayerCount, FName StoryProgress, EModifiedRuleset ModifiedRuleset);
    void CheckNoticePopups();
    void UnregisterPopupFromStack(const class UWidget*& Widget, bool& FoundAndRemoved);
    void Display_Notice_Popup(FText Text_Main, FText Text_Title, FText Text_Detailed, FString ErrorCode, class UW_MenuPopup_YesNo_C*& Widget);
    void Display_DualTextInput_Popup(FText Text_InputHint, FText Text_InputDefault, FText SecondText_InputHint, FText SecondText_InputDefault, FText Text_Main, FText Text_Title, bool AllowSpecialCharacters, bool SecondIsPasswordInput, int32 CharacterLimit, class UW_MenuPopup_DualTextInputBox_C*& Widget);
    void Display_SingleTextInput_Popup(FText Text_InputHint, FText Text_InputDefault, FText Text_Main, FText Text_Title, bool AllowSpecialCharacters, bool IsPasswordInput, int32 CharacterLimit, class UW_MenuPopup_TextInputBox_C*& Widget);
    void Display_YesNo_Popup(FText Text_Title, FText Text_Main, FText Text_Yes, bool HideYesButton, FText Text_No, bool HideNoButton, double InputDelay, bool AutomateClickDisable, class UW_MenuPopup_YesNo_C*& Widget);
    void SaveUserFavouriteRecipes();
    void SaveWorldMetaData();
    class UAbiotic_WorldMetadataSave_C* LoadWorldMetaData();
    void SaveWorldSave(FString LevelName);
    void DeleteWorldSave(FString WorldFolderName);
    class UAbiotic_WorldSave_C* LoadWorldSave(FString Level, bool CreationOverride, bool& Success, bool& NewSave);
    void LoadInitialCustomizationSave(bool& Success, class UAbiotic_CustomizationSave_C*& CustomizationSave);
    void Initial_BuildSkillXPTable();
    void ApplyAllUserGameSettings();
    void LoadUserGameSettings();
    void SaveUserGameSettings();
    void SaveWorld_810445154955B0FA16E354A024ADB387(bool bSuccess);
    void SaveWorld_D9C44F164A58D831EB8FA381865935B7(bool bSuccess);
    void SaveWorld_310AF00149D4F25ED3B466A2D5615745(bool bSuccess);
    void MusicVolumeCallback(float NewValue);
    void AmbientVolumeCallback(float NewValue);
    void NPCDialogVolumeCallback(float NewValue);
    void SFXVolumeCallback(float NewValue);
    void MinimizedVolumeCallback(float NewValue);
    void ColorblindModeCallback(int32 NewValue);
    void ColorblindStrengthCallback(float NewValue);
    void UpdateColorVision(EColorVisionDeficiency Type, float Severity);
    void MasterVolumeCallback(float NewValue);
    void HandleNetworkError(TEnumAsByte<ENetworkFailure::Type> FailureType, bool bIsServer);
    void HandleTravelError(TEnumAsByte<ETravelFailure::Type> FailureType);
    void ClientWasKicked(const FText& KickReason);
    void OnSessionInviteAccepted(int32 LocalPlayerNum, FBPUniqueNetId PersonInvited, const FBlueprintSessionResult& SessionToJoin);
    void GammaCallback(float NewValue);
    void PlayerDialogVolumeCallback(float NewValue);
    void FootstepsVolumeCallback(float NewValue);
    void VOIPMicrophoneCallback(FString NewValue);
    void VOIPVolumeCallback(float NewValue);
    void MouseSmoothingCallback(bool NewValue);
    void LanguageCallback(FString NewValue);
    void ClearCachedSavedData();
    void ReceiveInit();
    void SaveTimer();
    void ForceSave();
    void UploadAchievementStats();
    void UpdateAutosaveTimestamp();
    void ShowFPSCallback(int32 NewValue);
    void AnalyticsEnableCallback(bool NewValue);
    void PagerVolumeCallback(float NewValue);
    void AntiAliasingMethodCallback(int32 NewValue);
    void EatDrinkSFXVolumeCallback(float NewValue);
    void HummingSFXVolumeCallback(float NewValue);
    void HighPitchSFXVolumeCallback(float NewValue);
    void BreathingSFXVolumeCallback(float NewValue);
    void RepetitiveSFXVolumeCallback(float NewValue);
    void SetNewMainMenuBackgroundLevel(FDataTableRowHandle BackgroundEntryRow);
    void ResolutionScaleCallback(float NewValue);
    void OnOnlineLoginComplete(bool bWasSuccessful, FString ErrorMessage);
    void RetryLogin();
    void SkipLoginSinglePlayer();
    void ExecuteUbergraph_Abiotic_GameInstance(int32 EntryPoint);
    void OnlineLoginComplete__DelegateSignature(bool bWasSuccessful);
    void SessionInviteAccepted__DelegateSignature(FBlueprintSessionResult Session);
    void PersistentLevelLoaded__DelegateSignature(bool Success);
}; // Size: 0x4D1

#endif
