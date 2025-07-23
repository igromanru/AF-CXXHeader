#ifndef UE4SS_SDK_W_MenuPopup_TeleporterInput_HPP
#define UE4SS_SDK_W_MenuPopup_TeleporterInput_HPP

class UW_MenuPopup_TeleporterInput_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG_1;                                                               // 0x02E8 (size: 0x8)
    class UButton* Button_Accept;                                                     // 0x02F0 (size: 0x8)
    class UButton* Button_Cancel;                                                     // 0x02F8 (size: 0x8)
    class UButton* Button_Left;                                                       // 0x0300 (size: 0x8)
    class UButton* Button_Right;                                                      // 0x0308 (size: 0x8)
    class UImage* CraftCount_LeftArrow;                                               // 0x0310 (size: 0x8)
    class UImage* CraftCount_RightArrow;                                              // 0x0318 (size: 0x8)
    class UImage* Icon;                                                               // 0x0320 (size: 0x8)
    class UImage* Image_159;                                                          // 0x0328 (size: 0x8)
    class UEditableTextBox* TextBox_Line;                                             // 0x0330 (size: 0x8)
    FW_MenuPopup_TeleporterInput_CYesClicked YesClicked;                              // 0x0338 (size: 0x10)
    void YesClicked();
    FW_MenuPopup_TeleporterInput_CNoClicked NoClicked;                                // 0x0348 (size: 0x10)
    void NoClicked();
    int32 CurrentIndex;                                                               // 0x0358 (size: 0x4)

    void UpdateText();
    void ChagneCurrentIndex(bool Right);
    void Construct();
    void Destruct();
    void BndEvt__W_MenuPopup_TeleporterInput_Button_Right_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_MenuPopup_TeleporterInput_Button_Left_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_MenuPopup_TeleporterInput_Button_Accept_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_MenuPopup_TeleporterInput_Button_Cancel_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_W_MenuPopup_TeleporterInput(int32 EntryPoint);
    void NoClicked__DelegateSignature();
    void YesClicked__DelegateSignature();
}; // Size: 0x35C

#endif
