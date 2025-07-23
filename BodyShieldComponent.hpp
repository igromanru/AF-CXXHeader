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
    double FirstTickStartTime;                                                        // 0x0100 (size: 0x8)
    double LastTickStartTime;                                                         // 0x0108 (size: 0x8)
    class UCurveFloat* ShieldOpacityCurve;                                            // 0x0110 (size: 0x8)
    FTimerHandle ShieldRegenWaitTimer;                                                // 0x0118 (size: 0x8)
    FTimerHandle ShieldRegenerationTickTimer;                                         // 0x0120 (size: 0x8)
    FBodyShieldComponent_CShieldHitPointsChanged ShieldHitPointsChanged;              // 0x0128 (size: 0x10)
    void ShieldHitPointsChanged();
    class UCurveFloat* ShieldColorCurve;                                              // 0x0138 (size: 0x8)
    class UNiagaraSystem* Particle_ShieldBrokeLoop;                                   // 0x0140 (size: 0x8)
    class UNiagaraSystem* Particle_ShieldBroken;                                      // 0x0148 (size: 0x8)
    class UNiagaraSystem* Particle_ShieldRestore;                                     // 0x0150 (size: 0x8)
    class UNiagaraSystem* Particle_ShieldHit;                                         // 0x0158 (size: 0x8)
    class UNiagaraComponent* ParticleObj_ShieldBrokeLoop;                             // 0x0160 (size: 0x8)
    class UAbiotic_CharacterBuffComponent_C* BuffDebuffComponent;                     // 0x0168 (size: 0x8)
    TArray<FBuffDebuffRowHandle> DebuffImmunityWhenShieldsEnabled;                    // 0x0170 (size: 0x10)
    bool ShouldShowFX;                                                                // 0x0180 (size: 0x1)
    bool IsShieldComponentEnabled;                                                    // 0x0181 (size: 0x1)
    FBodyShieldComponent_CShieldComponentEnabledChanged ShieldComponentEnabledChanged; // 0x0188 (size: 0x10)
    void ShieldComponentEnabledChanged(bool Enabled);
    FLinearColor Color_ShieldBreaking;                                                // 0x0198 (size: 0x10)
    FLinearColor Color_FullShield;                                                    // 0x01A8 (size: 0x10)
    double PatternIntensity_ShieldFull;                                               // 0x01B8 (size: 0x8)
    double PatternIntensity_ShieldBreaking;                                           // 0x01C0 (size: 0x8)
    class UMaterialInterface* MaterialDefault;                                        // 0x01C8 (size: 0x8)
    class UMaterialInterface* MaterialOverride;                                       // 0x01D0 (size: 0x8)
    FBodyShieldComponent_CShieldRegenStart ShieldRegenStart;                          // 0x01D8 (size: 0x10)
    void ShieldRegenStart();

    void SetMaterialOverride(class UMaterialInterface* NewMaterialOverride);
    void UpdateMaterials();
    void Server_DoDifficultyCheck();
    void OnRep_IsShieldComponentEnabled();
    void ForceBreakShield();
    bool CanShowBrokenLoop();
    bool CanApplyDamageObjectToShield(const class UAbiotic_DamageType_ParentBP_C* DamageType);
    bool CanApplyDamageToShield(TSubclassOf<class UAbiotic_DamageType_ParentBP_C> DamageType);
    void OnRep_ShouldShowFX();
    void SetImmuneToNetted(bool ImmuneToNetted);
    void CacheBuffDebuffs();
    double GetShieldRegenTime();
    void DeactivateBodyShieldComponent();
    void OnRep_ShieldBroken();
    void RestartShieldRegenWaitTime();
    void Server_TryApplyDamageToShield(double Damage, const class UAbiotic_DamageType_ParentBP_C* DamageType, EBodyLimbs Limb, bool& AppliedAnyDamage, double& LeftoverDamage);
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
    void Broadcast_ForceShieldBrokenFX();
    void ExecuteUbergraph_BodyShieldComponent(int32 EntryPoint);
    void ShieldRegenStart__DelegateSignature();
    void ShieldComponentEnabledChanged__DelegateSignature(bool Enabled);
    void ShieldHitPointsChanged__DelegateSignature();
}; // Size: 0x1E8

#endif
