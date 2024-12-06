#ifndef UE4SS_SDK_W_SandboxSubCategory_HPP
#define UE4SS_SDK_W_SandboxSubCategory_HPP

class UW_SandboxSubCategory_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* CategoryTextBlock;                                              // 0x02E8 (size: 0x8)
    class UHorizontalBox* ControlCategories;                                          // 0x02F0 (size: 0x8)
    class UVerticalBox* VerticalBox_21;                                               // 0x02F8 (size: 0x8)
    FText CategoryText;                                                               // 0x0300 (size: 0x10)
    bool ShowInputCategories;                                                         // 0x0310 (size: 0x1)

    void RefreshSettings();
    void AddSetting(FName& OptionName, FSandboxOption& Setting);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_SandboxSubCategory(int32 EntryPoint);
}; // Size: 0x311

#endif
