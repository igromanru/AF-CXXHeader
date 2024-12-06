#ifndef UE4SS_SDK_ABF_Vehicle_ParentBP_HPP
#define UE4SS_SDK_ABF_Vehicle_ParentBP_HPP

class AABF_Vehicle_ParentBP_C : public AAbioticWheeledVehiclePawn
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class URechargeableComponent_C* RechargeableComponent;                            // 0x0348 (size: 0x8)
    class UBoxComponent* HotwireInteractBox;                                          // 0x0350 (size: 0x8)
    class UStaticMeshComponent* HotwireDevice;                                        // 0x0358 (size: 0x8)
    class USceneComponent* InteractPrompt;                                            // 0x0360 (size: 0x8)
    class USkeletalMeshComponent* PlayerCollision;                                    // 0x0368 (size: 0x8)
    class USceneComponent* ImpactOverlapContainer;                                    // 0x0370 (size: 0x8)
    class UChildActorComponent* StorageContainer;                                     // 0x0378 (size: 0x8)
    class UBoxComponent* OverlapTrigger;                                              // 0x0380 (size: 0x8)
    class UAudioComponent* DriverBeeper;                                              // 0x0388 (size: 0x8)
    class USpotLightComponent* Headlights;                                            // 0x0390 (size: 0x8)
    class UChildActorComponent* DriverSeat;                                           // 0x0398 (size: 0x8)
    class UAudioComponent* Horn;                                                      // 0x03A0 (size: 0x8)
    class UAudioComponent* ReverseBeeper;                                             // 0x03A8 (size: 0x8)
    class UAudioComponent* EngineSound;                                               // 0x03B0 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x03B8 (size: 0x8)
    class UChaosWheeledVehicleMovementComponent* ChaosWheeledVehicle_Ref;             // 0x03C0 (size: 0x8)
    class AAbiotic_PlayerCharacter_C* LastDriver;                                     // 0x03C8 (size: 0x8)
    bool Reverse;                                                                     // 0x03D0 (size: 0x1)
    bool HornHonkOnCooldown;                                                          // 0x03D1 (size: 0x1)
    TSoftObjectPtr<USoundBase> HonkSFX_Single;                                        // 0x03D8 (size: 0x28)
    TSoftObjectPtr<USoundBase> ReverseBeeperSFX_Driver_Loop;                          // 0x0400 (size: 0x28)
    TSoftObjectPtr<USoundBase> ReverseBeeperSFX_Loop;                                 // 0x0428 (size: 0x28)
    bool BrakeLights;                                                                 // 0x0450 (size: 0x1)
    bool HasReverseBeeper;                                                            // 0x0451 (size: 0x1)
    bool VehicleDriveable;                                                            // 0x0452 (size: 0x1)
    TSoftObjectPtr<USoundBase> EnginePrimaryLoopSound;                                // 0x0458 (size: 0x28)
    int32 BrakeLightElementIndex;                                                     // 0x0480 (size: 0x4)
    class USoundBase* LoadedEngineLoopSound;                                          // 0x0488 (size: 0x8)
    bool HasEngineSoundLoaded;                                                        // 0x0490 (size: 0x1)
    bool VehicleLightsOn;                                                             // 0x0491 (size: 0x1)
    bool EngineSoundOn;                                                               // 0x0492 (size: 0x1)
    bool Flip;                                                                        // 0x0493 (size: 0x1)
    double ImpactVelocityThreshold;                                                   // 0x0498 (size: 0x8)
    TSubclassOf<class UDamageType> ImpactDamageType;                                  // 0x04A0 (size: 0x8)
    double ImpactMinimumVehicleVelocity;                                              // 0x04A8 (size: 0x8)
    class UMaterialInterface* Taillights_OffMaterial;                                 // 0x04B0 (size: 0x8)
    class UMaterialInterface* Taillights_OnMaterial;                                  // 0x04B8 (size: 0x8)
    class UMaterialInterface* Headlights_OffMaterial;                                 // 0x04C0 (size: 0x8)
    class UMaterialInterface* Headlights_OnMaterial;                                  // 0x04C8 (size: 0x8)
    class USoundBase* VehicleImpactSound;                                             // 0x04D0 (size: 0x8)
    FDataTableRowHandle HotwireItem;                                                  // 0x04D8 (size: 0x10)
    FText VehicleTypeName;                                                            // 0x04E8 (size: 0x10)
    FText HotwireItemName;                                                            // 0x04F8 (size: 0x10)
    bool IsBeingCharged;                                                              // 0x0508 (size: 0x1)
    FText VehicleNeedsHotwireMessage;                                                 // 0x0510 (size: 0x10)
    bool FreezeVehicle;                                                               // 0x0520 (size: 0x1)
    FString VehicleID;                                                                // 0x0528 (size: 0x10)
    bool PendingDestroy;                                                              // 0x0538 (size: 0x1)
    FVector LastSaveLocation;                                                         // 0x0540 (size: 0x18)
    bool VehicleBeingDriven;                                                          // 0x0558 (size: 0x1)
    double MaxImpactDamage;                                                           // 0x0560 (size: 0x8)

    void GetNewButtonPromptLocation(class UActorComponent* Component, FVector& NewLocation);
    void GetPinnedHighlightColor(int32& Color, bool& IsPinnedIngredient);
    void HasOccupants?(TArray<class AActor*>& Occupants);
    bool SupportsRecall?();
    bool IsVehicleDriveable();
    TArray<class UAbiotic_InventoryComponent_C*> GetVehicleContainers();
    FString GetVehicleID();
    void GetDriver(bool& Success, class AAbiotic_Character_ParentBP_C*& Character);
    bool CheckVehicleFreezeState();
    void CanUseSharedInteraction(bool& Can Use);
    void GetPowerCordHighlightColor(class UActorComponent*& Cable, int32& Color);
    void GetAttachedPowerCord(TArray<class UCableComponent*>& Power Cord Found);
    bool IsRadioactive();
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
    void AutoMoveCheck(double AxisValue, double& OutValue);
    void Client Check Position();
    void OnRep_VehicleBeingDriven();
    void AutosaveCheck();
    void UpdateWorldSave(bool Destroyed);
    void OnRep_FreezeVehicle();
    void OnLevelLoadUpdated(class ULevelStreaming* Level);
    void OnRep_IsBeingCharged();
    void GetLocalDriver(bool& Success, class AAbiotic_PlayerCharacter_C*& Character);
    void OnImpactOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void InitImpactOverlaps();
    bool VehicleNeedsToBeFlipped?();
    void OnRep_EngineSoundOn();
    void OnRep_VehicleLightsOn();
    void StopVehicleEntirely();
    void ToggleHeadlightsFX(bool On);
    void GetCurrentDriver(bool& Success, class AAbiotic_Character_ParentBP_C*& Character);
    void DamageAllOccupants(double Damage, class AController* EventInstigator, class AActor* DamageCauser, TSubclassOf<class UDamageType> DamageTypeClass, const FHitResult& HitInfo, const FVector& HitFromDirection, bool& Success);
    void OnRep_VehicleDriveable();
    void OnRep_BrakeLights();
    void OnRep_Reverse();
    void ToggleBrakeLightsFX(bool On);
    void OnLoaded_11C7004F4F5BFFF831C27CA90385A12D(class UObject* Loaded);
    void OnLoaded_8AA8F416435594ED4837D7AFCF0C5473(class UObject* Loaded);
    void OnLoaded_E583C8814DC648CD5DB68EA1F503695A(class UObject* Loaded);
    void InpActEvt_InteractA_K2Node_InputActionEvent_4(FKey Key);
    void OnLoaded_013230DB4528BE008FFC01971EFEDA89(class UObject* Loaded);
    void InpActEvt_Horn_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_Handbrake_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_Handbrake_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_AutoMove_K2Node_InputActionEvent_0(FKey Key);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
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
    void ReceiveTick(float DeltaSeconds);
    void Request_DriverExitVehicle();
    void Request_ToggleReverse(bool Reverse);
    void Request_HonkHorn(bool Single);
    void Broadcast_HonkHorn(bool Single);
    void Local_ToggleReverseBeeper();
    void Request_ToggleBrakeLights(bool BrakeLights);
    void Server_ForceDriverFromVehicle(class AAbiotic_Character_ParentBP_C* Character);
    void Local_DriverRefreshHUDInteractionPrompts();
    void ReceivePossessed(class AController* NewController);
    void ReceiveBeginPlay();
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void StartFlipVehicleUpward(float DeltaTime);
    void InpAxisEvt_Steering_K2Node_InputAxisEvent_0(float AxisValue);
    void InpAxisEvt_Throttle_K2Node_InputAxisEvent_2(float AxisValue);
    void InpAxisEvt_Turn_K2Node_InputAxisEvent_157(float AxisValue);
    void InpAxisEvt_LookUp_K2Node_InputAxisEvent_172(float AxisValue);
    void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34(float AxisValue);
    void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62(float AxisValue);
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void Broadcast_PlayCollisionImpactFX(FVector Location);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void Server_DriveableStateChanged();
    void ReceiveUnpossessed(class AController* OldController);
    void DamageVehicleOccupants(double Damage, class AController* EventInstigator, class AActor* DamageCauser, TSubclassOf<class UDamageType> DamageTypeClass, const FHitResult& HitInfo, const FVector& HitFromDirection);
    void ReceiveDestroyed();
    void OnStorageRequestedSave();
    void DriverWasGrabbed(class AAbiotic_Character_ParentBP_C* Character);
    void OnInventoriesLoadedFromSave(const TArray<FSaveData_Inventories_Struct>& SaveData);
    void ExecuteUbergraph_ABF_Vehicle_ParentBP(int32 EntryPoint);
}; // Size: 0x568

#endif
