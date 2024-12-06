#ifndef UE4SS_SDK_W_PlayerSkill_TraitSummaryPip_HPP
#define UE4SS_SDK_W_PlayerSkill_TraitSummaryPip_HPP

class UW_PlayerSkill_TraitSummaryPip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UBorder* PipBorder;                                                         // 0x02E8 (size: 0x8)
    class UProgressBar* SkillProgressBar;                                             // 0x02F0 (size: 0x8)
    int32 PipIndex;                                                                   // 0x02F8 (size: 0x4)
    FSkillPerkRowHandle Perk;                                                         // 0x0300 (size: 0x20)

    bool IsInteractable();
    void SetPipState(double Percentage, bool Disabled);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_W_PlayerSkill_TraitSummaryPip(int32 EntryPoint);
}; // Size: 0x320

#endif
