#ifndef UE4SS_SDK_W_CheatMenu_DropdownContent_HPP
#define UE4SS_SDK_W_CheatMenu_DropdownContent_HPP

class UW_CheatMenu_DropdownContent_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button;                                                            // 0x02E8 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x02F0 (size: 0x8)
    class UW_CheatMenu_C* CheatMenu;                                                  // 0x02F8 (size: 0x8)

    void BndEvt__W_DropdownContent_Button_336_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_W_CheatMenu_DropdownContent(int32 EntryPoint);
}; // Size: 0x300

#endif
