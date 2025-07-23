#ifndef UE4SS_SDK_W_ClickableItemSlot_HPP
#define UE4SS_SDK_W_ClickableItemSlot_HPP

class UW_ClickableItemSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* ClickButton;                                                       // 0x02E8 (size: 0x8)
    class UImage* Icon;                                                               // 0x02F0 (size: 0x8)
    class UTextBlock* StackText;                                                      // 0x02F8 (size: 0x8)
    FName ItemRowName;                                                                // 0x0300 (size: 0x8)
    int32 ItemCount;                                                                  // 0x0308 (size: 0x4)
    TEnumAsByte<E_ClickableItemSlot_Actions::Type> SlotAction;                        // 0x030C (size: 0x1)
    FLinearColor RedBG_Color;                                                         // 0x0310 (size: 0x10)

    void OnLoaded_806F847244BDF669F763D09857D75CC0(class UObject* Loaded);
    void UpdateClickableSlotData(FName ItemRowName, int32 ItemCount);
    void BndEvt__W_ClickableItemSlot_ClickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_W_ClickableItemSlot(int32 EntryPoint);
}; // Size: 0x320

#endif
