#ifndef UE4SS_SDK_Deployed_Ladder_ParentBP_HPP
#define UE4SS_SDK_Deployed_Ladder_ParentBP_HPP

class ADeployed_Ladder_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class USceneComponent* RopeMeshesStartPoint;                                      // 0x0928 (size: 0x8)
    class UBoxComponent* LadderCollision;                                             // 0x0930 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0938 (size: 0x8)
    class USceneComponent* LadderEndLaunchPoint;                                      // 0x0940 (size: 0x8)
    class UBillboardComponent* Billboard_Down;                                        // 0x0948 (size: 0x8)
    class USceneComponent* LadderLengthStart;                                         // 0x0950 (size: 0x8)
    class UBillboardComponent* Billboard_Up;                                          // 0x0958 (size: 0x8)
    class UBoxComponent* LadderVolume;                                                // 0x0960 (size: 0x8)
    bool LadderDownOnly;                                                              // 0x0968 (size: 0x1)
    bool LadderAutomaticTraversal;                                                    // 0x0969 (size: 0x1)
    double LadderLength;                                                              // 0x0970 (size: 0x8)
    float LadderMaxLength;                                                            // 0x0978 (size: 0x4)
    bool LadderLengthTooShort;                                                        // 0x097C (size: 0x1)
    bool LadderFixedDistance;                                                         // 0x097D (size: 0x1)
    TArray<class AActor*> ActorsInLadderVolume;                                       // 0x0980 (size: 0x10)
    bool CanInteractToGrabLadder;                                                     // 0x0990 (size: 0x1)
    class USoundBase* LadderSound;                                                    // 0x0998 (size: 0x8)
    class USoundBase* LadderSound_Exit;                                               // 0x09A0 (size: 0x8)
    bool LadderActivated;                                                             // 0x09A8 (size: 0x1)
    bool LadderReachesFloor;                                                          // 0x09A9 (size: 0x1)
    bool HasSetLadderDistance;                                                        // 0x09AA (size: 0x1)
    class UStaticMesh* LadderRungMesh;                                                // 0x09B0 (size: 0x8)
    class UStaticMesh* LadderRungEndMesh;                                             // 0x09B8 (size: 0x8)
    double LadderSegmentHeight;                                                       // 0x09C0 (size: 0x8)
    double LadderMinimumLength;                                                       // 0x09C8 (size: 0x8)

    void SetupVisualMeshes();
    void SetupStructuralSupport(class AActor* ParentActor);
    void ShowPotentialInteraction(bool& Show);
    void Ladder Activated Update();
    void OnRep_LadderActivated();
    void Server_ProcessLadderVolumeOverlap(class AActor* OtherActor, bool BeginOverlap);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void AboveTopOfLadder?(class AActor* ActorToTest, bool& Above);
    void MoveLadderComponents();
    void CheckLadderLongEnough();
    void OnRep_LadderLength();
    void EstablishLadderRange();
    void UserConstructionScript();
    void BndEvt__LadderBottom_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Deployed_Ladder_ParentBP_LadderVolume_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void InteractWith_A_LocalFX(bool Hold);
    void ExecuteUbergraph_Deployed_Ladder_ParentBP(int32 EntryPoint);
}; // Size: 0x9D0

#endif
