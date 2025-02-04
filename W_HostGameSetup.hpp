#ifndef UE4SS_SDK_W_HostGameSetup_HPP
#define UE4SS_SDK_W_HostGameSetup_HPP

class UW_HostGameSetup_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* BigTitle;                                                       // 0x02E8 (size: 0x8)
    class UTextBlock* BigTitle_1;                                                     // 0x02F0 (size: 0x8)
    class UTextBlock* BigTitle_2;                                                     // 0x02F8 (size: 0x8)
    class UTextBlock* BigTitle_3;                                                     // 0x0300 (size: 0x8)
    class UTextBlock* BigTitle_4;                                                     // 0x0308 (size: 0x8)
    class UTextBlock* BigTitle_5;                                                     // 0x0310 (size: 0x8)
    class UW_MenuTitleBig_C* BigTitle_Advanced;                                       // 0x0318 (size: 0x8)
    class UW_MenuTitleBig_C* BigTitle_Multiplayer;                                    // 0x0320 (size: 0x8)
    class UW_Settings_Boolean_C* Boolean_LANServer;                                   // 0x0328 (size: 0x8)
    class UW_Settings_Boolean_C* Boolean_SingleplayerOnly;                            // 0x0330 (size: 0x8)
    class UW_MainMenuButton_C* Button_SandboxSettings;                                // 0x0338 (size: 0x8)
    class UButton* Button_ShowPassword;                                               // 0x0340 (size: 0x8)
    class UImage* Image_275;                                                          // 0x0348 (size: 0x8)
    class UHorizontalBox* MP_HBox_1;                                                  // 0x0350 (size: 0x8)
    class UHorizontalBox* MP_HBox_2;                                                  // 0x0358 (size: 0x8)
    class UHorizontalBox* MP_HBox_3;                                                  // 0x0360 (size: 0x8)
    class USettingRow_C* SettingRow_Difficulty;                                       // 0x0368 (size: 0x8)
    class UW_Settings_SliderBar_C* Slider_MaxPlayers;                                 // 0x0370 (size: 0x8)
    class UEditableTextBox* TextInput_Password;                                       // 0x0378 (size: 0x8)
    class UEditableTextBox* TextInput_ServerName;                                     // 0x0380 (size: 0x8)
    class UEditableTextBox* TextInput_WorldName;                                      // 0x0388 (size: 0x8)
    int32 Character_Limit;                                                            // 0x0390 (size: 0x4)
    int32 Character_Limit_Password;                                                   // 0x0394 (size: 0x4)
    class UW_MenuPopup_YesNo_C* CurrentPopup;                                         // 0x0398 (size: 0x8)
    FW_HostGameSetup_CSandboxSettingsPressed SandboxSettingsPressed;                  // 0x03A0 (size: 0x10)
    void SandboxSettingsPressed();
    TArray<FString> ABC_Strings;                                                      // 0x03B0 (size: 0x10)

    void SetupSoloOrLanOnly();
    void SetupDifficultyButtons();
    void CheckForSpecialCharacters(FString SourceString, bool& FoundBadCharacter);
    void GetParentHostScreen(class UW_MainMenu_HostGame_C*& W_MainMenu_HostGame);
    void Construct();
    void LAN_Toggled(bool bIsChecked);
    void Singleplayer_Toggled(bool bIsChecked);
    void MaxPlayersChanged(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__W_HostGameSetup_Button_ShowPassword_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__W_HostGameSetup_Button_ShowPassword_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__W_HostGameSetup_TextInput_WorldName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__W_HostGameSetup_W_MainMenuButton_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature();
    void HostWarning_Sandbox_Cancel();
    void HostWarning_Sandbox_Continue();
    void BndEvt__W_HostGameSetup_TextInput_Password_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void ExecuteUbergraph_W_HostGameSetup(int32 EntryPoint);
    void SandboxSettingsPressed__DelegateSignature();
}; // Size: 0x3C0

#endif
