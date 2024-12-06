#ifndef UE4SS_SDK_Deployed_AutoSalvager_HPP
#define UE4SS_SDK_Deployed_AutoSalvager_HPP

class ADeployed_AutoSalvager_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UChildActorComponent* StorageContainer;                                     // 0x0928 (size: 0x8)
    class UStaticMeshComponent* SM_AutoSalvager_Blades;                               // 0x0930 (size: 0x8)
    class UStaticMeshComponent* Grinder2;                                             // 0x0938 (size: 0x8)
    class UStaticMeshComponent* Grinder1;                                             // 0x0940 (size: 0x8)
    class USceneComponent* RejectedOutput;                                            // 0x0948 (size: 0x8)
    class UBoxComponent* InputBox;                                                    // 0x0950 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0958 (size: 0x8)
    TEnumAsByte<EAutoSalvagerState::Type> SalvagerState;                              // 0x0960 (size: 0x1)
    TArray<FSaveData_Inventories_Struct> PendingInventoryData;                        // 0x0968 (size: 0x10)
    bool BeingDestroyed;                                                              // 0x0978 (size: 0x1)

    void DropPackagedItem(bool HasDoubleDropChance);
    void DestroyDeployable(bool NoLoot, int32 Extra Loot Quantity, bool LootBagLocationOverride, FVector LocationOverride);
    void OnInventoriesLoadedFromSave(TArray<FSaveData_Inventories_Struct>& Data);
    void GetTradeContainer(class UAbiotic_InventoryComponent_C*& ContainerInventory);
    void SalvageInput(FAbiotic_InventoryItemStruct& Item, FAbiotic_InventoryChangeableDataStruct& Changeable, bool& Success);
    void GetInventoriesToSave(TArray<class UAbiotic_InventoryComponent_C*>& Inventories);
    void OnRep_SalvagerState();
    void Produce Scrap Items();
    void BndEvt__Deployed_AutoSalvager_InputBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Server_ChangeSalvagerState(TEnumAsByte<EAutoSalvagerState::Type> State);
    void Local_ChangeSalvagerFX();
    void TogglePowerFX();
    void ReceiveTick(float DeltaSeconds);
    void Broadcast_InsertItemFX();
    void ContainerIsSaving_Event();
    void ReceiveBeginPlay();
    void DelayedInventoryLoad();
    void ExecuteUbergraph_Deployed_AutoSalvager(int32 EntryPoint);
}; // Size: 0x979

#endif
