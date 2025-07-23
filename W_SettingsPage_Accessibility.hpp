#ifndef UE4SS_SDK_W_SettingsPage_Accessibility_HPP
#define UE4SS_SDK_W_SettingsPage_Accessibility_HPP

class UW_SettingsPage_Accessibility_C : public UW_SettingsPage_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UHorizontalBox* HBox_ReportBugCode;                                         // 0x0320 (size: 0x8)
    class UVerticalBox* SettingsList;                                                 // 0x0328 (size: 0x8)
    class UVerticalBox* VBOX_ReportBugCode;                                           // 0x0330 (size: 0x8)
    class UW_MainMenuButton_C* W_AccessibilityFeedbackForm;                           // 0x0338 (size: 0x8)
    class UW_MainMenu_QRCode_C* W_MainMenu_QRCode;                                    // 0x0340 (size: 0x8)
    class UW_SettingSubCategory_C* W_SettingSubCategory;                              // 0x0348 (size: 0x8)
    FString AccessibilityFeedbackFormURL;                                             // 0x0350 (size: 0x10)

    void GetSettingsFromTable();
    void Construct();
    void BndEvt__W_SettingsPage_Accessibility_W_AccessibilityFeedbackForm_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void ExecuteUbergraph_W_SettingsPage_Accessibility(int32 EntryPoint);
}; // Size: 0x360

#endif
