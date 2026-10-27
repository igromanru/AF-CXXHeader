#ifndef UE4SS_SDK_Abiotic_GameInstance_HPP
#define UE4SS_SDK_Abiotic_GameInstance_HPP

class UAbiotic_GameInstance_C : public UAbioticGameInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    FString CustomizationSavePrefix;                                                  // 0x04C8 (size: 0x10)
    class UAbiotic_SettingsSave_C* SettingsSaveFile;                                  // 0x04D8 (size: 0x8)
    TArray<double> DefaultSkillXPTable;                                               // 0x04E0 (size: 0x10)
    double Skill1XP;                                                                  // 0x04F0 (size: 0x8)
    double SkillXPIncreasePerLevel;                                                   // 0x04F8 (size: 0x8)
    int32 MaxSkillLevel;                                                              // 0x0500 (size: 0x4)
    TArray<FName> PlayerCraftingExtraCostItems;                                       // 0x0508 (size: 0x10)
    class UAbiotic_CustomizationSave_C* CurrentCustomizationSave;                     // 0x0518 (size: 0x8)
    int32 SelectedCustomizationPreset;                                                // 0x0520 (size: 0x4)
    bool TraitDebugMode;                                                              // 0x0524 (size: 0x1)
    FAbiotic_GameInstance_CPersistentLevelLoaded PersistentLevelLoaded;               // 0x0528 (size: 0x10)
    void PersistentLevelLoaded(bool Success);
    double GlobalBuffTickRate;                                                        // 0x0538 (size: 0x8)
    bool HasSeenSplashThisSession;                                                    // 0x0540 (size: 0x1)
    double AutosaveInterval;                                                          // 0x0548 (size: 0x8)
    bool AllowAnalytics;                                                              // 0x0550 (size: 0x1)
    bool AssaultsEnabled;                                                             // 0x0551 (size: 0x1)
    TArray<UWidget*> UI_PopupStack;                                                   // 0x0558 (size: 0x10)
    bool HideWatermark;                                                               // 0x0568 (size: 0x1)
    FErrorMessageRowHandle PendingErrorMessage;                                       // 0x0570 (size: 0x10)
    FAbiotic_GameInstance_CSessionInviteAccepted SessionInviteAccepted;               // 0x0580 (size: 0x10)
    void SessionInviteAccepted(FBlueprintSessionResult Session);
    bool IgnoreNextErrorMessage;                                                      // 0x0590 (size: 0x1)
    bool HasPlayedTutorial;                                                           // 0x0591 (size: 0x1)
    bool IsLanSession;                                                                // 0x0592 (size: 0x1)
    bool IsSingleplayer;                                                              // 0x0593 (size: 0x1)
    int32 SessionMaxPlayers;                                                          // 0x0594 (size: 0x4)
    bool FirstTutorialPlaythrough;                                                    // 0x0598 (size: 0x1)
    TArray<UObject*> ReferencedAssets;                                                // 0x05A0 (size: 0x10)
    bool JustEndedTutorial;                                                           // 0x05B0 (size: 0x1)
    int32 RequiredWorldVersion;                                                       // 0x05B4 (size: 0x4)
    class UAbiotic_CustomizationUnlocks_Save_C* CustomizationUnlocksSaveFile;         // 0x05B8 (size: 0x8)
    double LastAutoSaveTime;                                                          // 0x05C0 (size: 0x8)
    bool PendingBackupSave;                                                           // 0x05C8 (size: 0x1)
    FAbiotic_GameInstance_COnlineLoginComplete OnlineLoginComplete;                   // 0x05D0 (size: 0x10)
    void OnlineLoginComplete(bool bWasSuccessful);
    bool HasLoggedIn;                                                                 // 0x05E0 (size: 0x1)
    class UW_MenuPopup_YesNo_C* RetryLoginWidget;                                     // 0x05E8 (size: 0x8)
    class UW_Menu_ReportPlayer_C* ActivePlayerReportWidget;                           // 0x05F0 (size: 0x8)
    TMap<FString, FString> CachedProfanityFilter;                                     // 0x05F8 (size: 0x50)
    TArray<FString> PendingProfanityText;                                             // 0x0648 (size: 0x10)
    TArray<FString> ProfanityTextCurrentlyFiltering;                                  // 0x0658 (size: 0x10)
    FBlueprintSessionResult CachedSessionInviteAccepted;                              // 0x0668 (size: 0x120)
    bool HasCachedSessionInvite;                                                      // 0x0788 (size: 0x1)
    FAbiotic_GameInstance_COnVignetteReset OnVignetteReset;                           // 0x0790 (size: 0x10)
    void OnVignetteReset(bool AtLeastOneVignetteDidNotReset);
    FAbiotic_GameInstance_COnCommandPinChanged OnCommandPinChanged;                   // 0x07A0 (size: 0x10)
    void OnCommandPinChanged();
    FAbiotic_GameInstance_COnShortcutsChanged OnShortcutsChanged;                     // 0x07B0 (size: 0x10)
    void OnShortcutsChanged();
    FAbioticModKickInfo PendingModKick;                                               // 0x07C0 (size: 0x48)
    FText ModsWarningPopup;                                                           // 0x0808 (size: 0x10)
    bool RelevantModListIsDownload;                                                   // 0x0818 (size: 0x1)

    void Display_ModsRequired_Popup(FText Text_Title, FText Text_Main, FText Text_Yes, FText Text_No, TArray<FModioModID>& ModList, TArray<int64>& SessionLoadOrder, bool ModListIsDownload, class UW_MenuPopup_ModsRequired_C*& Widget);
    void SetCustomShortcuts(TArray<FGameCommandShortcutData>& NewCustomShortcuts);
    void UnpinCommand(const FGameCommandRowHandle& Item);
    void PinCommand(const FGameCommandRowHandle& NewItem);
    void GetSessionMaxPlayers();
    void ClearCachedSessionInvite();
    void CacheSessionInvite(FBlueprintSessionResult Session);
    void GetAdminPassword(bool& PasswordEnabled, FString& OutPassword);
    void GetCachedProfanityFilter(FString TextToFilter, FString SafeText, FString& FilteredText);
    void Display_PlayerReport_Popup(FUniqueNetIdRepl PlayerId, class UW_Menu_ReportPlayer_C*& Widget);
    void Display_DirectConnect_Popup(class UW_MenuPopup_DirectConnect_C*& Widget);
    void SaveUserPinnedRecipes();
    void OnRemoteConsoleCommand(FString Command, const TArray<FString>& Arguments);
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
    void GetSessionSettings(int32 PlayerCount, FName StoryProgress, EModifiedRuleset ModifiedRuleset, bool Hardcore);
    void CheckNoticePopups();
    void UnregisterPopupFromStack(const class UWidget*& Widget, bool& FoundAndRemoved);
    void Display_Notice_Popup(FText Text_Main, FText Text_Title, FText Text_Detailed, FString ErrorCode, class UW_MenuPopup_YesNo_C*& Widget);
    void Display_DualTextInput_Popup(FText Text_InputHint, FText Text_InputDefault, FText SecondText_InputHint, FText SecondText_InputDefault, FText Text_Main, FText Text_Title, bool AllowSpecialCharacters, bool SecondIsPasswordInput, int32 CharacterLimit, class UW_MenuPopup_DualTextInputBox_C*& Widget);
    void Display_SingleTextInput_Popup(FText Text_InputHint, FText Text_InputDefault, FText Text_Main, FText Text_Title, bool AllowSpecialCharacters, bool IsPasswordInput, int32 CharacterLimit, class UW_MenuPopup_TextInputBox_C*& Widget);
    void Display_YesNo_Popup(FText Text_Title, FText Text_Main, FText Text_Yes, bool HideYesButton, FText Text_No, bool HideNoButton, double InputDelay, bool AutomateClickDisable, class UW_MenuPopup_YesNo_C*& Widget);
    void SaveUserFavouriteRecipes();
    void SaveWorldMetaData();
    void LoadWorldMetaData();
    void SaveWorldSave(FString LevelName);
    void DeleteWorldSave(FString WorldFolderName);
    void LoadWorldSave(FString Level, bool CreationOverride, bool& Success, bool& NewSave);
    void LoadInitialCustomizationSave(bool& Success, class UAbiotic_CustomizationSave_C*& CustomizationSave);
    void Initial_BuildSkillXPTable();
    void ApplyAllUserGameSettings();
    void LoadUserGameSettings();
    void SaveUserGameSettings();
    void SaveWorld_810445154955B0FA16E354A024ADB387(bool bSuccess);
    void SaveWorld_D9C44F164A58D831EB8FA381865935B7(bool bSuccess);
    void SaveWorld_310AF00149D4F25ED3B466A2D5615745(bool bSuccess);
    void SaveWorld_B391B06D4B834B21B9622EA33D4B6FD7(bool bSuccess);
    void OnFailure_A67BCBF34DB640B6FB5637BB47677053(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void OnSuccess_A67BCBF34DB640B6FB5637BB47677053(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void OnFailure_DBAD6CE24E6FAF9B27C33EB5A32059E1(const TArray<FModioModID>& ExtraMods, const TArray<FModioModID>& MissingMods, const TArray<int64>& ServerLoadOrder);
    void OnLocalOnlyModsNotAllowed_DBAD6CE24E6FAF9B27C33EB5A32059E1(const TArray<FModioModID>& ExtraMods, const TArray<FModioModID>& MissingMods, const TArray<int64>& ServerLoadOrder);
    void OnIncompatibleMods_DBAD6CE24E6FAF9B27C33EB5A32059E1(const TArray<FModioModID>& ExtraMods, const TArray<FModioModID>& MissingMods, const TArray<int64>& ServerLoadOrder);
    void OnExtraAndMissingMods_DBAD6CE24E6FAF9B27C33EB5A32059E1(const TArray<FModioModID>& ExtraMods, const TArray<FModioModID>& MissingMods, const TArray<int64>& ServerLoadOrder);
    void OnExtraMods_DBAD6CE24E6FAF9B27C33EB5A32059E1(const TArray<FModioModID>& ExtraMods, const TArray<FModioModID>& MissingMods, const TArray<int64>& ServerLoadOrder);
    void OnMissingMods_DBAD6CE24E6FAF9B27C33EB5A32059E1(const TArray<FModioModID>& ExtraMods, const TArray<FModioModID>& MissingMods, const TArray<int64>& ServerLoadOrder);
    void OnModsNotAllowed_DBAD6CE24E6FAF9B27C33EB5A32059E1(const TArray<FModioModID>& ExtraMods, const TArray<FModioModID>& MissingMods, const TArray<int64>& ServerLoadOrder);
    void OnSuccess_DBAD6CE24E6FAF9B27C33EB5A32059E1(const TArray<FModioModID>& ExtraMods, const TArray<FModioModID>& MissingMods, const TArray<int64>& ServerLoadOrder);
    void ReceiveInit();
    void MasterVolumeCallback(float NewValue);
    void SFXVolumeCallback(float NewValue);
    void MusicVolumeCallback(float NewValue);
    void AmbientVolumeCallback(float NewValue);
    void NPCDialogVolumeCallback(float NewValue);
    void MinimizedVolumeCallback(float NewValue);
    void ColorblindModeCallback(int32 NewValue);
    void ColorblindStrengthCallback(float NewValue);
    void UpdateColorVision(EColorVisionDeficiency Type, float Severity);
    void HandleNetworkError(TEnumAsByte<ENetworkFailure::Type> FailureType, bool bIsServer);
    void HandleTravelError(TEnumAsByte<ETravelFailure::Type> FailureType);
    void ClientWasKicked(const FText& KickReason);
    void OnSessionInviteAccepted(int32 LocalPlayerNum, FBPUniqueNetId PersonInvited, const FBlueprintSessionResult& SessionToJoin);
    void GammaCallback(float NewValue);
    void PlayerDialogVolumeCallback(float NewValue);
    void FootstepsVolumeCallback(float NewValue);
    void VOIPMicrophoneCallback(FString NewValue);
    void MouseSmoothingCallback(bool NewValue);
    void LanguageCallback(FString NewValue);
    void ClearCachedSavedData();
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
    void ShowTimezoneWarning();
    void YesClicked_Event();
    void OnOnlinePrivilegesLimited();
    void LimitedPrivilegesDone();
    void StartPlayerReport(FUniqueNetIdRepl PlayerId);
    void ReportNoClicked();
    void ReportYesClicked();
    void QueueProfanityText(const FString& TextToFilter);
    void CheckProfanityQueue();
    void OnOnlineStatusChanged(bool bIsOnline);
    void OnSessionInviteAcceptedWhileOffline();
    void SessionInviteOffline_NoOnline();
    void OnSessionInviteAcceptedFailed();
    void SessionInviteFailed_Ok();
    void SessionInviteOnline_GoOnline();
    void CheckCorruptionAfterSave();
    void SaveCorruption_Confirm();
    void NATTypeCallback(int32 NewValue);
    void OnPlayerHasActiveSanction(bool bIsPermenantSanction, FDateTime ExpirationTime);
    void BannedNotice_Closed();
    void DisplayDirectConnectModsNotice(const FAbioticModKickInfo& ModKickInfo);
    void ModDownloadsSuccess_Event(TArray<int64>& LoadOrder);
    void ModsDiff_No();
    void OnModDownloadsFailed(const TArray<FModioModID>& FailedMods, bool bInsufficientSpace);
    void ExecuteUbergraph_Abiotic_GameInstance(int32 EntryPoint);
    void OnShortcutsChanged__DelegateSignature();
    void OnCommandPinChanged__DelegateSignature();
    void OnVignetteReset__DelegateSignature(bool AtLeastOneVignetteDidNotReset);
    void OnlineLoginComplete__DelegateSignature(bool bWasSuccessful);
    void SessionInviteAccepted__DelegateSignature(FBlueprintSessionResult Session);
    void PersistentLevelLoaded__DelegateSignature(bool Success);
}; // Size: 0x819

#endif
