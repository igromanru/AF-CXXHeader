#ifndef UE4SS_SDK_Abiotic_Item_Dropped_HPP
#define UE4SS_SDK_Abiotic_Item_Dropped_HPP

class AAbiotic_Item_Dropped_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UOutlineComponent_C* OutlineComponent;                                      // 0x02A0 (size: 0x8)
    class UAbioticTargetingComponent* AbioticTargeting;                               // 0x02A8 (size: 0x8)
    class UThermalReceiverComponent* ThermalReceiver;                                 // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* WorldMesh;                                            // 0x02B8 (size: 0x8)
    FDataTableRowHandle ItemDataRow;                                                  // 0x02C0 (size: 0x10)
    FAbiotic_InventoryItemStruct ItemData;                                            // 0x02D0 (size: 0x650)
    FAbiotic_InventoryChangeableDataStruct ChangeableData;                            // 0x0920 (size: 0x118)
    bool HasBeenPickedUp;                                                             // 0x0A38 (size: 0x1)
    FText To Interact with Text;                                                      // 0x0A40 (size: 0x10)
    bool NoPhysics;                                                                   // 0x0A50 (size: 0x1)
    bool PopupAfterSpawned;                                                           // 0x0A51 (size: 0x1)
    FTimerHandle PhysicsSleepHandle;                                                  // 0x0A58 (size: 0x8)
    bool ShouldSimulate;                                                              // 0x0A60 (size: 0x1)
    FTimerHandle ItemDecayTimerHandle;                                                // 0x0A68 (size: 0x8)
    float ItemDecayInterval;                                                          // 0x0A70 (size: 0x4)
    FTimerHandle CookTimer;                                                           // 0x0A78 (size: 0x8)
    class UNiagaraComponent* CookingParticleComp;                                     // 0x0A80 (size: 0x8)
    bool SpawnedFromProjectileImpact;                                                 // 0x0A88 (size: 0x1)
    float TimeToDespawn;                                                              // 0x0A8C (size: 0x4)
    class USceneComponent* InitialAttachToComponent;                                  // 0x0A90 (size: 0x8)
    FName InitialAttachToBone;                                                        // 0x0A98 (size: 0x8)

    void GetOutlineComponent(bool& ComponentEnabled, class UOutlineComponent_C*& Components);
    void IsItemInPinnedRecipes(bool& IsPinnedIngredient);
    void GetNewButtonPromptLocation(class UActorComponent* Component, FVector& NewLocation);
    float GetAmbientTemperature();
    void GetThermalOverlapPrimitives(TArray<class UPrimitiveComponent*>& OutPrimitives);
    bool CanBeGrabbed(FGameplayTag TagToCheck);
    void CanBeCarbuncled(bool& Success);
    void GetItemUseSpeed(bool SecondaryUse, class AAbiotic_Character_ParentBP_C* UsingCharacter, class AAbiotic_Character_ParentBP_C* TargetCharacter, double BaseSpeed, double& Speed);
    void CanLoseDurabilityOnUse(bool Secondary, bool& CanLose);
    void Can Use_Secondary(bool& Can Use, class AActor*& TargetActor, bool& OverrideLogic);
    void CanUse(bool& CanUse, class AActor*& TargetActor, bool& OverrideLogic);
    void CanUseSharedInteraction(bool& Can Use);
    void IsPowerCord(class UActorComponent*& Cable, bool& Return, TEnumAsByte<E_OutlineMode::Type>& CableInteractionType);
    void GetAttachedPowerCord(TArray<class UCableComponent*>& Power Cord Found);
    bool IsRadioactive();
    void GetInteractionBlocker(class UBoxComponent*& Blocker);
    void Landing Damage Multiplier(double Damage, double& DamageMultiplier);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    FText GetItemNameText();
    void GetStoredString(FString& String);
    void ShowPotentialInteraction(class UActorComponent*& AlternateHitComponent, bool& Show);
    void RequiresToolToDismantle(bool& Tool Required);
    void GetConstructionState(bool& UnderConstruction, double& PercentComplete);
    void GetItemChangeableData(FAbiotic_InventoryChangeableDataStruct& ChangeableData);
    void SitLocationParent(class USceneComponent*& ParentComponent);
    void HasSitLocations(bool& IsSittable);
    void SitLocations(TArray<FVector>& Locations);
    void CanLongInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void CanLongInteractWith_A(bool& Success);
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void PlayerExitLocations(int32 CurrentSeatIndex, TArray<FVector>& Locations);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void NPC_CanInteractWith(bool& Success);
    void ItemDroppedMeshSetup(TSoftObjectPtr<UObject> MeshObjectRef, class UStaticMesh*& OutMeshAsset);
    void AdjustTargetingCapsule();
    void OnItemDespawn();
    void InitDespawn();
    void SaveItem(bool RemoveFromSave);
    void CheckForBlankTextures();
    void Server Update Thermal Item State(bool Active);
    FName GetAttachedSocketData(FName SocketToLookFor, class UMeshComponent* MeshComponent, FVector& SocketLocation, class UMeshComponent*& Return Mesh);
    void ItemDecayTick();
    void StartItemDecayTimer();
    void OnRep_ShouldSimulate();
    void CheckForPhysicsFlags();
    void SetupInitialLiquidData(FAbiotic_LiquidStruct LiquidData);
    void Try_ApplyTextureOverrides(TArray<TSoftObjectPtr<UMaterialInterface>>& Texture Variants, bool& Applied);
    void OnRep_ItemDataRow();
    void OnRep_ItemDataTable();
    void OnLoaded_5B2E1BE54EF86C2753457BB947CA1E15(class UObject* Loaded);
    void OnLoaded_C1EE3D424AFAB1F47FCA9B9BA08C68CC(class UObject* Loaded);
    void OnLoaded_67DDAE0C498EAADD99C6F9BBC9883A6F(class UObject* Loaded);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ReceiveBeginPlay();
    void SetupItem();
    void InteractTeleportUpdate(class AAbiotic_Character_ParentBP_C* InteractingCharacter, bool TryingToTeleport, bool TeleportSuccessful);
    void DeliverDynamicProperty(bool FromSave, FDynamicProperty Property);
    void RadialWheelInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed, FName SelectionWheelContentName);
    void Set New Attached Power Cord(class UCableComponent* New Power Cord);
    void SetupTextureVariants(const FDataTableRowHandle& TextureVariantRow);
    void DeliverInt(bool FromSave, const int32 New Int);
    void OnInteractHighlightEnd(class UActorComponent* Component);
    void TriggerPhysicsCheck();
    void PhysicsSleepCheck();
    void OnInteractHighlightStart(class UActorComponent* Component);
    void Actor_RemoveFromCage(class AAbiotic_Character_ParentBP_C* OwningCharacter, FAbiotic_InventoryItemSlotStruct SlotData, FTransform ShootProjectileTransform, FTransform AttachedSocketTransform);
    void Actor Add to Cage(class AAbiotic_Character_ParentBP_C* OwningCharacter, class AActor* ActorToInteractWith, FAbiotic_InventoryItemSlotStruct SlotData);
    void BndEvt__Item_Consumable_ParentBP_ThermalReceiver_K2Node_ComponentBoundEvent_0_CurrentTemperatureUpdated__DelegateSignature(float NewTemperature);
    void SetupThermal();
    void CookItem();
    void DeliverString(FString String, bool FromSave);
    void NPC_InteractWith(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void InteractWith_B_LocalFX(bool Hold);
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void Update Current Item Data();
    void InitRadioactivity();
    void UseItem_OnTarget(class AActor* TargetActor);
    void UseItemSecondary_LocalFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, class AActor* TargetActor);
    void SetupItemBox(TSoftObjectPtr<UTexture2D> InventoryIcon, TSoftObjectPtr<UStaticMesh> 3DModel);
    void TryPerformBatteryChangeOnUse();
    void Use Item_Secondary(class AAbiotic_Character_ParentBP_C* UsingCharacter, FTransform Transform, class AActor* TargetActor);
    void UseItem_BroadcastFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, bool SecondaryUse);
    void UseItem_LocalFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, class AActor* TargetActor);
    void UseItem(class AAbiotic_Character_ParentBP_C* UsingCharacter, FTransform Transform, class AActor* TargetActor);
    void DoHitReaction();
    void Local_TryHighlightOnProjectileSpawnImpact();
    void ThermalEmitterActiveUpdated(bool bActive);
    void AttachFXToItem();
    void ApplyNewTemperature(float NewTemperature);
    void InteractWith_A_LocalFX(bool Hold);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void ExecuteUbergraph_Abiotic_Item_Dropped(int32 EntryPoint);
}; // Size: 0xAA0

#endif
