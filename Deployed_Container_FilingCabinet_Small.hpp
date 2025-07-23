#ifndef UE4SS_SDK_Deployed_Container_FilingCabinet_Small_HPP
#define UE4SS_SDK_Deployed_Container_FilingCabinet_Small_HPP

class ADeployed_Container_FilingCabinet_Small_C : public ADeployed_Container_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UStaticMeshComponent* Drawer1;                                              // 0x0928 (size: 0x8)
    float DrawerTimeline_NewTrack_0_777ECCD64B2C9C19C7244EA75DD8B2C5;                 // 0x0930 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> DrawerTimeline__Direction_777ECCD64B2C9C19C7244EA75DD8B2C5; // 0x0934 (size: 0x1)
    class UTimelineComponent* DrawerTimeline;                                         // 0x0938 (size: 0x8)
    FVector Drawer_Closed;                                                            // 0x0940 (size: 0x18)
    FVector Drawer_Open;                                                              // 0x0958 (size: 0x18)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void DrawerTimeline__FinishedFunc();
    void DrawerTimeline__UpdateFunc();
    void ToggleOpenFX(bool Open);
    void ExecuteUbergraph_Deployed_Container_FilingCabinet_Small(int32 EntryPoint);
}; // Size: 0x970

#endif
