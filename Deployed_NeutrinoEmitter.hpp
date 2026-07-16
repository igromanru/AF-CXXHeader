#ifndef UE4SS_SDK_Deployed_NeutrinoEmitter_HPP
#define UE4SS_SDK_Deployed_NeutrinoEmitter_HPP

class ADeployed_NeutrinoEmitter_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0870 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0878 (size: 0x8)
    class UAudioComponent* LoopAudio;                                                 // 0x0880 (size: 0x8)
    class UChildActorComponent* AntiRadiation;                                        // 0x0888 (size: 0x8)

    void TogglePowerFX();
    void ExecuteUbergraph_Deployed_NeutrinoEmitter(int32 EntryPoint);
}; // Size: 0x890

#endif
