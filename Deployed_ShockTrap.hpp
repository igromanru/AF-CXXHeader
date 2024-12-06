#ifndef UE4SS_SDK_Deployed_ShockTrap_HPP
#define UE4SS_SDK_Deployed_ShockTrap_HPP

class ADeployed_ShockTrap_C : public ADeployed_FloorTrap_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0960 (size: 0x8)
    class UNiagaraComponent* Niagara_Electricity;                                     // 0x0968 (size: 0x8)
    class UNiagaraComponent* Sparks_04;                                               // 0x0970 (size: 0x8)
    class UNiagaraComponent* Sparks_01;                                               // 0x0978 (size: 0x8)
    class UNiagaraComponent* Sparks_02;                                               // 0x0980 (size: 0x8)
    class UNiagaraComponent* Sparks_03;                                               // 0x0988 (size: 0x8)
    FTimerHandle ShockTrapTimer;                                                      // 0x0990 (size: 0x8)
    int32 CountdownTimer;                                                             // 0x0998 (size: 0x4)

    void OnRep_CountdownTimer();
    void Broadcast_TrapFX();
    void Server_TrapNewStateUpdate();
    void ShockTrapCooldown();
    void ReceiveBeginPlay();
    void OnLoadedFromSave();
    void Local_UpdateCurrentTrapState();
    void ExecuteUbergraph_Deployed_ShockTrap(int32 EntryPoint);
}; // Size: 0x99C

#endif
