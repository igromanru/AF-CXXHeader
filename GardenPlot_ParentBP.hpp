#ifndef UE4SS_SDK_GardenPlot_ParentBP_HPP
#define UE4SS_SDK_GardenPlot_ParentBP_HPP

class AGardenPlot_ParentBP_C : public ADeployed_LiquidContainer_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0930 (size: 0x8)
    class UStaticMeshComponent* WarningLight;                                         // 0x0938 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0940 (size: 0x8)
    class UStaticMeshComponent* WaterLevel_Box;                                       // 0x0948 (size: 0x8)
    class UAbiotic_InventoryComponent_C* ContainerInventory;                          // 0x0950 (size: 0x8)
    TArray<AFarmingPlot_BP_C*> FarmingPlots;                                          // 0x0958 (size: 0x10)
    double WaterTickRate;                                                             // 0x0968 (size: 0x8)
    int32 WaterLossPerTick;                                                           // 0x0970 (size: 0x4)
    FTimerHandle WaterTimerHandle;                                                    // 0x0978 (size: 0x8)
    bool WaterRequiredLight;                                                          // 0x0980 (size: 0x1)
    float NeighbouringPlotsTickRate;                                                  // 0x0984 (size: 0x4)
    TArray<AGardenPlot_ParentBP_C*> NeighbouringPlots;                                // 0x0988 (size: 0x10)

    void IsFarmingPlotEntangled(class AFarmingPlot_BP_C* FarmingPlot);
    void CacheNeighbouringPlots();
    void GetEntangledEcosystemModifier();
    void Get Plot Fertilizer(int32 PlotIndex, int32& FertilizerQuality);
    void SetPlotFertilized(int32 PlotIndex, int32 FertilizerQuality);
    void Save Fertilizer State();
    void GetNewWaterLossPerTick(int32& TotalWaterAmountPerTick);
    void Server_CheckWaterRequiredLight(bool WaterDepleted);
    void OnRep_WaterRequiredLight();
    void GetHighlightComponents(TArray<UActorComponent*>& Components, bool& DontHighlightPowerCord);
    void CurrentlyRequiresWater?(int32& PlantsRequiringWater, int32& EntangledPlantsRequiringWater);
    void Server_ModifyFillState(ELiquidType Liquid, int32 NewLiquidValue, bool SkipSave, class AAbiotic_PlayerCharacter_C* FillInstigator);
    void UpdateWaterState();
    void WaterTick();
    void IsDrinkableLiquid();
    void RefreshLiquidTypeAppearance();
    void RefreshLiquidLevelAppearance();
    void RefreshAllLiquidStateFX();
    void GetItemNameText();
    void CanLongInteractWith_A(bool& Success);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void Get Item Proxies Data();
    void ReceiveBeginPlay();
    void Update Deployable Proxies(const TArray<FAbioticItemProxySave>& Item Proxies);
    void SaveGardenPlot();
    void OnLoadedFromSave(double NewLifespan);
    void OnPlantSet(class AFarmingPlot_BP_C* FarmingPlot, class APlantProxy_ParentBP_C* PlantProxy);
    void OnPlantCleared(class AFarmingPlot_BP_C* FarmingPlot);
    void ExecuteUbergraph_GardenPlot_ParentBP(int32 EntryPoint);
}; // Size: 0x998

#endif
