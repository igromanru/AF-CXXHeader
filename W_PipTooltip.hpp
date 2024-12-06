#ifndef UE4SS_SDK_W_PipTooltip_HPP
#define UE4SS_SDK_W_PipTooltip_HPP

class UW_PipTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Divider;                                                            // 0x02E8 (size: 0x8)
    class UImage* IconImage;                                                          // 0x02F0 (size: 0x8)
    class UTextBlock* LevelText;                                                      // 0x02F8 (size: 0x8)
    class UTextBlock* PerkDescriptionText;                                            // 0x0300 (size: 0x8)
    class UVerticalBox* PerkInfo;                                                     // 0x0308 (size: 0x8)
    class UTextBlock* PerkNameText;                                                   // 0x0310 (size: 0x8)
    class UTextBlock* SkillText;                                                      // 0x0318 (size: 0x8)
    class UTextBlock* XPText;                                                         // 0x0320 (size: 0x8)
    FText Text;                                                                       // 0x0328 (size: 0x10)
    FText Text_Additional;                                                            // 0x0338 (size: 0x10)
    FText Text_Negative;                                                              // 0x0348 (size: 0x10)
    double Current XP;                                                                // 0x0358 (size: 0x8)
    double MaxXP;                                                                     // 0x0360 (size: 0x8)
    FSkillPerkRowHandle PerkRowHandle;                                                // 0x0368 (size: 0x20)
    FLinearColor Color_Unlocked;                                                      // 0x0388 (size: 0x10)
    FLinearColor Color_InProgress;                                                    // 0x0398 (size: 0x10)
    FLinearColor Color_Locked;                                                        // 0x03A8 (size: 0x10)

    double GetMaxXP(int32 Index);
    void RefreshTooltipPip(const int32 Index, const FSkillPerkRowHandle PerkRow);
    void RefreshTooltipSkill(const FText& Skill, const double CurrentXP);
    void UpdateUnlockState();
    void ExecuteUbergraph_W_PipTooltip(int32 EntryPoint);
}; // Size: 0x3B8

#endif
