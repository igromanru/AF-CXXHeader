#ifndef UE4SS_SDK_AI_Controller_Carbuncle_HPP
#define UE4SS_SDK_AI_Controller_Carbuncle_HPP

class AAI_Controller_Carbuncle_C : public AAI_Controller_Turret_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)

    void IsFacingTarget(bool& FacingTarget);
    void DecisionTick();
    void ExecuteUbergraph_AI_Controller_Carbuncle(int32 EntryPoint);
}; // Size: 0x908

#endif
