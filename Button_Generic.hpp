#ifndef UE4SS_SDK_Button_Generic_HPP
#define UE4SS_SDK_Button_Generic_HPP

class AButton_Generic_C : public AAbioticActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UAbioticTargetingComponent* AbioticTargeting;                               // 0x02D8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* ButtonMesh;                                           // 0x02E8 (size: 0x8)
    FVector ButtonOut;                                                                // 0x02F0 (size: 0x18)
    FVector ButtonIn;                                                                 // 0x0308 (size: 0x18)
    bool Activated;                                                                   // 0x0320 (size: 0x1)
    bool OneTimeUse;                                                                  // 0x0321 (size: 0x1)
    FButton_Generic_CButtonPressed ButtonPressed;                                     // 0x0328 (size: 0x10)
    void ButtonPressed(bool Activated);
    FText ButtonName;                                                                 // 0x0338 (size: 0x10)
    double ButtonCooldown;                                                            // 0x0348 (size: 0x8)
    double TimeOfLastButtonPress;                                                     // 0x0350 (size: 0x8)
    TArray<class AButton_Generic_C*> LinkedButtons;                                   // 0x0358 (size: 0x10)
    bool ButtonDisabled;                                                              // 0x0368 (size: 0x1)
    bool RequiresParentButtonToEnable;                                                // 0x0369 (size: 0x1)
    TArray<FWorldFlagRowHandle> WorldFlagRequirements;                                // 0x0370 (size: 0x10)
    FSaveData_ButtonStruct ButtonSaveData;                                            // 0x0380 (size: 0x38)
    class UMaterialInterface* Material_Active;                                        // 0x03B8 (size: 0x8)
    class UMaterialInterface* Material_Inactive;                                      // 0x03C0 (size: 0x8)
    class UMaterialInterface* Material_Disabled;                                      // 0x03C8 (size: 0x8)
    bool ToggleSwitch;                                                                // 0x03D0 (size: 0x1)
    class USoundBase* SFX_Deactivate;                                                 // 0x03D8 (size: 0x8)
    class USoundBase* SFX_Activate;                                                   // 0x03E0 (size: 0x8)
    bool HasPointLight;                                                               // 0x03E8 (size: 0x1)
    class AAbiotic_GenericDestructible_BP_C* DestructibleBlockingButtonUse;           // 0x03F0 (size: 0x8)
    class AAbioticActor_C* ParentPowerObject;                                         // 0x03F8 (size: 0x8)
    bool EndOfBetaNotice;                                                             // 0x0400 (size: 0x1)
    bool ShouldSave;                                                                  // 0x0401 (size: 0x1)
    bool ButtonAlwaysPowered;                                                         // 0x0402 (size: 0x1)
    class ADayNightManager_C* DayNightManager;                                        // 0x0408 (size: 0x8)
    class AAbiotic_Character_ParentBP_C* LastInteractCharacter;                       // 0x0410 (size: 0x8)
    FLinearColor Color_Disabled;                                                      // 0x0418 (size: 0x10)
    FLinearColor Color_Enabled;                                                       // 0x0428 (size: 0x10)
    bool IsChildActorButton;                                                          // 0x0438 (size: 0x1)
    bool ButtonWasForceSaved;                                                         // 0x0439 (size: 0x1)
    bool NoVignetteReset;                                                             // 0x043A (size: 0x1)

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
    void ShowPotentialInteraction(class UActorComponent*& AlternateHitComponent, bool& Show);
    void RequiresToolToDismantle(bool& Tool Required);
    void GetConstructionState(bool& UnderConstruction, double& PercentComplete);
    void GetItemChangeableData(FAbiotic_InventoryChangeableDataStruct& ChangeableData);
    void SitLocationParent(class USceneComponent*& ParentComponent);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void CanLongInteractWith_A(bool& Success);
    void CanLongInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void NPC_CanInteractWith(bool& Success);
    void PlayerExitLocations(int32 CurrentSeatIndex, TArray<FVector>& Locations);
    void SitLocations(TArray<FVector>& Locations);
    void HasSitLocations(bool& IsSittable);
    void CanButtonSave(bool& CanSave);
    void WorldFlagCheck(bool& HasAllFlags);
    void BetaEndCheck(class APawn* PlayerCharacterPawn);
    void ButtonOnCooldown(bool& CooldownActive);
    void UpdateButtonSaveData(bool Force);
    void OnRep_ButtonDisabled();
    void ActivationFX();
    void OnRep_Activated();
    void UserConstructionScript();
    void TogglePowerFX();
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
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ReceiveBeginPlay();
    void TriggerButtonWithoutUser();
    void ChangedPower_DayNight();
    void UpdateLinkedButtons();
    void Local_JustActivated();
    void ExecuteUbergraph_Button_Generic(int32 EntryPoint);
    void ButtonPressed__DelegateSignature(bool Activated);
}; // Size: 0x43B

#endif
