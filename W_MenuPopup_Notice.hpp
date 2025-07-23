#ifndef UE4SS_SDK_W_MenuPopup_Notice_HPP
#define UE4SS_SDK_W_MenuPopup_Notice_HPP

class UW_MenuPopup_Notice_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG;                                                                 // 0x02E8 (size: 0x8)
    class UButton* Button_Cancel;                                                     // 0x02F0 (size: 0x8)
    class UTextBlock* CloseText;                                                      // 0x02F8 (size: 0x8)
    class UTextBlock* CodeText;                                                       // 0x0300 (size: 0x8)
    class UTextBlock* DetailedText;                                                   // 0x0308 (size: 0x8)
    class UImage* Image;                                                              // 0x0310 (size: 0x8)
    class UImage* Image_159;                                                          // 0x0318 (size: 0x8)
    class UTextBlock* MainText;                                                       // 0x0320 (size: 0x8)
    class UTextBlock* TitleText;                                                      // 0x0328 (size: 0x8)
    FW_MenuPopup_Notice_CYesClicked YesClicked;                                       // 0x0330 (size: 0x10)
    void YesClicked();
    FW_MenuPopup_Notice_CNoClicked NoClicked;                                         // 0x0340 (size: 0x10)
    void NoClicked();
    FText Text_Main;                                                                  // 0x0350 (size: 0x10)
    FText Text_Title;                                                                 // 0x0360 (size: 0x10)
    FText Text_Detailed;                                                              // 0x0370 (size: 0x10)
    FString ErrorCode;                                                                // 0x0380 (size: 0x10)

    void WidgetAction_DPadDirection(TEnumAsByte<E_NavigationDirection::Type> Direction, bool& Handled);
    void WidgetAction_FaceTop(bool& Handled);
    void WidgetAction_CycleCrafting(bool Next, bool& Handled);
    void WidgetAction_CloseMenu(bool& Handled);
    void WidgetAction_CycleMenu(bool Next, bool& Handled);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void BndEvt__W_BetaNotice_Button_Enter_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void Destruct();
    void ExecuteUbergraph_W_MenuPopup_Notice(int32 EntryPoint);
    void NoClicked__DelegateSignature();
    void YesClicked__DelegateSignature();
}; // Size: 0x390

#endif
