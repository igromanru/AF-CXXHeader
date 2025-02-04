#ifndef UE4SS_SDK_Deployed_Container_ArmoryLocker_HPP
#define UE4SS_SDK_Deployed_Container_ArmoryLocker_HPP

class ADeployed_Container_ArmoryLocker_C : public ADeployed_Container_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F8 (size: 0x8)
    class UStaticMeshComponent* DoorL_Handle;                                         // 0x0A00 (size: 0x8)
    class UStaticMeshComponent* DoorR_Handle;                                         // 0x0A08 (size: 0x8)
    class UStaticMeshComponent* DoorL;                                                // 0x0A10 (size: 0x8)
    class UStaticMeshComponent* DoorR;                                                // 0x0A18 (size: 0x8)
    float Timeline_NewTrack_0_1E43A095483F5E26C37FA28009EBEBE9;                       // 0x0A20 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline__Direction_1E43A095483F5E26C37FA28009EBEBE9; // 0x0A24 (size: 0x1)
    class UTimelineComponent* Timeline;                                               // 0x0A28 (size: 0x8)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void Timeline__FinishedFunc();
    void Timeline__UpdateFunc();
    void ToggleOpenFX(bool Open);
    void ExecuteUbergraph_Deployed_Container_ArmoryLocker(int32 EntryPoint);
}; // Size: 0xA30

#endif
