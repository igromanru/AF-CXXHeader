#ifndef UE4SS_SDK_W_GameCommandEntry_Parent_HPP
#define UE4SS_SDK_W_GameCommandEntry_Parent_HPP

class UW_GameCommandEntry_Parent_C : public UGameCommandEntryWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F0 (size: 0x8)
    bool FirstParamIsDynamic;                                                         // 0x02F8 (size: 0x1)
    bool SecondParamIsDynamic;                                                        // 0x02F9 (size: 0x1)
    bool SliderIsDynamic;                                                             // 0x02FA (size: 0x1)
    float DefaultSliderValue;                                                         // 0x02FC (size: 0x4)

    void ProcessSearchableComboText(FString InString, FString& OutText);
    void RefreshState();
    void InitSlider(FGameSliderSettings Combo, class USpinBox* SpinBox);
    void HandleSearchableCombo(class UW_SearchableComboBox_C* Combo, FString InString, bool ShouldShow);
    void OnCommandUnfocused();
    void ModifySecondParam(FString InParam, bool HasSecondParam);
    void ModifyFirstParam(FString InParam, bool HasSecondParam);
    void TriggerCommand();
    void Construct();
    void PopulateSecondParams(const TArray<FName>& Names);
    void PopulateFirstParams(const TArray<FName>& Names);
    void PopulateSlider(FGameSliderSettings SliderSettings);
    void ExecuteUbergraph_W_GameCommandEntry_Parent(int32 EntryPoint);
}; // Size: 0x300

#endif
