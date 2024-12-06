#ifndef UE4SS_SDK_PlatformCart_Storage_ParentBP_HPP
#define UE4SS_SDK_PlatformCart_Storage_ParentBP_HPP

class APlatformCart_Storage_ParentBP_C : public ADeployed_Container_Cargo_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)

    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanLongInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void RefreshContainerVisuals();
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void BndEvt__Deployed_StorageCrate_MoveableCart_ContainerInventory_K2Node_ComponentBoundEvent_0_InventoryUpdated__DelegateSignature(class UAbiotic_InventoryComponent_C* Inventory);
    void ReceiveBeginPlay();
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void ExecuteUbergraph_PlatformCart_Storage_ParentBP(int32 EntryPoint);
}; // Size: 0x9F8

#endif
