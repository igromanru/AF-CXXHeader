#ifndef UE4SS_SDK_Deployed_Ladder_ParentBP_HPP
#define UE4SS_SDK_Deployed_Ladder_ParentBP_HPP

class ADeployed_Ladder_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class USceneComponent* RopeMeshesStartPoint;                                      // 0x0858 (size: 0x8)
    class UBoxComponent* LadderCollision;                                             // 0x0860 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0868 (size: 0x8)
    class USceneComponent* LadderEndLaunchPoint;                                      // 0x0870 (size: 0x8)
    class UBillboardComponent* Billboard_Down;                                        // 0x0878 (size: 0x8)
    class USceneComponent* LadderLengthStart;                                         // 0x0880 (size: 0x8)
    class UBillboardComponent* Billboard_Up;                                          // 0x0888 (size: 0x8)
    class UBoxComponent* LadderVolume;                                                // 0x0890 (size: 0x8)
    bool LadderDownOnly;                                                              // 0x0898 (size: 0x1)
    bool LadderAutomaticTraversal;                                                    // 0x0899 (size: 0x1)
    double LadderLength;                                                              // 0x08A0 (size: 0x8)
    float LadderMaxLength;                                                            // 0x08A8 (size: 0x4)
    bool LadderLengthTooShort;                                                        // 0x08AC (size: 0x1)
    bool LadderFixedDistance;                                                         // 0x08AD (size: 0x1)
    TArray<class AActor*> ActorsInLadderVolume;                                       // 0x08B0 (size: 0x10)
    bool CanInteractToGrabLadder;                                                     // 0x08C0 (size: 0x1)
    class USoundBase* LadderSound_Enter;                                              // 0x08C8 (size: 0x8)
    class USoundBase* LadderSound_Step;                                               // 0x08D0 (size: 0x8)
    class USoundBase* LadderSound_Exit;                                               // 0x08D8 (size: 0x8)
    bool LadderActivated;                                                             // 0x08E0 (size: 0x1)
    bool LadderReachesFloor;                                                          // 0x08E1 (size: 0x1)
    bool HasSetLadderDistance;                                                        // 0x08E2 (size: 0x1)
    class UStaticMesh* LadderRungMesh;                                                // 0x08E8 (size: 0x8)
    class UStaticMesh* LadderRungEndMesh;                                             // 0x08F0 (size: 0x8)
    double LadderSegmentHeight;                                                       // 0x08F8 (size: 0x8)
    double LadderMinimumLength;                                                       // 0x0900 (size: 0x8)

    void SetupVisualMeshes();
    void SetupStructuralSupport(class AActor* ParentActor);
    void ShowPotentialInteraction(class UActorComponent*& AlternateHitComponent, bool& Show);
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
    void InteractWith_A_LocalFX(bool Hold);
    void BndEvt__Deployed_Ladder_ParentBP_LadderCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__Deployed_Ladder_ParentBP_LadderVolume_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__LadderBottom_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ExecuteUbergraph_Deployed_Ladder_ParentBP(int32 EntryPoint);
}; // Size: 0x908

#endif
