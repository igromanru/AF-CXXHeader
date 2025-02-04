#ifndef UE4SS_SDK_W_Waypoint_Generic_HPP
#define UE4SS_SDK_W_Waypoint_Generic_HPP

class UW_Waypoint_Generic_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Pulse_DBNO;                                               // 0x02E8 (size: 0x8)
    class UWidgetAnimation* Pulse;                                                    // 0x02F0 (size: 0x8)
    class UImage* WaypointIcon;                                                       // 0x02F8 (size: 0x8)
    class UProgressBar* WaypointProgressBar;                                          // 0x0300 (size: 0x8)
    class UTextBlock* WaypointText;                                                   // 0x0308 (size: 0x8)
    class AActor* LinkedActor;                                                        // 0x0310 (size: 0x8)
    double Duration;                                                                  // 0x0318 (size: 0x8)
    double TimeCreated;                                                               // 0x0320 (size: 0x8)
    FWaypointData_Struct WaypointData;                                                // 0x0328 (size: 0x80)
    double CallForHelpStart;                                                          // 0x03A8 (size: 0x8)
    FName WaypointRowName;                                                            // 0x03B0 (size: 0x8)

    void OnLoaded_A3D3539E4A95F1B5962DC8BAE7A8AFEB(class UObject* Loaded);
    void UpdateProgressBar();
    void PlayDBNOPulseAnim();
    void WaypointVFXDataUpdate();
    void Construct();
    void ExecuteUbergraph_W_Waypoint_Generic(int32 EntryPoint);
}; // Size: 0x3B8

#endif
