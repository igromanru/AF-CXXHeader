#ifndef UE4SS_SDK_StyledSliderSetting_HPP
#define UE4SS_SDK_StyledSliderSetting_HPP

class UStyledSliderSetting_C : public UAutoSettingWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0358 (size: 0x8)
    class USpinBox* Slider;                                                           // 0x0360 (size: 0x8)
    double LabelMultiplier;                                                           // 0x0368 (size: 0x8)
    int32 LabelFractionalDigits;                                                      // 0x0370 (size: 0x4)
    int32 SliderFractionalDigits;                                                     // 0x0374 (size: 0x4)
    float SliderDelta;                                                                // 0x0378 (size: 0x4)
    float MinSliderValue;                                                             // 0x037C (size: 0x4)
    float MaxSliderValue;                                                             // 0x0380 (size: 0x4)
    float DefaultSliderValue;                                                         // 0x0384 (size: 0x4)
    FGameSliderSettings SliderSettings;                                               // 0x0388 (size: 0x18)

    void PreConstruct(bool IsDesignTime);
    void BndEvt__StyledSliderSetting_Slider_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void UpdateSelection(FString Value);
    void ExecuteUbergraph_StyledSliderSetting(int32 EntryPoint);
}; // Size: 0x3A0

#endif
