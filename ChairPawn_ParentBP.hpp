#ifndef UE4SS_SDK_ChairPawn_ParentBP_HPP
#define UE4SS_SDK_ChairPawn_ParentBP_HPP

class AChairPawn_ParentBP_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0680 (size: 0x8)
    class USceneComponent* FurnitureRoot;                                             // 0x0688 (size: 0x8)
    bool FreezeVehicle;                                                               // 0x0690 (size: 0x1)
    class AAbioticDeployed_Furniture_ParentBP_C* LinkedFurniture;                     // 0x0698 (size: 0x8)
    double LastMovementTimestamp;                                                     // 0x06A0 (size: 0x8)
    class UAbioticPhysicalMaterial* FloorMaterial;                                    // 0x06A8 (size: 0x8)
    float ChairLaunchSpeed;                                                           // 0x06B0 (size: 0x4)
    double TimeBetweenChairPushes;                                                    // 0x06B8 (size: 0x8)
    class USoundBase* ChairPushSound;                                                 // 0x06C0 (size: 0x8)
    bool PendingDestroy;                                                              // 0x06C8 (size: 0x1)
    FVector LastSaveLocation;                                                         // 0x06D0 (size: 0x18)
    float MinSaveDistance;                                                            // 0x06E8 (size: 0x4)
    float SaveCheckTime;                                                              // 0x06EC (size: 0x4)

    void HasOccupants?(TArray<class AActor*>& Occupants);
    bool SupportsRecall?();
    bool IsVehicleDriveable();
    TArray<class UAbiotic_InventoryComponent_C*> GetVehicleContainers();
    FString GetVehicleID();
    void GetDriver(bool& Success, class AAbiotic_Character_ParentBP_C*& Character);
    bool CheckVehicleFreezeState();
    class AAbiotic_Character_ParentBP_C* Server_GetSeatedCharacter();
    void Local_PushFX();
    void Server_PushFX();
    bool IsReadyToPush();
    void ApplyFloorDamage();
    void UpdateFloorType();
    void AttachFurniture();
    void OnRep_LinkedFurniture();
    void DamageAllOccupants(double Damage, class AController* EventInstigator, class AActor* DamageCauser, TSubclassOf<class UDamageType> DamageTypeClass, const FHitResult& HitInfo, const FVector& HitFromDirection, bool& Success);
    void OnRep_FreezeVehicle();
    void OnLevelLoadUpdated(class ULevelStreaming* Level);
    void DamageVehicleOccupants(double Damage, class AController* EventInstigator, class AActor* DamageCauser, TSubclassOf<class UDamageType> DamageTypeClass, const FHitResult& HitInfo, const FVector& HitFromDirection);
    void ReceiveTick(float DeltaSeconds);
    void Request_ChairMovement(FVector Direction);
    void ReceiveBeginPlay();
    void Broadcast_PushFX();
    void OnInventoriesLoadedFromSave(const TArray<FSaveData_Inventories_Struct>& SaveData);
    void SaveChair();
    void ExecuteUbergraph_ChairPawn_ParentBP(int32 EntryPoint);
}; // Size: 0x6F0

#endif
