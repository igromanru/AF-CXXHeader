#ifndef UE4SS_SDK_W_HUD_SuddenDeathTimer_HPP
#define UE4SS_SDK_W_HUD_SuddenDeathTimer_HPP

class UW_HUD_SuddenDeathTimer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* PulseTimer;                                               // 0x02E8 (size: 0x8)
    class UImage* Icon;                                                               // 0x02F0 (size: 0x8)
    class UOverlay* Overlay_102;                                                      // 0x02F8 (size: 0x8)
    class UProgressBar* SecondsToDeath_Bar;                                           // 0x0300 (size: 0x8)
    class UTextBlock* SecondsToDeath_Text;                                            // 0x0308 (size: 0x8)
    class USizeBox* SizeBox_47;                                                       // 0x0310 (size: 0x8)
    class UTextBlock* SuddenDeath_Description;                                        // 0x0318 (size: 0x8)
    FText Debuff Description;                                                         // 0x0320 (size: 0x10)
    TSoftObjectPtr<UTexture2D> IconTexture;                                           // 0x0330 (size: 0x28)
    FBuffDebuffRowHandle BuffIDTag;                                                   // 0x0358 (size: 0x20)
    double MaxTime;                                                                   // 0x0378 (size: 0x8)
    bool CanBeRemoved;                                                                // 0x0380 (size: 0x1)
    TMap<class FBuffDebuffRowHandle, class FLinearColor> BuffColorOverrides;          // 0x0388 (size: 0x50)

    void UpdateSuddenDeathValues();
    void OnLoaded_A4C35DD54D70DB17199B519F102CC535(class UObject* Loaded);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_W_HUD_SuddenDeathTimer(int32 EntryPoint);
}; // Size: 0x3D8

#endif
