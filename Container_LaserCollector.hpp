#ifndef UE4SS_SDK_Container_LaserCollector_HPP
#define UE4SS_SDK_Container_LaserCollector_HPP

class AContainer_LaserCollector_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class UStaticMeshComponent* Battery8;                                             // 0x0858 (size: 0x8)
    class UStaticMeshComponent* Battery7;                                             // 0x0860 (size: 0x8)
    class UStaticMeshComponent* Battery6;                                             // 0x0868 (size: 0x8)
    class UStaticMeshComponent* Battery5;                                             // 0x0870 (size: 0x8)
    class UStaticMeshComponent* Battery4;                                             // 0x0878 (size: 0x8)
    class UStaticMeshComponent* Battery3;                                             // 0x0880 (size: 0x8)
    class UStaticMeshComponent* Battery2;                                             // 0x0888 (size: 0x8)
    class UStaticMeshComponent* Battery1;                                             // 0x0890 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0898 (size: 0x8)
    class UStaticMeshComponent* ReceiverPort;                                         // 0x08A0 (size: 0x8)
    TEnumAsByte<E_LaserCollectorState::Type> CollectionState;                         // 0x08A8 (size: 0x1)
    int32 CurrentLaserInContainer;                                                    // 0x08AC (size: 0x4)
    int32 MaxLaser;                                                                   // 0x08B0 (size: 0x4)
    int32 LaserGainRate;                                                              // 0x08B4 (size: 0x4)
    FTimerHandle LaserCollectionTimer;                                                // 0x08B8 (size: 0x8)

    void GetCorrectPlayerInventory(class AAbiotic_PlayerCharacter_C* PlayerCharacter, TEnumAsByte<E_InventorySlotType::Type> SlotType, class UAbiotic_InventoryComponent_C*& Inventory, int32& Slot);
    void GetOffhandItem(class AAbiotic_PlayerCharacter_C* PlayerCharacter, bool& Success, FAbiotic_InventoryItemSlotStruct& SlotData, FAbiotic_InventoryItemStruct& ItemData, class AItem_Gear_ParentBP_C*& GearBP);
    bool CanTakeLaserRefill(const FAbiotic_InventoryItemSlotStruct& Abiotic_InventoryItemSlotStruct, const FAbiotic_InventoryItemStruct& Abiotic_InventoryItemStruct);
    void TryRefillLaser(const FAbiotic_InventoryItemSlotStruct& ItemSlot, const FAbiotic_InventoryItemStruct& InventoryItem, class AAbiotic_Item_ParentBP_C* ItemActor, bool Hotbar);
    class UPrimitiveComponent* GetLaserReceiverPort();
    void ValidateHitLasers();
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void UpdateHeldWeaponChangeableData(class AAbiotic_Item_ParentBP_C* Weapon, FAbiotic_InventoryChangeableDataStruct ChangeableData, TEnumAsByte<E_InventorySlotType::Type> SlotType);
    void Server Fill Laser Into Weapon(class AAbiotic_Item_ParentBP_C* Weapon, TEnumAsByte<E_LiquidType::Type> CurrentLiquidType, TEnumAsByte<E_InventorySlotType::Type> SlotType);
    void OnRep_CurrentLaserInContainer();
    void LaserCollectorTimer();
    void UpdateLaserLevelFX();
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void OnRep_CollectionState();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void DelayedSave();
    void OnLoadedFromSave(double NewLifespan);
    void ReceiveBeginPlay();
    void TogglePowerFX();
    void Broadcast_TakeLaser();
    void ExecuteUbergraph_Container_LaserCollector(int32 EntryPoint);
}; // Size: 0x8C0

#endif
