#ifndef UE4SS_SDK_Deployed_PetContainer_ParentBP_HPP
#define UE4SS_SDK_Deployed_PetContainer_ParentBP_HPP

class ADeployed_PetContainer_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UArrowComponent* EscapePoint;                                               // 0x0928 (size: 0x8)
    class USceneComponent* CapturePoint;                                              // 0x0930 (size: 0x8)
    class UBoxComponent* VisBlocker;                                                  // 0x0938 (size: 0x8)
    class UStaticMeshComponent* Nachos;                                               // 0x0940 (size: 0x8)
    class UBoxComponent* CaptureBox;                                                  // 0x0948 (size: 0x8)
    class USceneComponent* LurePoint;                                                 // 0x0950 (size: 0x8)
    class UStaticMeshComponent* Lid;                                                  // 0x0958 (size: 0x8)
    float CageCloseTimeline_NewTrack_0_B5F177DF4331FEDD5AFBE3BE96EAFBCB;              // 0x0960 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> CageCloseTimeline__Direction_B5F177DF4331FEDD5AFBE3BE96EAFBCB; // 0x0964 (size: 0x1)
    class UTimelineComponent* CageCloseTimeline;                                      // 0x0968 (size: 0x8)
    class ANPC_Monster_Pest_C* CaughtPest;                                            // 0x0970 (size: 0x8)
    FTimerHandle LureTimer;                                                           // 0x0978 (size: 0x8)
    bool Closed;                                                                      // 0x0980 (size: 0x1)
    int32 FeedingCount;                                                               // 0x0984 (size: 0x4)
    double FeedingDuration;                                                           // 0x0988 (size: 0x8)
    double FeedingStartTime;                                                          // 0x0990 (size: 0x8)
    bool WildPestAllowed;                                                             // 0x0998 (size: 0x1)
    FName LureTag;                                                                    // 0x099C (size: 0x8)
    bool IsPestCurrentlyEating;                                                       // 0x09A4 (size: 0x1)
    class ANPC_Monster_Pest_C* LocalOldPest;                                          // 0x09A8 (size: 0x8)
    UClass* LocalClass;                                                               // 0x09B0 (size: 0x8)

    class USceneComponent* GetSeatAttachComponent();
    void IsCurrentPetTamed(bool& Tamed);
    FTransform GetExitFailsafeLocation();
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void PlayerExitLocations(int32 CurrentSeatIndex, TArray<FVector>& Locations);
    void SitLocationParent(class USceneComponent*& ParentComponent);
    void Spawn Pest In Cage(TSoftClassPtr<UObject> AssetClass, bool& Success);
    void TryTrapPest(class ANPC_Monster_Pest_C* TrapPest, TSoftClassPtr<UObject> AssetClass, bool& Succes);
    void Can Contain Pest(class ANPC_Monster_Pest_C*& IncomingPest, bool& Return);
    FText GetItemNameText();
    void OnRep_FeedingCount();
    void TryFeedPet(class AAbiotic_PlayerCharacter_C*& OwningCharacter);
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void OnRep_Closed();
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void CageCloseTimeline__FinishedFunc();
    void CageCloseTimeline__UpdateFunc();
    void ToggleCageStateFX(bool Closed);
    void ReceiveBeginPlay();
    void LurePests();
    void OnLoadedFromSave();
    void DestroyDeployable(bool NoLoot, int32 Extra Loot Quantity, bool LootBagLocationOverride, FVector LocationOverride);
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void PestFeedingStateUpdate();
    void EnableOccupyState(bool Enable);
    void DeliverString(FString String, bool FromSave);
    void TrappedStateUpdate(int32 SeatIndex, bool Sitting);
    void BndEvt__Deployed_Trap_Pest_CaptureBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void StartTrapPest();
    void Local Feed Pest FX();
    void PlayPestAnimInside(class UAnimMontage* MontageToPlay);
    void ExecuteUbergraph_Deployed_PetContainer_ParentBP(int32 EntryPoint);
}; // Size: 0x9B8

#endif
