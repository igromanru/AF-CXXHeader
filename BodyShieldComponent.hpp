#ifndef UE4SS_SDK_BodyShieldComponent_HPP
#define UE4SS_SDK_BodyShieldComponent_HPP

class UBodyShieldComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    TArray<class UMeshComponent*> ShieldMeshes;                                       // 0x00B0 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> ShieldMaterials;                          // 0x00C0 (size: 0x10)
    double ShieldRegenTime;                                                           // 0x00D0 (size: 0x8)
    double ShieldRegenPerSecond;                                                      // 0x00D8 (size: 0x8)
    double ShieldRegenTimeWhenZeroHP;                                                 // 0x00E0 (size: 0x8)
    double MaxShieldHitPoints;                                                        // 0x00E8 (size: 0x8)
    double CurrentShieldHitPoints;                                                    // 0x00F0 (size: 0x8)
    double LastKnownHitPoints;                                                        // 0x00F8 (size: 0x8)
    double LastTickStartTime;                                                         // 0x0100 (size: 0x8)
    class UCurveFloat* ShieldOpacityCurve;                                            // 0x0108 (size: 0x8)
    FTimerHandle ShieldRegenWaitTimer;                                                // 0x0110 (size: 0x8)
    FTimerHandle ShieldRegenerationTickTimer;                                         // 0x0118 (size: 0x8)
    FBodyShieldComponent_CShieldHitPointsChanged ShieldHitPointsChanged;              // 0x0120 (size: 0x10)
    void ShieldHitPointsChanged();
    class UCurveFloat* ShieldColorCurve;                                              // 0x0130 (size: 0x8)
    class UNiagaraSystem* Particle_ShieldBrokeLoop;                                   // 0x0138 (size: 0x8)
    class UNiagaraSystem* Particle_ShieldBroken;                                      // 0x0140 (size: 0x8)
    class UNiagaraSystem* Particle_ShieldRestore;                                     // 0x0148 (size: 0x8)
    class UNiagaraSystem* Particle_ShieldHit;                                         // 0x0150 (size: 0x8)
    class UNiagaraComponent* ParticleObj_ShieldBrokeLoop;                             // 0x0158 (size: 0x8)

    double GetShieldRegenTime();
    void DeactivateBodyShieldComponent();
    void OnRep_ShieldBroken();
    void RestartShieldRegenWaitTime();
    void Server_TryApplyDamageToShield(double Damage, const class UAbiotic_DamageType_ParentBP_C* DamageType, bool& AppliedAnyDamage, double& LeftoverDamage);
    void ToggleShieldTick(bool On);
    void OnRep_CurrentShieldHitPoints();
    void ReceiveBeginPlay();
    void LocalFX_HitPointsChanged();
    void ReceiveTick(float DeltaSeconds);
    void StartShieldRegen();
    void RegenerateShieldTick();
    void OnOwnerDeathOrDBNO(class AAbiotic_Character_ParentBP_C* Character);
    void Broadcast_PlayRegenShieldParticle();
    void Local_PlayShieldBreakParticle();
    void Local_ToggleShieldBrokenLoop();
    void KillParticleShieldLoop();
    void ExecuteUbergraph_BodyShieldComponent(int32 EntryPoint);
    void ShieldHitPointsChanged__DelegateSignature();
}; // Size: 0x160

#endif
