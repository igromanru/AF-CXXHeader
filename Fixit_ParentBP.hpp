#ifndef UE4SS_SDK_Fixit_ParentBP_HPP
#define UE4SS_SDK_Fixit_ParentBP_HPP

class AFixit_ParentBP_C : public AAbioticActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)
    class UNiagaraComponent* Sparks;                                                  // 0x02D0 (size: 0x8)
    class UBoxComponent* InteractBox;                                                 // 0x02D8 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* PartMesh;                                             // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* BaseMesh;                                             // 0x02F0 (size: 0x8)
    bool Fixed;                                                                       // 0x02F8 (size: 0x1)
    FDataTableRowHandle RequiredFixItItem;                                            // 0x0300 (size: 0x10)
    FLinearColor LightColor_Broken;                                                   // 0x0310 (size: 0x10)
    FLinearColor LightColor_Fixed;                                                    // 0x0320 (size: 0x10)
    FString RequiredItemName;                                                         // 0x0330 (size: 0x10)
    FText Item Name;                                                                  // 0x0340 (size: 0x10)
    bool ShowExtraInfo;                                                               // 0x0350 (size: 0x1)
    class AAbiotic_TriggerVolume_ParentBP_C* TriggerWhenFixed;                        // 0x0358 (size: 0x8)
    FWorldFlagRowHandle WorldFlag;                                                    // 0x0360 (size: 0x20)
    TArray<class ASecurityDoor_C*> BlastDoorsToOpen;                                  // 0x0380 (size: 0x10)
    bool EarthquakeOnCompletion;                                                      // 0x0390 (size: 0x1)

    void GetPluggedInDeviceCount(int32& Count);
    bool HasBatteryInParentChain();
    void IsPowered(bool& PowerOn);
    void GetPowerParentIndex(int32& Index);
    void RequiresPowerSocket(bool& MustBePluggedIn);
    void IsPowerSocket(bool& CanBePluggedInto);
    void PlugCordAttachLocation(FVector& RelativeLocation);
    void PowerParent(class AActor*& ParentPowerSource);
    void RestoresSanityNearbyWhenPowered(bool& RestoresSanity);
    void CanUseSharedInteraction(bool& Can Use);
    void IsPowerCord(class UActorComponent*& Cable, bool& Return, TEnumAsByte<E_OutlineMode::Type>& CableInteractionType);
    void GetAttachedPowerCord(TArray<class UCableComponent*>& Power Cord Found);
    bool IsRadioactive();
    void GetInteractionBlocker(class UBoxComponent*& Blocker);
    void Landing Damage Multiplier(double Damage, double& DamageMultiplier);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    FText GetItemNameText();
    void GetStoredString(FString& String);
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
    void RefreshFixedState();
    void OnRep_Fixed();
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
    void TogglePowerFX();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ReceiveBeginPlay();
    void OnWorldFlagsLoaded();
    void Server_Force_SetStateToFixed();
    void ExecuteUbergraph_Fixit_ParentBP(int32 EntryPoint);
}; // Size: 0x391

#endif
