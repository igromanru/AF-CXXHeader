#ifndef UE4SS_SDK_ResourceNode_ParentBP_HPP
#define UE4SS_SDK_ResourceNode_ParentBP_HPP

class AResourceNode_ParentBP_C : public AAbioticActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UAbioticTargetingComponent* AbioticTargeting;                               // 0x02C8 (size: 0x8)
    class UTextRenderComponent* EditorText;                                           // 0x02D0 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x02D8 (size: 0x8)
    class USceneComponent* ResourceDropOrigin;                                        // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* SM_ResourceNode;                                      // 0x02E8 (size: 0x8)
    float DamageJiggleTimeline_NewTrack_0_A597C0FB48D3309E6CF3B895BFA5C2AA;           // 0x02F0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> DamageJiggleTimeline__Direction_A597C0FB48D3309E6CF3B895BFA5C2AA; // 0x02F4 (size: 0x1)
    class UTimelineComponent* DamageJiggleTimeline;                                   // 0x02F8 (size: 0x8)
    bool IsDepleted;                                                                  // 0x0300 (size: 0x1)
    double CurrentHitPoints;                                                          // 0x0308 (size: 0x8)
    double MaxHitPoints;                                                              // 0x0310 (size: 0x8)
    FDataTableRowHandle SalvageDropRow;                                               // 0x0318 (size: 0x10)
    bool IgnoreRadialDamage;                                                          // 0x0328 (size: 0x1)
    bool IgnorePointDamage;                                                           // 0x0329 (size: 0x1)
    TEnumAsByte<E_ResourceNodeMethod::Type> ObtainmentMethod;                         // 0x032A (size: 0x1)
    FVector SM_RelativeLocation;                                                      // 0x0330 (size: 0x18)
    FVector SK_RelativeLocation;                                                      // 0x0348 (size: 0x18)
    FWorldFlagRowHandle ContinualRespawnFlag;                                         // 0x0360 (size: 0x20)
    bool JiggleWhenDamaged;                                                           // 0x0380 (size: 0x1)
    double JiggleIntensity;                                                           // 0x0388 (size: 0x8)
    bool IgnorePunchDamage;                                                           // 0x0390 (size: 0x1)
    double NodeSpawnChance;                                                           // 0x0398 (size: 0x8)
    FText To Interact with Text;                                                      // 0x03A0 (size: 0x10)
    bool IgnoreSupports;                                                              // 0x03B0 (size: 0x1)
    FResourceNode_ParentBP_COnMoved OnMoved;                                          // 0x03B8 (size: 0x10)
    void OnMoved(class AActor* MovedActor);
    FVector Rep_GroundPosition;                                                       // 0x03C8 (size: 0x18)
    TArray<class UMaterialInstanceDynamic*> DynamicMaterials;                         // 0x03E0 (size: 0x10)
    bool Loot Is Generated?;                                                          // 0x03F0 (size: 0x1)
    class USoundCue* SoundOnDestroy;                                                  // 0x03F8 (size: 0x8)
    FDataTableRowHandle TextureVariant;                                               // 0x0400 (size: 0x10)
    FDataTableRowHandle TutorialOnCollection;                                         // 0x0410 (size: 0x10)
    FResourceNode_ParentBP_COnDepleted OnDepleted;                                    // 0x0420 (size: 0x10)
    void OnDepleted();
    FDataTableRowHandle DebrisRow;                                                    // 0x0430 (size: 0x10)
    bool DisableInDemoMode;                                                           // 0x0440 (size: 0x1)
    FText CachedNodeName;                                                             // 0x0448 (size: 0x10)
    TMap<ECharacterSkills, double> XPForPickup;                                       // 0x0458 (size: 0x50)
    bool DisallowSandboxRespawning;                                                   // 0x04A8 (size: 0x1)
    FTimerHandle MyRespawnTimer;                                                      // 0x04B0 (size: 0x8)
    int32 DayWasDepleted;                                                             // 0x04B8 (size: 0x4)
    bool AllowRespawnAfterDays;                                                       // 0x04BC (size: 0x1)
    int32 RequiredDaysToRespawn;                                                      // 0x04C0 (size: 0x4)

    void DebugInfo_Tick(bool& Success, FString& DebugString, bool& UseBoundsAsOffset, FVector& Offset, FLinearColor& Color);
    void TargetableByTurrets(bool& Targetable);
    void GetWandererNPC(class ANPC_Base_ParentBP_C*& Wanderer);
    bool GetTargetPriority(TEnumAsByte<E_TargetPriority::Type>& Priority);
    void Targetable By Triggers(bool& Targetable);
    void GetFactionTeam(TEnumAsByte<E_Factions::Type>& Faction);
    void GetSpottablePoints(TArray<FVector>& SpottablePoints);
    void TargetableByNPCs(bool Maintain, bool& Targetable);
    void RequiresRangedWeaponToEngage(bool& RequiresRanged);
    void DoesAwardSkillXPWhenHit(bool& MeleeXP, bool& RangedXP, double& XPMultiplier);
    void IsStompable(class AAbiotic_Character_ParentBP_C* AskingCharacter, bool& IsStompable);
    void GetBuffOverlayMeshes(TArray<class UMeshComponent*>& Meshes);
    bool GetCurrentLightLevel(double& LightLevel);
    bool GetSpottability(double& Spottability, bool& Crouched);
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
    void CanLongInteractWith_A(bool& Success);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void CanLongInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void NPC_CanInteractWith(bool& Success);
    void PlayerExitLocations(int32 CurrentSeatIndex, TArray<FVector>& Locations);
    void SitLocations(TArray<FVector>& Locations);
    void HasSitLocations(bool& IsSittable);
    void Server_OnLoadRespawnCheck(bool& Respawned);
    void GetPinnedHighlightColor(int32& Color, bool& IsPinnedIngredient);
    void Server_SetDormant();
    void TryAwardDismantleXP(class AAbiotic_PlayerCharacter_C* Character);
    void CheckInitialDormancy();
    void SpawnDebrisFX();
    void Can Equip Resource Node(bool& CanBeEquipped, FDataTableRowHandle& ItemData);
    void Try Apply Texture Override(TArray<TSoftObjectPtr<UMaterialInterface>>& TextureVariants);
    void SaveNodeToWorldSave();
    void UpdateDurabilityFX();
    void OnRep_CurrentHitPoints();
    void OnRep_Rep_GroundPosition();
    void PlaceOnGround(class AActor* DestroyedActor);
    void Check for Object Below(class AActor* ActorBeingDestroyed, bool& Found Actor Support, FVector& HitWorldPosition, class AActor*& Actor);
    void JiggleVector(FVector PositionIn, FVector& JiggleOut);
    void OnRep_IsDepleted();
    void UserConstructionScript();
    void DamageJiggleTimeline__FinishedFunc();
    void DamageJiggleTimeline__UpdateFunc();
    void DoActionToSensedTarget(bool SuccessfullySensed);
    void SetNewWandererNPC(class ANPC_Base_ParentBP_C* PotentialWanderer);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
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
    void ReceivePointDamage(float Damage, const class UDamageType* DamageType, FVector HitLocation, FVector HitNormal, class UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const FHitResult& HitInfo);
    void RefreshDepletedStateFX();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void Broadcast_TookDamage();
    void StopTookDamageTimeline();
    void ReceiveBeginPlay();
    void InteractWith_A_LocalFX(bool Hold);
    void Local_TookDamage();
    void DropLoot(bool TryToPlaceInInventory, class AAbiotic_PlayerCharacter_C* inventoryOwner, bool IsNotReceivingDamage);
    void SetupNodeFromWorldSave();
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void DoubleCheckGroundPlacement();
    void ReceiveRadialDamage(float DamageReceived, const class UDamageType* DamageType, FVector Origin, const FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
    void ReceiveDestroyed();
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void RespawnResourceNode();
    void Broadcast_PortalRespawnEffect();
    void Force_DepleteNode();
    void ExecuteUbergraph_ResourceNode_ParentBP(int32 EntryPoint);
    void OnDepleted__DelegateSignature();
    void OnMoved__DelegateSignature(class AActor* MovedActor);
}; // Size: 0x4C4

#endif
