#ifndef UE4SS_SDK_BTT_DoCombatMirage_HPP
#define UE4SS_SDK_BTT_DoCombatMirage_HPP

class UBTT_DoCombatMirage_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    class ANPC_Monster_Symphonist_C* NPCPawn;                                         // 0x00B0 (size: 0x8)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void CombatReset_Event(bool Success);
    void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_DoCombatMirage(int32 EntryPoint);
}; // Size: 0xB8

#endif
