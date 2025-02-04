#ifndef UE4SS_SDK_Deployed_Container_FilingCabinet_Huge_HPP
#define UE4SS_SDK_Deployed_Container_FilingCabinet_Huge_HPP

class ADeployed_Container_FilingCabinet_Huge_C : public ADeployed_Container_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F8 (size: 0x8)
    class UStaticMeshComponent* Drawer3;                                              // 0x0A00 (size: 0x8)
    class UStaticMeshComponent* Drawer2;                                              // 0x0A08 (size: 0x8)
    class UStaticMeshComponent* Drawer1;                                              // 0x0A10 (size: 0x8)
    float Timeline_NewTrack_2_5C3A0CD94066E3E84196AB88948F6811;                       // 0x0A18 (size: 0x4)
    float Timeline_NewTrack_1_5C3A0CD94066E3E84196AB88948F6811;                       // 0x0A1C (size: 0x4)
    float Timeline_NewTrack_0_5C3A0CD94066E3E84196AB88948F6811;                       // 0x0A20 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline__Direction_5C3A0CD94066E3E84196AB88948F6811; // 0x0A24 (size: 0x1)
    class UTimelineComponent* Timeline;                                               // 0x0A28 (size: 0x8)
    FVector Drawer1_Closed;                                                           // 0x0A30 (size: 0x18)
    FVector Drawer1_Open;                                                             // 0x0A48 (size: 0x18)
    FVector Drawer2_Closed;                                                           // 0x0A60 (size: 0x18)
    FVector Drawer2_Open;                                                             // 0x0A78 (size: 0x18)
    FVector Drawer3_Closed;                                                           // 0x0A90 (size: 0x18)
    FVector Drawer3_Open;                                                             // 0x0AA8 (size: 0x18)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void Timeline__FinishedFunc();
    void Timeline__UpdateFunc();
    void ToggleOpenFX(bool Open);
    void ExecuteUbergraph_Deployed_Container_FilingCabinet_Huge(int32 EntryPoint);
}; // Size: 0xAC0

#endif
