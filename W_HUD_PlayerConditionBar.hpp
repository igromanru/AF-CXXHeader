#ifndef UE4SS_SDK_W_HUD_PlayerConditionBar_HPP
#define UE4SS_SDK_W_HUD_PlayerConditionBar_HPP

class UW_HUD_PlayerConditionBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x02E8 (size: 0x8)
    class UProgressBar* ConditionBar;                                                 // 0x02F0 (size: 0x8)
    class UImage* ConditionIcon;                                                      // 0x02F8 (size: 0x8)
    class UTexture2D* ConditionImage;                                                 // 0x0300 (size: 0x8)

    void SetColorBasedOnStatus(double Percent);
    void PreConstruct(bool IsDesignTime);
    void ShowConditionBar(double CurrentValue, double MaxValue);
    void ExecuteUbergraph_W_HUD_PlayerConditionBar(int32 EntryPoint);
}; // Size: 0x308

#endif
