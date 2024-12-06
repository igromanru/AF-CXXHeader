#ifndef UE4SS_SDK_MoveableCart_Tier2_HPP
#define UE4SS_SDK_MoveableCart_Tier2_HPP

class AMoveableCart_Tier2_C : public AMoveableCart_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0760 (size: 0x8)
    class USpotLightComponent* Headlights;                                            // 0x0768 (size: 0x8)
    class UStaticMeshComponent* SM_Headlight_R;                                       // 0x0770 (size: 0x8)
    class UStaticMeshComponent* SM_Headlight_L;                                       // 0x0778 (size: 0x8)
    class UStaticMeshComponent* SM_Upgrade_01;                                        // 0x0780 (size: 0x8)
    float HeadlightTimeline_NewTrack_0_C11339D34E038AAB5540688A7FBC898E;              // 0x0788 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> HeadlightTimeline__Direction_C11339D34E038AAB5540688A7FBC898E; // 0x078C (size: 0x1)
    class UTimelineComponent* HeadlightTimeline;                                      // 0x0790 (size: 0x8)
    bool HeadlightsActive;                                                            // 0x0798 (size: 0x1)

    void OnRep_HeadlightsActive();
    void HeadlightTimeline__FinishedFunc();
    void HeadlightTimeline__UpdateFunc();
    void InpActEvt_Flashlight_K2Node_InputActionEvent_0(FKey Key);
    void ToggleHeadlights(bool On);
    void Request_ToggleHeadlights(bool On);
    void ExecuteUbergraph_MoveableCart_Tier2(int32 EntryPoint);
}; // Size: 0x799

#endif
