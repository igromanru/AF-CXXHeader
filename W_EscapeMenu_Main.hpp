#ifndef UE4SS_SDK_W_EscapeMenu_Main_HPP
#define UE4SS_SDK_W_EscapeMenu_Main_HPP

class UW_EscapeMenu_Main_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG_Image;                                                           // 0x02E8 (size: 0x8)
    class UButton* Button_CopyText;                                                   // 0x02F0 (size: 0x8)
    class UButton* Button_ShowPassword;                                               // 0x02F8 (size: 0x8)
    class UCanvasPanel* Esc_Menu;                                                     // 0x0300 (size: 0x8)
    class UTextBlock* GameJoinCode;                                                   // 0x0308 (size: 0x8)
    class UTextBlock* GamePausedText;                                                 // 0x0310 (size: 0x8)
    class UImage* Image;                                                              // 0x0318 (size: 0x8)
    class UImage* Image_275;                                                          // 0x0320 (size: 0x8)
    class UTextBlock* playerName;                                                     // 0x0328 (size: 0x8)
    class UImage* TestTube;                                                           // 0x0330 (size: 0x8)
    class UEditableTextBox* TextInput_Password;                                       // 0x0338 (size: 0x8)
    class UTextBlock* VOIPDebug_TextBlock;                                            // 0x0340 (size: 0x8)
    class UW_AdminMenu_C* W_AdminMenu;                                                // 0x0348 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_Invite;                               // 0x0350 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_LeaveFeedback;                        // 0x0358 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_LeaveGame;                            // 0x0360 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_PlayerManagement;                     // 0x0368 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_ReportBug;                            // 0x0370 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_Respawn;                              // 0x0378 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_Resume;                               // 0x0380 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_Settings;                             // 0x0388 (size: 0x8)
    class UW_PlayerCharacterManagement_C* W_PlayerCharacterManagement;                // 0x0390 (size: 0x8)
    class UW_MainMenuButton_C* W_ResetVOIP;                                           // 0x0398 (size: 0x8)
    class UW_SettingsMenu_C* W_SettingsMenu;                                          // 0x03A0 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_Escape;                                     // 0x03A8 (size: 0x8)
    bool SoloGame;                                                                    // 0x03B0 (size: 0x1)
    class UW_MenuPopup_YesNo_C* Popup;                                                // 0x03B8 (size: 0x8)
    FString URL_ReportBug;                                                            // 0x03C0 (size: 0x10)
    bool IsInTutorial;                                                                // 0x03D0 (size: 0x1)

    void WidgetAction_DPadDirection(TEnumAsByte<E_NavigationDirection::Type> Direction, bool& Handled);
    void WidgetAction_FaceTop(bool& Handled);
    void WidgetAction_CycleCrafting(bool Next, bool& Handled);
    void WidgetAction_CycleMenu(bool Next, bool& Handled);
    void WidgetAction_CloseMenu(bool& Handled);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void SaveWorld_3F292E7E47556980960F7FBBC9510C2F(bool bSuccess);
    void OnFailure_E43A5518460F721F7524759598770986();
    void OnSuccess_E43A5518460F721F7524759598770986();
    void OnCompleted_2A4DC303432976F189C78F8F74DBC094();
    void SetupPlayerName();
    void BndEvt__W_MainMenuButton_Resume_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void BndEvt__W_MainMenuButton_Settings_1_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature();
    void BndEvt__W_MainMenuButton_Settings_K2Node_ComponentBoundEvent_4_ButtonPressed__DelegateSignature();
    void BndEvt__W_MainMenuButton_Respawn_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature();
    void CloseEscapeMenu();
    void Quit_Stay();
    void Quit_Quit();
    void BndEvt__W_EscapeMenu_Main_W_MainMenuButton_ReportBug_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature();
    void Construct();
    void RemovePopup();
    void OpenUrl();
    void Destruct();
    void BndEvt__W_EscapeMenu_Main_W_ResetVOIP_K2Node_ComponentBoundEvent_5_ButtonPressed__DelegateSignature();
    void BndEvt__W_EscapeMenu_Main_W_MainMenuButton_Invite_K2Node_ComponentBoundEvent_6_ButtonPressed__DelegateSignature();
    void BndEvt__W_EscapeMenu_Main_W_MainMenuButton_Admin_K2Node_ComponentBoundEvent_7_ButtonPressed__DelegateSignature();
    void Unstick_No();
    void Unstick_Yes();
    void BndEvt__W_EscapeMenu_Main_W_MainMenuButton_LeaveFeedback_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature();
    void OpenURL_Feedback();
    void CheckGamePauseText();
    void BndEvt__W_EscapeMenu_Main_Button_ShowPassword_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_EscapeMenu_Main_Button_CopyText_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_W_EscapeMenu_Main(int32 EntryPoint);
}; // Size: 0x3D1

#endif
