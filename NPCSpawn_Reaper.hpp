#ifndef UE4SS_SDK_NPCSpawn_Reaper_HPP
#define UE4SS_SDK_NPCSpawn_Reaper_HPP

class ANPCSpawn_Reaper_C : public AAbiotic_NPCSpawn_ParentBP_C
{
    class AReaperDirector_Security_C* ReaperDirector;                                 // 0x0560 (size: 0x8)

    void TrySpawnNPC(bool IsNight, bool ForceSuccessByTrigger, bool CheckOnlyNoSpawn, bool& Success, class ANPC_Base_ParentBP_C*& SpawnedNPC, FString& DebugMessage, TEnumAsByte<E_NPCSpawnResponse::Type>& Response);
}; // Size: 0x568

#endif
