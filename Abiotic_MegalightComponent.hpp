#ifndef UE4SS_SDK_Abiotic_MegalightComponent_HPP
#define UE4SS_SDK_Abiotic_MegalightComponent_HPP

class UAbiotic_MegalightComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    FTimerHandle RaytracesTimer;                                                      // 0x00B0 (size: 0x8)
    int32 Segments;                                                                   // 0x00B8 (size: 0x4)
    class UStaticMeshComponent* MegalightMesh;                                        // 0x00C0 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x00C8 (size: 0x8)
    FTimerHandle TurretRotationTimer;                                                 // 0x00D0 (size: 0x8)
    FRotator TurretRotation;                                                          // 0x00D8 (size: 0x18)
    int32 CurrentTraceLayer;                                                          // 0x00F0 (size: 0x4)

    bool CanEnableTraces();
    void IncrementTraceLayer();
    void PerformLightTrace(class USpotLightComponent* SpotLight, class USceneComponent* Mesh, double ConeScale, double RotationOffset);
    void LightTraceHit(FHitResult& HitResult);
    void OnRep_TurretRotation();
    void RaytracesProjection();
    void ToggleMegalightRaytraces();
    void ReceiveBeginPlay();
    void Request_LightHitActor(class AActor* Actor);
    void SendLightHitActorRequest(class AActor* Actor);
    void ToggleHeldMegalightFX(bool On);
    void ExecuteUbergraph_Abiotic_MegalightComponent(int32 EntryPoint);
}; // Size: 0xF4

#endif
