#ifndef UE4SS_SDK_Deployed_TeslaCoil_HPP
#define UE4SS_SDK_Deployed_TeslaCoil_HPP

class ADeployed_TeslaCoil_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class UNiagaraComponent* ElectricityParticles_Mid;                                // 0x0858 (size: 0x8)
    class UNiagaraComponent* ElectricityParticles_Low;                                // 0x0860 (size: 0x8)
    class USceneComponent* LineOfSightEye;                                            // 0x0868 (size: 0x8)
    class UAudioComponent* CoilAudio;                                                 // 0x0870 (size: 0x8)
    class USphereComponent* AttackRadius;                                             // 0x0878 (size: 0x8)
    float WarmUpTimeline_NewTrack_0_5CBE1C304A3CA52B5ED982A26639F3CC;                 // 0x0880 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> WarmUpTimeline__Direction_5CBE1C304A3CA52B5ED982A26639F3CC; // 0x0884 (size: 0x1)
    class UTimelineComponent* WarmUpTimeline;                                         // 0x0888 (size: 0x8)
    class UMaterialInstanceDynamic* SphereMaterial;                                   // 0x0890 (size: 0x8)
    TArray<class AActor*> TargetList;                                                 // 0x0898 (size: 0x10)
    float AttackRateMultiplier;                                                       // 0x08A8 (size: 0x4)
    class AActor* LastTarget;                                                         // 0x08B0 (size: 0x8)
    float BaseCoilDamage;                                                             // 0x08B8 (size: 0x4)
    bool CoilMode_AoE;                                                                // 0x08BC (size: 0x1)
    class UMaterialInstanceDynamic* MiddleRingMaterial;                               // 0x08C0 (size: 0x8)
    class UMaterialInstanceDynamic* TopRingMaterial;                                  // 0x08C8 (size: 0x8)
    class UMaterialInstanceDynamic* BottomRingMaterial;                               // 0x08D0 (size: 0x8)

    void Target Can be Attacked(class AActor* Target, bool& Yes);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void PickTargetInLineOfSight(bool& FoundValid);
    void CheckForActiveTargets(bool& TargetsAvailable);
    void DeRegister(class AActor* NewTarget);
    void RegisterNewTarget(class AActor* NewTarget);
    void WarmUpTimeline__FinishedFunc();
    void WarmUpTimeline__UpdateFunc();
    void Broadcast_FireAtTarget(class AActor* Target);
    void BndEvt__Deployed_TeslaCoil_AttackRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Deployed_TeslaCoil_AttackRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void WarmUp();
    void Cooloff();
    void TogglePowerFX();
    void ReceiveBeginPlay();
    void Toggle_RingPowerLights();
    void ExecuteUbergraph_Deployed_TeslaCoil(int32 EntryPoint);
}; // Size: 0x8D8

#endif
