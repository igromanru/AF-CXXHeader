#ifndef UE4SS_SDK_W_Character_Trait_SkillRow_HPP
#define UE4SS_SDK_W_Character_Trait_SkillRow_HPP

class UW_Character_Trait_SkillRow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG;                                                                 // 0x02E8 (size: 0x8)
    class UTextBlock* CountText;                                                      // 0x02F0 (size: 0x8)
    class UHorizontalBox* HBox_Pips;                                                  // 0x02F8 (size: 0x8)
    class UTextBlock* MainText;                                                       // 0x0300 (size: 0x8)
    FText Text;                                                                       // 0x0308 (size: 0x10)
    int32 Amount;                                                                     // 0x0318 (size: 0x4)
    bool BGColorA;                                                                    // 0x031C (size: 0x1)

    void SetAmountValueText();
    void UpdateValue(int32 Increase);
    void Construct();
    void ExecuteUbergraph_W_Character_Trait_SkillRow(int32 EntryPoint);
}; // Size: 0x31D

#endif
