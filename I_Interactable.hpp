#ifndef UE4SS_SDK_I_Interactable_HPP
#define UE4SS_SDK_I_Interactable_HPP

class II_Interactable_C : public IInterface
{

    void InteractTeleportUpdate(class AAbiotic_Character_ParentBP_C* InteractingCharacter, bool TryingToTeleport, bool TeleportSuccessful);
    void DeliverDynamicProperty(bool FromSave, FDynamicProperty Property);
    void CanUseSharedInteraction(bool& Can Use);
    void RadialWheelInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed, FName SelectionWheelContentName);
    void GetPowerCordHighlightColor(class UActorComponent*& Cable, int32& Color);
    void Set New Attached Power Cord(class UCableComponent* New Power Cord);
    void GetAttachedPowerCord(TArray<class UCableComponent*>& Power Cord Found);
    void DeliverInt(bool FromSave, const int32 New Int);
    bool IsRadioactive();
    void OnInteractHighlightEnd(class UActorComponent* Component);
    void OnInteractHighlightStart(class UActorComponent* Component);
    void GetInteractionBlocker(class UBoxComponent*& Blocker);
    void Landing Damage Multiplier(double Damage, double& DamageMultiplier);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    FText GetItemNameText();
    void Actor_RemoveFromCage(class AAbiotic_Character_ParentBP_C* OwningCharacter, FAbiotic_InventoryItemSlotStruct SlotData, FTransform ShootProjectileTransform, FTransform AttachedSocketTransform);
    void Actor Add to Cage(class AAbiotic_Character_ParentBP_C* OwningCharacter, class AActor* ActorToInteractWith, FAbiotic_InventoryItemSlotStruct SlotData);
    void GetStoredString(FString& String);
    void DeliverString(FString String, bool FromSave);
    void ShowPotentialInteraction(bool& Show);
    void RequiresToolToDismantle(bool& Tool Required);
    void GetConstructionState(bool& UnderConstruction, double& PercentComplete);
    void GetItemChangeableData(FAbiotic_InventoryChangeableDataStruct& ChangeableData);
    void SitLocationParent(class USceneComponent*& ParentComponent);
    void HasSitLocations(bool& IsSittable);
    void SitLocations(TArray<FVector>& Locations);
    void PlayerExitLocations(int32 CurrentSeatIndex, TArray<FVector>& Locations);
    void NPC_InteractWith(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void NPC_CanInteractWith(bool& Success);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void InteractWith_B_LocalFX(bool Hold);
    void InteractWith_A_LocalFX(bool Hold);
    void CanLongInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void CanLongInteractWith_A(bool& Success);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
}; // Size: 0x28

#endif
