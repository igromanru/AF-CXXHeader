#ifndef UE4SS_SDK_ElevatorDoors_Office_BP_HPP
#define UE4SS_SDK_ElevatorDoors_Office_BP_HPP

class AElevatorDoors_Office_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class USceneComponent* AntiStuckTPSpotBack;                                       // 0x02A0 (size: 0x8)
    class USceneComponent* AntiStuckTPSpotFront;                                      // 0x02A8 (size: 0x8)
    class UBoxComponent* PushOutBox;                                                  // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* DoorL;                                                // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* DoorR;                                                // 0x02C0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C8 (size: 0x8)
    float DoorOpenTimeline_NewTrack_0_94E302F04E307C71023AC5808BC904DC;               // 0x02D0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> DoorOpenTimeline__Direction_94E302F04E307C71023AC5808BC904DC; // 0x02D4 (size: 0x1)
    class UTimelineComponent* DoorOpenTimeline;                                       // 0x02D8 (size: 0x8)
    bool DoorsOpen;                                                                   // 0x02E0 (size: 0x1)
    bool StaticLevelDoor;                                                             // 0x02E1 (size: 0x1)
    double DoorTimelineSpeed;                                                         // 0x02E8 (size: 0x8)

    void Server_PushPlayersOutOfDoorway();
    void OnRep_DoorsOpen();
    void DoorOpenTimeline__FinishedFunc();
    void DoorOpenTimeline__UpdateFunc();
    void ToggleDoorState();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ElevatorDoors_Office_BP(int32 EntryPoint);
}; // Size: 0x2F0

#endif
