#ifndef UE4SS_SDK_AI_Controller_NPC_Monster_Skink_HPP
#define UE4SS_SDK_AI_Controller_NPC_Monster_Skink_HPP

class AAI_Controller_NPC_Monster_Skink_C : public AAbiotic_AI_Controller_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08B8 (size: 0x8)
    class ANPC_Skink_Basic_C* MySkinkPawn;                                            // 0x08C0 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AI_Controller_NPC_Monster_Skink(int32 EntryPoint);
}; // Size: 0x8C8

#endif
