#ifndef UE4SS_SDK_Item_Gear_ParentBP_HPP
#define UE4SS_SDK_Item_Gear_ParentBP_HPP

class AItem_Gear_ParentBP_C : public AAbiotic_Item_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B50 (size: 0x8)
    double CurrentDurabilityLeft;                                                     // 0x0B58 (size: 0x8)
    TArray<UMaterialInstanceDynamic*> PlayerGearMeshMaterial;                         // 0x0B60 (size: 0x10)
    bool Equipped;                                                                    // 0x0B70 (size: 0x1)

    void GetBuffsToRemove(TArray<FBuffDebuffRowHandle>& BuffsToAdd);
    void GetBuffsToAdd(TArray<FBuffDebuffRowHandle>& BuffsToAdd);
    void RemoveGearBuffs();
    void ApplyGearBuffs();
    void Check for Similar Gear Item in Slot(EInventorySlotType Slot Type To Check, bool& Same);
    void Check for Existing Gear Buff(FBuffDebuffRowHandle BuffName, class AAbiotic_PlayerCharacter_C* PlayerCharacter, bool& Buff Exist);
    void FindGearCosmeticData(bool CheckForTransmog, EInventorySlotType InventorySlot, bool& Success, FItemCosmetics& ItemCosmeticData);
    void CanLoseDurabilityOnUse(bool Secondary, bool& CanLose);
    void CanUse(bool& CanUse, class AActor*& TargetActor, bool& OverrideLogic);
    void GetAttachedSocketData(FName SocketToLookFor, class UMeshComponent* MeshComponent, FVector& SocketLocation, class UMeshComponent*& Return Mesh);
    void Server Set New Gear Armor Value(double NewArmorValue);
    void GetVisualItemData(bool CheckForTransmog, EInventorySlotType InventorySlot, FAbioticInventoryItem& ItemData, bool& FoundTransmogOverride, FAbioticInventoryItemSlot& TransmogSlotData);
    void GetDamageResistance(const class UDamageType* DamageType, double& DamageBlockedByArmor);
    void OnRep_CurrentDurabilityLeft();
    void UpdateDurabilityVFX(class UMeshComponent*& PlayerGearMeshComponent);
    void Update Gear State(bool Equipped);
    void UpdateAttachedGearDurabilityAmount(double DurabilityLeft);
    void Server_OnDamageBlocked();
    void Local_SetBonusesBuffUpdate(class AAbiotic_PlayerCharacter_C* OwningCharacter);
    void ReceiveBeginPlay();
    void Current Set Bonuses Updated(class AAbiotic_PlayerCharacter_C* OwningCharacter);
    void DestroyGearItem(EInventorySlotType Slot Type);
    void ReceiveDestroyed();
    void ExecuteUbergraph_Item_Gear_ParentBP(int32 EntryPoint);
}; // Size: 0xB71

#endif
