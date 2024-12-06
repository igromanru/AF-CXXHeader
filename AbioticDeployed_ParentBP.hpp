#ifndef UE4SS_SDK_AbioticDeployed_ParentBP_HPP
#define UE4SS_SDK_AbioticDeployed_ParentBP_HPP

class AAbioticDeployed_ParentBP_C : public AAbioticActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x02C8 (size: 0x8)
    class USceneComponent* PlugCordAttachPoint;                                       // 0x02D0 (size: 0x8)
    class UTextRenderComponent* DebugText;                                            // 0x02D8 (size: 0x8)
    float JiggleDeployableTimeline_NewTrack_0_7928E14D489C1875D42917A64D1EA085;       // 0x02E0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> JiggleDeployableTimeline__Direction_7928E14D489C1875D42917A64D1EA085; // 0x02E4 (size: 0x1)
    class UTimelineComponent* JiggleDeployableTimeline;                               // 0x02E8 (size: 0x8)
    FDataTableRowHandle TextureVariantsDataRow;                                       // 0x02F0 (size: 0x10)
    FDataTableRowHandle DeconstructedItemData;                                        // 0x0300 (size: 0x10)
    FAbiotic_InventoryChangeableDataStruct ChangeableData;                            // 0x0310 (size: 0x118)
    double CurrentDurability;                                                         // 0x0428 (size: 0x8)
    double MaxDurability;                                                             // 0x0430 (size: 0x8)
    bool DeployableDestroyed;                                                         // 0x0438 (size: 0x1)
    double LastDamageMultiplier;                                                      // 0x0440 (size: 0x8)
    bool JigglesWhenDamaged;                                                          // 0x0448 (size: 0x1)
    FVector JiggleRoot_RestingLocation;                                               // 0x0450 (size: 0x18)
    bool DeployedByPlayer;                                                            // 0x0468 (size: 0x1)
    bool RequiresConstruction;                                                        // 0x0469 (size: 0x1)
    bool ConstructionModeActive;                                                      // 0x046A (size: 0x1)
    double ConstructionLevel_Current;                                                 // 0x0470 (size: 0x8)
    double ConstructionLevel_Max;                                                     // 0x0478 (size: 0x8)
    TSoftObjectPtr<AActor> Parent Power Source;                                       // 0x0480 (size: 0x28)
    FText AlternativeObjectName;                                                      // 0x04A8 (size: 0x10)
    bool RestoresSanityWhenPowered;                                                   // 0x04B8 (size: 0x1)
    bool LastDamagedByPlayer;                                                         // 0x04B9 (size: 0x1)
    bool RequiresPower;                                                               // 0x04BA (size: 0x1)
    FString SpawnedAssetID;                                                           // 0x04C0 (size: 0x10)
    bool RequireToolToPackage;                                                        // 0x04D0 (size: 0x1)
    bool CulledByWorldLoad;                                                           // 0x04D1 (size: 0x1)
    bool RemainsWhenBroken;                                                           // 0x04D2 (size: 0x1)
    bool IsBrokenState;                                                               // 0x04D3 (size: 0x1)
    TArray<class UMeshComponent*> MeshComponents;                                     // 0x04D8 (size: 0x10)
    bool FoundByPlayer;                                                               // 0x04E8 (size: 0x1)
    TArray<class UMaterialInterface*> MaterialsBeforeHologram;                        // 0x04F0 (size: 0x10)
    TArray<FVector> Supports;                                                         // 0x0500 (size: 0x10)
    TMap<class UMeshComponent*, class FName> CollisionProfileMap;                     // 0x0510 (size: 0x50)
    FAbioticDeployed_ParentBP_CDeployableRequestedSave DeployableRequestedSave;       // 0x0560 (size: 0x10)
    void DeployableRequestedSave();
    bool DeployedInVignette;                                                          // 0x0570 (size: 0x1)
    bool NoResetVignette;                                                             // 0x0571 (size: 0x1)
    bool DropOverflowBag;                                                             // 0x0572 (size: 0x1)
    bool IsCurrentlyLoadingFromSave;                                                  // 0x0573 (size: 0x1)
    FPaintedDeployableRowHandle PaintedDeployableRow;                                 // 0x0578 (size: 0x20)
    EPaintColor PaintedColor;                                                         // 0x0598 (size: 0x1)
    int32 MaterialOverrideCount;                                                      // 0x059C (size: 0x4)
    TArray<class UCableComponent*> PowerCordAttached;                                 // 0x05A0 (size: 0x10)
    bool nosave;                                                                      // 0x05B0 (size: 0x1)
    bool CanBeLaserPowered;                                                           // 0x05B1 (size: 0x1)
    bool HasLaserPower;                                                               // 0x05B2 (size: 0x1)
    TArray<class ULaserComponent_C*> HitLasers;                                       // 0x05B8 (size: 0x10)

    void ReceiveLaserHit(class ULaserComponent_C* Laser, int32 CurrentBounce, FHitResult& HitResult, bool& Handled);
    void GetPluggedInDeviceCount(int32& Count);
    bool HasBatteryInParentChain();
    void RestoresSanityNearbyWhenPowered(bool& RestoresSanity);
    void PowerParent(class AActor*& ParentPowerSource);
    void PlugCordAttachLocation(FVector& RelativeLocation);
    void IsPowerSocket(bool& CanBePluggedInto);
    void RequiresPowerSocket(bool& MustBePluggedIn);
    void IsPowered(bool& PowerOn);
    void GetPowerParentIndex(int32& Index);
    void CanUseSharedInteraction(bool& Can Use);
    void GetPowerCordHighlightColor(class UActorComponent*& Cable, int32& Color);
    void GetAttachedPowerCord(TArray<class UCableComponent*>& Power Cord Found);
    bool IsRadioactive();
    void GetInteractionBlocker(class UBoxComponent*& Blocker);
    void Landing Damage Multiplier(double Damage, double& DamageMultiplier);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    FText GetItemNameText();
    void GetStoredString(FString& String);
    void ShowPotentialInteraction(bool& Show);
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
    bool GetDeployedStackCount(TArray<class AActor*>& inArray, int32& Count, TArray<class AActor*>& OutArray);
    void GetDeployHologramMesh(class UStaticMesh*& Mesh);
    void GetDeployedActorBounds(FVector& Origin, FVector& BoxExtent);
    void Try Apply New Durability Value After Hit(double TotalDurabilityToBeApplied, const class UAbiotic_DamageType_ParentBP_C* DamageType, bool& Applied);
    void ValidateHitLasers();
    class UPrimitiveComponent* GetLaserReceiverPort();
    void OnRep_HasLaserPower();
    void GetPinnedHighlightColor(int32& Color, bool& IsPinnedIngredient);
    void OnInventoriesLoadedFromSave(TArray<FSaveData_Inventories_Struct>& Data);
    void GetInventoriesToSave(TArray<class UAbiotic_InventoryComponent_C*>& Inventories);
    void CanBePainted(bool& SupportsPaint);
    void SetPaintColor(EPaintColor Color, bool SkipSave);
    bool GetMeshComponents(TArray<class UMeshComponent*>& Components);
    void OnRep_PaintedColor();
    void Can Harm Deployable?(class UObject* DamageCauser, class AController* Instigator, double& DamageMultiplier, bool& CanHarmDeployable);
    FTransform GetExitFailsafeLocation();
    bool IsCharacterOverlappingHologram();
    class UStaticMeshComponent* GetDeployableMesh();
    void UpdateSupports();
    void OnRep_Supports();
    void TriggerFoundByPlayer(bool SkipSave);
    void SetupPaintAndTexture();
    void GetDamageReduction(double BaseDamage, double DamageTypeMultiplier, double& FinalDamageToApply);
    void Process Damage(float Damage, class UObject* DamageType, FVector HitLocation, FVector HitNormal, class UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, class AController* InstigatedBy, class UObject* DamageCauser, FHitResult HitInfo);
    void OnLoadedFromSave();
    void GetTextureOverrides(TArray<TSoftObjectPtr<UMaterialInterface>>& TextureOverride, bool& PaintApplied);
    FAbiotic_InventoryItemStruct GetDeployableItemData();
    bool CanLoseDurability();
    void Get Item Proxies Data();
    void SaveDeployable(bool RemoveFromSave);
    void UpdateDurabilityVisualFX();
    void OnRep_CurrentDurability();
    void Server Set New Power Source(class AActor* Parent Power Source);
    void OnRep_Parent Power Source();
    void RefreshConstructionModeStateFX();
    void OnRep_ConstructionLevel_Current();
    void OnRep_ConstructionModeActive();
    void UpdateDurabilityText();
    void OnRep_MaxDurability();
    void JiggleVector(FVector PositionIn, FVector& JiggleOut);
    void Try_ApplyTextureOverrides(TArray<TSoftObjectPtr<UMaterialInterface>>& Texture Variants, bool ContainsPaintTextures, bool& Applied);
    void DestroyDeployable(bool NoLoot, int32 Extra Loot Quantity, bool LootBagLocationOverride, FVector LocationOverride);
    void UserConstructionScript();
    void JiggleDeployableTimeline__FinishedFunc();
    void JiggleDeployableTimeline__UpdateFunc();
    void TogglePowerFX();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void InteractWith_A_LocalFX(bool Hold);
    void InteractWith_B_LocalFX(bool Hold);
    void NPC_InteractWith(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void DeliverString(FString String, bool FromSave);
    void Actor Add to Cage(class AAbiotic_Character_ParentBP_C* OwningCharacter, class AActor* ActorToInteractWith, FAbiotic_InventoryItemSlotStruct SlotData);
    void Actor_RemoveFromCage(class AAbiotic_Character_ParentBP_C* OwningCharacter, FAbiotic_InventoryItemSlotStruct SlotData, FTransform ShootProjectileTransform, FTransform AttachedSocketTransform);
    void OnInteractHighlightStart(class UActorComponent* Component);
    void OnInteractHighlightEnd(class UActorComponent* Component);
    void DeliverInt(bool FromSave, const int32 New Int);
    void RadialWheelInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed, FName SelectionWheelContentName);
    void DeliverDynamicProperty(bool FromSave, FDynamicProperty Property);
    void InteractTeleportUpdate(class AAbiotic_Character_ParentBP_C* InteractingCharacter, bool TryingToTeleport, bool TeleportSuccessful);
    void ReceiveBeginPlay();
    void ReceivePointDamage(float Damage, const class UDamageType* DamageType, FVector HitLocation, FVector HitNormal, class UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const FHitResult& HitInfo);
    void Broadcast_TookDamage(bool PlayDamageSound);
    void StopTookDamageTimeline();
    void Local_TookDamage(bool PlayDamageSound);
    void ReceiveDestroyed();
    void Update Deployable Proxies(const TArray<FSaveData_ItemProxy_Struct>& Item Proxies);
    void RefreshIsBrokenState();
    void ReceiveRadialDamage(float DamageReceived, const class UDamageType* DamageType, FVector Origin, const FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
    void Broadcast_ConstructionBlocked();
    void DurabilityDelayedSave();
    void Set New Attached Power Cord(class UCableComponent* New Power Cord);
    void StopLaserHitUpdate(class ULaserComponent_C* Laser);
    void ExecuteUbergraph_AbioticDeployed_ParentBP(int32 EntryPoint);
    void DeployableRequestedSave__DelegateSignature();
}; // Size: 0x5C8

#endif
