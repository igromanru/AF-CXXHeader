#ifndef UE4SS_SDK_W_ServerAdminMenu_HPP
#define UE4SS_SDK_W_ServerAdminMenu_HPP

class UW_ServerAdminMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UCanvasPanel* AdminMenu;                                                    // 0x02E8 (size: 0x8)
    class UWidgetSwitcher* AdminSwitcher;                                             // 0x02F0 (size: 0x8)
    class UTextBlock* Autosave_Text;                                                  // 0x02F8 (size: 0x8)
    class UImage* BG;                                                                 // 0x0300 (size: 0x8)
    class UTextBlock* BigTitle;                                                       // 0x0308 (size: 0x8)
    class UTextBlock* BigTitle_4;                                                     // 0x0310 (size: 0x8)
    class UButton* Button_ServerConsole;                                              // 0x0318 (size: 0x8)
    class UButton* Button_ShowPassword;                                               // 0x0320 (size: 0x8)
    class UButton* Button_ShowPassword_1;                                             // 0x0328 (size: 0x8)
    class UButton* Button_Yes;                                                        // 0x0330 (size: 0x8)
    class UCircularThrobber* CircularThrobber_0;                                      // 0x0338 (size: 0x8)
    class UEditableTextBox* EditableTextInput;                                        // 0x0340 (size: 0x8)
    class UTextBlock* ErrorText;                                                      // 0x0348 (size: 0x8)
    class UImage* Image;                                                              // 0x0350 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0358 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0360 (size: 0x8)
    class UImage* Image_275;                                                          // 0x0368 (size: 0x8)
    class UTextBlock* MainText;                                                       // 0x0370 (size: 0x8)
    class UEditableTextBox* TextInput_Password;                                       // 0x0378 (size: 0x8)
    class UEditableTextBox* TextInput_ServerConsole;                                  // 0x0380 (size: 0x8)
    class UTextBlock* TitleText;                                                      // 0x0388 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_ForceSave;                            // 0x0390 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_Refresh;                              // 0x0398 (size: 0x8)
    class UW_MenuTitleBig_C* W_MenuTitleBig;                                          // 0x03A0 (size: 0x8)
    class UW_MenuTitleBig_C* W_MenuTitleBig_1;                                        // 0x03A8 (size: 0x8)
    class UW_NPCDebugInfo_C* W_NPCDebugInfo;                                          // 0x03B0 (size: 0x8)
    class UW_PlayerList_C* W_PlayerList;                                              // 0x03B8 (size: 0x8)
    class UW_PlayerList_C* W_PlayerList_Banned;                                       // 0x03C0 (size: 0x8)
    TArray<class UW_SettingsPanel_C*> SettingsPanels;                                 // 0x03C8 (size: 0x10)

    void RefreshEntireUI_State();
    void GetGameInst(class UAbiotic_GameInstance_C*& ABF_Game_Instance);
    void SaveAllSettings();
    void BndEvt__W_WorldSelectMenu_Button_ShowPassword_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void Construct();
    void BndEvt__W_AdminMenu_W_MainMenuButton_Refresh_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void BndEvt__W_AdminMenu_W_MainMenuButton_ForceSave_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__W_AdminMenu_Button_ServerConsole_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_ServerAdminMenu_Button_Yes_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void ResetAttempt();
    void OnAdminGranted_Event();
    void ExecuteUbergraph_W_ServerAdminMenu(int32 EntryPoint);
}; // Size: 0x3D8

#endif
