#ifndef UE4SS_SDK_Tram_ParentBP_HPP
#define UE4SS_SDK_Tram_ParentBP_HPP

class ATram_ParentBP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UBoxComponent* FurnitureDestroyVolume2;                                     // 0x02A0 (size: 0x8)
    class UBoxComponent* FurnitureDestroyVolume1;                                     // 0x02A8 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x02B0 (size: 0x8)
    class USceneComponent* TeleportLocations;                                         // 0x02B8 (size: 0x8)
    class UTramMovementComponent* TramMovement;                                       // 0x02C0 (size: 0x8)
    class UTextRenderComponent* Text_Front;                                           // 0x02C8 (size: 0x8)
    class UChildActorComponent* LoadIgnoreZone;                                       // 0x02D0 (size: 0x8)
    class UAudioComponent* tram_traveling_Cue;                                        // 0x02D8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02E0 (size: 0x8)
    class UChildActorComponent* NegativeButton;                                       // 0x02E8 (size: 0x8)
    class UChildActorComponent* PositiveButton;                                       // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* MainBody;                                             // 0x02F8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0300 (size: 0x8)
    class ATramSystem_Station_C* StatingStation;                                      // 0x0308 (size: 0x8)
    class ATramSystem_Rail_C* CurrentRail;                                            // 0x0310 (size: 0x8)
    class ATramSystem_StopPoint_C* TargetPoint;                                       // 0x0318 (size: 0x8)
    class ATramSystem_StopPoint_C* OriginPoint;                                       // 0x0320 (size: 0x8)
    double NextStopDistance;                                                          // 0x0328 (size: 0x8)
    double CurrentRailPosition;                                                       // 0x0330 (size: 0x8)
    double TramSpeed;                                                                 // 0x0338 (size: 0x8)
    bool Moving;                                                                      // 0x0340 (size: 0x1)
    bool PositiveDirection;                                                           // 0x0341 (size: 0x1)
    bool ButtonsDisabled;                                                             // 0x0342 (size: 0x1)
    bool IgnoreSplineRotation;                                                        // 0x0343 (size: 0x1)
    double FixedRotationIfIgnored;                                                    // 0x0348 (size: 0x8)
    class ATramSystem_Station_C* TargetStation;                                       // 0x0350 (size: 0x8)
    FTram_ParentBP_CTargetStationUpdated TargetStationUpdated;                        // 0x0358 (size: 0x10)
    void TargetStationUpdated(class ATramSystem_Station_C* NewTarget);
    int32 CurrentStationCount;                                                        // 0x0368 (size: 0x4)
    FTransform SmoothedRailedPosition;                                                // 0x0370 (size: 0x60)
    double SmoothedRailPosition;                                                      // 0x03D0 (size: 0x8)
    bool TeleportFallProtection;                                                      // 0x03D8 (size: 0x1)
    class ATramSystem_Station_C* PreviousStation;                                     // 0x03E0 (size: 0x8)
    bool IsAtStation;                                                                 // 0x03E8 (size: 0x1)
    bool HasPassengers;                                                               // 0x03E9 (size: 0x1)
    double TramSpeedUnattended;                                                       // 0x03F0 (size: 0x8)
    TEnumAsByte<E_TramDoorState::Type> TramDoorState;                                 // 0x03F8 (size: 0x1)

    void OnRep_TramDoorState();
    void GetTramContainers(TArray<class UAbiotic_InventoryComponent_C*>& Array);
    void UpdateStationState();
    void SaveTram();
    void OnRep_PreviousStation();
    void UpdatePassengerCount();
    void CharacterEnteredTram(class AAbiotic_Character_ParentBP_C* Character);
    void GetTramSpeed(double& Speed);
    void GetStoppedAtStation(bool& StoppedAtStation, class ATramSystem_Station_C*& Station);
    void FindNextStation(class ATramSystem_Station_C*& Station, bool& Positive);
    void CharacterLeftTram(class AAbiotic_Character_ParentBP_C* Character);
    void OnRep_CurrentRail();
    void SetNextStopPoint(bool Positive, class ATramSystem_StopPoint_C* CurrentPoint);
    void ChangeDirection(bool Positive, int32 StationCount);
    void InitTram();
    void OnRep_Moving();
    void FindNextTarget();
    void UpdateTramPosition(double DeltaTime, bool ForceUpdate);
    void TickTramPosition(double DeltaTime);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void PositiveButtonPressed(bool Activated);
    void NegativeButtonPressed(bool Activated);
    void UpdateExternalStations();
    void OnFurnitureDestroyOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnInventorySaveLoaded(const TArray<FSaveData_Inventories_Struct>& SaveData);
    void ExecuteUbergraph_Tram_ParentBP(int32 EntryPoint);
    void TargetStationUpdated__DelegateSignature(class ATramSystem_Station_C* NewTarget);
}; // Size: 0x3F9

#endif
