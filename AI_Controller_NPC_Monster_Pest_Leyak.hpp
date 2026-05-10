#ifndef UE4SS_SDK_AI_Controller_NPC_Monster_Pest_Leyak_HPP
#define UE4SS_SDK_AI_Controller_NPC_Monster_Pest_Leyak_HPP

class AAI_Controller_NPC_Monster_Pest_Leyak_C : public AAI_Controller_NPC_Monster_Pest_C
{

    void SetReplicatedTargetCharacter(class UObject* Object);
    void SetCurrentCombatTarget(class AActor* CombatTarget);
    void BT_SetTargetActor(class UObject* TargetActor);
}; // Size: 0x8C9

#endif
