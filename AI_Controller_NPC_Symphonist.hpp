#ifndef UE4SS_SDK_AI_Controller_NPC_Symphonist_HPP
#define UE4SS_SDK_AI_Controller_NPC_Symphonist_HPP

class AAI_Controller_NPC_Symphonist_C : public AAbiotic_AI_Controller_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08B8 (size: 0x8)

    void IncreasePotentialTargetPerceptionValue(const class AActor*& Target, bool ForceMaximumValue, bool Maintain, bool& MaxSpotValue);
    void AddOrUpdatePotentialTarget(const class AActor*& PotentialTarget, bool ForceSpotTargetImmediately);
    void TrySpeak_IdleQuipLine();
    void ExecuteUbergraph_AI_Controller_NPC_Symphonist(int32 EntryPoint);
}; // Size: 0x8C0

#endif
