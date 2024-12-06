#ifndef UE4SS_SDK_GardenPlot_ParentBP_HPP
#define UE4SS_SDK_GardenPlot_ParentBP_HPP

class AGardenPlot_ParentBP_C : public ADeployed_LiquidContainer_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UStaticMeshComponent* WarningLight;                                         // 0x09F8 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0A00 (size: 0x8)
    class UStaticMeshComponent* WaterLevel_Box;                                       // 0x0A08 (size: 0x8)
    class UAbiotic_InventoryComponent_C* ContainerInventory;                          // 0x0A10 (size: 0x8)
    TArray<class AFarmingPlot_BP_C*> FarmingPlots;                                    // 0x0A18 (size: 0x10)
    double WaterTickRate;                                                             // 0x0A28 (size: 0x8)
    int32 WaterLossPerTick;                                                           // 0x0A30 (size: 0x4)
    FTimerHandle WaterTimerHandle;                                                    // 0x0A38 (size: 0x8)
    bool WaterRequiredLight;                                                          // 0x0A40 (size: 0x1)

    void Get Plot Fertilizer(int32 PlotIndex, int32& FertilizerQuality);
    void SetPlotFertilized(int32 PlotIndex, int32 FertilizerQuality);
    void Save Fertilizer State();
    void GetNewWaterLossPerTick(int32& TotalWaterAmountPerTick);
    void Server_CheckWaterRequiredLight(bool WaterDepleted);
    void OnRep_WaterRequiredLight();
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    bool CurrentlyRequiresWater?(int32& PlantsRequiringWater);
    void Server_ModifyFillState(TEnumAsByte<E_LiquidType::Type> Liquid, int32 NewLiquidValue, bool SkipSave, class AAbiotic_PlayerCharacter_C* FillInstigator);
    void UpdateWaterState();
    void WaterTick();
    bool IsDrinkableLiquid();
    void RefreshLiquidTypeAppearance();
    void RefreshLiquidLevelAppearance();
    void RefreshAllLiquidStateFX();
    FText GetItemNameText();
    void CanLongInteractWith_A(bool& Success);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void Get Item Proxies Data();
    void ReceiveBeginPlay();
    void Update Deployable Proxies(const TArray<FSaveData_ItemProxy_Struct>& Item Proxies);
    void SaveGardenPlot();
    void OnLoadedFromSave();
    void ExecuteUbergraph_GardenPlot_ParentBP(int32 EntryPoint);
}; // Size: 0xA41

#endif
