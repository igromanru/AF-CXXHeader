#ifndef UE4SS_SDK_AI_Controller_NPC_TravelingTrader_HPP
#define UE4SS_SDK_AI_Controller_NPC_TravelingTrader_HPP

class AAI_Controller_NPC_TravelingTrader_C : public AAI_Controller_NPC_Narrative_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E8 (size: 0x8)

    void WasShoved(class AAbiotic_Character_ParentBP_C* Shover);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_AI_Controller_NPC_TravelingTrader(int32 EntryPoint);
}; // Size: 0x3F0

#endif
