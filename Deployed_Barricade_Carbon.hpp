#ifndef UE4SS_SDK_Deployed_Barricade_Carbon_HPP
#define UE4SS_SDK_Deployed_Barricade_Carbon_HPP

class ADeployed_Barricade_Carbon_C : public ADeployed_Barricade_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class UStaticMeshComponent* Window2;                                              // 0x0858 (size: 0x8)
    class UStaticMeshComponent* Window1;                                              // 0x0860 (size: 0x8)
    class UStaticMeshComponent* Window;                                               // 0x0868 (size: 0x8)
    float WindowSlideAnimTimeline_NewTrack_0_7E93ECEC405EFF093620BE82914F6F2A;        // 0x0870 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> WindowSlideAnimTimeline__Direction_7E93ECEC405EFF093620BE82914F6F2A; // 0x0874 (size: 0x1)
    class UTimelineComponent* WindowSlideAnimTimeline;                                // 0x0878 (size: 0x8)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void WindowSlideAnimTimeline__FinishedFunc();
    void WindowSlideAnimTimeline__UpdateFunc();
    void TogglePowerFX();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Deployed_Barricade_Carbon(int32 EntryPoint);
}; // Size: 0x880

#endif
