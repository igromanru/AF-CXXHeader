#ifndef UE4SS_SDK_Deployed_Container_SUVCargo_HPP
#define UE4SS_SDK_Deployed_Container_SUVCargo_HPP

class ADeployed_Container_SUVCargo_C : public ADeployed_Container_Cargo_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0928 (size: 0x8)
    class UStaticMeshComponent* Lid;                                                  // 0x0930 (size: 0x8)
    float LidAnimTimeline_NewTrack_0_FA84DF2646C0E19D8815FB9209EF37CB;                // 0x0938 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> LidAnimTimeline__Direction_FA84DF2646C0E19D8815FB9209EF37CB; // 0x093C (size: 0x1)
    class UTimelineComponent* LidAnimTimeline;                                        // 0x0940 (size: 0x8)
    FRotator LidClosedRot;                                                            // 0x0948 (size: 0x18)
    FRotator LidOpenRot;                                                              // 0x0960 (size: 0x18)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void LidAnimTimeline__FinishedFunc();
    void LidAnimTimeline__UpdateFunc();
    void ToggleOpenFX(bool Open);
    void ExecuteUbergraph_Deployed_Container_SUVCargo(int32 EntryPoint);
}; // Size: 0x978

#endif
