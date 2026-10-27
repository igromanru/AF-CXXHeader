#ifndef UE4SS_SDK_Deployed_LiquidContainer_ParentBP_HPP
#define UE4SS_SDK_Deployed_LiquidContainer_ParentBP_HPP

class ADeployed_LiquidContainer_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0860 (size: 0x8)
    class UDrinkableComponent_C* DrinkableComponent;                                  // 0x0868 (size: 0x8)
    class UStaticMeshComponent* WaterLevel;                                           // 0x0870 (size: 0x8)
    int32 Liquid_FillLevel;                                                           // 0x0878 (size: 0x4)
    int32 Liquid_MaxFill;                                                             // 0x087C (size: 0x4)
    FVector Liquid_FillLocationMin;                                                   // 0x0880 (size: 0x18)
    FVector Liquid_FillLocationMax;                                                   // 0x0898 (size: 0x18)
    ELiquidType CurrentLiquid_Type;                                                   // 0x08B0 (size: 0x1)
    bool LocalPlayer_HasLiquidInContainer;                                            // 0x08B1 (size: 0x1)
    bool LocalPlayer_CanTakeDirectSwig;                                               // 0x08B2 (size: 0x1)
    TArray<ELiquidType> AllowedLiquids;                                               // 0x08B8 (size: 0x10)
    FText ObjectName_Empty;                                                           // 0x08C8 (size: 0x10)
    FText ObjectName_WithLiquid;                                                      // 0x08D8 (size: 0x10)
    bool GiveRandomFill;                                                              // 0x08E8 (size: 0x1)
    FText LiquidToItemText;                                                           // 0x08F0 (size: 0x10)
    FText LiquidToContainerText;                                                      // 0x0900 (size: 0x10)
    FText LiquidDrinkDirectlyText;                                                    // 0x0910 (size: 0x10)
    bool InfiniteSource;                                                              // 0x0920 (size: 0x1)
    int32 DrinkCounter;                                                               // 0x0924 (size: 0x4)
    class AActor* LastDrinker;                                                        // 0x0928 (size: 0x8)

    void GetItemPourAnim(class AAbiotic_PlayerCharacter_C* Character);
    void GetItemFillAnim(class AAbiotic_PlayerCharacter_C* Character);
    void Fill Room Available();
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void GetItemNameText();
    void CanLongInteractWith_A(bool& Success);
    void IsDrinkableLiquid();
    void TryFill_FROM_PlayerContainer(class AAbiotic_PlayerCharacter_C* PlayerCharacter, bool Change Existing Liquid Type, ELiquidType New Liquid Type, bool OnlyCheck, bool& Success);
    void TryFill_TO_PlayerContainer(class AAbiotic_PlayerCharacter_C* PlayerCharacter, bool OnlyCheck, bool& Success, FText& WarningMessage);
    void SetInitialRandomFill(ELiquidType Liquid Type);
    void RefreshLiquidLevelAppearance();
    void RefreshLiquidTypeAppearance();
    void OnRep_CurrentLiquid_Type();
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void Server_ModifyFillState(ELiquidType Liquid, int32 NewLiquidValue, bool SkipSave, class AAbiotic_PlayerCharacter_C* FillInstigator);
    void RefreshAllLiquidStateFX();
    void OnRep_Liquid_FillLevel();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void Broadcast_LiquidStateChangeSound(bool Fill);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void InteractWith_A_LocalFX(bool Hold);
    void InteractWith_B_LocalFX(bool Hold);
    void ReceiveBeginPlay();
    void ReduceLiquidInContianer();
    void ExecuteUbergraph_Deployed_LiquidContainer_ParentBP(int32 EntryPoint);
}; // Size: 0x930

#endif
