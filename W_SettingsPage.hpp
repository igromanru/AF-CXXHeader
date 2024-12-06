#ifndef UE4SS_SDK_W_SettingsPage_HPP
#define UE4SS_SDK_W_SettingsPage_HPP

class UW_SettingsPage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    TArray<class UW_SettingSubCategory_C*> SubCategories;                             // 0x02E8 (size: 0x10)

    void ResetSettings();
    void PopulateSettingsList(TArray<FGameSetting>& SettingArray, class UVerticalBox* VerticleBox);
    void RefreshSettings();
    void ExecuteUbergraph_W_SettingsPage(int32 EntryPoint);
}; // Size: 0x2F8

#endif
