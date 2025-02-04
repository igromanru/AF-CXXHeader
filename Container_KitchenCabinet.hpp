#ifndef UE4SS_SDK_Container_KitchenCabinet_HPP
#define UE4SS_SDK_Container_KitchenCabinet_HPP

class AContainer_KitchenCabinet_C : public ADeployed_Container_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F8 (size: 0x8)
    class UStaticMeshComponent* DrawerR;                                              // 0x0A00 (size: 0x8)
    class UStaticMeshComponent* DrawerL;                                              // 0x0A08 (size: 0x8)
    float Timeline_NewTrack_0_AD3926F14EB41A9F6216EE817CD44A6C;                       // 0x0A10 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline__Direction_AD3926F14EB41A9F6216EE817CD44A6C; // 0x0A14 (size: 0x1)
    class UTimelineComponent* Timeline;                                               // 0x0A18 (size: 0x8)
    bool Laboratory;                                                                  // 0x0A20 (size: 0x1)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void UserConstructionScript();
    void Timeline__FinishedFunc();
    void Timeline__UpdateFunc();
    void ToggleOpenFX(bool Open);
    void ExecuteUbergraph_Container_KitchenCabinet(int32 EntryPoint);
}; // Size: 0xA21

#endif
