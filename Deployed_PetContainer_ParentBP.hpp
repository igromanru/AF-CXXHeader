#ifndef UE4SS_SDK_Deployed_PetContainer_ParentBP_HPP
#define UE4SS_SDK_Deployed_PetContainer_ParentBP_HPP

class ADeployed_PetContainer_ParentBP_C : public ADeployed_Container_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0940 (size: 0x8)
    class UArrowComponent* EscapePoint;                                               // 0x0948 (size: 0x8)
    class USceneComponent* CapturePoint;                                              // 0x0950 (size: 0x8)
    class UBoxComponent* VisBlocker;                                                  // 0x0958 (size: 0x8)
    class UBoxComponent* CaptureBox;                                                  // 0x0960 (size: 0x8)
    class USceneComponent* LurePoint;                                                 // 0x0968 (size: 0x8)
    class ANPC_Base_ParentBP_C* CaughtPet;                                            // 0x0970 (size: 0x8)
    FTimerHandle LureTimer;                                                           // 0x0978 (size: 0x8)
    bool Closed;                                                                      // 0x0980 (size: 0x1)
    double FeedingDuration;                                                           // 0x0988 (size: 0x8)
    double FeedingStartTime;                                                          // 0x0990 (size: 0x8)
    bool WildTamableAllowed;                                                          // 0x0998 (size: 0x1)
    FName LureTag;                                                                    // 0x099C (size: 0x8)
    TArray<TSoftClassPtr<ANPC_Base_ParentBP_C>> ClassToIndex;                         // 0x09A8 (size: 0x10)
    TEnumAsByte<ENPCCharacterSize::Type> CompatiblePetSize;                           // 0x09B8 (size: 0x1)
    bool CanPatPet;                                                                   // 0x09B9 (size: 0x1)
    class USoundBase* PetEnterSound;                                                  // 0x09C0 (size: 0x8)
    class USoundBase* PetExitSound;                                                   // 0x09C8 (size: 0x8)
    bool CanInteractWithPetInContainer;                                               // 0x09D0 (size: 0x1)
    bool PetCanLeaveOnItsOwn;                                                         // 0x09D1 (size: 0x1)
    bool AllowScalingPet;                                                             // 0x09D2 (size: 0x1)
    class ADayNightManager_C* DayNightManager;                                        // 0x09D8 (size: 0x8)
    TArray<FBuffDebuffRowHandle> DebuffImmunitiesWhenOccupying;                       // 0x09E0 (size: 0x10)
    TArray<FName> CachedOccupantDebuffImmunities;                                     // 0x09F0 (size: 0x10)
    class ANPC_Base_ParentBP_C* LastCaughtPet;                                        // 0x0A00 (size: 0x8)

    void BindOptimizerChangeWaveFunc();
    void OnChangeWave(EOptimizationWave NewWave);
    bool CanPetClassEnterContainer(TSubclassOf<class ANPC_Base_ParentBP_C> PetNpcClass);
    bool CanPetHeldItemEnterContainer(FAbiotic_InventoryItemSlotStruct InventorySlot, FAbiotic_InventoryItemStruct ItemData, class AAbiotic_Item_ParentBP_C* HeldItem);
    void ResetDeprectatedPetData();
    void OnSetPetInBed();
    void OnRep_CaughtPet();
    void RestoreImmunities();
    void ApplyImmunities();
    void CheckWakeUp(double TimeInSeconds);
    void UpdateWakeUpTimerFromChangeableData();
    void ClearWakeUpTimer();
    void StartWakeUpTimer(int32 InGameMinutesToSleep);
    int32 GetTotalInGameMinutes();
    void NewSeatOccupyStatus(bool Occupied, int32 Index, class AAbiotic_Character_ParentBP_C* Character);
    bool SizeFitsInContainer(uint8 Size);
    void UpdatePetFromInventory();
    void LoadFromOldSaveData();
    void CanLongInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void EvictPet();
    void CanLongInteractWith_A(bool& Success);
    void PetClassToIndex(TSoftClassPtr<ANPC_Base_ParentBP_C> Class, int32& Index);
    void IndexToPetClass(int32 AmmoType, bool& HasPest, TSoftClassPtr<ANPC_Base_ParentBP_C>& Class);
    class USceneComponent* GetSeatAttachComponent();
    void IsCurrentPetTamed(bool& Tamed);
    FTransform GetExitFailsafeLocation();
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void PlayerExitLocations(int32 CurrentSeatIndex, TArray<FVector>& Locations);
    void SitLocationParent(class USceneComponent*& ParentComponent);
    void Spawn Pest In Cage(TSoftClassPtr<ANPC_Base_ParentBP_C> AssetClass, bool& Success);
    void TryTrapPest(class ANPC_Base_ParentBP_C* TrapPet, bool& Succes);
    void CanContainPet(class ANPC_Base_ParentBP_C*& IncomingPet, bool& Return);
    FText GetItemNameText();
    void TryFeedPet(class AAbiotic_PlayerCharacter_C*& OwningCharacter);
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void OnRep_Closed();
    void GetHighlightComponents(TArray<class UActorComponent*>& Components, bool& DontHighlightPowerCord);
    void PestFeedingStateUpdate();
    void EnableOccupyState(bool Enable);
    void ReceiveBeginPlay();
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void DeliverString(FString String, bool FromSave);
    void ToggleCageStateFX(bool Closed);
    void TrappedStateUpdate(int32 SeatIndex, bool Sitting);
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void StartTrapPet();
    void DestroyDeployable(bool NoLoot, int32 Extra Loot Quantity, bool LootBagLocationOverride, FVector LocationOverride);
    void PlayPetAnimInside(class UAnimMontage* MontageToPlay);
    void BndEvt__Deployed_Trap_Pest_CaptureBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnLoadedFromSave(double NewLifespan);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void OnContainerInventoryUpdated(class UAbiotic_InventoryComponent_C* Inventory);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void InteractWith_A_LocalFX(bool Hold);
    void OnInventoriesLoadedFromSave(TArray<FSaveData_Inventories_Struct>& Data);
    void RestartIdleMontage_OnChangeWave();
    void LurePests();
    void ExecuteUbergraph_Deployed_PetContainer_ParentBP(int32 EntryPoint);
}; // Size: 0xA08

#endif
