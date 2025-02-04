#ifndef UE4SS_SDK_Container_KitchenCounter_HPP
#define UE4SS_SDK_Container_KitchenCounter_HPP

class AContainer_KitchenCounter_C : public ADeployed_Container_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F8 (size: 0x8)
    class UStaticMeshComponent* DrawerTop;                                            // 0x0A00 (size: 0x8)
    class UStaticMeshComponent* DrawerLeft;                                           // 0x0A08 (size: 0x8)
    class UStaticMeshComponent* DrawerRight;                                          // 0x0A10 (size: 0x8)
    class UStaticMeshComponent* BackboardMesh;                                        // 0x0A18 (size: 0x8)
    float Timeline_NewTrack_0_7A223F3E4617B311E35929AA72988A74;                       // 0x0A20 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline__Direction_7A223F3E4617B311E35929AA72988A74; // 0x0A24 (size: 0x1)
    class UTimelineComponent* Timeline;                                               // 0x0A28 (size: 0x8)
    bool SinkVersion;                                                                 // 0x0A30 (size: 0x1)
    bool ShowBackboard;                                                               // 0x0A31 (size: 0x1)
    bool Laboratory;                                                                  // 0x0A32 (size: 0x1)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void UserConstructionScript();
    void Timeline__FinishedFunc();
    void Timeline__UpdateFunc();
    void ToggleOpenFX(bool Open);
    void ExecuteUbergraph_Container_KitchenCounter(int32 EntryPoint);
}; // Size: 0xA33

#endif
