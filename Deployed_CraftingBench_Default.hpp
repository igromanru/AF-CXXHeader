#ifndef UE4SS_SDK_Deployed_CraftingBench_Default_HPP
#define UE4SS_SDK_Deployed_CraftingBench_Default_HPP

class ADeployed_CraftingBench_Default_C : public AAbioticDeployed_CraftingBench_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08E0 (size: 0x8)
    class UNarrativeNPCLureComponent_C* NarrativeNPCLureComponent;                    // 0x08E8 (size: 0x8)
    class UBenchUpgradeActorComponent* BenchUpgrade_MatterSynthesizer;                // 0x08F0 (size: 0x8)
    class UBenchUpgradeActorComponent* BenchUpgrade_PortalSuppression;                // 0x08F8 (size: 0x8)
    class UChildActorComponent* NoBuildZone;                                          // 0x0900 (size: 0x8)
    class UBenchUpgradeActorComponent* BenchUpgrade_BenchTurret;                      // 0x0908 (size: 0x8)
    class UBenchUpgradeActorComponent* BenchUpgrade_MetabolicField;                   // 0x0910 (size: 0x8)
    class USceneComponent* TeleportLocation;                                          // 0x0918 (size: 0x8)
    class UBenchUpgradeActorComponent* BenchUpgrade_TougherBench;                     // 0x0920 (size: 0x8)
    class UBenchUpgradeActorComponent* BenchUpgrade_Warmer;                           // 0x0928 (size: 0x8)
    class UBenchUpgradeActorComponent* BenchUpgrade_ItemTransporter;                  // 0x0930 (size: 0x8)
    class UBenchUpgradeActorComponent* BenchUpgrade_Dioxohealer;                      // 0x0938 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0940 (size: 0x8)
    class UBoxComponent* HomeArea;                                                    // 0x0948 (size: 0x8)
    FName HomeBuffID;                                                                 // 0x0950 (size: 0x8)
    FBuffDebuffRowHandle HomeBuff;                                                    // 0x0958 (size: 0x20)
    TArray<class AAbiotic_Item_ParentBP_C*> SyncedDevices;                            // 0x0978 (size: 0x10)
    double LastContainerUpdate;                                                       // 0x0988 (size: 0x8)
    class ANPC_Base_ParentBP_C* WanderingNPC;                                         // 0x0990 (size: 0x8)
    class ADayNightManager_C* DayNightManager;                                        // 0x0998 (size: 0x8)
    FTimerHandle WanderNPCTimer;                                                      // 0x09A0 (size: 0x8)

    void Check for Bench Upgrades Inventories(bool& Empty);
    void GetInventoriesToSave(TArray<class UAbiotic_InventoryComponent_C*>& Inventories);
    FText GetItemNameText();
    void Can NPC Wander Towards Base(class ANPC_Base_ParentBP_C* PotentialWanderer, bool& Return);
    void PlayerExitLocations(int32 CurrentSeatIndex, TArray<FVector>& Locations);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void UpdateOverlappingContainers();
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void RemoveHomeBuffIfNotInHomeZone(bool AllActorsInZone, class AActor* Actor);
    void RefreshConstructionModeStateFX();
    void OnFailure_E8A92F1B45AB94A93A2F8685BDBE6B7C(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void OnSuccess_E8A92F1B45AB94A93A2F8685BDBE6B7C(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void BndEvt__Deployed_CraftingBench_Default_HomeArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Deployed_CraftingBench_Default_HomeArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveDestroyed();
    void TogglePowerFX();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ReceiveBeginPlay();
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void Broadcast_SyncFX();
    void DestroyDeployable(bool NoLoot, int32 Extra Loot Quantity, bool LootBagLocationOverride, FVector LocationOverride);
    void CheckNearbyNPCs();
    void Init_WanderNPCTimer();
    void DeliverString(FString String, bool FromSave);
    void OnLoadedFromSave(double NewLifespan);
    void NewPlayerMadeString();
    void ExecuteUbergraph_Deployed_CraftingBench_Default(int32 EntryPoint);
}; // Size: 0x9A8

#endif
