#ifndef UE4SS_SDK_W_SplitStackMenu_HPP
#define UE4SS_SDK_W_SplitStackMenu_HPP

class UW_SplitStackMenu_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG;                                                                 // 0x02E8 (size: 0x8)
    class UButton* Button_Cancel;                                                     // 0x02F0 (size: 0x8)
    class UButton* Button_JustOne;                                                    // 0x02F8 (size: 0x8)
    class UButton* Button_SplitStack;                                                 // 0x0300 (size: 0x8)
    class UW_Keybind_C* Keybind_Cancel;                                               // 0x0308 (size: 0x8)
    class UW_Keybind_C* Keybind_JustOne;                                              // 0x0310 (size: 0x8)
    class UW_Keybind_C* Keybind_Split;                                                // 0x0318 (size: 0x8)
    class USpinBox* SpinBox_86;                                                       // 0x0320 (size: 0x8)
    class UTextBlock* SplitAmount;                                                    // 0x0328 (size: 0x8)
    class USlider* StackSplitter;                                                     // 0x0330 (size: 0x8)
    class UW_InventoryItemSlot_C* W_InventoryItemSlot;                                // 0x0338 (size: 0x8)
    FAbiotic_InventoryItemSlotStruct ItemSlotStruct;                                  // 0x0340 (size: 0x98)
    int32 Current Stack;                                                              // 0x03D8 (size: 0x4)
    class UW_InventoryItemSlot_C* OriginSlot;                                         // 0x03E0 (size: 0x8)

    void WidgetAction_DPadDirection(TEnumAsByte<E_NavigationDirection::Type> Direction, bool& Handled);
    void WidgetAction_CloseMenu(bool& Handled);
    void WidgetAction_CycleMenu(bool Next, bool& Handled);
    void WidgetAction_CycleCrafting(bool Next, bool& Handled);
    void WidgetAction_FaceTop(bool& Handled);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void Update Split Count(int32 SplitVal);
    void BndEvt__W_SplitStackMenu_StackSplitter_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__W_SplitStackMenu_Proceed_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_SplitStackMenu_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_SplitStackMenu_Button_JustOne_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void RefreshSplitStack();
    void BndEvt__W_SplitStackMenu_SpinBox_86_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__W_SplitStackMenu_SpinBox_86_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void JustOnePressed();
    void ForceClose();
    void ExecuteUbergraph_W_SplitStackMenu(int32 EntryPoint);
}; // Size: 0x3E8

#endif
