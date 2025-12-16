#ifndef UE4SS_SDK_W_SkillXPGain_HPP
#define UE4SS_SDK_W_SkillXPGain_HPP

class UW_SkillXPGain_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* FadeInXP;                                                 // 0x02E8 (size: 0x8)
    class UImage* Line;                                                               // 0x02F0 (size: 0x8)
    class UImage* Skill_Icon;                                                         // 0x02F8 (size: 0x8)
    class UTextBlock* SkillName;                                                      // 0x0300 (size: 0x8)
    class UVerticalBox* VBox_SkillXP;                                                 // 0x0308 (size: 0x8)
    class UTextBlock* XPGained;                                                       // 0x0310 (size: 0x8)
    double XP Gained;                                                                 // 0x0318 (size: 0x8)
    double UI Update Start Time;                                                      // 0x0320 (size: 0x8)
    TEnumAsByte<E_CharacterSkills::Type> Skill;                                       // 0x0328 (size: 0x1)
    int32 CurrentIndex;                                                               // 0x032C (size: 0x4)
    bool HasChanged;                                                                  // 0x0330 (size: 0x1)

    void OnLoaded_0319F0BC4EF64F639F1BBB83A8546E1D(class UObject* Loaded);
    void Update Skill XP(TEnumAsByte<E_CharacterSkills::Type> Skill, double XP Gained);
    void ShowSkillXPGain(double XP Gain);
    void ExecuteUbergraph_W_SkillXPGain(int32 EntryPoint);
}; // Size: 0x331

#endif
