#ifndef UE4SS_SDK_Container_KitchenCabinet_HPP
#define UE4SS_SDK_Container_KitchenCabinet_HPP

class AContainer_KitchenCabinet_C : public ADeployed_Container_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UStaticMeshComponent* DrawerR;                                              // 0x0928 (size: 0x8)
    class UStaticMeshComponent* DrawerL;                                              // 0x0930 (size: 0x8)
    float Timeline_NewTrack_0_AD3926F14EB41A9F6216EE817CD44A6C;                       // 0x0938 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline__Direction_AD3926F14EB41A9F6216EE817CD44A6C; // 0x093C (size: 0x1)
    class UTimelineComponent* Timeline;                                               // 0x0940 (size: 0x8)
    bool Laboratory;                                                                  // 0x0948 (size: 0x1)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void UserConstructionScript();
    void Timeline__FinishedFunc();
    void Timeline__UpdateFunc();
    void ToggleOpenFX(bool Open);
    void ExecuteUbergraph_Container_KitchenCabinet(int32 EntryPoint);
}; // Size: 0x949

#endif
