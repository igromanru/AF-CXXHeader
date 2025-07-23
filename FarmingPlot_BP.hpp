#ifndef UE4SS_SDK_FarmingPlot_BP_HPP
#define UE4SS_SDK_FarmingPlot_BP_HPP

class AFarmingPlot_BP_C : public AAbioticActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class USceneComponent* PlantLocation;                                             // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x02E0 (size: 0x8)
    int32 PlotIndex;                                                                  // 0x02E8 (size: 0x4)
    class APlantProxy_ParentBP_C* PlantProxy;                                         // 0x02F0 (size: 0x8)
    FTimerHandle GrowthTimer;                                                         // 0x02F8 (size: 0x8)
    double GrowthTickRate;                                                            // 0x0300 (size: 0x8)
    int32 GrowthAmountPerTick;                                                        // 0x0308 (size: 0x4)
    bool HasWater;                                                                    // 0x030C (size: 0x1)
    class AAbiotic_PlayerCharacter_C* PlantOwner;                                     // 0x0310 (size: 0x8)
    class USoundBase* PlantGrowSound;                                                 // 0x0318 (size: 0x8)
    int32 FertilizerSaveConversionValue;                                              // 0x0320 (size: 0x4)
    int32 PlantGrowthStageMax;                                                        // 0x0324 (size: 0x4)
    FFarmingPlot_BP_CGrowthStageUpdated GrowthStageUpdated;                           // 0x0328 (size: 0x10)
    void GrowthStageUpdated(EPlantGrowthStage NewGrowthStage);
    int32 VisualFertilizeQuality;                                                     // 0x0338 (size: 0x4)

    void CanUseSharedInteraction(bool& Can Use);
    void IsPowerCord(class UActorComponent*& Cable, bool& Return, TEnumAsByte<E_OutlineMode::Type>& CableInteractionType);
    void GetAttachedPowerCord(TArray<class UCableComponent*>& Power Cord Found);
    bool IsRadioactive();
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void CanLongInteractWith_A(bool& Success);
    void CanLongInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void NPC_CanInteractWith(bool& Success);
    void PlayerExitLocations(int32 CurrentSeatIndex, TArray<FVector>& Locations);
    void SitLocations(TArray<FVector>& Locations);
    void HasSitLocations(bool& IsSittable);
    void SitLocationParent(class USceneComponent*& ParentComponent);
    void GetItemChangeableData(FAbiotic_InventoryChangeableDataStruct& ChangeableData);
    void GetConstructionState(bool& UnderConstruction, double& PercentComplete);
    void RequiresToolToDismantle(bool& Tool Required);
    void ShowPotentialInteraction(class UActorComponent*& AlternateHitComponent, bool& Show);
    void GetStoredString(FString& String);
    FText GetItemNameText();
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void Landing Damage Multiplier(double Damage, double& DamageMultiplier);
    void GetInteractionBlocker(class UBoxComponent*& Blocker);
    void UpdateFertilizeTexture();
    void OnRep_VisualFertilizeQuality();
    void GetGrowthAmountMultiplier(int32& TotalGrowthAmountPerTick);
    void IsGrowingPlant(EPlantGrowthStage GrowthStage, bool& IsPlant?);
    bool CurrentlyRequiresWater?();
    void StartHarvestingPlant(class AAbiotic_PlayerCharacter_C*& Character, bool& LootIsGenerated?);
    void PickupPlant(class AAbiotic_Character_ParentBP_C* Character);
    void FertilizePlant(class AAbiotic_Character_ParentBP_C* Character);
    void CanFertilizePlant(class AAbioticCharacter* Character, bool& FertilizerAllowed, double& FertilizerEfficacy);
    void SetPlantFertilized(double FertilizerEffectiveness, bool SkipSave);
    bool IsPlantFertilized(double& FertilizerEfficiency);
    void SetWaterState(bool InHasWater);
    bool GetPlantItemToDrop(bool FromDestruction, FDataTableRowHandle& ItemRow, FAbiotic_InventoryChangeableDataStruct& ChangeableData);
    void UnDecayPlant();
    void DecayPlant();
    void SavePlot();
    void HarvestPlant(class AAbiotic_Character_ParentBP_C* Character);
    void UpdateGrowthTimer();
    void SetCurrentGrowthProgress(int32 NewProgress);
    int32 GetCurrentGrowthProgress();
    void SetCurrentGrowthStage(EPlantGrowthStage NewGrowthStage, bool SkipSave);
    EPlantGrowthStage GetCurrentGrowthStage();
    void GrowthTick();
    bool SetPlantFromItemData(FDataTableRowHandle& ItemRow, FAbiotic_InventoryChangeableDataStruct& ChangeableData, bool SkipSave);
    void ClearPlant();
    bool IsPlantHarvestable();
    bool HasPlant();
    void NPC_InteractWith(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void DeliverString(FString String, bool FromSave);
    void Actor Add to Cage(class AAbiotic_Character_ParentBP_C* OwningCharacter, class AActor* ActorToInteractWith, FAbiotic_InventoryItemSlotStruct SlotData);
    void Actor_RemoveFromCage(class AAbiotic_Character_ParentBP_C* OwningCharacter, FAbiotic_InventoryItemSlotStruct SlotData, FTransform ShootProjectileTransform, FTransform AttachedSocketTransform);
    void OnInteractHighlightStart(class UActorComponent* Component);
    void OnInteractHighlightEnd(class UActorComponent* Component);
    void DeliverInt(bool FromSave, const int32 New Int);
    void Set New Attached Power Cord(class UCableComponent* New Power Cord);
    void RadialWheelInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed, FName SelectionWheelContentName);
    void DeliverDynamicProperty(bool FromSave, FDynamicProperty Property);
    void InteractTeleportUpdate(class AAbiotic_Character_ParentBP_C* InteractingCharacter, bool TryingToTeleport, bool TeleportSuccessful);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveBeginPlay();
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void InteractWith_B_LocalFX(bool Hold);
    void InteractWith_A_LocalFX(bool Hold);
    void Broadcast_PlayGrowFX();
    void ExecuteUbergraph_FarmingPlot_BP(int32 EntryPoint);
    void GrowthStageUpdated__DelegateSignature(EPlantGrowthStage NewGrowthStage);
}; // Size: 0x33C

#endif
