#ifndef UE4SS_SDK_Deployed_HazardCrate_HPP
#define UE4SS_SDK_Deployed_HazardCrate_HPP

class ADeployed_HazardCrate_C : public ADeployed_Container_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UStaticMeshComponent* Lid;                                                  // 0x0928 (size: 0x8)
    float Timeline_NewTrack_0_3EFC55DA44329E9BB8975AA3DA97359B;                       // 0x0930 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline__Direction_3EFC55DA44329E9BB8975AA3DA97359B; // 0x0934 (size: 0x1)
    class UTimelineComponent* Timeline;                                               // 0x0938 (size: 0x8)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void Timeline__FinishedFunc();
    void Timeline__UpdateFunc();
    void ToggleOpenFX(bool Open);
    void ExecuteUbergraph_Deployed_HazardCrate(int32 EntryPoint);
}; // Size: 0x940

#endif
