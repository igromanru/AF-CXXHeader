#ifndef UE4SS_SDK_StyledRadioButton_HPP
#define UE4SS_SDK_StyledRadioButton_HPP

class UStyledRadioButton_C : public URadioButton
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UTextBlock* LabelText;                                                      // 0x0320 (size: 0x8)
    class UButton* MainButton;                                                        // 0x0328 (size: 0x8)

    FSlateColor GetColour();
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_StyledRadioButton(int32 EntryPoint);
}; // Size: 0x330

#endif
