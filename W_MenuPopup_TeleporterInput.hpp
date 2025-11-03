#ifndef UE4SS_SDK_W_MenuPopup_TeleporterInput_HPP
#define UE4SS_SDK_W_MenuPopup_TeleporterInput_HPP

class UW_MenuPopup_TeleporterInput_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG_1;                                                               // 0x02E8 (size: 0x8)
    class UButton* Button_Accept;                                                     // 0x02F0 (size: 0x8)
    class UButton* Button_Cancel;                                                     // 0x02F8 (size: 0x8)
    class UImage* Image_159;                                                          // 0x0300 (size: 0x8)
    class UScrollBox* Scrollbox_Options;                                              // 0x0308 (size: 0x8)
    class UEditableTextBox* TextBox_Line;                                             // 0x0310 (size: 0x8)
    class UW_Keybind_C* W_Keybind;                                                    // 0x0318 (size: 0x8)
    class UW_Keybind_C* W_Keybind_1;                                                  // 0x0320 (size: 0x8)
    FW_MenuPopup_TeleporterInput_CYesClicked YesClicked;                              // 0x0328 (size: 0x10)
    void YesClicked();
    FW_MenuPopup_TeleporterInput_CNoClicked NoClicked;                                // 0x0338 (size: 0x10)
    void NoClicked();
    int32 CurrentIndex;                                                               // 0x0348 (size: 0x4)
    class UW_TeleporterTag_Option_C* LastSelectedWidget;                              // 0x0350 (size: 0x8)
    bool DirectionalKeyPressed;                                                       // 0x0358 (size: 0x1)
    TEnumAsByte<E_NavigationDirection::Type> DirectionalKeyDirection;                 // 0x0359 (size: 0x1)

    void WidgetAction_CloseMenu(bool& Handled);
    void WidgetAction_CycleMenu(bool Next, bool& Handled);
    void WidgetAction_CycleCrafting(bool Next, bool& Handled);
    void WidgetAction_FaceTop(bool& Handled);
    void WidgetAction_DPadDirection(TEnumAsByte<E_NavigationDirection::Type> Direction, bool& Handled);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void UpdateText(int32 CurrentIndex);
    void ChangeCurrentIndex(bool Right);
    void Construct();
    void Destruct();
    void BndEvt__W_MenuPopup_TeleporterInput_Button_Accept_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_MenuPopup_TeleporterInput_Button_Cancel_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void OnDirectionalKeyHeld();
    void ExecuteUbergraph_W_MenuPopup_TeleporterInput(int32 EntryPoint);
    void NoClicked__DelegateSignature();
    void YesClicked__DelegateSignature();
}; // Size: 0x35A

#endif
