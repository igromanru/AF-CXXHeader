#ifndef UE4SS_SDK_W_SplitStackMenu_HPP
#define UE4SS_SDK_W_SplitStackMenu_HPP

class UW_SplitStackMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG;                                                                 // 0x02E8 (size: 0x8)
    class UButton* Button_Cancel;                                                     // 0x02F0 (size: 0x8)
    class UButton* Button_JustOne;                                                    // 0x02F8 (size: 0x8)
    class UButton* Button_SplitStack;                                                 // 0x0300 (size: 0x8)
    class UTextBlock* SplitAmount;                                                    // 0x0308 (size: 0x8)
    class USlider* StackSplitter;                                                     // 0x0310 (size: 0x8)
    class UW_InventoryItemSlot_C* W_InventoryItemSlot;                                // 0x0318 (size: 0x8)
    FAbiotic_InventoryItemSlotStruct ItemSlotStruct;                                  // 0x0320 (size: 0x128)
    int32 Current Stack;                                                              // 0x0448 (size: 0x4)
    class UW_InventoryItemSlot_C* OriginSlot;                                         // 0x0450 (size: 0x8)

    void Update Split Count(int32 SplitVal);
    void BndEvt__W_SplitStackMenu_StackSplitter_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__W_SplitStackMenu_Proceed_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_SplitStackMenu_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_SplitStackMenu_Button_JustOne_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void RefreshSplitStack();
    void ExecuteUbergraph_W_SplitStackMenu(int32 EntryPoint);
}; // Size: 0x458

#endif
