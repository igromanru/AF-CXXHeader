#ifndef UE4SS_SDK_Deployed_ItemStand_ParentBP_HPP
#define UE4SS_SDK_Deployed_ItemStand_ParentBP_HPP

class ADeployed_ItemStand_ParentBP_C : public ADeployed_Container_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UStaticMeshComponent* ItemDisplay;                                          // 0x0928 (size: 0x8)
    class USceneComponent* ItemRoot;                                                  // 0x0930 (size: 0x8)
    TArray<class USceneComponent*> ItemDisplaysList;                                  // 0x0938 (size: 0x10)
    TArray<TSoftObjectPtr<UStaticMesh>> DisplayMeshRefs;                              // 0x0948 (size: 0x10)

    void PopulateMeshRefsArray(class UAbiotic_InventoryComponent_C* InventoryComponent);
    void SetNewMeshDisplaySlot(int32 CurrentSlotIndex, class UObject* NewMeshDisplay);
    void CreateNewItemBoxMesh(class UStaticMeshComponent* CurrentItemDisplayMesh, class UStaticMesh* NewMesh, FDataTableRowHandle TextureDataRow);
    void SetupItemDisplayArray(TArray<class USceneComponent*>& ItemDisplaysList);
    void RequiresNewMesh(class UStaticMeshComponent* CurrentItemDisplayMesh, TSoftObjectPtr<UStaticMesh> MeshToCheck, int32 CurrentMeshIndex, bool& NewMesh);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void GetPossibleTextureVariantFromItemDisplay(FAbiotic_InventoryItemSlotStruct SlotData, FDataTableRowHandle& TextureDataRow);
    void Setup Item Display Mesh(class UStaticMesh* MeshData, FVector New Scale, class UStaticMeshComponent* CurrentItemDisplay);
    void ReceiveBeginPlay();
    void SetupItemBox(TSoftObjectPtr<UStaticMesh> 3DModel, FDataTableRowHandle TextureDataRow, class UStaticMeshComponent* CurrentItemDisplay);
    void ApplyItemDisplayTextureVariant(class UStaticMeshComponent* CurrentMesh, FDataTableRowHandle TextureDataRow);
    void LoadItemsIntoItemDisplay();
    void ExecuteUbergraph_Deployed_ItemStand_ParentBP(int32 EntryPoint);
}; // Size: 0x958

#endif
