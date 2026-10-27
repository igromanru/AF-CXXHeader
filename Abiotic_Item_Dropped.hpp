#ifndef UE4SS_SDK_Abiotic_Item_Dropped_HPP
#define UE4SS_SDK_Abiotic_Item_Dropped_HPP

class AAbiotic_Item_Dropped_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UBuoyancyComponent* Buoyancy;                                               // 0x02A0 (size: 0x8)
    class UOutlineComponent_C* OutlineComponent;                                      // 0x02A8 (size: 0x8)
    class UAbioticTargetingComponent* AbioticTargeting;                               // 0x02B0 (size: 0x8)
    class UThermalReceiverComponent* ThermalReceiver;                                 // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* WorldMesh;                                            // 0x02C0 (size: 0x8)
    FGlobalItemRowHandle ItemDataRow;                                                 // 0x02C8 (size: 0x10)
    FAbioticInventoryItem ItemData;                                                   // 0x02D8 (size: 0x698)
    FAbioticInventoryChangeableData ChangeableData;                                   // 0x0970 (size: 0x88)
    bool HasBeenPickedUp;                                                             // 0x09F8 (size: 0x1)
    FText To Interact with Text;                                                      // 0x0A00 (size: 0x10)
    bool NoPhysics;                                                                   // 0x0A10 (size: 0x1)
    bool PopupAfterSpawned;                                                           // 0x0A11 (size: 0x1)
    FTimerHandle PhysicsSleepHandle;                                                  // 0x0A18 (size: 0x8)
    bool ShouldSimulate;                                                              // 0x0A20 (size: 0x1)
    FTimerHandle ItemDecayTimerHandle;                                                // 0x0A28 (size: 0x8)
    float ItemDecayInterval;                                                          // 0x0A30 (size: 0x4)
    FTimerHandle CookTimer;                                                           // 0x0A38 (size: 0x8)
    class UNiagaraComponent* CookingParticleComp;                                     // 0x0A40 (size: 0x8)
    bool SpawnedFromProjectileImpact;                                                 // 0x0A48 (size: 0x1)
    float TimeToDespawn;                                                              // 0x0A4C (size: 0x4)
    class USceneComponent* InitialAttachToComponent;                                  // 0x0A50 (size: 0x8)
    FName InitialAttachToBone;                                                        // 0x0A58 (size: 0x8)
    bool NoDespawn;                                                                   // 0x0A60 (size: 0x1)
    FVector RelativeOffsetLoc;                                                        // 0x0A68 (size: 0x18)
    FRotator RelativeOffsetRot;                                                       // 0x0A80 (size: 0x18)

    void GetOutlineComponent(bool& ComponentEnabled, class UOutlineComponent_C*& Components);
    void IsItemInPinnedRecipes(bool& IsPinnedIngredient);
    void GetNewButtonPromptLocation(class UActorComponent* Component, FVector& NewLocation);
    void GetAmbientTemperature();
    void GetThermalOverlapPrimitives(TArray<UPrimitiveComponent*>& OutPrimitives);
    void GetBloodSplatterType();
    void CanBeGrabbed(FGameplayTag TagToCheck);
    void CanBeCarbuncled(bool& Success);
    void GetItemUseSpeed(bool SecondaryUse, class AAbiotic_Character_ParentBP_C* UsingCharacter, class AAbiotic_Character_ParentBP_C* TargetCharacter, double BaseSpeed, double& Speed);
    void CanLoseDurabilityOnUse(bool Secondary, bool& CanLose);
    void Can Use_Secondary(bool& Can Use, class AActor*& TargetActor, bool& OverrideLogic);
    void CanUse(bool& CanUse, class AActor*& TargetActor, bool& OverrideLogic);
    void CanUseSharedInteraction(bool& Can Use);
    void IsPowerCord(class UActorComponent*& Cable, bool& Return, TEnumAsByte<E_OutlineMode::Type>& CableInteractionType);
    void GetAttachedPowerCord(TArray<UCableComponent*>& Power Cord Found);
    void IsRadioactive();
    void GetInteractionBlocker(class UBoxComponent*& Blocker);
    void Landing Damage Multiplier(double Damage, double& DamageMultiplier);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void GetItemNameText();
    void GetStoredString(FString& String);
    void ShowPotentialInteraction(class UActorComponent*& AlternateHitComponent, bool& Show);
    void RequiresToolToDismantle(bool& Tool Required);
    void GetConstructionState(bool& UnderConstruction, double& PercentComplete);
    void GetItemChangeableData(FAbioticInventoryChangeableData& ChangeableData);
    void SitLocationParent(class USceneComponent*& ParentComponent);
    void HasSitLocations(bool& IsSittable);
    void SitLocations(TArray<FVector>& Locations);
    void CanLongInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void CanLongInteractWith_A(bool& Success);
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void PlayerExitLocations(int32 CurrentSeatIndex, TArray<FVector>& Locations);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void GetHighlightComponents(TArray<UActorComponent*>& Components, bool& DontHighlightPowerCord);
    void NPC_CanInteractWith(bool& Success);
    void OnRep_ItemRow();
    void AttachItemToComponent(class USceneComponent* Parent, FName SocketName);
    void ItemDroppedMeshSetup(TSoftObjectPtr<class UObject> MeshObjectRef, class UStaticMesh*& OutMeshAsset);
    void AdjustTargetingCapsule();
    void OnItemDespawn();
    void InitDespawn();
    void SaveItem(bool RemoveFromSave);
    void CheckForBlankTextures();
    void Server Update Thermal Item State(bool Active);
    void GetAttachedSocketData(FName SocketToLookFor, class UMeshComponent* MeshComponent, FVector& SocketLocation, class UMeshComponent*& Return Mesh);
    void ItemDecayTick();
    void StartItemDecayTimer();
    void OnRep_ShouldSimulate();
    void CheckForPhysicsFlags();
    void SetupInitialLiquidData(FAbioticLiquid LiquidData);
    void Try_ApplyTextureOverrides(TArray<TSoftObjectPtr<class UMaterialInterface>>& Texture Variants, bool& Applied);
    void OnRep_ItemDataRow();
    void OnRep_ItemDataTable();
    void OnLoaded_5B2E1BE54EF86C2753457BB947CA1E15(class UObject* Loaded);
    void OnLoaded_C1EE3D424AFAB1F47FCA9B9BA08C68CC(class UObject* Loaded);
    void OnLoaded_67DDAE0C498EAADD99C6F9BBC9883A6F(class UObject* Loaded);
    void RadialWheelInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed, FName SelectionWheelContentName);
    void DeliverDynamicProperty(bool FromSave, FDynamicProperty Property);
    void InteractTeleportUpdate(class AAbiotic_Character_ParentBP_C* InteractingCharacter, bool TryingToTeleport, bool TeleportSuccessful);
    void ReceiveBeginPlay();
    void Set New Attached Power Cord(class UCableComponent* New Power Cord);
    void OnInteractHighlightEnd(class UActorComponent* Component);
    void OnInteractHighlightStart(class UActorComponent* Component);
    void Actor_RemoveFromCage(class AAbiotic_Character_ParentBP_C* OwningCharacter, FAbioticInventoryItemSlot SlotData, FTransform ShootProjectileTransform, FTransform AttachedSocketTransform);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void Actor Add to Cage(class AAbiotic_Character_ParentBP_C* OwningCharacter, class AActor* ActorToInteractWith, FAbioticInventoryItemSlot SlotData);
    void DeliverString(FString String, bool FromSave);
    void SetupItem();
    void NPC_InteractWith(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void InteractWith_B_LocalFX(bool Hold);
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void SetupTextureVariants(const FTextureVariantRowHandle& TextureVariantRow);
    void StopUsingItem(class AAbiotic_Character_ParentBP_C* UsingCharacter);
    void Update Current Item Data();
    void TriggerPhysicsCheck();
    void PhysicsSleepCheck();
    void UseItem_OnTarget(class AActor* TargetActor);
    void UseItemSecondary_LocalFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, class AActor* TargetActor);
    void TryPerformBatteryChangeOnUse();
    void BndEvt__Item_Consumable_ParentBP_ThermalReceiver_K2Node_ComponentBoundEvent_0_CurrentTemperatureUpdated__DelegateSignature(float NewTemperature);
    void SetupThermal();
    void CookItem();
    void Use Item_Secondary(class AAbiotic_Character_ParentBP_C* UsingCharacter, FTransform Transform, class AActor* TargetActor);
    void UseItem_BroadcastFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, bool SecondaryUse);
    void UseItem_LocalFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, class AActor* TargetActor);
    void UseItem(class AAbiotic_Character_ParentBP_C* UsingCharacter, FTransform Transform, class AActor* TargetActor);
    void DoHitReaction();
    void ThermalEmitterActiveUpdated(bool bActive);
    void InitRadioactivity();
    void ApplyNewTemperature(float NewTemperature);
    void SetupItemBox(TSoftObjectPtr<class UTexture2D> InventoryIcon, TSoftObjectPtr<class UStaticMesh> 3DModel);
    void DeliverInt(bool FromSave, const int32 New Int);
    void Local_TryHighlightOnProjectileSpawnImpact();
    void AttachFXToItem();
    void InteractWith_A_LocalFX(bool Hold);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void ForceItemPickup();
    void BndEvt__Abiotic_Item_Dropped_Buoyancy_K2Node_ComponentBoundEvent_1_OnPontoonEnteredWater__DelegateSignature(const FSphericalPontoon& Pontoon);
    void ExecuteUbergraph_Abiotic_Item_Dropped(int32 EntryPoint);
}; // Size: 0xA98

#endif
