#ifndef UE4SS_SDK_Deployed_Armor_Stand_HPP
#define UE4SS_SDK_Deployed_Armor_Stand_HPP

class ADeployed_Armor_Stand_C : public ADeployed_Container_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0928 (size: 0x8)
    class UStaticMeshComponent* BackpackMesh;                                         // 0x0930 (size: 0x8)
    class USkeletalMeshComponent* Armor_Torso;                                        // 0x0938 (size: 0x8)
    class USkeletalMeshComponent* Armor_Arms;                                         // 0x0940 (size: 0x8)
    class USkeletalMeshComponent* Armor_Legs;                                         // 0x0948 (size: 0x8)
    class USkeletalMeshComponent* Armor_Suit;                                         // 0x0950 (size: 0x8)
    class USkeletalMeshComponent* Armor_Helmet;                                       // 0x0958 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0960 (size: 0x8)
    int32 PoseNumber;                                                                 // 0x0968 (size: 0x4)
    bool SwapEmptySlot;                                                               // 0x096C (size: 0x1)

    void OnRep_SwapEmptySlot();
    void TrySwapGears(class AAbiotic_PlayerCharacter_C*& UsingCharacter);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanLongInteractWith_A(bool& Success);
    void GetDefaultMeshTexture(const FAbiotic_InventoryItemStruct& Item Data, const class UMeshComponent*& ArmorMesh, bool& Valid, TArray<TSoftObjectPtr<UMaterialInterface>>& TexturesFound);
    void SetAllSkelMeshesUpdate(bool NoSkeletonUpdate);
    void OnRep_PoseNumber();
    void UpdateCurrentArmorVisual(class UMeshComponent*& Mesh, FAbiotic_InventoryItemSlotStruct SlotData);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void UserConstructionScript();
    void InteractWith_A_LocalFX(bool Hold);
    void UpdateArmorState(FAbiotic_InventoryItemSlotStruct SlotData, TEnumAsByte<E_InventorySlotType::Type> SlotType);
    void ReceiveBeginPlay();
    void Update Armor Attached(class UAbiotic_InventoryComponent_C* Inventory);
    void OnLoadedFromSave(double NewLifespan);
    void DelayedStopSkeletonUpdate();
    void SetupTextureVariants(const FAbiotic_InventoryItemSlotStruct& SlotData, const class UMeshComponent*& ArmorMesh);
    void TryApplyTextureOverrideOnArmor(const TArray<TSoftObjectPtr<UMaterialInterface>>& TextureVariants, const class UMeshComponent*& Mesh);
    void DeliverDynamicProperty(bool FromSave, FDynamicProperty Property);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void ExecuteUbergraph_Deployed_Armor_Stand(int32 EntryPoint);
}; // Size: 0x96D

#endif
