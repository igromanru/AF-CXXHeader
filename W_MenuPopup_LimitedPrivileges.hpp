#ifndef UE4SS_SDK_W_MenuPopup_LimitedPrivileges_HPP
#define UE4SS_SDK_W_MenuPopup_LimitedPrivileges_HPP

class UW_MenuPopup_LimitedPrivileges_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG;                                                                 // 0x02E8 (size: 0x8)
    class UButton* Button_No;                                                         // 0x02F0 (size: 0x8)
    class UButton* Button_Yes;                                                        // 0x02F8 (size: 0x8)
    class UImage* Image;                                                              // 0x0300 (size: 0x8)
    class UImage* Image_159;                                                          // 0x0308 (size: 0x8)
    class UTextBlock* MainText;                                                       // 0x0310 (size: 0x8)
    class UTextBlock* NoCommunication;                                                // 0x0318 (size: 0x8)
    class UTextBlock* NoCrossplay;                                                    // 0x0320 (size: 0x8)
    class UTextBlock* NoOnlinePlay;                                                   // 0x0328 (size: 0x8)
    class UTextBlock* NoText;                                                         // 0x0330 (size: 0x8)
    class UTextBlock* TitleText;                                                      // 0x0338 (size: 0x8)
    class UTextBlock* YesText;                                                        // 0x0340 (size: 0x8)
    FW_MenuPopup_LimitedPrivileges_CYesClicked YesClicked;                            // 0x0348 (size: 0x10)
    void YesClicked();
    FW_MenuPopup_LimitedPrivileges_CNoClicked NoClicked;                              // 0x0358 (size: 0x10)
    void NoClicked();
    FText Text_Yes;                                                                   // 0x0368 (size: 0x10)
    FText Text_No;                                                                    // 0x0378 (size: 0x10)
    FText Text_Main;                                                                  // 0x0388 (size: 0x10)
    FText Text_Title;                                                                 // 0x0398 (size: 0x10)
    bool HideYesButton;                                                               // 0x03A8 (size: 0x1)
    bool HideNoButton;                                                                // 0x03A9 (size: 0x1)
    double DelayBeforeAllowingInput;                                                  // 0x03B0 (size: 0x8)
    bool CloseBlockedByDelay;                                                         // 0x03B8 (size: 0x1)
    int32 DelayTimeLeft;                                                              // 0x03BC (size: 0x4)
    FTimerHandle InputCountdown;                                                      // 0x03C0 (size: 0x8)
    bool AutomateClickDisable;                                                        // 0x03C8 (size: 0x1)
    bool DelayYesButtonOnly;                                                          // 0x03C9 (size: 0x1)

    void WidgetAction_DPadDirection(TEnumAsByte<E_NavigationDirection::Type> Direction, bool& Handled);
    void WidgetAction_FaceTop(bool& Handled);
    void WidgetAction_CycleCrafting(bool Next, bool& Handled);
    void WidgetAction_CloseMenu(bool& Handled);
    void WidgetAction_CycleMenu(bool Next, bool& Handled);
    void ShowHidePrivilegesLost();
    void UpdateButtonWithDelayTime(class UTextBlock* Text, FText OriginalText);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void BndEvt__W_BetaNotice_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_BetaNotice_Button_Enter_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void Destruct();
    void Cancel();
    void CountdownInputDelay();
    void ExecuteUbergraph_W_MenuPopup_LimitedPrivileges(int32 EntryPoint);
    void NoClicked__DelegateSignature();
    void YesClicked__DelegateSignature();
}; // Size: 0x3CA

#endif
