#ifndef UE4SS_SDK_W_Settings_Bar_HPP
#define UE4SS_SDK_W_Settings_Bar_HPP

class UW_Settings_Bar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG_Left;                                                            // 0x02E8 (size: 0x8)
    class UImage* MissingFeatureIcon;                                                 // 0x02F0 (size: 0x8)
    class UTextBlock* Settings_Text;                                                  // 0x02F8 (size: 0x8)
    class UW_Settings_Boolean_C* W_Settings_Boolean;                                  // 0x0300 (size: 0x8)
    class UW_Settings_SliderBar_C* W_Settings_SliderBar;                              // 0x0308 (size: 0x8)
    FText TitleText;                                                                  // 0x0310 (size: 0x10)
    TEnumAsByte<E_SettingsButtonType::Type> Settings;                                 // 0x0320 (size: 0x1)
    bool NotFinished;                                                                 // 0x0321 (size: 0x1)
    FW_Settings_Bar_CSettingBooleanToggled SettingBooleanToggled;                     // 0x0328 (size: 0x10)
    void SettingBooleanToggled(bool Boolean);
    FW_Settings_Bar_CSettingSpinboxValueChanged SettingSpinboxValueChanged;           // 0x0338 (size: 0x10)
    void SettingSpinboxValueChanged(double Value);
    float MinSliderValue;                                                             // 0x0348 (size: 0x4)
    float MaxSliderValue;                                                             // 0x034C (size: 0x4)
    float DefaultSliderValue;                                                         // 0x0350 (size: 0x4)
    int32 SliderFractionalDigits;                                                     // 0x0354 (size: 0x4)
    float SliderDelta;                                                                // 0x0358 (size: 0x4)

    void SetSliderValue(float NewValue);
    void SetCheckbox(bool CheckboxState);
    void BooleanToggled(bool bIsChecked);
    void PreConstruct(bool IsDesignTime);
    void BindValueChanges();
    void SpinboxValueChanged(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void Construct();
    void ExecuteUbergraph_W_Settings_Bar(int32 EntryPoint);
    void SettingSpinboxValueChanged__DelegateSignature(double Value);
    void SettingBooleanToggled__DelegateSignature(bool Boolean);
}; // Size: 0x35C

#endif
