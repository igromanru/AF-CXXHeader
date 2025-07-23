#ifndef UE4SS_SDK_Deployed_CraftingBench_Upgrade_HPP
#define UE4SS_SDK_Deployed_CraftingBench_Upgrade_HPP

class ADeployed_CraftingBench_Upgrade_C : public AAbioticDeployed_CraftingBench_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08E0 (size: 0x8)
    class UAudioComponent* SoundEffect;                                               // 0x08E8 (size: 0x8)
    class UBenchUpgradeActorComponent* BenchUpgrade_ItemTransporter;                  // 0x08F0 (size: 0x8)
    class UAbiotic_InventoryComponent_C* UpgradeItemInventory;                        // 0x08F8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0900 (size: 0x8)
    bool IsContainerBeingUsed;                                                        // 0x0908 (size: 0x1)
    TSoftObjectPtr<USoundBase> OpenCue;                                               // 0x0910 (size: 0x28)
    TSoftObjectPtr<USoundBase> CloseCue;                                              // 0x0938 (size: 0x28)
    double LastContainerUpdate;                                                       // 0x0960 (size: 0x8)
    double DistanceForSubtitles;                                                      // 0x0968 (size: 0x8)

    void ReturnOriginalItemChangeableDataToPlayer(double CurrentLiquidPercentage, class AAbiotic_PlayerCharacter_C* CraftingPlayer, FAbiotic_InventoryChangeableDataStruct& CarryoverChangeableData, double& LiquidPercentageRemains, double& DurabilityPercentage);
    void UpdateOverlappingContainers();
    void Server_TryCraftUpgrade(class AAbioticCharacter* Player, FItemUpgradeRowHandle UpgradeRow, int32 UpgradeIndex, double UpgradeDuration);
    void OnRep_IsContainerBeingUsed();
    void OnLoaded_21AD605D433085683B4E0E84AEBA7AB1(class UObject* Loaded);
    void OnLoaded_194ED7AD44823CB572D9E98854EC9A98(class UObject* Loaded);
    void TogglePowerFX();
    void OnLoadedFromSave(double NewLifespan);
    void ToggleOpenFX(bool Open);
    void PlayOpenCloseSound(TSoftObjectPtr<UObject> Asset);
    void OnContainerInventoryUpdated(class UAbiotic_InventoryComponent_C* Inventory);
    void ReceiveBeginPlay();
    void Broadcast_PlayCraftSoundToAll(TSoftObjectPtr<UObject> CraftSoundToPlay, const FText& CraftedItemName);
    void Server_CheckCraftSoundEffect(TSoftObjectPtr<UObject> CraftSoundToPlay, double InitialStartDelay, const FText& CraftedItemName);
    void InteractWith_A_LocalFX(bool Hold);
    void ExecuteUbergraph_Deployed_CraftingBench_Upgrade(int32 EntryPoint);
}; // Size: 0x970

#endif
