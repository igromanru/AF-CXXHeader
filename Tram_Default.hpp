#ifndef UE4SS_SDK_Tram_Default_HPP
#define UE4SS_SDK_Tram_Default_HPP

class ATram_Default_C : public ATram_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UBoxComponent* Box6;                                                        // 0x0438 (size: 0x8)
    class UBoxComponent* Box5;                                                        // 0x0440 (size: 0x8)
    class UBoxComponent* Box4;                                                        // 0x0448 (size: 0x8)
    class UBoxComponent* Box3;                                                        // 0x0450 (size: 0x8)
    class UBoxComponent* Box2;                                                        // 0x0458 (size: 0x8)
    class UBoxComponent* Box1;                                                        // 0x0460 (size: 0x8)
    class UChildActorComponent* Container;                                            // 0x0468 (size: 0x8)
    class UBoxComponent* NoVehicleBox;                                                // 0x0470 (size: 0x8)
    class UStaticMeshComponent* ExitSign1;                                            // 0x0478 (size: 0x8)
    class UStaticMeshComponent* ExitSign;                                             // 0x0480 (size: 0x8)
    class UDecalComponent* WheelchairDecal;                                           // 0x0488 (size: 0x8)
    class UChildActorComponent* NarrowSeat_04;                                        // 0x0490 (size: 0x8)
    class UChildActorComponent* NarrowSeat_02;                                        // 0x0498 (size: 0x8)
    class UChildActorComponent* NarrowSeat_03;                                        // 0x04A0 (size: 0x8)
    class UChildActorComponent* NarrowSeat_01;                                        // 0x04A8 (size: 0x8)
    class UChildActorComponent* BigSeat_02;                                           // 0x04B0 (size: 0x8)
    class UStaticMeshComponent* DoorL;                                                // 0x04B8 (size: 0x8)
    class UStaticMeshComponent* DoorR;                                                // 0x04C0 (size: 0x8)
    class UChildActorComponent* InteriorLight;                                        // 0x04C8 (size: 0x8)
    class UChildActorComponent* BigSeat_01;                                           // 0x04D0 (size: 0x8)
    float DoorTimeLine_Alpha_9EC262174074586DC7EC78900A368CFD;                        // 0x04D8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> DoorTimeLine__Direction_9EC262174074586DC7EC78900A368CFD; // 0x04DC (size: 0x1)
    class UTimelineComponent* DoorTimeline;                                           // 0x04E0 (size: 0x8)
    FTransform Transform_DoorLeft_Open;                                               // 0x04F0 (size: 0x60)
    FTransform Transform_DoorLeft_Closed;                                             // 0x0550 (size: 0x60)
    FTransform Transform_DoorRight_Open;                                              // 0x05B0 (size: 0x60)
    FTransform Transform_DoorRight_Closed;                                            // 0x0610 (size: 0x60)

    void OnRep_DoorState();
    void GetTramContainers(TArray<class UAbiotic_InventoryComponent_C*>& Array);
    void DoorTimeLine__FinishedFunc();
    void DoorTimeLine__UpdateFunc();
    void UpdateStationState();
    void ReceiveBeginPlay();
    void OnInventorySaveLoaded(const TArray<FSaveData_Inventories_Struct>& SaveData);
    void OnStorageRequestedSave();
    void ExecuteUbergraph_Tram_Default(int32 EntryPoint);
}; // Size: 0x670

#endif
