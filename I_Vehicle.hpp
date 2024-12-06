#ifndef UE4SS_SDK_I_Vehicle_HPP
#define UE4SS_SDK_I_Vehicle_HPP

class II_Vehicle_C : public IInterface
{

    void OnInventoriesLoadedFromSave(const TArray<FSaveData_Inventories_Struct>& SaveData);
    void HasOccupants?(TArray<class AActor*>& Occupants);
    bool SupportsRecall?();
    bool IsVehicleDriveable();
    TArray<class UAbiotic_InventoryComponent_C*> GetVehicleContainers();
    FString GetVehicleID();
    void DamageVehicleOccupants(double Damage, class AController* EventInstigator, class AActor* DamageCauser, TSubclassOf<class UDamageType> DamageTypeClass, const FHitResult& HitInfo, const FVector& HitFromDirection);
    void GetDriver(bool& Success, class AAbiotic_Character_ParentBP_C*& Character);
    bool CheckVehicleFreezeState();
}; // Size: 0x28

#endif
