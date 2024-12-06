#ifndef UE4SS_SDK_SoapDispenser_BP_HPP
#define UE4SS_SDK_SoapDispenser_BP_HPP

class ASoapDispenser_BP_C : public AAbioticActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UAudioComponent* SoapAudio;                                                 // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* SoapButton;                                           // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* SoapDispenser;                                        // 0x02D8 (size: 0x8)

    void CanUseSharedInteraction(bool& Can Use);
    void GetPowerCordHighlightColor(class UActorComponent*& Cable, int32& Color);
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
    void ShowPotentialInteraction(bool& Show);
    void GetStoredString(FString& String);
    FText GetItemNameText();
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void Landing Damage Multiplier(double Damage, double& DamageMultiplier);
    void GetInteractionBlocker(class UBoxComponent*& Blocker);
    bool IsRadioactive();
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
    void Set New Attached Power Cord(class UCableComponent* New Power Cord);
    void RadialWheelInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed, FName SelectionWheelContentName);
    void DeliverDynamicProperty(bool FromSave, FDynamicProperty Property);
    void InteractTeleportUpdate(class AAbiotic_Character_ParentBP_C* InteractingCharacter, bool TryingToTeleport, bool TeleportSuccessful);
    void ExecuteUbergraph_SoapDispenser_BP(int32 EntryPoint);
}; // Size: 0x2E0

#endif
