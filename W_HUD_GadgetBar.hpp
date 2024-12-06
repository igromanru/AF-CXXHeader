#ifndef UE4SS_SDK_W_HUD_GadgetBar_HPP
#define UE4SS_SDK_W_HUD_GadgetBar_HPP

class UW_HUD_GadgetBar_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* PulseRed;                                                 // 0x02E8 (size: 0x8)
    class UImage* GadgetBG;                                                           // 0x02F0 (size: 0x8)
    class UImage* GadgetIcon;                                                         // 0x02F8 (size: 0x8)
    class UProgressBar* GadgetProgressBar_Batt;                                       // 0x0300 (size: 0x8)
    class UProgressBar* GadgetProgressBar_Extra;                                      // 0x0308 (size: 0x8)
    class UTextBlock* ValueText;                                                      // 0x0310 (size: 0x8)
    class UTexture2D* Icon;                                                           // 0x0318 (size: 0x8)
    FString GadgetID;                                                                 // 0x0320 (size: 0x10)
    bool ShowBatteryBar;                                                              // 0x0330 (size: 0x1)
    bool ShowExtraBar;                                                                // 0x0331 (size: 0x1)
    bool ShowValueText;                                                               // 0x0332 (size: 0x1)
    FLinearColor ExtraBarColor;                                                       // 0x0334 (size: 0x10)

    void UpdateValueText(FText TextToShow);
    void PreConstruct(bool IsDesignTime);
    void UpdateBatteryLevel(double CurrentLevel, double MaxLevel);
    void ExecuteUbergraph_W_HUD_GadgetBar(int32 EntryPoint);
}; // Size: 0x344

#endif
