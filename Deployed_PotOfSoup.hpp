#ifndef UE4SS_SDK_Deployed_PotOfSoup_HPP
#define UE4SS_SDK_Deployed_PotOfSoup_HPP

class ADeployed_PotOfSoup_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0930 (size: 0x8)
    class UNiagaraComponent* particle;                                                // 0x0938 (size: 0x8)
    class UStaticMeshComponent* LiquidMesh;                                           // 0x0940 (size: 0x8)
    int32 Portions;                                                                   // 0x0948 (size: 0x4)
    int32 DefaultPortions;                                                            // 0x094C (size: 0x4)
    FName ItemRow;                                                                    // 0x0950 (size: 0x8)
    double Liquid_Z_Top;                                                              // 0x0958 (size: 0x8)
    double Liquid_Z_Bottom;                                                           // 0x0960 (size: 0x8)
    FDataTableRowHandle ItemWhenEmpty;                                                // 0x0968 (size: 0x10)
    bool Drop Success;                                                                // 0x0978 (size: 0x1)
    class UDataTable* Recipe Table;                                                   // 0x0980 (size: 0x8)
    FName CookedSoupDataRowName;                                                      // 0x0988 (size: 0x8)
    bool CanFillSoupBowl;                                                             // 0x0990 (size: 0x1)

    void SetupCookwareType();
    void FillSoupBowl(class AAbiotic_PlayerCharacter_C* Character);
    bool CharacterHasSoupBowl(class AAbioticCharacter* Character, bool& Full);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    FText GetItemNameText();
    void Update Prompt Text(FText Noun, FText& Result);
    void Update_Portion_Visuals();
    void OnRep_Portions();
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void InteractWith_A_LocalFX(bool Hold);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ReceiveBeginPlay();
    void OnLoadedFromSave();
    void ExecuteUbergraph_Deployed_PotOfSoup(int32 EntryPoint);
}; // Size: 0x991

#endif
