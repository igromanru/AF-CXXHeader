#ifndef UE4SS_SDK_Deployed_Container_Medkit_HPP
#define UE4SS_SDK_Deployed_Container_Medkit_HPP

class ADeployed_Container_Medkit_C : public ADeployed_Container_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UStaticMeshComponent* Lid;                                                  // 0x0928 (size: 0x8)
    float LidAnimTimeline_NewTrack_0_B7E881B74D1BC15EDEA835AEB0F10D18;                // 0x0930 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> LidAnimTimeline__Direction_B7E881B74D1BC15EDEA835AEB0F10D18; // 0x0934 (size: 0x1)
    class UTimelineComponent* LidAnimTimeline;                                        // 0x0938 (size: 0x8)
    FRotator LidClosedRot;                                                            // 0x0940 (size: 0x18)
    FRotator LidOpenRot;                                                              // 0x0958 (size: 0x18)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void LidAnimTimeline__FinishedFunc();
    void LidAnimTimeline__UpdateFunc();
    void ToggleOpenFX(bool Open);
    void ExecuteUbergraph_Deployed_Container_Medkit(int32 EntryPoint);
}; // Size: 0x970

#endif
