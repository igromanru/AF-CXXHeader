#ifndef UE4SS_SDK_Deployed_Toilet_Makeshift_HPP
#define UE4SS_SDK_Deployed_Toilet_Makeshift_HPP

class ADeployed_Toilet_Makeshift_C : public AToilet_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0898 (size: 0x8)
    class UChildActorComponent* WasteBucket;                                          // 0x08A0 (size: 0x8)
    double ContinenceLoss;                                                            // 0x08A8 (size: 0x8)
    bool PendingDestroyed;                                                            // 0x08B0 (size: 0x1)

    void UpdateWorldSave(bool Destroyed);
    void OnInventoriesLoadedFromSave(TArray<FSaveData_Inventories_Struct>& Data);
    void GetInventoriesToSave(TArray<class UAbiotic_InventoryComponent_C*>& Inventories);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components, bool& DontHighlightPowerCord);
    void ReceiveBeginPlay();
    void SetupPaintAndTexture();
    void NewSeatOccupyStatus(bool Occupied, int32 Index, class AAbiotic_Character_ParentBP_C* Character);
    void UpdateDurabilityText();
    void Process Damage(float Damage, class UObject* DamageType, FVector HitLocation, FVector HitNormal, class UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, class AController* InstigatedBy, class UObject* DamageCauser, FHitResult HitInfo);
    void DestroyDeployable(bool NoLoot, int32 Extra Loot Quantity, bool LootBagLocationOverride, FVector LocationOverride);
    void ExecuteUbergraph_Deployed_Toilet_Makeshift(int32 EntryPoint);
}; // Size: 0x8B1

#endif
