#ifndef UE4SS_SDK_BP_SquadManager_HPP
#define UE4SS_SDK_BP_SquadManager_HPP

class ABP_SquadManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    TEnumAsByte<E_SquadDesignations::Type> SquadDesignation;                          // 0x02B0 (size: 0x1)
    TArray<TSoftObjectPtr<AAbiotic_NPCSpawn_ParentBP_C>> LinkedSpawns;                // 0x02B8 (size: 0x10)

    void EditorShowSpawns();
    void GetSquadMemberControllers(TArray<class AAbiotic_AI_Controller_ParentBP_C*>& Controllers);
    void GetSquadMembers(TArray<class ANPC_Base_ParentBP_C*>& Members);
    void SquadMemberEnteredCombat(class ANPC_Base_ParentBP_C* Member, class AActor* CombatTarget);
    void SquadMemberDied(class ANPC_Base_ParentBP_C* Member);
    void SquadMemberEnteredDBNO(class ANPC_Base_ParentBP_C* Member);
    void ReceiveBeginPlay();
    void InitialSquadSetup();
    void ExecuteUbergraph_BP_SquadManager(int32 EntryPoint);
}; // Size: 0x2C8

#endif
