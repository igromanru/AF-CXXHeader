#ifndef UE4SS_SDK_Deployed_LiquidContainer_ParentBP_HPP
#define UE4SS_SDK_Deployed_LiquidContainer_ParentBP_HPP

class ADeployed_LiquidContainer_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0930 (size: 0x8)
    class UDrinkableComponent_C* DrinkableComponent;                                  // 0x0938 (size: 0x8)
    class UStaticMeshComponent* WaterLevel;                                           // 0x0940 (size: 0x8)
    int32 Liquid_FillLevel;                                                           // 0x0948 (size: 0x4)
    int32 Liquid_MaxFill;                                                             // 0x094C (size: 0x4)
    FVector Liquid_FillLocationMin;                                                   // 0x0950 (size: 0x18)
    FVector Liquid_FillLocationMax;                                                   // 0x0968 (size: 0x18)
    TEnumAsByte<E_LiquidType::Type> CurrentLiquid_Type;                               // 0x0980 (size: 0x1)
    bool LocalPlayer_HasLiquidInContainer;                                            // 0x0981 (size: 0x1)
    bool LocalPlayer_CanTakeDirectSwig;                                               // 0x0982 (size: 0x1)
    TArray<TEnumAsByte<E_LiquidType::Type>> AllowedLiquids;                           // 0x0988 (size: 0x10)
    FText ObjectName_Empty;                                                           // 0x0998 (size: 0x10)
    FText ObjectName_WithLiquid;                                                      // 0x09A8 (size: 0x10)
    bool GiveRandomFill;                                                              // 0x09B8 (size: 0x1)
    FText LiquidToItemText;                                                           // 0x09C0 (size: 0x10)
    FText LiquidToContainerText;                                                      // 0x09D0 (size: 0x10)
    FText LiquidDrinkDirectlyText;                                                    // 0x09E0 (size: 0x10)
    bool InfiniteSource;                                                              // 0x09F0 (size: 0x1)
    int32 DrinkCounter;                                                               // 0x09F4 (size: 0x4)
    class AActor* LastDrinker;                                                        // 0x09F8 (size: 0x8)

    class UAnimMontage* GetItemPourAnim(class AAbiotic_PlayerCharacter_C* Character);
    class UAnimMontage* GetItemFillAnim(class AAbiotic_PlayerCharacter_C* Character);
    int32 Fill Room Available();
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    FText GetItemNameText();
    void CanLongInteractWith_A(bool& Success);
    bool IsDrinkableLiquid();
    void TryFill_FROM_PlayerContainer(class AAbiotic_PlayerCharacter_C* PlayerCharacter, bool Change Existing Liquid Type, TEnumAsByte<E_LiquidType::Type> New Liquid Type, bool OnlyCheck, bool& Success);
    void TryFill_TO_PlayerContainer(class AAbiotic_PlayerCharacter_C* PlayerCharacter, bool OnlyCheck, bool& Success, FText& WarningMessage);
    void SetInitialRandomFill(TEnumAsByte<E_LiquidType::Type> Liquid Type);
    void RefreshLiquidLevelAppearance();
    void RefreshLiquidTypeAppearance();
    void OnRep_CurrentLiquid_Type();
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void Server_ModifyFillState(TEnumAsByte<E_LiquidType::Type> Liquid, int32 NewLiquidValue, bool SkipSave, class AAbiotic_PlayerCharacter_C* FillInstigator);
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
}; // Size: 0xA00

#endif
