#ifndef UE4SS_SDK_AI_Controller_NPC_Exor_HPP
#define UE4SS_SDK_AI_Controller_NPC_Exor_HPP

class AAI_Controller_NPC_Exor_C : public AAbiotic_AI_Controller_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08B8 (size: 0x8)

    void ReceiveBeginPlay();
    void UpdateStationaryTarget();
    void ExecuteUbergraph_AI_Controller_NPC_Exor(int32 EntryPoint);
}; // Size: 0x8C0

#endif
