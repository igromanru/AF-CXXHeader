#ifndef UE4SS_SDK_Deployed_NeutrinoEmitter_HPP
#define UE4SS_SDK_Deployed_NeutrinoEmitter_HPP

class ADeployed_NeutrinoEmitter_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0858 (size: 0x8)
    class UAudioComponent* LoopAudio;                                                 // 0x0860 (size: 0x8)
    class UChildActorComponent* AntiRadiation;                                        // 0x0868 (size: 0x8)

    void TogglePowerFX();
    void ExecuteUbergraph_Deployed_NeutrinoEmitter(int32 EntryPoint);
}; // Size: 0x870

#endif
