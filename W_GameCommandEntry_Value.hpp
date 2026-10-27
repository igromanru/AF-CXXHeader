#ifndef UE4SS_SDK_W_GameCommandEntry_Value_HPP
#define UE4SS_SDK_W_GameCommandEntry_Value_HPP

class UW_GameCommandEntry_Value_C : public UW_GameCommandEntry_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    class UButton* Button_69;                                                         // 0x0308 (size: 0x8)
    class USpinBox* SpinBox_0;                                                        // 0x0310 (size: 0x8)

    void TriggerCommand();
    void ModifyFirstParam(FString InParam, bool HasSecondParam);
    void BndEvt__W_GameCommandEntry_OptionValue_Button_69_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void PopulateSlider(FGameSliderSettings SliderSettings);
    void ExecuteUbergraph_W_GameCommandEntry_Value(int32 EntryPoint);
}; // Size: 0x318

#endif
