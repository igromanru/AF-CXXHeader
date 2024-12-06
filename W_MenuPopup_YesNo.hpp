#ifndef UE4SS_SDK_W_MenuPopup_YesNo_HPP
#define UE4SS_SDK_W_MenuPopup_YesNo_HPP

class UW_MenuPopup_YesNo_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG;                                                                 // 0x02E8 (size: 0x8)
    class UButton* Button_No;                                                         // 0x02F0 (size: 0x8)
    class UButton* Button_Yes;                                                        // 0x02F8 (size: 0x8)
    class UImage* Image;                                                              // 0x0300 (size: 0x8)
    class UImage* Image_159;                                                          // 0x0308 (size: 0x8)
    class UTextBlock* MainText;                                                       // 0x0310 (size: 0x8)
    class UTextBlock* NoText;                                                         // 0x0318 (size: 0x8)
    class UTextBlock* TitleText;                                                      // 0x0320 (size: 0x8)
    class UTextBlock* YesText;                                                        // 0x0328 (size: 0x8)
    FW_MenuPopup_YesNo_CYesClicked YesClicked;                                        // 0x0330 (size: 0x10)
    void YesClicked();
    FW_MenuPopup_YesNo_CNoClicked NoClicked;                                          // 0x0340 (size: 0x10)
    void NoClicked();
    FText Text_Yes;                                                                   // 0x0350 (size: 0x10)
    FText Text_No;                                                                    // 0x0360 (size: 0x10)
    FText Text_Main;                                                                  // 0x0370 (size: 0x10)
    FText Text_Title;                                                                 // 0x0380 (size: 0x10)
    bool HideYesButton;                                                               // 0x0390 (size: 0x1)
    bool HideNoButton;                                                                // 0x0391 (size: 0x1)
    double DelayBeforeAllowingInput;                                                  // 0x0398 (size: 0x8)
    bool CloseBlockedByDelay;                                                         // 0x03A0 (size: 0x1)
    int32 DelayTimeLeft;                                                              // 0x03A4 (size: 0x4)
    FTimerHandle InputCountdown;                                                      // 0x03A8 (size: 0x8)

    void WidgetAction_CloseMenu(bool& Handled);
    void WidgetAction_CycleMenu(bool Next, bool& Handled);
    void UpdateButtonWithDelayTime(class UTextBlock* Text, FText OriginalText);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void BndEvt__W_BetaNotice_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_BetaNotice_Button_Enter_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void Destruct();
    void Cancel();
    void CountdownInputDelay();
    void ExecuteUbergraph_W_MenuPopup_YesNo(int32 EntryPoint);
    void NoClicked__DelegateSignature();
    void YesClicked__DelegateSignature();
}; // Size: 0x3B0

#endif
