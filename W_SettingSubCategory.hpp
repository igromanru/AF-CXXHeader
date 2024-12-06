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

    void GetDefaultValue(FGameSetting& GameSetting, FString& Setting);
    void AddAxisKeybind(FText Name, FName Axis, double Scale);
    void AddActionKeybind(FText Name, FName Action);
    void RefreshSettings();
    void AddSetting(FGameSetting& Setting);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_SettingSubCategory(int32 EntryPoint);
}; // Size: 0x311

#endif
