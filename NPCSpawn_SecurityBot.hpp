#ifndef UE4SS_SDK_NPCSpawn_SecurityBot_HPP
#define UE4SS_SDK_NPCSpawn_SecurityBot_HPP

class ANPCSpawn_SecurityBot_C : public AAbiotic_NPCSpawn_ParentBP_C
{
    bool HasSpawnedThisNight;                                                         // 0x055A (size: 0x1)

    void TrySpawnNPC(bool IsNight, bool ForceSuccessByTrigger, bool CheckOnlyNoSpawn, bool& Success, class ANPC_Base_ParentBP_C*& SpawnedNPC, FString& DebugMessage, TEnumAsByte<E_NPCSpawnResponse::Type>& Response);
}; // Size: 0x55B

#endif
