#ifndef UE4SS_SDK_Deployed_Megalight_HPP
#define UE4SS_SDK_Deployed_Megalight_HPP

class ADeployed_Megalight_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0930 (size: 0x8)
    class UStaticMeshComponent* MegalightTurret;                                      // 0x0938 (size: 0x8)
    class USkeletalMeshComponent* TurretSkeleton;                                     // 0x0940 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0948 (size: 0x8)
    class USceneComponent* RotatorJoint;                                              // 0x0950 (size: 0x8)
    class USphereComponent* DetectionSphere;                                          // 0x0958 (size: 0x8)
    class UAbiotic_MegalightComponent_C* MegalightComponent;                          // 0x0960 (size: 0x8)
    class AAbioticCharacter* ActiveTarget;                                            // 0x0968 (size: 0x8)
    bool TurretIsPowered;                                                             // 0x0970 (size: 0x1)

    void CheckExistingOverlappingTargets();
    void HitActiveTarget();
    void SetActiveTarget(class AAbioticCharacter* Target);
    void OnRep_ActiveTarget();
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void BndEvt__Deployed_Megalight_DetectionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Deployed_Megalight_DetectionSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void TogglePowerFX();
    void ZapTargetFX();
    void DelayedOverlapCheck();
    void ExecuteUbergraph_Deployed_Megalight(int32 EntryPoint);
}; // Size: 0x971

#endif
