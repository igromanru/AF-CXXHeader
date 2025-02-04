#ifndef UE4SS_SDK_LaserComponent_HPP
#define UE4SS_SDK_LaserComponent_HPP

class ULaserComponent_C : public USceneComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UNiagaraComponent* NiagaraComponent;                                        // 0x0238 (size: 0x8)
    FVector LaserEnd;                                                                 // 0x0240 (size: 0x18)
    bool LaserActive;                                                                 // 0x0258 (size: 0x1)
    class UNiagaraSystem* NiagaraSystem;                                              // 0x0260 (size: 0x8)
    double LaserMaxDistance;                                                          // 0x0268 (size: 0x8)
    FTimerHandle LaserTraceTimer;                                                     // 0x0270 (size: 0x8)
    float TraceInterval;                                                              // 0x0278 (size: 0x4)
    class ULaserComponent_C* LastLaserReceived;                                       // 0x0280 (size: 0x8)
    class AActor* LastActorProcessed;                                                 // 0x0288 (size: 0x8)
    int32 CurrentBounceCount;                                                         // 0x0290 (size: 0x4)
    double LaserTimestamp;                                                            // 0x0298 (size: 0x8)
    float LaserDamage;                                                                // 0x02A0 (size: 0x4)
    int32 MaxLaserBounces;                                                            // 0x02A4 (size: 0x4)
    TSubclassOf<class UDamageType> DamageType;                                        // 0x02A8 (size: 0x8)
    EPaintColor LaserColor;                                                           // 0x02B0 (size: 0x1)
    FLinearColor LaserColor_White;                                                    // 0x02B4 (size: 0x10)
    FLinearColor LaserColor_Blue;                                                     // 0x02C4 (size: 0x10)
    FLinearColor LaserColor_Red;                                                      // 0x02D4 (size: 0x10)
    FLinearColor LaserColor_Green;                                                    // 0x02E4 (size: 0x10)
    FLinearColor LaserColor_Orange;                                                   // 0x02F4 (size: 0x10)
    FLinearColor LaserColor_Purple;                                                   // 0x0304 (size: 0x10)
    FLinearColor LaserColor_Yellow;                                                   // 0x0314 (size: 0x10)
    FLinearColor LaserColor_Black;                                                    // 0x0324 (size: 0x10)
    FLinearColor LaserColor_Cyan;                                                     // 0x0334 (size: 0x10)
    FLinearColor LaserColor_Lime;                                                     // 0x0344 (size: 0x10)
    class UAudioComponent* EmitterAudio;                                              // 0x0358 (size: 0x8)
    class UAudioComponent* LaserHitAudio;                                             // 0x0360 (size: 0x8)
    FLinearColor LaserColorPink;                                                      // 0x0368 (size: 0x10)
    FLinearColor LaserColorBrown;                                                     // 0x0378 (size: 0x10)
    bool NoEmitterSound;                                                              // 0x0388 (size: 0x1)
    class UNiagaraComponent* LaserEndComponent;                                       // 0x0390 (size: 0x8)
    bool LaserEndHandled;                                                             // 0x0398 (size: 0x1)
    FLinearColor CurrentLaserColor;                                                   // 0x039C (size: 0x10)
    bool LaserEndsEnabled;                                                            // 0x03AC (size: 0x1)
    FLaserComponent_CLaserFX_Start LaserFX_Start;                                     // 0x03B0 (size: 0x10)
    void LaserFX_Start();
    FLaserComponent_CLaserFX_End LaserFX_End;                                         // 0x03C0 (size: 0x10)
    void LaserFX_End();

    void OnRep_CurrentBounceCount();
    void ReflectLaser(class AActor* TargetActor, FHitResult& Hit, int32 MaxSimultaneousReflects, FVector DirectionOverride);
    void OnRep_LaserEndHandled();
    void ToggleSounds(bool On);
    int32 GetLaserIntensity();
    void Local_ChangeLaserColor(class UNiagaraComponent* ParticleBeam, EPaintColor NewColor);
    TArray<class AActor*> GetActorsToIgnore();
    void TickLaserTrace();
    double GetLaserDamage();
    bool CanLaserTrace();
    void ProcessLaserHit(FHitResult& HitResult, bool& Handled);
    void LaserTrace(bool OverrideLocation, FVector InLocation, FVector InDirection);
    void InitParticleComponent();
    void UpdateLaserVisuals();
    void OnRep_LaserActive();
    void OnRep_LaserEnd();
    void ReceiveTick(float DeltaSeconds);
    void OnDestroyed_Event(class AActor* DestroyedActor);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_LaserComponent(int32 EntryPoint);
    void LaserFX_End__DelegateSignature();
    void LaserFX_Start__DelegateSignature();
}; // Size: 0x3D0

#endif
