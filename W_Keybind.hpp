#ifndef UE4SS_SDK_W_Keybind_HPP
#define UE4SS_SDK_W_Keybind_HPP

class UW_Keybind_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* HoldAnimation;                                            // 0x02E8 (size: 0x8)
    class UWidgetAnimation* ButtonHoldProgressFill;                                   // 0x02F0 (size: 0x8)
    class UImage* HoldImage;                                                          // 0x02F8 (size: 0x8)
    class UProgressBar* ProgressBar_182;                                              // 0x0300 (size: 0x8)
    class UStyledKeyLabel_C* StyledKeyLabel;                                          // 0x0308 (size: 0x8)
    FKeybindSettingRowHandle KeyBind;                                                 // 0x0310 (size: 0x20)
    bool PreviewGamepad;                                                              // 0x0330 (size: 0x1)
    FSlateColor TextColor;                                                            // 0x0334 (size: 0x14)
    FSlateFontInfo TextFont;                                                          // 0x0348 (size: 0x60)
    bool UseBrackets;                                                                 // 0x03A8 (size: 0x1)
    bool HoldKey;                                                                     // 0x03A9 (size: 0x1)

    void SetKeybind(const FKeybindSettingRowHandle& KeyBind);
    void ApplyKeybind(const FKeybindSetting& KeybindSetting, bool UsingGamepad);
    void Refresh();
    void UpdateKeybind(bool UsingGamepad);
    void PreConstruct(bool IsDesignTime);
    void OnMappingsChanged(class APlayerController* Player);
    void OnInputTypeChanged(bool bUsingGamepad);
    void Construct();
    void PlayHoldProgressAnimation(double InteractionDuration, double StartTime);
    void StopHoldProgressAnimation();
    void ExecuteUbergraph_W_Keybind(int32 EntryPoint);
}; // Size: 0x3AA

#endif
