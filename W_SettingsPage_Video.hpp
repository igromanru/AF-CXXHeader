#ifndef UE4SS_SDK_W_SettingsPage_Video_HPP
#define UE4SS_SDK_W_SettingsPage_Video_HPP

class UW_SettingsPage_Video_C : public UW_SettingsPage_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UButton* ApplyButton;                                                       // 0x0320 (size: 0x8)
    class UCheckBox* AutoApplyCheckbox;                                               // 0x0328 (size: 0x8)
    class UButton* AutoDetectButton;                                                  // 0x0330 (size: 0x8)
    class UCheckBox* AutoSaveCheckbox;                                                // 0x0338 (size: 0x8)
    class UButton* CancelButton;                                                      // 0x0340 (size: 0x8)
    class UButton* SaveButton;                                                        // 0x0348 (size: 0x8)
    class UVerticalBox* SettingsList;                                                 // 0x0350 (size: 0x8)
    bool AutoSave;                                                                    // 0x0358 (size: 0x1)
    bool AutoApply;                                                                   // 0x0359 (size: 0x1)

    void GetSettingsFromTable();
    bool Get_AutoApplyCheckbox_bIsEnabled_0();
    bool Get_ApplyButton_bIsEnabled_0();
    bool Get_SaveButton_bIsEnabled_0();
    void BndEvt__AutoDetectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__AutoSaveCheckbox_K2Node_ComponentBoundEvent_40_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__AutoApplyCheckbox_K2Node_ComponentBoundEvent_336_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__SaveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_W_SettingsPage_Video(int32 EntryPoint);
}; // Size: 0x35A

#endif
