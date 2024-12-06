#ifndef UE4SS_SDK_W_UIPopup_ParentBP_HPP
#define UE4SS_SDK_W_UIPopup_ParentBP_HPP

class UW_UIPopup_ParentBP_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    FUIPopupRowHandle PopupRow;                                                       // 0x02E8 (size: 0x20)
    bool ManualPlacement;                                                             // 0x0308 (size: 0x1)

    void ApplyManualPopup();
    void ClosePopup();
    void ApplyPopupLocation(class UUserWidget* OwningWidget, class UCanvasPanelSlot* OwningSlot);
    void Construct();
    void ExecuteUbergraph_W_UIPopup_ParentBP(int32 EntryPoint);
}; // Size: 0x309

#endif
