#ifndef UE4SS_SDK_Deployed_Container_SecurityCartCargo_HPP
#define UE4SS_SDK_Deployed_Container_SecurityCartCargo_HPP

class ADeployed_Container_SecurityCartCargo_C : public ADeployed_Container_Cargo_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A00 (size: 0x8)
    class UStaticMeshComponent* Lid;                                                  // 0x0A08 (size: 0x8)
    float LidAnimTimeline_NewTrack_0_6A87CCD64EF00B33D63EEDB7EBA2F4FF;                // 0x0A10 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> LidAnimTimeline__Direction_6A87CCD64EF00B33D63EEDB7EBA2F4FF; // 0x0A14 (size: 0x1)
    class UTimelineComponent* LidAnimTimeline;                                        // 0x0A18 (size: 0x8)
    FRotator LidClosedRot;                                                            // 0x0A20 (size: 0x18)
    FRotator LidOpenRot;                                                              // 0x0A38 (size: 0x18)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void LidAnimTimeline__FinishedFunc();
    void LidAnimTimeline__UpdateFunc();
    void ToggleOpenFX(bool Open);
    void ExecuteUbergraph_Deployed_Container_SecurityCartCargo(int32 EntryPoint);
}; // Size: 0xA50

#endif
