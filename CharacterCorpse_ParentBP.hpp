#ifndef UE4SS_SDK_CharacterCorpse_ParentBP_HPP
#define UE4SS_SDK_CharacterCorpse_ParentBP_HPP

class ACharacterCorpse_ParentBP_C : public AAbioticActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x02D8 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x02E0 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x02E8 (size: 0x8)
    FWorldFlagRowHandle WorldFlagToAppear;                                            // 0x02F0 (size: 0x20)
    class UAnimSequence* DeathPose;                                                   // 0x0310 (size: 0x8)
    bool CanBeGibbed;                                                                 // 0x0318 (size: 0x1)
    FDataTableRowHandle GibSalvageRow;                                                // 0x0320 (size: 0x10)
    bool IsInteractable;                                                              // 0x0330 (size: 0x1)
    FDataTableRowHandle InteractionLoot;                                              // 0x0338 (size: 0x10)
    TArray<FDataTableRowHandle> CustomizationUnlocks;                                 // 0x0348 (size: 0x10)
    FAchievementRowHandle AchievementOnInteract;                                      // 0x0358 (size: 0x20)
    FString CorpseDebugName;                                                          // 0x0378 (size: 0x10)
    bool IsGibbed;                                                                    // 0x0388 (size: 0x1)
    class USoundBase* GibbedSound;                                                    // 0x0390 (size: 0x8)
    class UNiagaraSystem* GibParticles;                                               // 0x0398 (size: 0x8)
    bool HasBeenLooted;                                                               // 0x03A0 (size: 0x1)
    FName ButtonPromptBone;                                                           // 0x03A4 (size: 0x8)
    int32 CurrentGibCuts;                                                             // 0x03AC (size: 0x4)
    int32 MaxGibCuts;                                                                 // 0x03B0 (size: 0x4)
    FCharacterCorpse_ParentBP_COnGibbed OnGibbed;                                     // 0x03B8 (size: 0x10)
    void OnGibbed();
    bool PlayAnimation;                                                               // 0x03C8 (size: 0x1)
    TArray<FDataTableRowHandle> CompendiumUnlocks;                                    // 0x03D0 (size: 0x10)
    TArray<FDataTableRowHandle> JournalUnlocks;                                       // 0x03E0 (size: 0x10)

    void GetFriendlyFireDamageMultiplier(bool& Return, double& DamageMultiplier);
    void TargetableByTurrets(bool& Targetable);
    void GetWandererNPC(class ANPC_Base_ParentBP_C*& Wanderer);
    bool GetTargetPriority(TEnumAsByte<E_TargetPriority::Type>& Priority);
    void GetFactionTeam(TEnumAsByte<E_Factions::Type>& Faction);
    void GetSpottablePoints(TArray<FVector>& SpottablePoints);
    void TargetableByNPCs(bool Maintain, bool& Targetable);
    void RequiresRangedWeaponToEngage(bool& RequiresRanged);
    void DoesAwardSkillXPWhenHit(bool& MeleeXP, bool& RangedXP, double& XPMultiplier);
    void IsStompable(class AAbiotic_Character_ParentBP_C* AskingCharacter, bool& IsStompable);
    void GetBuffOverlayMeshes(TArray<class UMeshComponent*>& Meshes);
    bool GetCurrentLightLevel(double& LightLevel);
    bool GetSpottability(double& Spottability, bool& Crouched);
    void Targetable By Triggers(bool& Targetable);
    void CanUseSharedInteraction(bool& Can Use);
    void IsPowerCord(class UActorComponent*& Cable, bool& Return, TEnumAsByte<E_OutlineMode::Type>& CableInteractionType);
    void GetAttachedPowerCord(TArray<class UCableComponent*>& Power Cord Found);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void CanLongInteractWith_A(bool& Success);
    void CanLongInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
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
    void MergeAndClearSkeletals(class USkeletalMeshComponent* Parent, TArray<class USkeletalMeshComponent*>& Children, FName OverrideCacheName);
    float GetAttackerLootChance(class AController* Instigator);
    void SaveCorpse();
    void LocalUnlockCustomization();
    void GetTypeOfInteractableCorpse(bool& LootItem, bool& CustomizationUnlock, bool& AchievementUnlock, bool& JournalUnlock, bool& CompendiumUnlock);
    void OnRep_CurrentGibCuts();
    void UpdateGibCutFX();
    void RefreshGibbedState();
    void OnRep_IsGibbed();
    void GetCorpseDebugText();
    void UserConstructionScript();
    void DoActionToSensedTarget(bool SuccessfullySensed);
    void SetNewWandererNPC(class ANPC_Base_ParentBP_C* PotentialWanderer);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
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
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void InteractWith_A_LocalFX(bool Hold);
    void ReceivePointDamage(float Damage, const class UDamageType* DamageType, FVector HitLocation, FVector HitNormal, class UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const FHitResult& HitInfo);
    void ReceiveBeginPlay();
    void DropLoot(bool TryToPlaceInInventory, class AAbiotic_PlayerCharacter_C* inventoryOwner);
    void ExecuteUbergraph_CharacterCorpse_ParentBP(int32 EntryPoint);
    void OnGibbed__DelegateSignature();
}; // Size: 0x3F0

#endif
