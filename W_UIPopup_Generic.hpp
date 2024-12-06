#ifndef UE4SS_SDK_W_UIPopup_Generic_HPP
#define UE4SS_SDK_W_UIPopup_Generic_HPP

class UW_UIPopup_Generic_C : public UW_UIPopup_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UWidgetAnimation* Bounce;                                                   // 0x0318 (size: 0x8)
    class USizeBox* AlignmentArrow;                                                   // 0x0320 (size: 0x8)
    class UButton* Button_CloseTip;                                                   // 0x0328 (size: 0x8)
    class UImage* Image_103;                                                          // 0x0330 (size: 0x8)
    class UImage* Image_298;                                                          // 0x0338 (size: 0x8)
    class UTextBlock* PopupText;                                                      // 0x0340 (size: 0x8)
    FVector2D DebugArrowAlignment;                                                    // 0x0348 (size: 0x10)

    void ApplyManualPopup();
    void ConfigureArrowAlignment(FVector2D Alignment);
    void ApplyPopupLocation(class UUserWidget* OwningWidget, class UCanvasPanelSlot* OwningSlot);
    void BndEvt__W_UIPopup_Weight_Button_CloseInventory_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_UIPopup_Generic(int32 EntryPoint);
}; // Size: 0x358

#endif
