#ifndef UE4SS_SDK_W_SettingsPage_HPP
#define UE4SS_SDK_W_SettingsPage_HPP

class UW_SettingsPage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    TArray<class UW_SettingSubCategory_C*> SubCategories;                             // 0x02E8 (size: 0x10)
    FW_SettingsPage_CDisplayDescrChanged DisplayDescrChanged;                         // 0x02F8 (size: 0x10)
    void DisplayDescrChanged(FGameSetting NewSetting, bool Close);
    FW_SettingsPage_CSettingHovered SettingHovered;                                   // 0x0308 (size: 0x10)
    void SettingHovered(class USettingRow_C* Setting);

    void CREATEDELEGATE_PROXYFUNCTION_1(FGameSetting DisplayStruct, bool Close);
    void CREATEDELEGATE_PROXYFUNCTION_0(FGameSetting DisplayStruct, bool Close);
    void ResetSettings();
    void PopulateSettingsList(TArray<FGameSetting>& SettingArray, class UVerticalBox* VerticleBox);
    void RefreshSettings();
    void UpdateSettingDisplay(const FGameSetting& NewSetting, bool Close);
    void OnSettingHovered(class USettingRow_C* Setting);
    void ExecuteUbergraph_W_SettingsPage(int32 EntryPoint);
    void SettingHovered__DelegateSignature(class USettingRow_C* Setting);
    void DisplayDescrChanged__DelegateSignature(FGameSetting NewSetting, bool Close);
}; // Size: 0x318

#endif
