#ifndef UE4SS_SDK_W_PopupPleaseWait_HPP
#define UE4SS_SDK_W_PopupPleaseWait_HPP

class UW_PopupPleaseWait_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG;                                                                 // 0x02E8 (size: 0x8)
    class UImage* Image;                                                              // 0x02F0 (size: 0x8)
    class UImage* Image_159;                                                          // 0x02F8 (size: 0x8)
    class UImage* RunningGuy;                                                         // 0x0300 (size: 0x8)
    class UTextBlock* TitleText;                                                      // 0x0308 (size: 0x8)
    FW_PopupPleaseWait_CYesClicked YesClicked;                                        // 0x0310 (size: 0x10)
    void YesClicked();
    FW_PopupPleaseWait_CNoClicked NoClicked;                                          // 0x0320 (size: 0x10)
    void NoClicked();
    FText Text_Title;                                                                 // 0x0330 (size: 0x10)
    int32 Frame;                                                                      // 0x0340 (size: 0x4)

    void WidgetAction_DPadDirection(TEnumAsByte<E_NavigationDirection::Type> Direction, bool& Handled);
    void WidgetAction_FaceTop(bool& Handled);
    void WidgetAction_CycleCrafting(bool Next, bool& Handled);
    void WidgetAction_CloseMenu(bool& Handled);
    void WidgetAction_CycleMenu(bool Next, bool& Handled);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Construct();
    void AnimateSprite();
    void ExecuteUbergraph_W_PopupPleaseWait(int32 EntryPoint);
    void NoClicked__DelegateSignature();
    void YesClicked__DelegateSignature();
}; // Size: 0x344

#endif
