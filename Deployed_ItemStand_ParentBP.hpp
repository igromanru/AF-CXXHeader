#ifndef UE4SS_SDK_Deployed_ItemStand_ParentBP_HPP
#define UE4SS_SDK_Deployed_ItemStand_ParentBP_HPP

class ADeployed_ItemStand_ParentBP_C : public ADeployed_Container_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0930 (size: 0x8)
    class UStaticMeshComponent* ItemDisplay;                                          // 0x0938 (size: 0x8)
    class USceneComponent* ItemRoot;                                                  // 0x0940 (size: 0x8)
    TArray<USceneComponent*> ItemDisplaysList;                                        // 0x0948 (size: 0x10)
    TArray<TSoftObjectPtr<class UStaticMesh>> DisplayMeshRefs;                        // 0x0958 (size: 0x10)
    bool WallMounted;                                                                 // 0x0968 (size: 0x1)
    TArray<FTagStandOffset_Struct> TagChecks;                                         // 0x0970 (size: 0x10)

    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void GetOverridesForItem(FGlobalItemRowHandle ItemRow, FRotator& RotationOffset, FVector& PositionOffset);
    void PopulateMeshRefsArray(class UAbiotic_InventoryComponent_C* InventoryComponent);
    void SetNewMeshDisplaySlot(int32 CurrentSlotIndex, class UObject* NewMeshDisplay);
    void CreateNewItemBoxMesh(class UStaticMeshComponent* CurrentItemDisplayMesh, class UStaticMesh* NewMesh, FTextureVariantRowHandle TextureDataRow);
    void SetupItemDisplayArray(TArray<USceneComponent*>& ItemDisplaysList);
    void RequiresNewMesh(class UStaticMeshComponent* CurrentItemDisplayMesh, TSoftObjectPtr<class UStaticMesh> MeshToCheck, int32 CurrentMeshIndex, bool& NewMesh);
    void GetHighlightComponents(TArray<UActorComponent*>& Components, bool& DontHighlightPowerCord);
    void GetPossibleTextureVariantFromItemDisplay(FAbioticInventoryItemSlot SlotData, FTextureVariantRowHandle& TextureDataRow);
    void Setup Item Display Mesh(class UStaticMesh* MeshData, FVector New Scale, class UStaticMeshComponent* CurrentItemDisplay, FRotator RotationOffset, FVector PositionOffset);
    void ReceiveBeginPlay();
    void SetupItemBox(TSoftObjectPtr<class UStaticMesh> 3DModel, FTextureVariantRowHandle TextureDataRow, class UStaticMeshComponent* CurrentItemDisplay);
    void ApplyItemDisplayTextureVariant(class UStaticMeshComponent* CurrentMesh, FTextureVariantRowHandle TextureDataRow);
    void LoadItemsIntoItemDisplay();
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ExecuteUbergraph_Deployed_ItemStand_ParentBP(int32 EntryPoint);
}; // Size: 0x980

#endif
