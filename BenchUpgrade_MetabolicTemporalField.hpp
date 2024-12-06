#ifndef UE4SS_SDK_BenchUpgrade_MetabolicTemporalField_HPP
#define UE4SS_SDK_BenchUpgrade_MetabolicTemporalField_HPP

class ABenchUpgrade_MetabolicTemporalField_C : public ABenchUpgrade_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x02D0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x02D8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02E8 (size: 0x8)

    void Update Powered State();
    void ReceiveBeginPlay();
    void BndEvt__BenchUpgrade_Dioxohealer_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BenchUpgrade_Dioxohealer_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void TogglePowerFX();
    void ExecuteUbergraph_BenchUpgrade_MetabolicTemporalField(int32 EntryPoint);
}; // Size: 0x2F0

#endif
