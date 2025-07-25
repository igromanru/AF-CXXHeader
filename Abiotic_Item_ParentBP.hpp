#ifndef UE4SS_SDK_Abiotic_Item_ParentBP_HPP
#define UE4SS_SDK_Abiotic_Item_ParentBP_HPP

class AAbiotic_Item_ParentBP_C : public AAbioticActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UThermalReceiverComponent* ThermalReceiver;                                 // 0x02D8 (size: 0x8)
    class USkeletalMeshComponent* World_SkeletalMesh;                                 // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* World_StaticMesh;                                     // 0x02E8 (size: 0x8)
    FDataTableRowHandle ItemDataRow;                                                  // 0x02F0 (size: 0x10)
    FAbiotic_InventoryItemStruct ItemData;                                            // 0x0300 (size: 0x650)
    FAbiotic_InventoryChangeableDataStruct ChangeableData;                            // 0x0950 (size: 0x88)
    bool HasBeenPickedUp;                                                             // 0x09D8 (size: 0x1)
    FText To Interact with Text;                                                      // 0x09E0 (size: 0x10)
    bool NoPhysics;                                                                   // 0x09F0 (size: 0x1)
    bool NoCollision;                                                                 // 0x09F1 (size: 0x1)
    bool PopupAfterSpawned;                                                           // 0x09F2 (size: 0x1)
    FTimerHandle PhysicsSleepHandle;                                                  // 0x09F8 (size: 0x8)
    bool ShouldSimulate;                                                              // 0x0A00 (size: 0x1)
    class USceneComponent* InitialAttachToComponent;                                  // 0x0A08 (size: 0x8)
    FName InitialAttachToBone;                                                        // 0x0A10 (size: 0x8)
    FTimerHandle ProjectilePrediction_Timer;                                          // 0x0A18 (size: 0x8)
    double ProjectilePredict_BaseSpeed;                                               // 0x0A20 (size: 0x8)
    double ProjectilePredict_SpeedMultiplier;                                         // 0x0A28 (size: 0x8)
    double Bounciness;                                                                // 0x0A30 (size: 0x8)
    double Collision Radius;                                                          // 0x0A38 (size: 0x8)
    FVector ProjectilePredict_Velocity;                                               // 0x0A40 (size: 0x18)
    FTimerHandle ItemDecayTimerHandle;                                                // 0x0A58 (size: 0x8)
    float ItemDecayInterval;                                                          // 0x0A60 (size: 0x4)
    bool Should Bounce;                                                               // 0x0A64 (size: 0x1)
    FTimerHandle CookTimer;                                                           // 0x0A68 (size: 0x8)
    class UNiagaraComponent* CookingParticleComp;                                     // 0x0A70 (size: 0x8)
    bool SpawnedFromProjectileImpact;                                                 // 0x0A78 (size: 0x1)
    class UCurveFloat* ProjectileCurve;                                               // 0x0A80 (size: 0x8)
    bool ItemIsOffered;                                                               // 0x0A88 (size: 0x1)
    class USplineComponent* PredictionSpline;                                         // 0x0A90 (size: 0x8)
    TArray<class USplineMeshComponent*> ArcSplineMeshes;                              // 0x0A98 (size: 0x10)
    TArray<class USplineMeshComponent*> ArcSplineBounceMeshes;                        // 0x0AA8 (size: 0x10)
    class USplineComponent* PredictionBounceSpline;                                   // 0x0AB8 (size: 0x8)
    bool ThrowingArcActive;                                                           // 0x0AC0 (size: 0x1)
    bool ThrowingArcInitialized;                                                      // 0x0AC1 (size: 0x1)
    bool AllowWristwatch;                                                             // 0x0AC2 (size: 0x1)
    class UMaterialInterface* DynamicThrowingArcMat;                                  // 0x0AC8 (size: 0x8)
    class UMaterialInterface* DynamicBounceArcMat;                                    // 0x0AD0 (size: 0x8)
    FVector ThrowArcStartOffset;                                                      // 0x0AD8 (size: 0x18)

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
    bool ShouldThrowingArcPulse();
    void AllowWristwatchUsage(bool& Allow);
    void UpdateArcMeshes(TArray<FVector>& Points, bool Bounce);
    void ClearThrowingArcMeshes();
    TArray<FItemActionRowHandle> GetSecondaryItemActionArray();
    TArray<FItemActionRowHandle> GetPrimaryItemActionArray();
    void IsItemInPinnedRecipes(bool& IsPinnedIngredient);
    void GetItemThrowSound(class USoundBase*& Sound);
    void DurabilityLossOverride(bool& Handled);
    bool GetFPArmsUseMontageOverride(bool SecondaryUse, TSoftObjectPtr<UAnimMontage>& Montage);
    bool GetItemUseMontageOverride(TSoftObjectPtr<UAnimMontage>& Montage);
    void GetUseSFXOverride(bool Use Override In TP, class APawn* Instigator, bool& Override, class USoundCue*& Sound Cue);
    bool GetBroadcastedTPMontageOverride(bool Secondary, class UAnimMontage*& Montage);
    void Server Reset Offer Item State();
    void OnRep_ItemIsOffered();
    void SupportedSharedInteraction(bool& Supported);
    void DebugDrawOnHUD(class AHUD* HUD, int32 SizeX, int32 SizeY);
    bool IsConsumingPlayerInput();
    void Server Update Thermal Item State(bool Active);
    FName GetAttachedSocketData(FName SocketToLookFor, class UMeshComponent* MeshComponent, FVector& SocketLocation, class UMeshComponent*& Return Mesh);
    void GetUpcomingProjectileVelocity(double ProjectilePredictBaseSpeed, double ProjectilePredictSpeedMultiplier, float CollisionRadius);
    void Is ThrowableCan Be Cooked(bool& CanBeCooked);
    void ItemDecayTick();
    void StartItemDecayTimer();
    bool GetFPUseMontageOverride(bool Secondary, TSoftObjectPtr<UAnimMontage>& Montage);
    double Get Throwing Speed Based on Skill(double BaseSpeed, double SpeedMultiplier);
    void OnRep_ShouldSimulate();
    void Check Item Tag Query(class AActor* TargetActor, bool& Success, FText& PopupText);
    void CheckForPhysicsFlags();
    void SetupInitialLiquidData(FAbiotic_LiquidStruct LiquidData);
    void Try_ApplyTextureOverrides(TArray<TSoftObjectPtr<UMaterialInterface>>& Texture Variants, bool& Applied);
    void OnRep_ItemDataRow();
    void OnRep_ItemDataTable();
    void OnLoaded_15A13E634EB6004C71800EBDA4C1429C(class UObject* Loaded);
    void OnLoaded_C0AB17B84D398395118A61AFE732C841(class UObject* Loaded);
    void OnLoaded_7455436646AF35C8D93232A034E6EFCE(UClass* Loaded);
    void OnLoaded_4E57BC104E65FC807A1912B5C6E61D16(class UObject* Loaded);
    void OnLoaded_AE1796A74769F9E45686FB9613D11A6A(class UObject* Loaded);
    void OnLoaded_4A549FF641D38A691D6561A63936BF89(class UObject* Loaded);
    void OnLoaded_F3B89B67484534E24EB80A9CF8C9D1AB(class UObject* Loaded);
    void DeliverInt(bool FromSave, const int32 New Int);
    void Set New Attached Power Cord(class UCableComponent* New Power Cord);
    void RadialWheelInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed, FName SelectionWheelContentName);
    void DeliverDynamicProperty(bool FromSave, FDynamicProperty Property);
    void InteractTeleportUpdate(class AAbiotic_Character_ParentBP_C* InteractingCharacter, bool TryingToTeleport, bool TeleportSuccessful);
    void ReceiveBeginPlay();
    void OnInteractHighlightStart(class UActorComponent* Component);
    void Actor_RemoveFromCage(class AAbiotic_Character_ParentBP_C* OwningCharacter, FAbiotic_InventoryItemSlotStruct SlotData, FTransform ShootProjectileTransform, FTransform AttachedSocketTransform);
    void Actor Add to Cage(class AAbiotic_Character_ParentBP_C* OwningCharacter, class AActor* ActorToInteractWith, FAbiotic_InventoryItemSlotStruct SlotData);
    void DeliverString(FString String, bool FromSave);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void NPC_InteractWith(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void InteractWith_B_LocalFX(bool Hold);
    void SetupItem();
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void UseItem_BroadcastFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, bool SecondaryUse);
    void Update Current Item Data();
    void UseItem_OnTarget(class AActor* TargetActor);
    void SetupItem_FirstPerson();
    void UseItemSecondary_LocalFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, class AActor* TargetActor);
    void PlayFPItemIdleAnimation(class UAnimSequence* Idle Anim, double Delay Before Playing);
    void TryPerformBatteryChangeOnUse();
    void Use Item_Secondary(class AAbiotic_Character_ParentBP_C* UsingCharacter, FTransform Transform, class AActor* TargetActor);
    void SetupTextureVariants(const FDataTableRowHandle& TextureVariantRow);
    void UseItem_LocalFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, class AActor* TargetActor);
    void UseItem(class AAbiotic_Character_ParentBP_C* UsingCharacter, FTransform Transform, class AActor* TargetActor);
    void InteractWith_A_LocalFX(bool Hold);
    void TriggerPhysicsCheck();
    void PhysicsSleepCheck();
    void DoHitReaction();
    void ThermalEmitterActiveUpdated(bool bActive);
    void ApplyNewTemperature(float NewTemperature);
    void Local_PredictProjectilePathUpdate(class AAbiotic_Character_ParentBP_C* UsingCharacter, bool IsWeapon, bool EndPrediction);
    void StartPredictProjectilePath();
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void BndEvt__Item_Consumable_ParentBP_ThermalReceiver_K2Node_ComponentBoundEvent_0_CurrentTemperatureUpdated__DelegateSignature(float NewTemperature);
    void SetupThermal();
    void CookItem();
    void UpdateOwnerLightFunctionMaterial();
    void InitRadioactivity();
    void SetupItemBox(TSoftObjectPtr<UTexture2D> InventoryIcon, TSoftObjectPtr<UStaticMesh> 3DModel);
    void OnInteractHighlightEnd(class UActorComponent* Component);
    void OwningBuffTagsRefreshed();
    void OnPlayerEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void Local_TryHighlightOnProjectileSpawnImpact();
    void RequestProjectileVelocityFromDataRow(double ProjectileSpeedMultiplier, const FDataTableRowHandle& ProjectileRowHandle);
    void CheckForItemDropFX(class UMeshComponent* MeshToAttachOn);
    void SetMaterialProperties();
    void AttachFXToItem(class UMeshComponent* MeshToAttachOn);
    void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
    void Server_SharedInteraction(class AAbiotic_PlayerCharacter_C* ItemOwner, class AAbiotic_PlayerCharacter_C* Receiver);
    void LocalUpdateSharedInteraction();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Abiotic_Item_ParentBP(int32 EntryPoint);
}; // Size: 0xAF0

#endif
