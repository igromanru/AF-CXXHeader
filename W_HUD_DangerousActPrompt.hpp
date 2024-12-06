#ifndef UE4SS_SDK_W_HUD_DangerousActPrompt_HPP
#define UE4SS_SDK_W_HUD_DangerousActPrompt_HPP

class UW_HUD_DangerousActPrompt_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x02E8 (size: 0x8)
    class UWidgetAnimation* HintPopIn;                                                // 0x02F0 (size: 0x8)
    class UImage* BG;                                                                 // 0x02F8 (size: 0x8)
    class UTextBlock* Message_Text;                                                   // 0x0300 (size: 0x8)
    class UTextBlock* Message_Text_3;                                                 // 0x0308 (size: 0x8)
    class UImage* SickIcon;                                                           // 0x0310 (size: 0x8)
    class UW_Keybind_C* W_Keybind;                                                    // 0x0318 (size: 0x8)
    bool Destroying;                                                                  // 0x0320 (size: 0x1)
    bool WillKillPlayer;                                                              // 0x0321 (size: 0x1)
    bool InteractA;                                                                   // 0x0322 (size: 0x1)
    TEnumAsByte<E_DangerousActPrompt::Type> DangerousActType;                         // 0x0323 (size: 0x1)

    void Construct();
    void TogglePopup(bool Show);
    void ExecuteUbergraph_W_HUD_DangerousActPrompt(int32 EntryPoint);
}; // Size: 0x324

#endif
