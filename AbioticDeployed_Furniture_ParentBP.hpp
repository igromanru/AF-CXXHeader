#ifndef UE4SS_SDK_AbioticDeployed_Furniture_ParentBP_HPP
#define UE4SS_SDK_AbioticDeployed_Furniture_ParentBP_HPP

class AAbioticDeployed_Furniture_ParentBP_C : public AAbioticDeployed_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05D8 (size: 0x8)
    class UAbioticTargetingComponent* AbioticTargeting;                               // 0x05E0 (size: 0x8)
    class UTextRenderComponent* EditorText;                                           // 0x05E8 (size: 0x8)
    class USceneComponent* SitSpots;                                                  // 0x05F0 (size: 0x8)
    class UStaticMeshComponent* FurnitureMesh;                                        // 0x05F8 (size: 0x8)
    bool CanBePackaged;                                                               // 0x0600 (size: 0x1)
    bool HasBeenPackagedUp;                                                           // 0x0601 (size: 0x1)
    TArray<bool> SeatsOccupied;                                                       // 0x0608 (size: 0x10)
    TArray<class USceneComponent*> Seats;                                             // 0x0618 (size: 0x10)
    TArray<class AAbiotic_Character_ParentBP_C*> SeatOccupiers;                       // 0x0628 (size: 0x10)
    FAbioticDeployed_Furniture_ParentBP_COccupantSittingStateChanged OccupantSittingStateChanged; // 0x0638 (size: 0x10)
    void OccupantSittingStateChanged(int32 SeatIndex, bool Sitting);
    bool BrokeWhenPackaged;                                                           // 0x0648 (size: 0x1)
    double DefaultBreakChanceOnPackage;                                               // 0x0650 (size: 0x8)
    double WorldSpawnChance;                                                          // 0x0658 (size: 0x8)
    int32 BreakChanceReductionPerLevel;                                               // 0x0660 (size: 0x4)
    FSaveData_Deployable_Struct SaveData;                                             // 0x0670 (size: 0x240)
    FText To Interact with Text;                                                      // 0x08B0 (size: 0x10)
    FString PlayerMadeString;                                                         // 0x08C0 (size: 0x10)
    FVector RepGroundPosition;                                                        // 0x08D0 (size: 0x18)
    bool PendingStructuralSetup;                                                      // 0x08E8 (size: 0x1)
    bool PendingFloatCheck;                                                           // 0x08E9 (size: 0x1)
    bool IgnoreSupports;                                                              // 0x08EA (size: 0x1)
    bool Targetable;                                                                  // 0x08EB (size: 0x1)
    bool CanBeNPCTarget;                                                              // 0x08EC (size: 0x1)
    TEnumAsByte<E_Factions::Type> Faction;                                            // 0x08ED (size: 0x1)
    class UBlendSpace* DefaultSittingBlendspace;                                      // 0x08F0 (size: 0x8)
    double SeatExitOffset;                                                            // 0x08F8 (size: 0x8)
    class USoundCue* BreakSound;                                                      // 0x0900 (size: 0x8)
    TEnumAsByte<E_TargetPriority::Type> NPCTargetPriority;                            // 0x0908 (size: 0x1)
    float SupportOffsetUp;                                                            // 0x090C (size: 0x4)
    FRotator CurrentActorRotation;                                                    // 0x0910 (size: 0x18)
    class UAnimSequenceBase* DefaultSleepingAnim;                                     // 0x0928 (size: 0x8)

    void TargetableByTurrets(bool& Targetable);
    void GetWandererNPC(class ANPC_Base_ParentBP_C*& Wanderer);
    bool GetTargetPriority(TEnumAsByte<E_TargetPriority::Type>& Priority);
    void Targetable By Triggers(bool& Targetable);
    void GetFactionTeam(TEnumAsByte<E_Factions::Type>& Faction);
    void GetSpottablePoints(TArray<FVector>& SpottablePoints);
    void TargetableByNPCs(bool Maintain, bool& Targetable);
    void RequiresRangedWeaponToEngage(bool& RequiresRanged);
    void DoesAwardSkillXPWhenHit(bool& MeleeXP, bool& RangedXP, double& XPMultiplier);
    void IsStompable(class AAbiotic_Character_ParentBP_C* AskingCharacter, bool& IsStompable);
    void GetBuffOverlayMeshes(TArray<class UMeshComponent*>& Meshes);
    bool GetCurrentLightLevel(double& LightLevel);
    bool GetSpottability(double& Spottability, bool& Crouched);
    void GetDeployedActorBounds(FVector& Origin, FVector& BoxExtent);
    void OnRep_CurrentActorRotation();
    class UPrimitiveComponent* GetLaserReceiverPort();
    FVector GetPackageDropLocation();
    void ShowPotentialInteraction(class UActorComponent*& AlternateHitComponent, bool& Show);
    void PlayerExitLocations(int32 CurrentSeatIndex, TArray<FVector>& Locations);
    bool IsSeatLocationBlocked(int32 SeatIndex, class AAbioticCharacter* Character, bool Debug);
    class USceneComponent* GetSeatAttachComponent();
    void DisableNavigationOnMeshes();
    class UStaticMeshComponent* GetDeployableMesh();
    void UpdateGroundPosition();
    void Is Location Close Enough?(FVector LocationToCheck, FBenchUpgradeRowHandle Upgrade, bool DirectorDebugOn, double SpawnRadius, FName NameToCheck, bool& LocationNearby);
    void SanitizeSupportArray(bool Rebind, bool& AnySupport);
    bool IsLevelLoaded();
    void OnRep_RepGroundPosition();
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    TEnumAsByte<E_DeployableOrientations::Type> PlacementOrientationsAllowed();
    void GetStoredString(FString& String);
    void NewPlayerMadeString();
    void OnRep_PlayerMadeString();
    TArray<FText> CreateScrewdriverBuildLines();
    void SetupStructuralSupport(class AActor* ParentActor);
    void DropPackagedItem(bool HasDoubleDropChance);
    void PerformFloatingCheck(class AActor* ActorDestory);
    void GetSupport(class AActor* ParentActor, bool& Success, class AActor*& Actor, FVector& Location);
    void CalculateFurnitureBreakChance(class UObject* Object, bool& Broke);
    void IsSeatAtSteepAngle?(bool& TooSteep);
    void NewSeatOccupyStatus(bool Occupied, int32 Index, class AAbiotic_Character_ParentBP_C* Character);
    void SitLocationParent(class USceneComponent*& ParentComponent);
    void SetupSeatsIfAny(bool& FoundSeats);
    void AreSeatsEmpty?(bool& Empty);
    void AreSeatsFull?(bool& Full);
    void HasSitLocations(bool& IsSittable);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void CanLongInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void UserConstructionScript();
    void DoActionToSensedTarget(bool SuccessfullySensed);
    void SetNewWandererNPC(class ANPC_Base_ParentBP_C* PotentialWanderer);
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void OccupantDestroyed(int32 SeatIndex);
    void Server_TryShowElectricalDisturbance();
    void Broadcast_ShowElectricalDisturbance();
    void DoubleCheckGroundPlacement();
    void OnLevelLoadUpdated(class ULevelStreaming* Level);
    void OnLevelLoaded(class ULevelStreaming* Level);
    void OnLevelUnloaded(class ULevelStreaming* Level);
    void ExecuteUbergraph_AbioticDeployed_Furniture_ParentBP(int32 EntryPoint);
    void OccupantSittingStateChanged__DelegateSignature(int32 SeatIndex, bool Sitting);
}; // Size: 0x930

#endif
