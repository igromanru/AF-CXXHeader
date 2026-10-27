#ifndef UE4SS_SDK_I_Vehicle_HPP
#define UE4SS_SDK_I_Vehicle_HPP

class II_Vehicle_C : public IInterface
{

    void OnInventoriesLoadedFromSave(const TArray<FAbioticInventorySave>& SaveData);
    void HasOccupants?(TArray<AActor*>& Occupants);
    void SupportsRecall?();
    void IsVehicleDriveable();
    void GetVehicleContainers();
    void GetVehicleID();
    void DamageVehicleOccupants(double Damage, class AController* EventInstigator, class AActor* DamageCauser, TSubclassOf<class UDamageType> DamageTypeClass, const FHitResult& HitInfo, const FVector& HitFromDirection);
    void GetDriver(bool& Success, class AAbiotic_Character_ParentBP_C*& Character);
    void CheckVehicleFreezeState();
}; // Size: 0x28

#endif
