#ifndef UE4SS_SDK_W_SettingSubCategory_HPP
#define UE4SS_SDK_W_SettingSubCategory_HPP

class UW_SettingSubCategory_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* CategoryTextBlock;                                              // 0x02E8 (size: 0x8)
    class UHorizontalBox* ControlCategories;                                          // 0x02F0 (size: 0x8)
    class UVerticalBox* VerticalBox_21;                                               // 0x02F8 (size: 0x8)
    FText CategoryText;                                                               // 0x0300 (size: 0x10)
    bool ShowInputCategories;                                                         // 0x0310 (size: 0x1)
    FW_SettingSubCategory_CDisplayDescChanged DisplayDescChanged;                     // 0x0318 (size: 0x10)
    void DisplayDescChanged(FGameSetting DisplayStruct, bool Close);
    FW_SettingSubCategory_CSettingHovered SettingHovered;                             // 0x0328 (size: 0x10)
    void SettingHovered(class USettingRow_C* Setting);

    void GetDefaultValue(FGameSetting& GameSetting, FString& Setting);
    void AddAxisKeybind(FText Name, FName Axis, double Scale);
    void AddActionKeybind(FText Name, FName Action);
    void RefreshSettings();
    void AddSetting(FGameSetting& Setting);
    void PreConstruct(bool IsDesignTime);
    void UpdateSettingDisplay(FGameSetting Setting Display, bool Close);
    void OnSettingHovered(class USettingRow_C* Setting);
    void ExecuteUbergraph_W_SettingSubCategory(int32 EntryPoint);
    void SettingHovered__DelegateSignature(class USettingRow_C* Setting);
    void DisplayDescChanged__DelegateSignature(FGameSetting DisplayStruct, bool Close);
}; // Size: 0x338

#endif
