#ifndef UE4SS_SDK_Deployed_PotOfSoup_HPP
#define UE4SS_SDK_Deployed_PotOfSoup_HPP

class ADeployed_PotOfSoup_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class UNiagaraComponent* Particle;                                                // 0x0858 (size: 0x8)
    class UStaticMeshComponent* LiquidMesh;                                           // 0x0860 (size: 0x8)
    int32 Portions;                                                                   // 0x0868 (size: 0x4)
    int32 DefaultPortions;                                                            // 0x086C (size: 0x4)
    FName ItemRow;                                                                    // 0x0870 (size: 0x8)
    double Liquid_Z_Top;                                                              // 0x0878 (size: 0x8)
    double Liquid_Z_Bottom;                                                           // 0x0880 (size: 0x8)
    FDataTableRowHandle ItemWhenEmpty;                                                // 0x0888 (size: 0x10)
    bool Drop Success;                                                                // 0x0898 (size: 0x1)
    class UDataTable* Recipe Table;                                                   // 0x08A0 (size: 0x8)
    FName CookedSoupDataRowName;                                                      // 0x08A8 (size: 0x8)
    bool CanFillSoupBowl;                                                             // 0x08B0 (size: 0x1)

    void OnRep_ItemRow();
    void ApplyChunkMaterialsToSoup(const TArray<TSoftObjectPtr<UMaterialInterface>>& ChunkMaterials);
    void SetupCookwareType();
    void FillSoupBowl(class AAbiotic_PlayerCharacter_C* Character);
    bool CharacterHasSoupBowl(class AAbioticCharacter* Character, bool& Full);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    FText GetItemNameText();
    void Update Prompt Text(FText Noun, FText& Result);
    void Update_Portion_Visuals();
    void OnRep_Portions();
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void OnLoaded_E8C6E12240B4A742C32A37AE12212B0F(class UObject* Loaded);
    void OnLoaded_E2DB40CF40BBFCD3C18BD0B2C1D38A9D(class UObject* Loaded);
    void ReceiveBeginPlay();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void InteractWith_A_LocalFX(bool Hold);
    void OnLoadedFromSave(double NewLifespan);
    void Local_SetSoupAppearance(class UPrimaryDataAsset* DatAsset);
    void ExecuteUbergraph_Deployed_PotOfSoup(int32 EntryPoint);
}; // Size: 0x8B1

#endif
