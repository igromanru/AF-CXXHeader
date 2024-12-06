#ifndef UE4SS_SDK_Elevator_Office_BP_HPP
#define UE4SS_SDK_Elevator_Office_BP_HPP

class AElevator_Office_BP_C : public AElevator_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UTextRenderComponent* FrontReminderText1;                                   // 0x0410 (size: 0x8)
    class UTextRenderComponent* FrontReminderText;                                    // 0x0418 (size: 0x8)
    class UStaticMeshComponent* HatchMesh;                                            // 0x0420 (size: 0x8)
    bool TwoExitDoors;                                                                // 0x0428 (size: 0x1)
    class AElevatorDoors_Office_BP_C* AttachedDoors_Front;                            // 0x0430 (size: 0x8)
    class AElevatorDoors_Office_BP_C* AttachedDoors_Rear;                             // 0x0438 (size: 0x8)
    class AElevatorDoors_Office_BP_C* LevelDoor_Bottom_Front;                         // 0x0440 (size: 0x8)
    class AElevatorDoors_Office_BP_C* LevelDoor_Bottom_Rear;                          // 0x0448 (size: 0x8)
    class AElevatorDoors_Office_BP_C* LevelDoor_Top_Front;                            // 0x0450 (size: 0x8)
    class AElevatorDoors_Office_BP_C* LevelDoor_Top_Rear;                             // 0x0458 (size: 0x8)
    FTimerHandle DelayedDoorOpenTimer;                                                // 0x0460 (size: 0x8)

    void PlayElevatorBong();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ToggleInteriorDoors(bool Open);
    void ToggleTopDoors(bool Open);
    void ToggleBottomDoors(bool Open);
    void CloseAllDoors();
    void OpenTopDoors();
    void OpenBottomDoors();
    void Delayed_DoorOpenTop();
    void Delayed_DoorOpenBottom();
    void OnLoadedFromSave(bool Top);
    void ExecuteUbergraph_Elevator_Office_BP(int32 EntryPoint);
}; // Size: 0x468

#endif
