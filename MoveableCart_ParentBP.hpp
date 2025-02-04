#ifndef UE4SS_SDK_MoveableCart_ParentBP_HPP
#define UE4SS_SDK_MoveableCart_ParentBP_HPP

class AMoveableCart_ParentBP_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0680 (size: 0x8)
    class UAudioComponent* CartMovementAudio;                                         // 0x0688 (size: 0x8)
    class USceneComponent* ValidationB;                                               // 0x0690 (size: 0x8)
    class USceneComponent* ValidationF;                                               // 0x0698 (size: 0x8)
    class USceneComponent* ValidationRoot;                                            // 0x06A0 (size: 0x8)
    class UStaticMeshComponent* BodyMesh2;                                            // 0x06A8 (size: 0x8)
    class UChildActorComponent* SeatActor;                                            // 0x06B0 (size: 0x8)
    class UChildActorComponent* StorageActor;                                         // 0x06B8 (size: 0x8)
    class UStaticMeshComponent* SM_HandCart_4Wheel1;                                  // 0x06C0 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x06C8 (size: 0x8)
    class UStaticMeshComponent* BodyMesh;                                             // 0x06D0 (size: 0x8)
    class USceneComponent* CartPivot;                                                 // 0x06D8 (size: 0x8)
    class USceneComponent* RotationBack;                                              // 0x06E0 (size: 0x8)
    class USceneComponent* RotationFront;                                             // 0x06E8 (size: 0x8)
    bool FreezeVehicle;                                                               // 0x06F0 (size: 0x1)
    FString VehicleID;                                                                // 0x06F8 (size: 0x10)
    bool PendingDestroy;                                                              // 0x0708 (size: 0x1)
    FVector LastSaveLocation;                                                         // 0x0710 (size: 0x18)
    double CartSpeed;                                                                 // 0x0728 (size: 0x8)
    double CurrentCartSpeed;                                                          // 0x0730 (size: 0x8)
    FName ItemRow;                                                                    // 0x0738 (size: 0x8)
    bool HasBeenPackagedUp;                                                           // 0x0740 (size: 0x1)
    bool SoundFadingOut;                                                              // 0x0741 (size: 0x1)
    double TimeOfLastWheelSqueak;                                                     // 0x0748 (size: 0x8)
    class UAudioComponent* LastSqueakSound;                                           // 0x0750 (size: 0x8)
    bool MovementAudioAllowed;                                                        // 0x0758 (size: 0x1)
    float MoveForwardRate;                                                            // 0x075C (size: 0x4)
    float MoveRightRate;                                                              // 0x0760 (size: 0x4)

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
    void HasOccupants?(TArray<class AActor*>& Occupants);
    bool SupportsRecall?();
    bool IsVehicleDriveable();
    TArray<class UAbiotic_InventoryComponent_C*> GetVehicleContainers();
    FString GetVehicleID();
    void GetDriver(bool& Success, class AAbiotic_Character_ParentBP_C*& Character);
    bool CheckVehicleFreezeState();
    void StorageActorSetup(class ADeployed_Container_ParentBP_C* Storage);
    void AutoMoveCheck(double AxisValue, double& OutValue);
    void CalculateCurrentAudio();
    void GetLocalDriver(bool& Success, class AAbiotic_PlayerCharacter_C*& Character);
    void HasDriver(bool& Return);
    void DropPackagedItem();
    bool ValidateMove();
    void OnRep_CurrentCartSpeed();
    void UpdateCartSpeed();
    void AutosaveCheck();
    void UpdateWorldSave(bool Destroyed);
    void DamageAllOccupants(double Damage, class AController* EventInstigator, class AActor* DamageCauser, TSubclassOf<class UDamageType> DamageTypeClass, const FHitResult& HitInfo, const FVector& HitFromDirection, bool& Success);
    void OnRep_FreezeVehicle();
    void OnLevelLoadUpdated(class ULevelStreaming* Level);
    void CalculateRotation();
    void InpActEvt_InteractA_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_Fire_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_AutoMove_K2Node_InputActionEvent_0(FKey Key);
    void DeliverDynamicProperty(bool FromSave, FDynamicProperty Property);
    void InteractTeleportUpdate(class AAbiotic_Character_ParentBP_C* InteractingCharacter, bool TryingToTeleport, bool TeleportSuccessful);
    void RadialWheelInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed, FName SelectionWheelContentName);
    void Request_DriverExitVehicle();
    void Server_ForceDriverFromVehicle(class AAbiotic_Character_ParentBP_C* Character);
    void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0(float AxisValue);
    void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1(float AxisValue);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Request_UpdateRotation(FRotator Rotation);
    void Set New Attached Power Cord(class UCableComponent* New Power Cord);
    void DeliverInt(bool FromSave, const int32 New Int);
    void OnInteractHighlightEnd(class UActorComponent* Component);
    void OnInteractHighlightStart(class UActorComponent* Component);
    void Actor_RemoveFromCage(class AAbiotic_Character_ParentBP_C* OwningCharacter, FAbiotic_InventoryItemSlotStruct SlotData, FTransform ShootProjectileTransform, FTransform AttachedSocketTransform);
    void Actor Add to Cage(class AAbiotic_Character_ParentBP_C* OwningCharacter, class AActor* ActorToInteractWith, FAbiotic_InventoryItemSlotStruct SlotData);
    void DeliverString(FString String, bool FromSave);
    void DamageVehicleOccupants(double Damage, class AController* EventInstigator, class AActor* DamageCauser, TSubclassOf<class UDamageType> DamageTypeClass, const FHitResult& HitInfo, const FVector& HitFromDirection);
    void ReceiveDestroyed();
    void NPC_InteractWith(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void OnStorageRequestedSave();
    void InteractWith_B_LocalFX(bool Hold);
    void InteractWith_A_LocalFX(bool Hold);
    void OnInventoryUpdated(class UAbiotic_InventoryComponent_C* Inventory);
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void DriverWasGrabbed(class AAbiotic_Character_ParentBP_C* Character);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void OnInventoriesLoadedFromSave(const TArray<FSaveData_Inventories_Struct>& SaveData);
    void InpAxisEvt_Turn_K2Node_InputAxisEvent_157(float AxisValue);
    void InpAxisEvt_LookUp_K2Node_InputAxisEvent_172(float AxisValue);
    void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34(float AxisValue);
    void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62(float AxisValue);
    void InpAxisEvt_MoveForwardRate_K2Node_InputAxisEvent_2(float AxisValue);
    void InpAxisEvt_MoveRightRate_K2Node_InputAxisEvent_3(float AxisValue);
    void ExecuteUbergraph_MoveableCart_ParentBP(int32 EntryPoint);
}; // Size: 0x764

#endif
