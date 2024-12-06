#ifndef UE4SS_SDK_ChairPawn_ParentBP_HPP
#define UE4SS_SDK_ChairPawn_ParentBP_HPP

class AChairPawn_ParentBP_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0680 (size: 0x8)
    class USceneComponent* FurnitureRoot;                                             // 0x0688 (size: 0x8)
    bool FreezeVehicle;                                                               // 0x0690 (size: 0x1)
    class AAbioticDeployed_Furniture_ParentBP_C* LinkedFurniture;                     // 0x0698 (size: 0x8)
    double LastMovementTimestamp;                                                     // 0x06A0 (size: 0x8)

    void HasOccupants?(TArray<class AActor*>& Occupants);
    bool SupportsRecall?();
    bool IsVehicleDriveable();
    TArray<class UAbiotic_InventoryComponent_C*> GetVehicleContainers();
    FString GetVehicleID();
    void GetDriver(bool& Success, class AAbiotic_Character_ParentBP_C*& Character);
    bool CheckVehicleFreezeState();
    void AttachFurniture();
    void OnRep_LinkedFurniture();
    void DamageAllOccupants(double Damage, class AController* EventInstigator, class AActor* DamageCauser, TSubclassOf<class UDamageType> DamageTypeClass, const FHitResult& HitInfo, const FVector& HitFromDirection, bool& Success);
    void OnRep_FreezeVehicle();
    void OnLevelLoadUpdated(class ULevelStreaming* Level);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void DamageVehicleOccupants(double Damage, class AController* EventInstigator, class AActor* DamageCauser, TSubclassOf<class UDamageType> DamageTypeClass, const FHitResult& HitInfo, const FVector& HitFromDirection);
    void OnInventoriesLoadedFromSave(const TArray<FSaveData_Inventories_Struct>& SaveData);
    void ExecuteUbergraph_ChairPawn_ParentBP(int32 EntryPoint);
}; // Size: 0x6A8

#endif
