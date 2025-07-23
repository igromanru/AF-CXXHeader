#ifndef UE4SS_SDK_AbioticDeployed_CraftingBench_ParentBP_HPP
#define UE4SS_SDK_AbioticDeployed_CraftingBench_ParentBP_HPP

class AAbioticDeployed_CraftingBench_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class UAbiotic_InventoryComponent_C* UpgradeInventory;                            // 0x0858 (size: 0x8)
    FDataTableRowHandle BenchDataTableRow;                                            // 0x0860 (size: 0x10)
    double AntiSpawnRadius;                                                           // 0x0870 (size: 0x8)
    EInventoryMode CraftBenchMode;                                                    // 0x0878 (size: 0x1)
    FGameplayTagContainer UpgradeTagContainer;                                        // 0x0880 (size: 0x20)
    FAbioticDeployed_CraftingBench_ParentBP_CTagContainerUpdated TagContainerUpdated; // 0x08A0 (size: 0x10)
    void TagContainerUpdated();
    bool SupportsUpgrades;                                                            // 0x08B0 (size: 0x1)
    TArray<class UAbiotic_InventoryComponent_C*> AdditionalInventories;               // 0x08B8 (size: 0x10)
    TArray<FName> RecipesToUnlockOnAccess;                                            // 0x08C8 (size: 0x10)
    class UTexture2D* BenchUpgradeIcon;                                               // 0x08D8 (size: 0x8)

    void Update Upgrade Current States On Load();
    void UpdateOverlappingContainers();
    void UpdateUpgradePowerStates();
    void Is Location Close Enough?(FVector LocationToCheck, FBenchUpgradeRowHandle Upgrade, bool DirectorDebugOn, double SpawnRadius, FName NameToCheck, bool& LocationNearby);
    void GetDamageReduction(double BaseDamage, double DamageTypeMultiplier, double& FinalDamageToApply);
    void UpdateUpgradeComponents();
    void RefreshConstructionModeStateFX();
    void AddUpgrade(FBenchUpgradeRowHandle Upgrade);
    bool Has Upgrade(FBenchUpgradeRowHandle Upgrade);
    void OnRep_UpgradeTagContainer();
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void InteractWith_A_LocalFX(bool Hold);
    void ReceiveBeginPlay();
    void TogglePowerFX();
    void Broadcast_BenchUpgradeInteraction(FGameplayTag BenchUpgradeTag, double Duration);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ExecuteUbergraph_AbioticDeployed_CraftingBench_ParentBP(int32 EntryPoint);
    void TagContainerUpdated__DelegateSignature();
}; // Size: 0x8E0

#endif
