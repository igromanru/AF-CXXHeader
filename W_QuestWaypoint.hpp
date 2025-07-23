#ifndef UE4SS_SDK_W_QuestWaypoint_HPP
#define UE4SS_SDK_W_QuestWaypoint_HPP

class UW_QuestWaypoint_C : public UW_Waypoint_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class AActor* LinkedActor;                                                        // 0x0348 (size: 0x8)
    FQuestRowHandle QuestRow;                                                         // 0x0350 (size: 0x20)
    bool CurrentLocation;                                                             // 0x0370 (size: 0x1)

    void AllowedInVignette(bool& AllowInVignette);
    bool ShouldBeVisible();
    void GetWaypointLocation(FVector& Location);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void CheckCompletion();
    void ExecuteUbergraph_W_QuestWaypoint(int32 EntryPoint);
}; // Size: 0x371

#endif
