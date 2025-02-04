#ifndef UE4SS_SDK_AI_Controller_NPC_Monster_Peccary_HPP
#define UE4SS_SDK_AI_Controller_NPC_Monster_Peccary_HPP

class AAI_Controller_NPC_Monster_Peccary_C : public AAbiotic_AI_Controller_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08A8 (size: 0x8)
    class ANPC_Monster_Peccary_C* MyPeccaryPawn;                                      // 0x08B0 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AI_Controller_NPC_Monster_Peccary(int32 EntryPoint);
}; // Size: 0x8B8

#endif
