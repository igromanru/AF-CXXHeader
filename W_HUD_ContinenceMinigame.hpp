#ifndef UE4SS_SDK_W_HUD_ContinenceMinigame_HPP
#define UE4SS_SDK_W_HUD_ContinenceMinigame_HPP

class UW_HUD_ContinenceMinigame_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Paused;                                                   // 0x02E8 (size: 0x8)
    class UWidgetAnimation* PulseIndicator;                                           // 0x02F0 (size: 0x8)
    class UWidgetAnimation* PulsePooBar;                                              // 0x02F8 (size: 0x8)
    class UImage* Arrow;                                                              // 0x0300 (size: 0x8)
    class UImage* Arrow_1;                                                            // 0x0308 (size: 0x8)
    class UImage* BG;                                                                 // 0x0310 (size: 0x8)
    class UImage* BG2;                                                                // 0x0318 (size: 0x8)
    class UProgressBar* ContinenceBar;                                                // 0x0320 (size: 0x8)
    class UTextBlock* DebugText;                                                      // 0x0328 (size: 0x8)
    class UImage* Image;                                                              // 0x0330 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0338 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0340 (size: 0x8)
    class UW_Keybind_C* Keybind_Interact;                                             // 0x0348 (size: 0x8)
    double SliderAlpha;                                                               // 0x0350 (size: 0x8)
    double Slider_L;                                                                  // 0x0358 (size: 0x8)
    double Slider_R;                                                                  // 0x0360 (size: 0x8)
    double SmallWindowL;                                                              // 0x0368 (size: 0x8)
    double SmallWindowR;                                                              // 0x0370 (size: 0x8)
    double BigWindowL;                                                                // 0x0378 (size: 0x8)
    double BigWindowR;                                                                // 0x0380 (size: 0x8)
    double CurrentContinencePercent;                                                  // 0x0388 (size: 0x8)
    double TargetContinencePercent;                                                   // 0x0390 (size: 0x8)

    void UpdateSliderAlpha(double Alpha, double ContinencePercentage);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_W_HUD_ContinenceMinigame(int32 EntryPoint);
}; // Size: 0x398

#endif
