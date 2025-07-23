#ifndef UE4SS_SDK_ReplicatedParticleFX_BP_HPP
#define UE4SS_SDK_ReplicatedParticleFX_BP_HPP

class AReplicatedParticleFX_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UNiagaraComponent* PortalFX;                                                // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    class UNiagaraSystem* ParticleEffect;                                             // 0x02B0 (size: 0x8)
    class USoundBase* SoundToPlay;                                                    // 0x02B8 (size: 0x8)
    FReplicatedParticleFX_BP_CParticleFX_Triggered ParticleFX_Triggered;              // 0x02C0 (size: 0x10)
    void ParticleFX_Triggered();

    void ActivateFX();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ReplicatedParticleFX_BP(int32 EntryPoint);
    void ParticleFX_Triggered__DelegateSignature();
}; // Size: 0x2D0

#endif
