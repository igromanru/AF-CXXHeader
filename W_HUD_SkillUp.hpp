#ifndef UE4SS_SDK_W_HUD_SkillUp_HPP
#define UE4SS_SDK_W_HUD_SkillUp_HPP

class UW_HUD_SkillUp_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x02E8 (size: 0x8)
    class UWidgetAnimation* PopIn;                                                    // 0x02F0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F8 (size: 0x8)
    class UCanvasPanel* MainCanvas;                                                   // 0x0300 (size: 0x8)
    class UTextBlock* SkillButtonHint;                                                // 0x0308 (size: 0x8)
    class UTextBlock* SkillLevel_Text;                                                // 0x0310 (size: 0x8)
    class UTextBlock* SkillName_Text;                                                 // 0x0318 (size: 0x8)
    class UW_Keybind_C* W_Keybind;                                                    // 0x0320 (size: 0x8)
    bool CompletedLastPopup;                                                          // 0x0328 (size: 0x1)

    void NewSkillUp(FText Skill, int32 Level);
    void ExecuteUbergraph_W_HUD_SkillUp(int32 EntryPoint);
}; // Size: 0x329

#endif
