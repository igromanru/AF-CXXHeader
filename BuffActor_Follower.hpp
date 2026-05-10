#ifndef UE4SS_SDK_BuffActor_Follower_HPP
#define UE4SS_SDK_BuffActor_Follower_HPP

class ABuffActor_Follower_C : public ABuffActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C8 (size: 0x8)
    class ANPC_Base_ParentBP_C* CharacterNPC;                                         // 0x02D0 (size: 0x8)
    FString Guid;                                                                     // 0x02D8 (size: 0x10)
    FText FollowerName;                                                               // 0x02E8 (size: 0x10)
    FString SanitizedName;                                                            // 0x02F8 (size: 0x10)
    class AActor* FollowTarget;                                                       // 0x0308 (size: 0x8)
    class ADayNightManager_C* DayNightManager;                                        // 0x0310 (size: 0x8)
    bool Tamed;                                                                       // 0x0318 (size: 0x1)
    int32 CompanionItemIndex;                                                         // 0x031C (size: 0x4)
    double FeedingDuration;                                                           // 0x0320 (size: 0x8)
    double FeedingStartTime;                                                          // 0x0328 (size: 0x8)
    int32 FeedingCooldown;                                                            // 0x0330 (size: 0x4)
    TArray<FDynamicProperty> DynamicProperties;                                       // 0x0338 (size: 0x10)
    FInventorySlotSelected_Struct CompanionInventoryTarget;                           // 0x0348 (size: 0x10)
    class UBuffDebuffObject* BuffObject;                                              // 0x0358 (size: 0x8)
    FGameplayTagContainer ProhibitedFoodTags;                                         // 0x0360 (size: 0x20)
    int32 CachedLevel;                                                                // 0x0380 (size: 0x4)
    int32 MaxLevel;                                                                   // 0x0384 (size: 0x4)
    class UAbiotic_InventoryComponent_C* CachedCompanionInventoryTarget;              // 0x0388 (size: 0x8)
    float TeleportCheckInterval;                                                      // 0x0390 (size: 0x4)
    FVector LastLocation;                                                             // 0x0398 (size: 0x18)
    TArray<int32> LevelXpArray;                                                       // 0x03B0 (size: 0x10)
    FTimerHandle RetrySaveTimer;                                                      // 0x03C0 (size: 0x8)
    bool WantsToSprint;                                                               // 0x03C8 (size: 0x1)
    double SprintCheckDistance;                                                       // 0x03D0 (size: 0x8)
    FTimerHandle SprintCheckTimer;                                                    // 0x03D8 (size: 0x8)

    void DebugInfo_Tick(bool& Success, FString& DebugString, bool& UseBoundsAsOffset, FVector& Offset, FLinearColor& Color);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void CanLongInteractWith_A(bool& Success);
    void CanLongInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components, bool& DontHighlightPowerCord);
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
    bool IsRadioactive();
    void GetAttachedPowerCord(TArray<class UCableComponent*>& Power Cord Found);
    void IsPowerCord(class UActorComponent*& Cable, bool& Return, TEnumAsByte<E_OutlineMode::Type>& CableInteractionType);
    void CanUseSharedInteraction(bool& Can Use);
    void OnRep_WantsToSprint();
    void UpdateSprintState();
    bool IsWantingToSprint();
    bool HasValidGuid();
    void SetBuffObject(class UBuffDebuffObject* NewBuffObject);
    void SetCharacterNpc(class ANPC_Base_ParentBP_C* CharacterNPC);
    void UpdateCompanionTarget();
    void FollowTargetBuffTagsUpdated();
    void InitialDBNOCheck();
    void RetrySave();
    void InitializeRequiredData(FString Guid, FText FollowerName, TArray<FDynamicProperty>& DynamicProperties);
    void UpdateMeshScale();
    double GetHealthbarRatio(bool& ValidCharacter);
    void UpdateBlackboard();
    double GetSpecialAttack(double UntamedValue);
    bool GetPetData(FPet_Struct& OutPetData);
    void TryPlayHungrySfx();
    void SetFollowTarget(class AAbiotic_Character_ParentBP_C* NewTarget, bool PlayFX);
    bool IsInteractDisabled();
    bool GetCharacterNpcSafe(class ANPC_Base_ParentBP_C*& CharacterNPC);
    void DynamicPropertiesChanged();
    void OnRep_DynamicProperties();
    void AnyPetBuffRemove(FBuffDebuffRowHandle BuffDebuffRowHandle);
    void OnRep_CompanionInventoryTarget();
    bool UpdateInventorySlot(const FAbiotic_InventoryItemSlotStruct& Data);
    void SpawnAttachedFX(class UNiagaraSystem* SystemTemplate);
    void SaveNpcAsPet(bool RemoveFromSave);
    bool IsTamed();
    int32 CalculateXpForLevel(int32 Level);
    double CalculateBaseStat(const float& NewValue, double BaseValue, double PerLevelValue);
    void NpcPlayPetAnimAndFX(class AActor* PettingCharacter);
    void InitalizeNpcHealthAndDamage();
    void SetStatsFromChangeableData(const FAbiotic_InventoryChangeableDataStruct& ChangeableDataStruct);
    void SetHealthFromRatio(double HealthRatio, double& TotalHealth, double& MaxHealth);
    class ANPC_Base_ParentBP_C* ReplaceCharacter(FDataTableRowHandle NpcRowData);
    void AddXP(int32 AddedXP);
    void SetTotalXP(int32 Value);
    void UpdateLevel();
    int32 CalculateNpcLevel();
    int32 GetTotalPlaytimeSeconds();
    int32 GetTotalInGameMinutes();
    bool CanFeed();
    bool IsFoodValid(FDataTableRowHandle FoodItem, FDataTableRowHandle& MutationRow, int32& MutationIndex, bool& CanTame);
    void Server_FedSuccessfully(bool LastFoodCanTame, int32 MutationIndex, class AAbiotic_PlayerCharacter_C* FeedingPlayer, FDataTableRowHandle FoodItem, FAbiotic_InventoryChangeableDataStruct FoodChangeableData);
    void Server_Feed(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void OnRep_FollowerName();
    void DespawnPet();
    void EnsureItemHasSomeDurability(FAbiotic_InventoryChangeableDataStruct& ChangeableData);
    void UpdatePetItemChangeableData(FAbiotic_InventoryChangeableDataStruct& StructRef);
    void InventoryUpdated(class UAbiotic_InventoryComponent_C* Inventory);
    bool CreatePetItem(FAbiotic_InventoryItemSlotStruct& InventoryItem);
    void TryPickUp(class AAbiotic_PlayerCharacter_C* PickingUpPlayer, bool& PickedUp);
    bool TryNotifyCompanionInventory();
    bool IsCompanion();
    void Server_ClearCompanionTarget();
    bool Server_SetNewCompanionTarget(class AActor* NewTarget);
    bool Server_UpdateCompanionTarget(class AActor* NewTarget);
    void SetDynamicProperties(TArray<FDynamicProperty>& NewDynamicProperties, bool UpdateItem);
    TArray<FDynamicProperty> GetDynamicProperties();
    void OnLoaded_36DDA1684B7BB6E164B4929DE20DF02A(class UObject* Loaded);
    void OnLoaded_43F6A77B4432B599FD0EFC923800618B(class UObject* Loaded);
    void OnFailure_69CD2E404AB17AB0B0FC8BBB7DE495A6(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void OnSuccess_69CD2E404AB17AB0B0FC8BBB7DE495A6(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void InteractWith_B_LocalFX(bool Hold);
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
    void ReceiveBeginPlay();
    void LocalSetupNewName();
    void InteractWith_A_LocalFX(bool Hold);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void PlayAsyncMontage(TSoftObjectPtr<UAnimMontage> MontageToPlay, bool LockInPlace);
    void Broadcast_PlayAsyncVoice(TSoftObjectPtr<USoundBase> Sound);
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void UpdateHealthData();
    void InitNewCharacterNPC();
    void ReceiveTick(float DeltaSeconds);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ExecuteUbergraph_BuffActor_Follower(int32 EntryPoint);
}; // Size: 0x3E0

#endif
