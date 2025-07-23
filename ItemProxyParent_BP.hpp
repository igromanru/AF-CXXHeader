#ifndef UE4SS_SDK_ItemProxyParent_BP_HPP
#define UE4SS_SDK_ItemProxyParent_BP_HPP

class AItemProxyParent_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UStaticMeshComponent* ItemProxyMesh;                                        // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    FAbiotic_InventoryChangeableDataStruct ChangeableData;                            // 0x02B0 (size: 0x88)
    FDataTableRowHandle ItemRow;                                                      // 0x0338 (size: 0x10)
    int32 SpotIndex;                                                                  // 0x0348 (size: 0x4)

    void GetOutlineComponent(bool& ComponentEnabled, class UOutlineComponent_C*& Components);
    void IsItemInPinnedRecipes(bool& IsPinnedIngredient);
    void GetNewButtonPromptLocation(class UActorComponent* Component, FVector& NewLocation);
    void DebugInfo_Tick(bool& Success, FString& DebugString, bool& UseBoundsAsOffset, FVector& Offset, FLinearColor& Color);
    bool GetItemProxyData(FAbiotic_InventoryItemStruct& ItemData);
    void OnLoaded_D81DF48D41EBBF007228388EB21893A8(class UObject* Loaded);
    void ReceiveBeginPlay();
    void RefreshContainerAppearance();
    void ProxyMeshLoaded();
    void ExecuteUbergraph_ItemProxyParent_BP(int32 EntryPoint);
}; // Size: 0x34C

#endif
