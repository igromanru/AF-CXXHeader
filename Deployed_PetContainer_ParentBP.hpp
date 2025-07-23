#ifndef UE4SS_SDK_Deployed_PetContainer_ParentBP_HPP
#define UE4SS_SDK_Deployed_PetContainer_ParentBP_HPP

class ADeployed_PetContainer_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class UArrowComponent* EscapePoint;                                               // 0x0858 (size: 0x8)
    class USceneComponent* CapturePoint;                                              // 0x0860 (size: 0x8)
    class UBoxComponent* VisBlocker;                                                  // 0x0868 (size: 0x8)
    class UStaticMeshComponent* Nachos;                                               // 0x0870 (size: 0x8)
    class UBoxComponent* CaptureBox;                                                  // 0x0878 (size: 0x8)
    class USceneComponent* LurePoint;                                                 // 0x0880 (size: 0x8)
    class UStaticMeshComponent* Lid;                                                  // 0x0888 (size: 0x8)
    float CageCloseTimeline_NewTrack_0_B5F177DF4331FEDD5AFBE3BE96EAFBCB;              // 0x0890 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> CageCloseTimeline__Direction_B5F177DF4331FEDD5AFBE3BE96EAFBCB; // 0x0894 (size: 0x1)
    class UTimelineComponent* CageCloseTimeline;                                      // 0x0898 (size: 0x8)
    class ANPC_Monster_Pest_C* CaughtPest;                                            // 0x08A0 (size: 0x8)
    FTimerHandle LureTimer;                                                           // 0x08A8 (size: 0x8)
    bool Closed;                                                                      // 0x08B0 (size: 0x1)
    int32 FeedingCount;                                                               // 0x08B4 (size: 0x4)
    double FeedingDuration;                                                           // 0x08B8 (size: 0x8)
    double FeedingStartTime;                                                          // 0x08C0 (size: 0x8)
    bool WildPestAllowed;                                                             // 0x08C8 (size: 0x1)
    FName LureTag;                                                                    // 0x08CC (size: 0x8)
    bool IsPestCurrentlyEating;                                                       // 0x08D4 (size: 0x1)
    class ANPC_Monster_Pest_C* LocalOldPest;                                          // 0x08D8 (size: 0x8)
    UClass* LocalClass;                                                               // 0x08E0 (size: 0x8)
    TMap<TSoftClassPtr<ANPC_Base_ParentBP_C>, int32> ClassToIndex;                    // 0x08E8 (size: 0x50)

    void CanLongInteractWith_A(bool& Success);
    void PetClassToIndex(TSoftClassPtr<ANPC_Base_ParentBP_C> Class, int32& Index);
    void IndexToPetClass(int32 AmmoType, bool& HasPest, TSoftClassPtr<ANPC_Base_ParentBP_C>& Class);
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
    void OnFailure_69E13CE64E04CFBE38A98895391AC44B(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void OnSuccess_69E13CE64E04CFBE38A98895391AC44B(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void ToggleCageStateFX(bool Closed);
    void ReceiveBeginPlay();
    void LurePests();
    void OnLoadedFromSave(double NewLifespan);
    void DestroyDeployable(bool NoLoot, int32 Extra Loot Quantity, bool LootBagLocationOverride, FVector LocationOverride);
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void PestFeedingStateUpdate();
    void EnableOccupyState(bool Enable);
    void BndEvt__Deployed_Trap_Pest_CaptureBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void DeliverString(FString String, bool FromSave);
    void TrappedStateUpdate(int32 SeatIndex, bool Sitting);
    void StartTrapPest();
    void Local Feed Pest FX();
    void PlayPestAnimInside(class UAnimMontage* MontageToPlay);
    void NewPlayerMadeString();
    void ExecuteUbergraph_Deployed_PetContainer_ParentBP(int32 EntryPoint);
}; // Size: 0x938

#endif
