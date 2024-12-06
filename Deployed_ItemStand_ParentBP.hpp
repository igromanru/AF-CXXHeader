#ifndef UE4SS_SDK_Deployed_ItemStand_ParentBP_HPP
#define UE4SS_SDK_Deployed_ItemStand_ParentBP_HPP

class ADeployed_ItemStand_ParentBP_C : public ADeployed_Container_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09E8 (size: 0x8)
    class UStaticMeshComponent* ItemDisplay;                                          // 0x09F0 (size: 0x8)
    class USceneComponent* ItemRoot;                                                  // 0x09F8 (size: 0x8)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void GetPossibleTextureVariantFromItemDisplay(FAbiotic_InventoryItemSlotStruct SlotData, FDataTableRowHandle& TextureDataRow);
    void GetDisplayMeshes(TArray<class USceneComponent*>& Return);
    void Setup Item Display Mesh(class UStaticMesh* MeshData, FVector New Scale);
    void OnLoaded_3AACD9C5431D01089FF70B98E36FFE71(class UObject* Loaded);
    void OnLoaded_BB13EE09432183ACD73BB59197FFC09C(class UObject* Loaded);
    void ReceiveBeginPlay();
    void InventoryUpdated_Event(class UAbiotic_InventoryComponent_C* Inventory);
    void SetupItemBox(TSoftObjectPtr<UStaticMesh> 3DModel, FDataTableRowHandle TextureDataRow);
    void ApplyItemDisplayTextureVariant(class UStaticMeshComponent* CurrentMesh, FDataTableRowHandle TextureDataRow);
    void ExecuteUbergraph_Deployed_ItemStand_ParentBP(int32 EntryPoint);
}; // Size: 0xA00

#endif
