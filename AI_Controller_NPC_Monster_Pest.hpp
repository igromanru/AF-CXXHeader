#ifndef UE4SS_SDK_AI_Controller_NPC_Monster_Pest_HPP
#define UE4SS_SDK_AI_Controller_NPC_Monster_Pest_HPP

class AAI_Controller_NPC_Monster_Pest_C : public AAbiotic_AI_Controller_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08B8 (size: 0x8)
    class ANPC_Monster_Pest_C* MyPawn_Pest;                                           // 0x08C0 (size: 0x8)

    void DecisionTick();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_AI_Controller_NPC_Monster_Pest(int32 EntryPoint);
}; // Size: 0x8C8

#endif
