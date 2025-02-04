#ifndef UE4SS_SDK_WorldFlagFX_BP_HPP
#define UE4SS_SDK_WorldFlagFX_BP_HPP

class AWorldFlagFX_BP_C : public AAbioticActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)
    class UTextRenderComponent* WF_Deac;                                              // 0x02D0 (size: 0x8)
    class UTextRenderComponent* WF_Act;                                               // 0x02D8 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x02E0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x02E8 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x02F0 (size: 0x8)
    FWorldFlagRowHandle ActivationFlag;                                               // 0x02F8 (size: 0x20)
    FWorldFlagRowHandle DeactivationFlag;                                             // 0x0318 (size: 0x20)
    double SoundFadeInTime;                                                           // 0x0338 (size: 0x8)

    void RefreshWorldEffect();
    void Local_ToggleFX(bool Activated);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_WorldFlagFX_BP(int32 EntryPoint);
}; // Size: 0x340

#endif
