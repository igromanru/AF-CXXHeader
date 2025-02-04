#ifndef UE4SS_SDK_Item_Gear_ParentBP_HPP
#define UE4SS_SDK_Item_Gear_ParentBP_HPP

class AItem_Gear_ParentBP_C : public AAbiotic_Item_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B18 (size: 0x8)
    double CurrentDurabilityLeft;                                                     // 0x0B20 (size: 0x8)
    TArray<class UMaterialInstanceDynamic*> PlayerGearMeshMaterial;                   // 0x0B28 (size: 0x10)
    bool Equipped;                                                                    // 0x0B38 (size: 0x1)

    void Check for Similar Gear Item in Slot(TEnumAsByte<E_InventorySlotType::Type> Slot Type To Check, bool& Same);
    void Check for Existing Gear Buff(FName InputPin, class UAbiotic_InventoryComponent_C*& EquipInventory, bool& Buff Exist);
    void FindGearCosmeticData(bool CheckForTransmog, TEnumAsByte<E_InventorySlotType::Type> InventorySlot, bool& Success, FItemCosmetics_Struct& ItemCosmeticData);
    void CanLoseDurabilityOnUse(bool Secondary, bool& CanLose);
    void CanUse(bool& CanUse, class AActor*& TargetActor, bool& OverrideLogic);
    FName GetAttachedSocketData(FName SocketToLookFor, class UMeshComponent* MeshComponent, FVector& SocketLocation, class UMeshComponent*& Return Mesh);
    void Server Set New Gear Armor Value(double NewArmorValue);
    void GetVisualItemData(bool CheckForTransmog, TEnumAsByte<E_InventorySlotType::Type> InventorySlot, FAbiotic_InventoryItemStruct& ItemData, bool& FoundTransmogOverride, FAbiotic_InventoryItemSlotStruct& TransmogSlotData);
    void GetDamageResistance(const class UDamageType* DamageType, double& DamageBlockedByArmor);
    void OnRep_CurrentDurabilityLeft();
    void UpdateDurabilityVFX(class UMeshComponent*& PlayerGearMeshComponent);
    void Update Gear State(bool Equipped);
    void UpdateAttachedGearDurabilityAmount(double DurabilityLeft);
    void Server_OnDamageBlocked();
    void Local_SetBonusesBuffUpdate(class AAbiotic_PlayerCharacter_C* OwningCharacter);
    void ReceiveBeginPlay();
    void Current Set Bonuses Updated(class AAbiotic_PlayerCharacter_C* OwningCharacter);
    void DestroyGearItem(TEnumAsByte<E_InventorySlotType::Type> Slot Type);
    void ReceiveDestroyed();
    void ExecuteUbergraph_Item_Gear_ParentBP(int32 EntryPoint);
}; // Size: 0xB39

#endif
