#ifndef UE4SS_SDK_Deployed_ShockTrap_HPP
#define UE4SS_SDK_Deployed_ShockTrap_HPP

class ADeployed_ShockTrap_C : public ADeployed_FloorTrap_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0890 (size: 0x8)
    class UNiagaraComponent* Niagara_Electricity;                                     // 0x0898 (size: 0x8)
    class UNiagaraComponent* Sparks_04;                                               // 0x08A0 (size: 0x8)
    class UNiagaraComponent* Sparks_01;                                               // 0x08A8 (size: 0x8)
    class UNiagaraComponent* Sparks_02;                                               // 0x08B0 (size: 0x8)
    class UNiagaraComponent* Sparks_03;                                               // 0x08B8 (size: 0x8)
    FTimerHandle ShockTrapTimer;                                                      // 0x08C0 (size: 0x8)
    int32 CountdownTimer;                                                             // 0x08C8 (size: 0x4)

    void OnRep_CountdownTimer();
    void Broadcast_TrapFX();
    void Server_TrapNewStateUpdate();
    void ShockTrapCooldown();
    void ReceiveBeginPlay();
    void OnLoadedFromSave(double NewLifespan);
    void Local_UpdateCurrentTrapState();
    void ExecuteUbergraph_Deployed_ShockTrap(int32 EntryPoint);
}; // Size: 0x8CC

#endif
