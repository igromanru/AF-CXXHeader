#ifndef UE4SS_SDK_W_SkillCategoryTitleBar_HPP
#define UE4SS_SDK_W_SkillCategoryTitleBar_HPP

class UW_SkillCategoryTitleBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* HR_Bottom;                                                          // 0x02E8 (size: 0x8)
    class UImage* HR_Top;                                                             // 0x02F0 (size: 0x8)
    class UTextBlock* Title;                                                          // 0x02F8 (size: 0x8)
    FText TitleText;                                                                  // 0x0300 (size: 0x10)

    void Construct();
    void ExecuteUbergraph_W_SkillCategoryTitleBar(int32 EntryPoint);
}; // Size: 0x310

#endif
