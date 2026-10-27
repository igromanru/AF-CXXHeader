#ifndef UE4SS_SDK_Container_LaserCollector_HPP
#define UE4SS_SDK_Container_LaserCollector_HPP

class AContainer_LaserCollector_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0860 (size: 0x8)
    class UStaticMeshComponent* Battery8;                                             // 0x0868 (size: 0x8)
    class UStaticMeshComponent* Battery7;                                             // 0x0870 (size: 0x8)
    class UStaticMeshComponent* Battery6;                                             // 0x0878 (size: 0x8)
    class UStaticMeshComponent* Battery5;                                             // 0x0880 (size: 0x8)
    class UStaticMeshComponent* Battery4;                                             // 0x0888 (size: 0x8)
    class UStaticMeshComponent* Battery3;                                             // 0x0890 (size: 0x8)
    class UStaticMeshComponent* Battery2;                                             // 0x0898 (size: 0x8)
    class UStaticMeshComponent* Battery1;                                             // 0x08A0 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x08A8 (size: 0x8)
    class UStaticMeshComponent* ReceiverPort;                                         // 0x08B0 (size: 0x8)
    TEnumAsByte<E_LaserCollectorState::Type> CollectionState;                         // 0x08B8 (size: 0x1)
    int32 CurrentLaserInContainer;                                                    // 0x08BC (size: 0x4)
    int32 MaxLaser;                                                                   // 0x08C0 (size: 0x4)
    int32 LaserGainRate;                                                              // 0x08C4 (size: 0x4)
    FTimerHandle LaserCollectionTimer;                                                // 0x08C8 (size: 0x8)

    void GetCorrectPlayerInventory(class AAbiotic_PlayerCharacter_C* PlayerCharacter, EInventorySlotType SlotType, class UAbiotic_InventoryComponent_C*& Inventory, int32& Slot);
    void GetOffhandItem(class AAbiotic_PlayerCharacter_C* PlayerCharacter, bool& Success, FAbioticInventoryItemSlot& SlotData, FAbioticInventoryItem& ItemData, class AItem_Gear_ParentBP_C*& GearBP);
    void CanTakeLaserRefill(const FAbioticInventoryItemSlot& Abiotic_InventoryItemSlotStruct, const FAbioticInventoryItem& Abiotic_InventoryItemStruct);
    void TryRefillLaser(const FAbioticInventoryItemSlot& ItemSlot, const FAbioticInventoryItem& InventoryItem, class AAbiotic_Item_ParentBP_C* ItemActor, bool Hotbar);
    void GetLaserReceiverPort();
    void ValidateHitLasers();
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void UpdateHeldWeaponChangeableData(class AAbiotic_Item_ParentBP_C* Weapon, FAbioticInventoryChangeableData ChangeableData, EInventorySlotType SlotType);
    void Server Fill Laser Into Weapon(class AAbiotic_Item_ParentBP_C* Weapon, ELiquidType CurrentLiquidType, EInventorySlotType SlotType);
    void OnRep_CurrentLaserInContainer();
    void LaserCollectorTimer();
    void UpdateLaserLevelFX();
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void GetHighlightComponents(TArray<UActorComponent*>& Components, bool& DontHighlightPowerCord);
    void OnRep_CollectionState();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void DelayedSave();
    void OnLoadedFromSave(double NewLifespan);
    void ReceiveBeginPlay();
    void TogglePowerFX();
    void Broadcast_TakeLaser();
    void ExecuteUbergraph_Container_LaserCollector(int32 EntryPoint);
}; // Size: 0x8D0

#endif
