#ifndef UE4SS_SDK_Deployed_Container_TramStorage_HPP
#define UE4SS_SDK_Deployed_Container_TramStorage_HPP

class ADeployed_Container_TramStorage_C : public ADeployed_Container_Cargo_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0928 (size: 0x8)
    class UStaticMeshComponent* Lid;                                                  // 0x0930 (size: 0x8)
    float LidAnimTimeline_NewTrack_0_5A51AFA8451C7154E063089BD8306703;                // 0x0938 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> LidAnimTimeline__Direction_5A51AFA8451C7154E063089BD8306703; // 0x093C (size: 0x1)
    class UTimelineComponent* LidAnimTimeline;                                        // 0x0940 (size: 0x8)
    FRotator LidClosedRot;                                                            // 0x0948 (size: 0x18)
    FRotator LidOpenRot;                                                              // 0x0960 (size: 0x18)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void LidAnimTimeline__FinishedFunc();
    void LidAnimTimeline__UpdateFunc();
    void ToggleOpenFX(bool Open);
    void ExecuteUbergraph_Deployed_Container_TramStorage(int32 EntryPoint);
}; // Size: 0x978

#endif
