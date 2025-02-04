#ifndef UE4SS_SDK_W_WaypointOverlay_HPP
#define UE4SS_SDK_W_WaypointOverlay_HPP

class UW_WaypointOverlay_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x02E8 (size: 0x8)
    class UW_Waypoint_CraftingBench_C* W_Waypoint_CraftingBench;                      // 0x02F0 (size: 0x8)
    FQuestRowHandle CurrentQuest;                                                     // 0x02F8 (size: 0x20)

    void UpdateWaypointVisibility();
    void SetWaypointVisibility(bool WaypointVisibility);
    void UpdateWaypoint(const FQuestRowHandle Quest);
    void Construct();
    void OnWorldFlagUpdated_Event();
    void ExecuteUbergraph_W_WaypointOverlay(int32 EntryPoint);
}; // Size: 0x318

#endif
