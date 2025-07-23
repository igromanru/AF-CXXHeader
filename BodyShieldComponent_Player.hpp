#ifndef UE4SS_SDK_BodyShieldComponent_Player_HPP
#define UE4SS_SDK_BodyShieldComponent_Player_HPP

class UBodyShieldComponent_Player_C : public UBodyShieldComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E8 (size: 0x8)
    FBuffDebuffRowHandle LastShield;                                                  // 0x01F0 (size: 0x20)

    class UNiagaraSystem* ShieldParticleSelection(class UNiagaraSystem* NewParticle, class UNiagaraSystem* DefaultParticle);
    void UpdateLastShield(FBuffDebuffRowHandle LastShield);
    void OnRep_LastShield();
    void Local_UpdateShieldVisuals();
    void ExecuteUbergraph_BodyShieldComponent_Player(int32 EntryPoint);
}; // Size: 0x210

#endif
