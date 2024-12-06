#ifndef UE4SS_SDK_W_HUD_TemperatureBar_HPP
#define UE4SS_SDK_W_HUD_TemperatureBar_HPP

class UW_HUD_TemperatureBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* PopIn;                                                    // 0x02E8 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x02F0 (size: 0x8)
    class UImage* BG;                                                                 // 0x02F8 (size: 0x8)
    class UImage* ColderArrow;                                                        // 0x0300 (size: 0x8)
    class UImage* ColderIcon;                                                         // 0x0308 (size: 0x8)
    class UImage* ColdMarker;                                                         // 0x0310 (size: 0x8)
    class UImage* HotMarker;                                                          // 0x0318 (size: 0x8)
    class UImage* Marker;                                                             // 0x0320 (size: 0x8)
    class UBorder* Square_Cold1;                                                      // 0x0328 (size: 0x8)
    class UBorder* Square_Cold2;                                                      // 0x0330 (size: 0x8)
    class UBorder* Square_Cold3;                                                      // 0x0338 (size: 0x8)
    class UBorder* Square_Hot1;                                                       // 0x0340 (size: 0x8)
    class UBorder* Square_Hot2;                                                       // 0x0348 (size: 0x8)
    class UBorder* Square_Hot3;                                                       // 0x0350 (size: 0x8)
    class UImage* TemperatureArrow;                                                   // 0x0358 (size: 0x8)
    class UImage* WarmerArrow;                                                        // 0x0360 (size: 0x8)
    class UImage* WarmerIcon;                                                         // 0x0368 (size: 0x8)
    double LastKnownValue;                                                            // 0x0370 (size: 0x8)
    bool KeepVisible;                                                                 // 0x0378 (size: 0x1)
    int32 ResistanceHigh;                                                             // 0x037C (size: 0x4)
    int32 ResistanceLow;                                                              // 0x0380 (size: 0x4)
    bool UpdateWidgetVisibility;                                                      // 0x0384 (size: 0x1)
    class UCurveFloat* TempeatureUICurve;                                             // 0x0388 (size: 0x8)
    double LastKnownPreferred;                                                        // 0x0390 (size: 0x8)

    void UpdateColors();
    void MoveMarker(class UImage* Marker, double XPosition, double ThermalValue);
    void UpdateThreshold(int32 ResistanceHigh, int32 ResistanceLow);
    void CalculateWarmerColder(double Temperature);
    void Update Temperature Bar(double Temperature, double PreferredTemperature);
    void KeepWidgetVisible();
    void DelayedTemperatureStableCheck();
    void ExecuteUbergraph_W_HUD_TemperatureBar(int32 EntryPoint);
}; // Size: 0x398

#endif
