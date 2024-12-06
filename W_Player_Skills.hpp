#ifndef UE4SS_SDK_W_Player_Skills_HPP
#define UE4SS_SDK_W_Player_Skills_HPP

class UW_Player_Skills_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* HR_Bottom;                                                          // 0x02E8 (size: 0x8)
    class UImage* Image;                                                              // 0x02F0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F8 (size: 0x8)
    class UTextBlock* SubTitle_RecipeTypeText;                                        // 0x0300 (size: 0x8)
    class UTextBlock* TitleMain_1;                                                    // 0x0308 (size: 0x8)
    class UTextBlock* TitleMain_2;                                                    // 0x0310 (size: 0x8)
    class UTextBlock* TitleMain_3;                                                    // 0x0318 (size: 0x8)
    class UUniformGridPanel* TraitGrid;                                               // 0x0320 (size: 0x8)
    class UVerticalBox* Vbox_Skills;                                                  // 0x0328 (size: 0x8)
    class UW_Character_JobSummary_C* W_Character_JobSummary;                          // 0x0330 (size: 0x8)

    void AddCategoryIfNecessary(int32 Int);
    void RefreshAllSkills();
    void Construct();
    void HideLingeringTooltips(ESlateVisibility InVisibility);
    void ExecuteUbergraph_W_Player_Skills(int32 EntryPoint);
}; // Size: 0x338

#endif
