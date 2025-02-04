#ifndef UE4SS_SDK_Deployed_Container_FilingCabinet_Medium_HPP
#define UE4SS_SDK_Deployed_Container_FilingCabinet_Medium_HPP

class ADeployed_Container_FilingCabinet_Medium_C : public ADeployed_Container_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F8 (size: 0x8)
    class UStaticMeshComponent* Drawer2;                                              // 0x0A00 (size: 0x8)
    class UStaticMeshComponent* Drawer1;                                              // 0x0A08 (size: 0x8)
    float Timeline_0_NewTrack_1_3C05485C4DBE9503FE66C2B41E97CB15;                     // 0x0A10 (size: 0x4)
    float Timeline_0_NewTrack_0_3C05485C4DBE9503FE66C2B41E97CB15;                     // 0x0A14 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_3C05485C4DBE9503FE66C2B41E97CB15; // 0x0A18 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0A20 (size: 0x8)
    FVector Drawer1_Closed;                                                           // 0x0A28 (size: 0x18)
    FVector Drawer1_Open;                                                             // 0x0A40 (size: 0x18)
    FVector Drawer2_Closed;                                                           // 0x0A58 (size: 0x18)
    FVector Drawer2_Open;                                                             // 0x0A70 (size: 0x18)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ToggleOpenFX(bool Open);
    void ExecuteUbergraph_Deployed_Container_FilingCabinet_Medium(int32 EntryPoint);
}; // Size: 0xA88

#endif
