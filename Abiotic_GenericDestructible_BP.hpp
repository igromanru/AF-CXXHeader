#ifndef UE4SS_SDK_Abiotic_GenericDestructible_BP_HPP
#define UE4SS_SDK_Abiotic_GenericDestructible_BP_HPP

class AAbiotic_GenericDestructible_BP_C : public AAbioticActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x02D8 (size: 0x8)
    class UNiagaraComponent* BreakFX;                                                 // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* DestroyedMesh;                                        // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02F0 (size: 0x8)
    double Health;                                                                    // 0x02F8 (size: 0x8)
    bool Broken;                                                                      // 0x0300 (size: 0x1)
    class UStaticMesh* DefaultStaticMesh;                                             // 0x0308 (size: 0x8)
    class UStaticMesh* DestroyedStaticMesh;                                           // 0x0310 (size: 0x8)
    bool DestroyedOnlyByTrigger;                                                      // 0x0318 (size: 0x1)
    FWorldFlagRowHandle DestroyOnWorldFlag;                                           // 0x0320 (size: 0x20)
    class UNiagaraSystem* BreakFXParticles;                                           // 0x0340 (size: 0x8)
    class USoundBase* BreakSFX;                                                       // 0x0348 (size: 0x8)
    FAbiotic_GenericDestructible_BP_COnDestructibleDestroyed OnDestructibleDestroyed; // 0x0350 (size: 0x10)
    void OnDestructibleDestroyed();
    FWorldFlagRowHandle SetWorldFlagOnBreak;                                          // 0x0360 (size: 0x20)
    TArray<class TSubclassOf<UAbiotic_DamageType_ParentBP_C>> ValidDamageTypes;       // 0x0380 (size: 0x10)

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
    void GetAttachedPowerCord(TArray<class UCableComponent*>& Power Cord Found);
    void IsPowerCord(class UActorComponent*& Cable, bool& Return, TEnumAsByte<E_OutlineMode::Type>& CableInteractionType);
    void CanUseSharedInteraction(bool& Can Use);
    void HealthUpdated();
    void OnRep_Health();
    void CheckDamageTypeAllowed(UClass* DamageType, bool& DamageAllowed);
    void Server_InitialBreakEvent();
    void SetStateBroken(bool NoFX);
    void TryApplyDamage(double Damage, TSubclassOf<class UDamageType> DamageType);
    void OnRep_Broken();
    void UserConstructionScript();
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
    void Set New Attached Power Cord(class UCableComponent* New Power Cord);
    void RadialWheelInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed, FName SelectionWheelContentName);
    void DeliverDynamicProperty(bool FromSave, FDynamicProperty Property);
    void InteractTeleportUpdate(class AAbiotic_Character_ParentBP_C* InteractingCharacter, bool TryingToTeleport, bool TeleportSuccessful);
    void ReceivePointDamage(float Damage, const class UDamageType* DamageType, FVector HitLocation, FVector HitNormal, class UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const FHitResult& HitInfo);
    void ReceiveRadialDamage(float DamageReceived, const class UDamageType* DamageType, FVector Origin, const FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
    void ReceiveBeginPlay();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void WorldFlagBreakCheck();
    void ExecuteUbergraph_Abiotic_GenericDestructible_BP(int32 EntryPoint);
    void OnDestructibleDestroyed__DelegateSignature();
}; // Size: 0x390

#endif
