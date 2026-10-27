#ifndef UE4SS_SDK_W_GameCommandEntry_OptionValue_HPP
#define UE4SS_SDK_W_GameCommandEntry_OptionValue_HPP

class UW_GameCommandEntry_OptionValue_C : public UW_GameCommandEntry_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    class UButton* Button_69;                                                         // 0x0308 (size: 0x8)
    class USpinBox* SpinBox_0;                                                        // 0x0310 (size: 0x8)
    class UW_SearchableComboBox_C* W_SearchableComboBox;                              // 0x0318 (size: 0x8)

    void RefreshState();
    void TriggerCommand();
    void OnCommandUnfocused();
    void ModifySecondParam(FString InParam, bool HasSecondParam);
    void ModifyFirstParam(FString InParam, bool HasSecondParam);
    void BndEvt__W_GameCommandEntry_OptionValue_Button_69_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void PopulateFirstParams(const TArray<FName>& Names);
    void PopulateSlider(FGameSliderSettings SliderSettings);
    void BndEvt__W_GameCommandEntry_OptionValue_W_SearchableComboBox_K2Node_ComponentBoundEvent_1_OnDropDownManuallyOpened__DelegateSignature();
    void ExecuteUbergraph_W_GameCommandEntry_OptionValue(int32 EntryPoint);
}; // Size: 0x320

#endif
