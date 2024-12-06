#ifndef UE4SS_SDK_W_PlayerSkill_Row_HPP
#define UE4SS_SDK_W_PlayerSkill_Row_HPP

class UW_PlayerSkill_Row_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UHorizontalBox* HBox_SkillLevels;                                           // 0x02E8 (size: 0x8)
    class UImage* SkillIcon;                                                          // 0x02F0 (size: 0x8)
    TArray<class UW_PlayerSkill_Pip_C*> Pips;                                         // 0x02F8 (size: 0x10)
    FSkillRowHandle SkillRow;                                                         // 0x0308 (size: 0x20)
    FText Skill Name;                                                                 // 0x0328 (size: 0x10)
    double Next Level XP;                                                             // 0x0338 (size: 0x8)
    bool AtMaxLevel;                                                                  // 0x0340 (size: 0x1)
    double Current XPMultiplier;                                                      // 0x0348 (size: 0x8)
    double Current XP;                                                                // 0x0350 (size: 0x8)
    ECharacterSkills Type;                                                            // 0x0358 (size: 0x1)
    class UW_PipTooltip_C* PipTooltip;                                                // 0x0360 (size: 0x8)

    void DoesSkillHavePerks?();
    void RefreshSkillInfo();
    void Construct();
    void ExecuteUbergraph_W_PlayerSkill_Row(int32 EntryPoint);
}; // Size: 0x368

#endif
