#ifndef UE4SS_SDK_W_DemoNotice_HPP
#define UE4SS_SDK_W_DemoNotice_HPP

class UW_DemoNotice_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* EnterButtonActivate;                                      // 0x02E8 (size: 0x8)
    class UImage* BG;                                                                 // 0x02F0 (size: 0x8)
    class UImage* BG_1;                                                               // 0x02F8 (size: 0x8)
    class UButton* Button_Enter;                                                      // 0x0300 (size: 0x8)
    class UImage* CheckBG;                                                            // 0x0308 (size: 0x8)
    class UCheckBox* CheckBox_Agree;                                                  // 0x0310 (size: 0x8)
    class UTextBlock* CheckboxText_agree;                                             // 0x0318 (size: 0x8)
    class UImage* Image;                                                              // 0x0320 (size: 0x8)
    class UImage* Logo;                                                               // 0x0328 (size: 0x8)
    class UImage* Logo_1;                                                             // 0x0330 (size: 0x8)
    class UVerticalBox* SettingsList;                                                 // 0x0338 (size: 0x8)
    TArray<class UW_SettingSubCategory_C*> SubCategories;                             // 0x0340 (size: 0x10)

    void PopulateSettingsList(FGameSetting& SettingArray, class UVerticalBox* VerticleBox);
    void BndEvt__W_BetaNotice_CheckBox_Agree_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__W_DemoNotice_Button_Enter_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_W_DemoNotice(int32 EntryPoint);
}; // Size: 0x350

#endif
