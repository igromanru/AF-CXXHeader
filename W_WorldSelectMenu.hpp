#ifndef UE4SS_SDK_W_WorldSelectMenu_HPP
#define UE4SS_SDK_W_WorldSelectMenu_HPP

class UW_WorldSelectMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* HostPanelPopIn;                                           // 0x02E8 (size: 0x8)
    class UTextBlock* BigTitle_1;                                                     // 0x02F0 (size: 0x8)
    class UTextBlock* BigTitle_2;                                                     // 0x02F8 (size: 0x8)
    class UTextBlock* BigTitle_3;                                                     // 0x0300 (size: 0x8)
    class UTextBlock* BigTitle_4;                                                     // 0x0308 (size: 0x8)
    class UTextBlock* BigTitle_5;                                                     // 0x0310 (size: 0x8)
    class UW_Settings_Boolean_C* Boolean_LANServer;                                   // 0x0318 (size: 0x8)
    class UW_Settings_Boolean_C* Boolean_SingleplayerOnly;                            // 0x0320 (size: 0x8)
    class UButton* Button_ShowPassword;                                               // 0x0328 (size: 0x8)
    class UHorizontalBox* HBox_LAN;                                                   // 0x0330 (size: 0x8)
    class UImage* HostBG;                                                             // 0x0338 (size: 0x8)
    class UCanvasPanel* HostPanel;                                                    // 0x0340 (size: 0x8)
    class UImage* Image;                                                              // 0x0348 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0350 (size: 0x8)
    class UImage* Image_85;                                                           // 0x0358 (size: 0x8)
    class UImage* Image_273;                                                          // 0x0360 (size: 0x8)
    class UImage* Image_275;                                                          // 0x0368 (size: 0x8)
    class UImage* Image_510;                                                          // 0x0370 (size: 0x8)
    class UBackgroundBlur* IncompatibleBlur;                                          // 0x0378 (size: 0x8)
    class UCircularThrobber* LoadingThrobber;                                         // 0x0380 (size: 0x8)
    class UW_Settings_SliderBar_C* Slider_MaxPlayers;                                 // 0x0388 (size: 0x8)
    class UEditableTextBox* TextInput_Password;                                       // 0x0390 (size: 0x8)
    class UEditableTextBox* TextInput_ServerName;                                     // 0x0398 (size: 0x8)
    class UVerticalBox* VBOX_Multiplayer;                                             // 0x03A0 (size: 0x8)
    class UW_MainMenuButton_Strict_C* W_MainMenuButton_DeleteSaveNew;                 // 0x03A8 (size: 0x8)
    class UW_MainMenuButton_Strict_C* W_MainMenuButton_RemoveFromCloudNew;            // 0x03B0 (size: 0x8)
    class UW_MainMenuButton_Strict_C* W_MainMenuButton_RestoreSave;                   // 0x03B8 (size: 0x8)
    class UW_MainMenuButton_Strict_C* W_MainMenuButton_SaveDirNew;                    // 0x03C0 (size: 0x8)
    class UW_MainMenuButton_Strict_C* W_MainMenuButton_WorldSettingsNew;              // 0x03C8 (size: 0x8)
    class UScrollBox* WorldListScrollBox;                                             // 0x03D0 (size: 0x8)
    class UListView* WorldListView;                                                   // 0x03D8 (size: 0x8)
    class UTextBlock* WorldNameText;                                                  // 0x03E0 (size: 0x8)
    class UTextBlock* WorldUptimeText;                                                // 0x03E8 (size: 0x8)
    class UWorldEntryItem* SelectedWorld;                                             // 0x03F0 (size: 0x8)
    class UWidget* LastPopupWidget;                                                   // 0x03F8 (size: 0x8)
    bool HostLAN;                                                                     // 0x0400 (size: 0x1)
    int32 MaxPlayers;                                                                 // 0x0404 (size: 0x4)
    bool SingleplayerOnly;                                                            // 0x0408 (size: 0x1)
    FW_WorldSelectMenu_CSandboxSettingsPressed SandboxSettingsPressed;                // 0x0410 (size: 0x10)
    void SandboxSettingsPressed(FString FolderName);
    int32 Character_Limit;                                                            // 0x0420 (size: 0x4)
    TArray<FString> ABC_Strings;                                                      // 0x0428 (size: 0x10)

    void SetupSoloOrLanOnly();
    void ApplyDateTimeToWorldEntries(TArray<class UWorldEntryItem*>& WorldEntries);
    void AttemptSaveRestore(bool& Success, FString& ErrorMessage);
    void SavePreferences();
    void LoadPreferences();
    void SelectNewWorldEntry(class UWorldEntryItem* World);
    void ToggleLoadingIndicator(bool Loading);
    void Add or Refresh World Save Entries(bool Refresh?);
    void Construct();
    void DeleteSave();
    void CancelDelete();
    void ToggleHostButtons(bool Enabled);
    void RemovePopup();
    void LAN_Toggled(bool bIsChecked);
    void Singleplayer_Toggled(bool bIsChecked);
    void MaxPlayersChanged(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__W_WorldSelectMenu_Button_ShowPassword_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__W_WorldSelectMenu_Button_ShowPassword_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__W_WorldSelectMenu_WorldListView_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
    void BndEvt__W_WorldSelectMenu_W_MainMenuButton_DeleteSaveNew_K2Node_ComponentBoundEvent_5_ButtonPressed__DelegateSignature();
    void BndEvt__W_WorldSelectMenu_W_MainMenuButton_SaveDirNew_K2Node_ComponentBoundEvent_6_ButtonPressed__DelegateSignature();
    void BndEvt__W_WorldSelectMenu_W_MainMenuButton_RestoreSave_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void BeginSaveRestore();
    void RestoreSave_No();
    void RestoreSave_Yes();
    void SaveRestore_ReportBug();
    void BndEvt__W_WorldSelectMenu_W_MainMenuButton_WorldSettingsNew_K2Node_ComponentBoundEvent_4_ButtonPressed__DelegateSignature();
    void BndEvt__W_WorldSelectMenu_TextInput_Password_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void ExecuteUbergraph_W_WorldSelectMenu(int32 EntryPoint);
    void SandboxSettingsPressed__DelegateSignature(FString FolderName);
}; // Size: 0x438

#endif
