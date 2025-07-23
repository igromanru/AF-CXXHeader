#ifndef UE4SS_SDK_UMG_BasicRadialIcon_HPP
#define UE4SS_SDK_UMG_BasicRadialIcon_HPP

class UUMG_BasicRadialIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Shake;                                                    // 0x02E8 (size: 0x8)
    class UWidgetAnimation* Grow;                                                     // 0x02F0 (size: 0x8)
    class UImage* Icon;                                                               // 0x02F8 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x0300 (size: 0x8)
    class USizeBox* Sizer;                                                            // 0x0308 (size: 0x8)
    class UTexture2D* IconImage;                                                      // 0x0310 (size: 0x8)
    double IconSize;                                                                  // 0x0318 (size: 0x8)
    FFBasicIconSettings Settings;                                                     // 0x0320 (size: 0x28)
    FLinearColor CurrentColor;                                                        // 0x0348 (size: 0x10)
    bool highlighted;                                                                 // 0x0358 (size: 0x1)
    double Alpha;                                                                     // 0x0360 (size: 0x8)
    bool UseItemMaterial;                                                             // 0x0368 (size: 0x1)

    FLinearColor Get_Icon_ColorAndOpacity_0();
    void OnHighlight();
    void OnUnhighlight();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_UMG_BasicRadialIcon(int32 EntryPoint);
}; // Size: 0x369

#endif
