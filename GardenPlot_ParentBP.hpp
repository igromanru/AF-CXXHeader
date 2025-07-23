#ifndef UE4SS_SDK_GardenPlot_ParentBP_HPP
#define UE4SS_SDK_GardenPlot_ParentBP_HPP

class AGardenPlot_ParentBP_C : public ADeployed_LiquidContainer_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UStaticMeshComponent* WarningLight;                                         // 0x0928 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0930 (size: 0x8)
    class UStaticMeshComponent* WaterLevel_Box;                                       // 0x0938 (size: 0x8)
    class UAbiotic_InventoryComponent_C* ContainerInventory;                          // 0x0940 (size: 0x8)
    TArray<class AFarmingPlot_BP_C*> FarmingPlots;                                    // 0x0948 (size: 0x10)
    double WaterTickRate;                                                             // 0x0958 (size: 0x8)
    int32 WaterLossPerTick;                                                           // 0x0960 (size: 0x4)
    FTimerHandle WaterTimerHandle;                                                    // 0x0968 (size: 0x8)
    bool WaterRequiredLight;                                                          // 0x0970 (size: 0x1)
    float NeighbouringPlotsTickRate;                                                  // 0x0974 (size: 0x4)
    TArray<class AGardenPlot_ParentBP_C*> NeighbouringPlots;                          // 0x0978 (size: 0x10)

    bool IsFarmingPlotEntangled(class AFarmingPlot_BP_C* FarmingPlot);
    void CacheNeighbouringPlots();
    double GetEntangledEcosystemModifier();
    void Get Plot Fertilizer(int32 PlotIndex, int32& FertilizerQuality);
    void SetPlotFertilized(int32 PlotIndex, int32 FertilizerQuality);
    void Save Fertilizer State();
    void GetNewWaterLossPerTick(int32& TotalWaterAmountPerTick);
    void Server_CheckWaterRequiredLight(bool WaterDepleted);
    void OnRep_WaterRequiredLight();
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    bool CurrentlyRequiresWater?(int32& PlantsRequiringWater, int32& EntangledPlantsRequiringWater);
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
    void OnLoadedFromSave(double NewLifespan);
    void ExecuteUbergraph_GardenPlot_ParentBP(int32 EntryPoint);
}; // Size: 0x988

#endif
