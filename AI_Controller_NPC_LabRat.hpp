#ifndef UE4SS_SDK_AI_Controller_NPC_LabRat_HPP
#define UE4SS_SDK_AI_Controller_NPC_LabRat_HPP

class AAI_Controller_NPC_LabRat_C : public AAbiotic_AI_Controller_ParentBP_C
{

    void CheckCombatTargetValidity(class AActor* TargetToCheck, bool Maintain, bool& Valid);
}; // Size: 0x900

#endif
