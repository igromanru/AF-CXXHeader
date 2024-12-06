#ifndef UE4SS_SDK_TraderDepositBox_ParentBP_HPP
#define UE4SS_SDK_TraderDepositBox_ParentBP_HPP

class ATraderDepositBox_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UStaticMeshComponent* Storage;                                              // 0x0928 (size: 0x8)
    class UStaticMeshComponent* Row3Arrow;                                            // 0x0930 (size: 0x8)
    class UStaticMeshComponent* Row2Arrow;                                            // 0x0938 (size: 0x8)
    class UStaticMeshComponent* Row3_RScreen;                                         // 0x0940 (size: 0x8)
    class UStaticMeshComponent* Row3_LScreen;                                         // 0x0948 (size: 0x8)
    class UStaticMeshComponent* Row1_RScreen;                                         // 0x0950 (size: 0x8)
    class UStaticMeshComponent* Row2_LScreen;                                         // 0x0958 (size: 0x8)
    class UStaticMeshComponent* Row1_LScreen;                                         // 0x0960 (size: 0x8)
    class UStaticMeshComponent* Row1Arrow;                                            // 0x0968 (size: 0x8)
    class UStaticMeshComponent* Row2_RScreen;                                         // 0x0970 (size: 0x8)
    class UTextRenderComponent* DebugMenuText;                                        // 0x0978 (size: 0x8)
    class UChildActorComponent* StorageContainer;                                     // 0x0980 (size: 0x8)
    class USceneComponent* Output;                                                    // 0x0988 (size: 0x8)
    class UBoxComponent* InputBox;                                                    // 0x0990 (size: 0x8)
    FDataTableRowHandle TradeRow;                                                     // 0x0998 (size: 0x10)
    TArray<FTraderItemWF_Struct> Buyable Items;                                       // 0x09A8 (size: 0x10)
    TArray<FAbioticItemCount_Struct> Tradeable Items;                                 // 0x09B8 (size: 0x10)
    FTraderDepositBox_ParentBP_CProducedItem ProducedItem;                            // 0x09C8 (size: 0x10)
    void ProducedItem();
    FString MenuTextTemp;                                                             // 0x09D8 (size: 0x10)
    class USoundBase* DispensedItemSound;                                             // 0x09E8 (size: 0x8)
    bool CycleRecipesOnScreens;                                                       // 0x09F0 (size: 0x1)
    FTimerHandle CycleRecipesTimer;                                                   // 0x09F8 (size: 0x8)
    int32 CurrentScreenIndex;                                                         // 0x0A00 (size: 0x4)
    int32 CurrentBatchIndex;                                                          // 0x0A04 (size: 0x4)
    float RecipeScreenCycleRate;                                                      // 0x0A08 (size: 0x4)
    TArray<FSaveData_Inventories_Struct> PendingInventoryData;                        // 0x0A10 (size: 0x10)

    void OnInventoriesLoadedFromSave(TArray<FSaveData_Inventories_Struct>& Data);
    void GetInventoriesToSave(TArray<class UAbiotic_InventoryComponent_C*>& Inventories);
    void RefreshScreens();
    void OnRep_Tradeable Items();
    void OnRep_Buyable Items();
    FText GetItemNameText();
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void Add Item Into Trade Container(class AActor* Item, int32 Index, int32 Stack);
    void GetTradeContainer(class UAbiotic_InventoryComponent_C*& ContainerInventory);
    void BlankAllScreens();
    void SetItemIconToScreenRow(int32 ItemIndex, int32 ScreenIndex);
    void ShowNextRecipesOnScreen();
    void IsWorldFlagUnlockedForItem?(int32 Index, bool& Allowed);
    void OnRep_MenuTextTemp();
    void IsTradeableItem?(FName ItemName, bool& Tradeable, int32& TradeIndex);
    void CreateMenuText();
    void ReceiveBeginPlay();
    void BndEvt__TraderDepositBox_ParentBP_InputBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ProducedItemFX();
    void Broadcast_ItemProduced();
    void UpdateOverlappingActorStatus(class UObject* OverlappedItem);
    void TogglePowerFX();
    void DelayedInventoryLoad();
    void ContainerIsSaving_Event();
    void ExecuteUbergraph_TraderDepositBox_ParentBP(int32 EntryPoint);
    void ProducedItem__DelegateSignature();
}; // Size: 0xA20

#endif
