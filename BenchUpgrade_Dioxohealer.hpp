#ifndef UE4SS_SDK_BenchUpgrade_Dioxohealer_HPP
#define UE4SS_SDK_BenchUpgrade_Dioxohealer_HPP

class ABenchUpgrade_Dioxohealer_C : public ABenchUpgrade_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)
    class UNiagaraComponent* Niagara_Dioxohealer_Active;                              // 0x02D0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x02D8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x02E8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02F8 (size: 0x8)
    int32 NearbyPlants;                                                               // 0x0300 (size: 0x4)
    TArray<class AFarmingPlot_BP_C*> PlantList;                                       // 0x0308 (size: 0x10)

    void DebugInfo_Tick(bool& Success, FString& DebugString, bool& UseBoundsAsOffset, FVector& Offset, FLinearColor& Color);
    void UpdatePoweredState();
    void RemovePlant();
    void AddPlant();
    bool Is Plant(class AFarmingPlot_BP_C* Farmable Plot);
    void EvaluateNearbyPlants();
    void ReceiveBeginPlay();
    void BndEvt__BenchUpgrade_Dioxohealer_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BenchUpgrade_Dioxohealer_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void TogglePowerFX();
    void GrowthStageUpdated_Event(EPlantGrowthStage FarmingPlotGrowthStage);
    void ExecuteUbergraph_BenchUpgrade_Dioxohealer(int32 EntryPoint);
}; // Size: 0x318

#endif
