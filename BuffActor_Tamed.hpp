#ifndef UE4SS_SDK_BuffActor_Tamed_HPP
#define UE4SS_SDK_BuffActor_Tamed_HPP

class ABuffActor_Tamed_C : public ABuffActor_Follower_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    int32 MaxFeedingsForMutation;                                                     // 0x03E8 (size: 0x4)
    class UW_HUD_GadgetBar_Companion_C* HUDWidget;                                    // 0x03F0 (size: 0x8)
    FTimerHandle HealTimer;                                                           // 0x03F8 (size: 0x8)
    int32 DefaultXpPerFeed;                                                           // 0x0400 (size: 0x4)
    FTimerHandle HungryCheckTimer;                                                    // 0x0408 (size: 0x8)
    double HealTickRate;                                                              // 0x0410 (size: 0x8)
    class USoundBase* MutationSFX;                                                    // 0x0418 (size: 0x8)
    class UNiagaraSystem* MutationVFX;                                                // 0x0420 (size: 0x8)
    int32 MaxXpPerFeed;                                                               // 0x0428 (size: 0x4)
    FTimerHandle AutosaveTimer;                                                       // 0x0430 (size: 0x8)
    FCompendiumEntryRowHandle PetTamingEntry;                                         // 0x0438 (size: 0x10)
    FCompendiumEntryRowHandle PetMutationEntry;                                       // 0x0448 (size: 0x10)
    FVector LastValidSpawnLocation;                                                   // 0x0458 (size: 0x18)

    void IsInSafeSaveLocation();
    void UpdateLastValidSpawnLocation(class AActor* FollowOverride);
    void SetFollowTarget(class AAbiotic_Character_ParentBP_C* NewTarget, bool PlayFX);
    void GetSpawnLocation(bool& Valid);
    void InitalizeNpcHealthAndDamage();
    void SetCharacterNpc(class ANPC_Base_ParentBP_C* CharacterNPC);
    void InitialInteractPress(bool TypeA);
    void RemoveDBNOWaypoint();
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void CanPet(bool& Success);
    void CanPickUp(bool& Success);
    void PlayerPlayPetAnim(class AAbiotic_PlayerCharacter_C* InputPin);
    void SetBuffObject(class UBuffDebuffObject* NewBuffObject);
    void BindHealthChanged();
    void UpdateCompanionTarget();
    void UpdateDBNOWaypoint();
    void SetPetGodmodeFromDirector();
    void CheckForExistingGearBuff(FBuffDebuffRowHandle InputPin, class UAbiotic_InventoryComponent_C*& EquipInventory, bool& Buff Exist);
    void RemoveCompanionBuffs();
    void ApplyCompanionBuffs();
    void TryPlayHungrySfx();
    void GetItemNameText();
    void UpdateCompanionCollar();
    void Server_UpdateCompanionTarget(class AActor* NewTarget);
    void TickHeal();
    void InventoryUpdated(class UAbiotic_InventoryComponent_C* Inventory);
    void UpdateHealthHUDInfo();
    void DBNOStateChanged_Event(class AAbiotic_Character_ParentBP_C* Character);
    void CanLongInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void CanLongInteractWith_A(bool& Success);
    void DebugInfo_Tick(bool& Success, FString& DebugString, bool& UseBoundsAsOffset, FVector& Offset, FLinearColor& Color);
    void Server_FedSuccessfully(bool LastFoodCanTame, int32 MutationIndex, class AAbiotic_PlayerCharacter_C* FeedingPlayer, FGlobalItemRowHandle FoodItem, FAbioticInventoryChangeableData FoodChangeableData);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanFeed();
    void Broadcast_Mutate(FNPCRowHandle NpcRowData);
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void InteractWith_A_LocalFX(bool Hold);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BuffActor_Tamed(int32 EntryPoint);
}; // Size: 0x470

#endif
