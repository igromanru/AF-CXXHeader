#ifndef UE4SS_SDK_W_HUD_Crosshair_HPP
#define UE4SS_SDK_W_HUD_Crosshair_HPP

class UW_HUD_Crosshair_C : public UAbioticWidget
{
    class UImage* CenterDot;                                                          // 0x02E0 (size: 0x8)
    class UImage* StealthIndicator;                                                   // 0x02E8 (size: 0x8)
    int32 StealthValue;                                                               // 0x02F0 (size: 0x4)

    void UpdateCrosshairStealthIndicator(int32 State);
}; // Size: 0x2F4

#endif
