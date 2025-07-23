#ifndef UE4SS_SDK_BTT_SetCombatState_HPP
#define UE4SS_SDK_BTT_SetCombatState_HPP

class UBTT_SetCombatState_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    bool State;                                                                       // 0x00B0 (size: 0x1)
    bool SkipAggroAnimation;                                                          // 0x00B1 (size: 0x1)
    class ANPC_Base_ParentBP_C* NPCPawn;                                              // 0x00B8 (size: 0x8)
    bool WasInCombat;                                                                 // 0x00C0 (size: 0x1)
    class UObject* LastTarget;                                                        // 0x00C8 (size: 0x8)

    void CacheLastCombatTarget(class AAIController* AIController);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_SetCombatState(int32 EntryPoint);
}; // Size: 0xD0

#endif
