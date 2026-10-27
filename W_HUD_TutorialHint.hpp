#ifndef UE4SS_SDK_W_HUD_TutorialHint_HPP
#define UE4SS_SDK_W_HUD_TutorialHint_HPP

class UW_HUD_TutorialHint_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x02E8 (size: 0x8)
    class UWidgetAnimation* HintPopIn;                                                // 0x02F0 (size: 0x8)
    class UImage* BG;                                                                 // 0x02F8 (size: 0x8)
    class UTextBlock* HintMessage_Text;                                               // 0x0300 (size: 0x8)
    class UImage* TestTube;                                                           // 0x0308 (size: 0x8)
    class UW_Keybind_C* W_Keybind;                                                    // 0x0310 (size: 0x8)
    FKeybindSettingRowHandle KeyBind;                                                 // 0x0318 (size: 0x10)
    FName HintRowName;                                                                // 0x0328 (size: 0x8)
    bool Removing;                                                                    // 0x0330 (size: 0x1)
    bool NoAutoRemoval;                                                               // 0x0331 (size: 0x1)

    void Construct();
    void RemoveHintWithFade();
    void ExecuteUbergraph_W_HUD_TutorialHint(int32 EntryPoint);
}; // Size: 0x332

#endif
