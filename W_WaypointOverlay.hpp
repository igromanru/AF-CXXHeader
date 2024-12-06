#ifndef UE4SS_SDK_W_WaypointOverlay_HPP
#define UE4SS_SDK_W_WaypointOverlay_HPP

class UW_WaypointOverlay_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x02E8 (size: 0x8)
    class UW_Waypoint_CraftingBench_C* W_Waypoint_CraftingBench;                      // 0x02F0 (size: 0x8)
    FQuestRowHandle CurrentQuest;                                                     // 0x02F8 (size: 0x20)
    class UW_QuestWaypoint_C* QuestWaypoint;                                          // 0x0318 (size: 0x8)

    void SetWaypointVisibility(bool WaypointVisibility);
    void UpdateWaypoint(const FQuestRowHandle Quest);
    void Construct();
    void ExecuteUbergraph_W_WaypointOverlay(int32 EntryPoint);
}; // Size: 0x320

#endif
