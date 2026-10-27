#ifndef UE4SS_SDK_W_GameCommandEntry_OptionToggle_HPP
#define UE4SS_SDK_W_GameCommandEntry_OptionToggle_HPP

class UW_GameCommandEntry_OptionToggle_C : public UW_GameCommandEntry_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    class UButton* Button_69;                                                         // 0x0308 (size: 0x8)
    class UCheckBox* CheckBox_155;                                                    // 0x0310 (size: 0x8)
    class UW_SearchableComboBox_C* W_SearchableComboBox;                              // 0x0318 (size: 0x8)
    bool HasForceOverride;                                                            // 0x0320 (size: 0x1)
    bool ForceState;                                                                  // 0x0321 (size: 0x1)

    void TriggerCommand();
    void OnCommandUnfocused();
    void ModifySecondParam(FString InParam, bool HasSecondParam);
    void ModifyFirstParam(FString InParam, bool HasSecondParam);
    void BndEvt__W_GameCommandEntry_OptionValue_Button_69_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void PopulateFirstParams(const TArray<FName>& Names);
    void BndEvt__W_GameCommandEntry_OptionValue_W_SearchableComboBox_K2Node_ComponentBoundEvent_1_OnDropDownManuallyOpened__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_W_GameCommandEntry_OptionToggle(int32 EntryPoint);
}; // Size: 0x322

#endif
