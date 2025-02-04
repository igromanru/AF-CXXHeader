#ifndef UE4SS_SDK_SimpleDoor_ParentBP_HPP
#define UE4SS_SDK_SimpleDoor_ParentBP_HPP

class ASimpleDoor_ParentBP_C : public AAbioticActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02D0 (size: 0x8)
    class UNavModifierComponent* Door_NavBlocker;                                     // 0x02D8 (size: 0x8)
    class UTextRenderComponent* EditorTextLockedSide;                                 // 0x02E0 (size: 0x8)
    class UBoxComponent* KickKnockbackZone;                                           // 0x02E8 (size: 0x8)
    class USceneComponent* DoorCenter;                                                // 0x02F0 (size: 0x8)
    class USceneComponent* MoveThroughInward;                                         // 0x02F8 (size: 0x8)
    class USceneComponent* MoveThroughOutward;                                        // 0x0300 (size: 0x8)
    class UStaticMeshComponent* EditorOutwardDoorMesh;                                // 0x0308 (size: 0x8)
    class UStaticMeshComponent* EditorInwardDoorMesh;                                 // 0x0310 (size: 0x8)
    class USceneComponent* EditorOutwardRoot;                                         // 0x0318 (size: 0x8)
    class USceneComponent* EditorInwardRoot;                                          // 0x0320 (size: 0x8)
    class UStaticMeshComponent* DoorMesh;                                             // 0x0328 (size: 0x8)
    class USceneComponent* DoorRotationRoot;                                          // 0x0330 (size: 0x8)
    class UArrowComponent* Back;                                                      // 0x0338 (size: 0x8)
    class UArrowComponent* Front;                                                     // 0x0340 (size: 0x8)
    float ChangeDoorState_NewTrack_0_99922EB94C1739893298C0AB4B22DF23;                // 0x0348 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ChangeDoorState__Direction_99922EB94C1739893298C0AB4B22DF23; // 0x034C (size: 0x1)
    class UTimelineComponent* ChangeDoorState;                                        // 0x0350 (size: 0x8)
    TEnumAsByte<E_DoorStates::Type> DoorState;                                        // 0x0358 (size: 0x1)
    FRotator BeginTimelineRotation;                                                   // 0x0360 (size: 0x18)
    TEnumAsByte<E_DoorSwingAllowance::Type> DoorSwingAllowance;                       // 0x0378 (size: 0x1)
    FRotator ClosedRotation;                                                          // 0x0380 (size: 0x18)
    FRotator OpenOutwardRotation;                                                     // 0x0398 (size: 0x18)
    FRotator OpenInwardRotation;                                                      // 0x03B0 (size: 0x18)
    int32 DoorStyle;                                                                  // 0x03C8 (size: 0x4)
    int32 DoorTexture;                                                                // 0x03CC (size: 0x4)
    TSoftObjectPtr<UMaterialInterface> DoorSignTexture;                               // 0x03D0 (size: 0x28)
    double MaxOutwardDegrees;                                                         // 0x03F8 (size: 0x8)
    double MaxInwardDegrees;                                                          // 0x0400 (size: 0x8)
    bool Flipped;                                                                     // 0x0408 (size: 0x1)
    TEnumAsByte<E_DoorStates::Type> LastSideInteractedFrom;                           // 0x0409 (size: 0x1)
    bool OneWayDoor;                                                                  // 0x040A (size: 0x1)
    bool OneWayDoor_HasBeenUnlocked;                                                  // 0x040B (size: 0x1)
    class ASimpleDoor_ParentBP_C* LinkedDoor;                                         // 0x0410 (size: 0x8)
    bool ShareDoorStateWithLinkedDoor;                                                // 0x0418 (size: 0x1)
    TArray<class AActor*> IgnoreActorsWhenSwinging;                                   // 0x0420 (size: 0x10)
    FSaveData_Door_Struct DoorSaveData;                                               // 0x0430 (size: 0x38)
    class AButton_Generic_C* ButtonTiedToLockMechanism;                               // 0x0468 (size: 0x8)
    double LastDoorTime;                                                              // 0x0470 (size: 0x8)
    bool ToiletLocked;                                                                // 0x0478 (size: 0x1)
    class AActor* LastInteractor;                                                     // 0x0480 (size: 0x8)
    TEnumAsByte<E_DoorStates::Type> PreviousDoorState;                                // 0x0488 (size: 0x1)
    TArray<class AActor*> StoppedByActors;                                            // 0x0490 (size: 0x10)
    class AToilet_ParentBP_C* LinkedToilet;                                           // 0x04A0 (size: 0x8)
    TArray<class AActor*> DoorSwingIgnoreActors;                                      // 0x04A8 (size: 0x10)
    double TimeNPCLastInteractedWith;                                                 // 0x04B8 (size: 0x8)
    bool FakeDoor;                                                                    // 0x04C0 (size: 0x1)
    double DoorYawRot;                                                                // 0x04C8 (size: 0x8)
    class AButton_Generic_C* ButtonToForceMeOpen;                                     // 0x04D0 (size: 0x8)
    FSimpleDoor_ParentBP_CDoorStateChanged DoorStateChanged;                          // 0x04D8 (size: 0x10)
    void DoorStateChanged();
    bool DoorDisabled;                                                                // 0x04E8 (size: 0x1)
    class USoundBase* DoorSFX;                                                        // 0x04F0 (size: 0x8)
    bool NoVignetteReset;                                                             // 0x04F8 (size: 0x1)
    FWorldFlagRowHandle WorldFlagToUnlock;                                            // 0x0500 (size: 0x20)
    double DoorSwingRateDefault;                                                      // 0x0520 (size: 0x8)
    bool NeverBeBlocked;                                                              // 0x0528 (size: 0x1)
    bool CanAutoClose;                                                                // 0x0529 (size: 0x1)

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
    void NPC_CanInteractWith(bool& Success);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void UpdateDoorObstacle();
    class USoundBase* GetDoorSwingSound(TEnumAsByte<E_DoorStates::Type> PreviousDoorState);
    void SetupInwardOutwardDegrees();
    void SetBeginTimelineRotation();
    void SetDebugHologramState();
    void MoveDoorOneTick(FRotator InputPin);
    void OnRep_DoorYawRot();
    void SaveDoorStateToWorldSave();
    void IsObjectLinkedToiletActor?(class UObject* Object, bool& TRUE);
    void SetupDoorVisuals();
    void CheckForNewStopActors(TArray<class AActor*>& NewCollisions, bool& NewActorPresent);
    void IsDoorLocked(bool& ToiletLocked, bool& OneWayLocked);
    void IsDoorClosed(bool& Closed);
    void OnRep_ToiletLocked();
    void TryKnockbackPawnsInKickZone();
    bool HasDoorJustBeenKicked();
    void MarkOneWayDoorAsUnlocked();
    void TryOpenOrUnlockDoor(class AActor* CharacterToTest, bool DoorKick, bool ForceDoor, TEnumAsByte<E_DoorStates::Type> ForceDoorState);
    void SetupDoor_CheckFlipped();
    void FindSideOfDoor(class AActor* CharacterToTest, bool& Front);
    void OnRep_DoorState();
    void UserConstructionScript();
    void ChangeDoorState__FinishedFunc();
    void ChangeDoorState__UpdateFunc();
    void OnLoaded_278E0F674D3A7A0834BF99B7517E567B(class UObject* Loaded);
    void SFX_LockedDoorRattle();
    void ReceiveBeginPlay();
    void InterruptDoorSwing();
    void DoorUpdateState();
    void NPC_InteractWith(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void InteractTeleportUpdate(class AAbiotic_Character_ParentBP_C* InteractingCharacter, bool TryingToTeleport, bool TeleportSuccessful);
    void DeliverDynamicProperty(bool FromSave, FDynamicProperty Property);
    void UnlockViaButton(bool Activated);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void RadialWheelInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed, FName SelectionWheelContentName);
    void SFX_DoorUnlockLatch();
    void Set New Attached Power Cord(class UCableComponent* New Power Cord);
    void DeliverInt(bool FromSave, const int32 New Int);
    void OnInteractHighlightEnd(class UActorComponent* Component);
    void OnInteractHighlightStart(class UActorComponent* Component);
    void Actor_RemoveFromCage(class AAbiotic_Character_ParentBP_C* OwningCharacter, FAbiotic_InventoryItemSlotStruct SlotData, FTransform ShootProjectileTransform, FTransform AttachedSocketTransform);
    void Actor Add to Cage(class AAbiotic_Character_ParentBP_C* OwningCharacter, class AActor* ActorToInteractWith, FAbiotic_InventoryItemSlotStruct SlotData);
    void SetNewDoorYawRotation();
    void DeliverString(FString String, bool FromSave);
    void ForceDoorOpenViaButton(bool Activated);
    void Server_TryForceDoorOpen();
    void InteractWith_B_LocalFX(bool Hold);
    void ForceOpenDoorAndDisable(class AActor* CharacterToTest, double DisableLength);
    void InteractWith_A_LocalFX(bool Hold);
    void CheckForWFDoorUnlock();
    void DoorFinishedSwing();
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ExecuteUbergraph_SimpleDoor_ParentBP(int32 EntryPoint);
    void DoorStateChanged__DelegateSignature();
}; // Size: 0x52A

#endif
