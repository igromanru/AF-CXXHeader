#ifndef UE4SS_SDK_W_QuestWaypoint_HPP
#define UE4SS_SDK_W_QuestWaypoint_HPP

class UW_QuestWaypoint_C : public UW_Waypoint_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0330 (size: 0x8)
    class AActor* LinkedActor;                                                        // 0x0338 (size: 0x8)
    FQuestRowHandle QuestRow;                                                         // 0x0340 (size: 0x20)

    bool ShouldBeVisible();
    void GetWaypointLocation(FVector& Location);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void CheckCompletion();
    void ExecuteUbergraph_W_QuestWaypoint(int32 EntryPoint);
}; // Size: 0x360

#endif
