#ifndef UE4SS_SDK_W_HUD_AmmoCounter_HPP
#define UE4SS_SDK_W_HUD_AmmoCounter_HPP

class UW_HUD_AmmoCounter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* RotateReloadIcon;                                         // 0x02E8 (size: 0x8)
    class UImage* IconCurrentAmmo;                                                    // 0x02F0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F8 (size: 0x8)
    class UImage* ReloadIcon;                                                         // 0x0300 (size: 0x8)
    class UTextBlock* Text_CurrentAmmo;                                               // 0x0308 (size: 0x8)
    class UTextBlock* Text_MaxAmmo;                                                   // 0x0310 (size: 0x8)
    class UCanvasPanel* VisCanvas;                                                    // 0x0318 (size: 0x8)
    int32 CurrentAmmo;                                                                // 0x0320 (size: 0x4)
    int32 MaxAmmo;                                                                    // 0x0324 (size: 0x4)

    void UpdateAmmo();
    void ToggleReloading(bool Reloading);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_W_HUD_AmmoCounter(int32 EntryPoint);
}; // Size: 0x328

#endif
