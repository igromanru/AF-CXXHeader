#ifndef UE4SS_SDK_AutoSettings_HPP
#define UE4SS_SDK_AutoSettings_HPP

struct FAutoSettingData
{
    FName Key;                                                                        // 0x0000 (size: 0x8)
    FString Value;                                                                    // 0x0008 (size: 0x10)
    FGameplayTagContainer Tags;                                                       // 0x0018 (size: 0x20)

}; // Size: 0x38

struct FSettingOption
{
    FText Label;                                                                      // 0x0000 (size: 0x10)
    FString Value;                                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

class UAutoSettingWidget : public UUserWidget
{
    FName CVarName;                                                                   // 0x02E0 (size: 0x8)
    TSubclassOf<class USettingValueMask> ValueMask;                                   // 0x02E8 (size: 0x8)
    bool bAutoSave;                                                                   // 0x02F0 (size: 0x1)
    bool bAutoApply;                                                                  // 0x02F1 (size: 0x1)
    FGameplayTagContainer SettingTags;                                                // 0x02F8 (size: 0x20)
    FString DefaultValue;                                                             // 0x0318 (size: 0x10)
    bool bIsSandboxSetting;                                                           // 0x0328 (size: 0x1)
    FAutoSettingWidgetOnCurrentValueUpdated OnCurrentValueUpdated;                    // 0x0330 (size: 0x10)
    void CurrentValueUpdated(FString Value);
    FString CurrentValue;                                                             // 0x0340 (size: 0x10)
    bool bHasUnappliedChange;                                                         // 0x0350 (size: 0x1)
    bool bHasUnsavedChange;                                                           // 0x0351 (size: 0x1)
    bool bUpdatingSettingSelection;                                                   // 0x0352 (size: 0x1)

    void UpdateSelection(FString Value);
    void Save();
    void SandboxSettingsUpdated();
    void HasUnsavedChange();
    void HasUnappliedChange();
    void GetCurrentValue();
    void Cancel(bool bResetToDefaultValue);
    void ApplySettingValue(FString Value, bool bSaveIfPossible);
    void Apply();
}; // Size: 0x358

class UAutoSettingsConfig : public UDeveloperSettings
{
    FString SettingsIniName;                                                          // 0x0038 (size: 0x10)
    FString SettingsSectionName;                                                      // 0x0048 (size: 0x10)

}; // Size: 0x58

class UCVarChangeListener : public UObject
{
}; // Size: 0x80

class UCVarChangeListenerManager : public UObject
{
    TMap<FName, UCVarChangeListener*> Listeners;                                      // 0x0028 (size: 0x50)

    void AddStringCVarCallbackStatic(FName Name, FAddStringCVarCallbackStaticChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddIntCVarCallbackStatic(FName Name, FAddIntCVarCallbackStaticChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddFloatCVarCallbackStatic(FName Name, FAddFloatCVarCallbackStaticChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddBoolCVarCallbackStatic(FName Name, FAddBoolCVarCallbackStaticChangedCallback ChangedCallback, bool CallbackImmediately);
}; // Size: 0x78

class UCheckBoxSetting : public UToggleSetting
{
    class UCheckBox* CheckBox;                                                        // 0x0358 (size: 0x8)

    void CheckBoxStateChanged(bool IsChecked);
}; // Size: 0x360

class UComboBoxSetting : public USelectSetting
{
    class UComboBoxString* ComboBox;                                                  // 0x0378 (size: 0x8)

    void ComboBoxSelectionChanged(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
}; // Size: 0x380

class UConsoleUtils : public UBlueprintFunctionLibrary
{

    void SetStringCVar(FName Name, FString Value);
    void SetIntCVar(FName Name, int32 Value);
    void SetFloatCVar(FName Name, float Value);
    void SetBoolCVar(FName Name, bool Value);
    void IsCVarRegistered(FName Name);
    void GetStringCVar(FName Name);
    void GetIntCVar(FName Name);
    void GetFloatCVar(FName Name);
    void GetBoolCVar(FName Name);
}; // Size: 0x28

class UNativeSliderSetting : public USliderSetting
{
    class USlider* Slider;                                                            // 0x0360 (size: 0x8)
    bool bMouseCaptureInProgress;                                                     // 0x0368 (size: 0x1)

    void SliderValueChanged(float NewValue);
    void SliderMouseCaptureEnd();
    void SliderMouseCaptureBegin();
}; // Size: 0x370

class URadioButton : public UUserWidget
{
    FRadioButtonOnSelected OnSelected;                                                // 0x02E0 (size: 0x10)
    void RadioSelectedSignature(FString Value);
    FText Label;                                                                      // 0x02F0 (size: 0x10)
    FString Value;                                                                    // 0x0300 (size: 0x10)
    bool Selected;                                                                    // 0x0310 (size: 0x1)

    void UpdateSelected(bool InSelected);
    void UpdateLabel(const FText& InLabel);
    void TriggerSelection();
    void SetValue(FString InValue);
    void SetSelected(bool InSelected);
    void SetLabel(FText InLabel);
    void GetValue();
    void GetSelected();
    void GetLabel();
}; // Size: 0x318

class URadioSelect : public UUserWidget
{
    TArray<FSettingOption> Options;                                                   // 0x02E0 (size: 0x10)
    TSubclassOf<class URadioButton> RadioButtonClass;                                 // 0x02F0 (size: 0x8)
    FRadioSelectSelectionChangedEvent SelectionChangedEvent;                          // 0x02F8 (size: 0x10)
    void RadioSelectedSignature(FString Value);
    class UPanelWidget* ButtonContainer;                                              // 0x0308 (size: 0x8)
    TArray<URadioButton*> RadioButtons;                                               // 0x0310 (size: 0x10)

    void SetOptions(TArray<FSettingOption> InOptions);
    void Select(FString Value);
    void OnButtonCreated(class URadioButton* Button, class UPanelSlot* NewSlot);
    void GetRadioButtonWidgets();
    void GetOptions();
    void ButtonSelected(FString Value);
}; // Size: 0x320

class URadioSelectSetting : public USelectSetting
{
    TSubclassOf<class URadioButton> RadioButtonClass;                                 // 0x0378 (size: 0x8)
    class URadioSelect* RadioSelect;                                                  // 0x0380 (size: 0x8)

    void RadioSelectionChanged(FString Value);
}; // Size: 0x388

class UResolutionOptionFactory : public USettingOptionFactory
{
}; // Size: 0x28

class UResolutionStringUtils : public UBlueprintFunctionLibrary
{
}; // Size: 0x28

class UResolutionValueMask : public USettingValueMask
{
}; // Size: 0x28

class USandboxPreviewSubsystem : public UGameInstanceSubsystem
{
    FSandboxPreviewSubsystemOnSettingUpdated OnSettingUpdated;                        // 0x0030 (size: 0x10)
    void SettingUpdatedDelegate();
    TMap<FName, FString> SandboxPreviewSettings;                                      // 0x0040 (size: 0x50)
    TMap<FName, FString> SandboxPreviewDefaultSettings;                               // 0x0090 (size: 0x50)

    void SetSandboxPreviewSettings(const TMap<FName, FString>& Settings, const TMap<FName, FString>& DefaultSettings);
    void SetPreviewSetting(FName SettingName, FString Value);
    void IsPreviewSettingModified(FName SettingName);
    void GetPreviewSetting(FName SettingName);
    void GetPreviewDefaultSetting(FName SettingName);
    void GetModifiedPreviewSettings();
}; // Size: 0xE0

class USelectSetting : public UAutoSettingWidget
{
    TArray<FSettingOption> Options;                                                   // 0x0358 (size: 0x10)
    TSubclassOf<class USettingOptionFactory> OptionFactory;                           // 0x0368 (size: 0x8)
    bool bUpdatingSettingOptions;                                                     // 0x0370 (size: 0x1)

    void UpdateOptions(const TArray<FSettingOption>& InOptions);
    void RegenerateOptions();
}; // Size: 0x378

class USettingContainerUtils : public UBlueprintFunctionLibrary
{

    void SaveChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);
    void GetChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);
    void DoesAnyChildSettingHaveUnsavedChange(class UUserWidget* UserWidget, class UWidget* Parent);
    void DoesAnyChildSettingHaveUnappliedChange(class UUserWidget* UserWidget, class UWidget* Parent);
    void CancelChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);
    void ApplyChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);
}; // Size: 0x28

class USettingOptionFactory : public UObject
{

    void ConstructOptions();
}; // Size: 0x28

class USettingValueMask : public UObject
{

    void RecombineValues(FString SettingValue, FString ConsoleValue);
    void MaskValue(FString ConsoleValue);
}; // Size: 0x28

class USettingsManager : public UEngineSubsystem
{
    FSettingsManagerOnSettingSaved OnSettingSaved;                                    // 0x0030 (size: 0x10)
    void OnSettingSaved(FAutoSettingData SettingData);
    FString IniFilename;                                                              // 0x0040 (size: 0x10)
    FSettingsManagerSettingsWriteRequested SettingsWriteRequested;                    // 0x0050 (size: 0x10)
    void OnSettingsWriteRequested();

    void SaveSettingStatic(FAutoSettingData SettingData);
    void SaveSettings(bool bImmediate);
    void ResetSettings();
    void AutoDetectSettingsStatic(int32 WorkScale, float CPUMultiplier, float GPUMultiplier);
    void ApplySettingStatic(FAutoSettingData SettingData);
}; // Size: 0x60

class USliderSetting : public UAutoSettingWidget
{
    float LeftValue;                                                                  // 0x0358 (size: 0x4)
    float RightValue;                                                                 // 0x035C (size: 0x4)

    void UpdateSliderValue(float NormalizedValue, float RawValue);
    void SliderValueUpdated(float NormalizedValue);
    void ShouldSaveCurrentValue();
    void RawValueToNormalized(float RawValue);
    void OnSliderValueUpdated(float NormalizedValue, float RawValue);
    void NormalizedValueToRaw(float NormalizedValue);
    void ClampRawValue(float RawValue);
}; // Size: 0x360

class USpinner : public UUserWidget
{
    TArray<FSettingOption> Options;                                                   // 0x02E0 (size: 0x10)
    bool bAllowWrapping;                                                              // 0x02F0 (size: 0x1)
    FSpinnerSelectionChangedEvent SelectionChangedEvent;                              // 0x02F8 (size: 0x10)
    void SpinnerSelectionChanged(FString Value);

    void SelectValue(FString Value);
    void SelectIndex(int32 Index);
    void Previous();
    void OnSelectionChanged(FSettingOption SelectedOption);
    void Next();
    void HasValidPrevious();
    void HasValidNext();
    void GetCurrentOption();
    void GetCurrentIndex();
}; // Size: 0x310

class USpinnerSetting : public USelectSetting
{
    class USpinner* Spinner;                                                          // 0x0378 (size: 0x8)

    void SpinnerSelectionChanged(FString Value);
}; // Size: 0x380

class UToggleSetting : public UAutoSettingWidget
{

    void UpdateToggleState(bool State);
    void ToggleStateUpdated(bool State);
}; // Size: 0x358

class UWindowModeValueMask : public USettingValueMask
{
}; // Size: 0x28

#endif
