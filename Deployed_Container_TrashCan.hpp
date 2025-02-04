#ifndef UE4SS_SDK_Deployed_Container_TrashCan_HPP
#define UE4SS_SDK_Deployed_Container_TrashCan_HPP

class ADeployed_Container_TrashCan_C : public ADeployed_Container_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F8 (size: 0x8)
    class UStaticMeshComponent* TrashTop;                                             // 0x0A00 (size: 0x8)
    float Drawer_NewTrack_0_3E4B10E34E64B89903B63287054A9CF8;                         // 0x0A08 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Drawer__Direction_3E4B10E34E64B89903B63287054A9CF8; // 0x0A0C (size: 0x1)
    class UTimelineComponent* Drawer;                                                 // 0x0A10 (size: 0x8)
    FVector LidClosed;                                                                // 0x0A18 (size: 0x18)
    FVector LidOpen;                                                                  // 0x0A30 (size: 0x18)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void Drawer__FinishedFunc();
    void Drawer__UpdateFunc();
    void ToggleOpenFX(bool Open);
    void ExecuteUbergraph_Deployed_Container_TrashCan(int32 EntryPoint);
}; // Size: 0xA48

#endif
