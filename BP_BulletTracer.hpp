#ifndef UE4SS_SDK_BP_BulletTracer_HPP
#define UE4SS_SDK_BP_BulletTracer_HPP

class ABP_BulletTracer_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class USphereComponent* CollisionComponent;                                       // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* TracerMesh;                                           // 0x02A8 (size: 0x8)
    class UProjectileMovementComponent* Projectile;                                   // 0x02B0 (size: 0x8)
    class UAudioComponent* RichochetSound;                                            // 0x02B8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02C0 (size: 0x8)
    int32 RicochetCounter;                                                            // 0x02C8 (size: 0x4)
    double MinX;                                                                      // 0x02D0 (size: 0x8)
    double MinY;                                                                      // 0x02D8 (size: 0x8)
    double MinZ;                                                                      // 0x02E0 (size: 0x8)
    double MaxX;                                                                      // 0x02E8 (size: 0x8)
    double MaxY;                                                                      // 0x02F0 (size: 0x8)
    double MaxZ;                                                                      // 0x02F8 (size: 0x8)
    double RicochetOccursConeAngleBase;                                               // 0x0300 (size: 0x8)
    FBulletTracerResponse_Struct MaterialValues;                                      // 0x0308 (size: 0x50)
    FVector Impact Velocity;                                                          // 0x0358 (size: 0x18)
    FHitResult ImpactResult;                                                          // 0x0370 (size: 0xF8)
    TEnumAsByte<EPhysicalSurface> SurfaceType;                                        // 0x0468 (size: 0x1)
    FVector RicochetVector;                                                           // 0x0470 (size: 0x18)
    double RicochetExitVelocity;                                                      // 0x0488 (size: 0x8)
    double MuzzleVelocity;                                                            // 0x0490 (size: 0x8)
    bool RicochetEnabled;                                                             // 0x0498 (size: 0x1)
    double WildRicochetAngleMultiplier;                                               // 0x04A0 (size: 0x8)
    double WildRicochetSpeedMultiplier;                                               // 0x04A8 (size: 0x8)
    bool WildRicochetOccured;                                                         // 0x04B0 (size: 0x1)
    bool RicochetOccured;                                                             // 0x04B1 (size: 0x1)
    FVector ImpactLocation;                                                           // 0x04B8 (size: 0x18)
    FVector ProjectilesVector;                                                        // 0x04D0 (size: 0x18)
    FTransform ProjectileTransform;                                                   // 0x04F0 (size: 0x60)
    double RicochetDot;                                                               // 0x0550 (size: 0x8)
    bool CreateBulletWhizzAudio;                                                      // 0x0558 (size: 0x1)
    double MinimumSpeed;                                                              // 0x0560 (size: 0x8)

    void ProjectileBounce(FHitResult ImpactResult, const FVector& InputPin);
    void RicochetON();
    void UpdateTracerScale();
    void RicochetDotProdoct(double& Dot);
    void ReceiveBeginPlay();
    void Kill Projectile NO FX();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Projectile_K2Node_ComponentBoundEvent_9_OnProjectileStopDelegate__DelegateSignature(const FHitResult& ImpactResult);
    void BndEvt__Projectile_K2Node_ComponentBoundEvent_132_OnProjectileBounceDelegate__DelegateSignature(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void ExecuteUbergraph_BP_BulletTracer(int32 EntryPoint);
}; // Size: 0x568

#endif
