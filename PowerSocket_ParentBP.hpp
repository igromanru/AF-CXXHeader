#ifndef UE4SS_SDK_PowerSocket_ParentBP_HPP
#define UE4SS_SDK_PowerSocket_ParentBP_HPP

class APowerSocket_ParentBP_C : public AAbioticActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UAbioticTargetingComponent* AbioticTargeting;                               // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* RadiusHologram;                                       // 0x02D0 (size: 0x8)
    class UCableComponent* PowerCable;                                                // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* PlugMesh;                                             // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* PlugSocketMesh;                                       // 0x02E8 (size: 0x8)
    class ASectorGenerator_BP_C* ParentSectorGenerator;                               // 0x02F0 (size: 0x8)
    class AActor* PluggedInDevice;                                                    // 0x02F8 (size: 0x8)
    FVector LastPlugWorldLocation;                                                    // 0x0300 (size: 0x18)
    bool NeverShowPowerRadius;                                                        // 0x0318 (size: 0x1)
    class ADayNightManager_C* DayNightManager;                                        // 0x0320 (size: 0x8)
    FText Item Name;                                                                  // 0x0328 (size: 0x10)
    FSaveData_PowerSockets LatestSaveData;                                            // 0x0338 (size: 0x38)
    bool SocketAlwaysPowered;                                                         // 0x0370 (size: 0x1)
    FPowerSocket_ParentBP_CPluggedInStateUpdate PluggedInStateUpdate;                 // 0x0378 (size: 0x10)
    void PluggedInStateUpdate();
    class UMaterialInterface* Material_Off;                                           // 0x0388 (size: 0x8)
    class UMaterialInterface* Material_On;                                            // 0x0390 (size: 0x8)
    TArray<class UCableComponent*> RerouteCables;                                     // 0x0398 (size: 0x10)

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
    void GetPluggedInDeviceCount(int32& Count);
    bool HasBatteryInParentChain();
    void RestoresSanityNearbyWhenPowered(bool& RestoresSanity);
    void PowerParent(class AActor*& ParentPowerSource);
    void PlugCordAttachLocation(FVector& RelativeLocation);
    void RequiresPowerSocket(bool& MustBePluggedIn);
    void IsPowerSocket(bool& CanBePluggedInto);
    void IsPowered(bool& PowerOn);
    void GetPowerParentIndex(int32& Index);
    void UpdateCableColor(double CurrentDistance);
    void OnPoweredDeviceDestroyed(class AActor* DestroyedActor);
    FString GetPowerSocketID();
    void ChangePluggedInState(bool Attach, class AAbioticDeployed_ParentBP_C* DeployedObject, class AAbiotic_PlayerCharacter_C* Character(Optional), bool DoNotSave);
    void SavePowerSocketToWorldSave(bool Attach);
    void Update_SaveData(bool Attach);
    void OnRep_PluggedInDevice();
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
    void ReceiveBeginPlay();
    void TogglePowerFX();
    void InteractWith_A_LocalFX(bool Hold);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ReceivePointDamage(float Damage, const class UDamageType* DamageType, FVector HitLocation, FVector HitNormal, class UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const FHitResult& HitInfo);
    void ExecuteUbergraph_PowerSocket_ParentBP(int32 EntryPoint);
    void PluggedInStateUpdate__DelegateSignature();
}; // Size: 0x3A8

#endif
