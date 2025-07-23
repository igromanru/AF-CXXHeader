#ifndef UE4SS_SDK_W_Waypoint_CraftingBench_HPP
#define UE4SS_SDK_W_Waypoint_CraftingBench_HPP

class UW_Waypoint_CraftingBench_C : public UW_Waypoint_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class AActor* ClosestBench;                                                       // 0x0348 (size: 0x8)
    TArray<class AActor*> AllBenches;                                                 // 0x0350 (size: 0x10)
    FTimerHandle ClosestBenchHandle;                                                  // 0x0360 (size: 0x8)

    bool ShouldBeVisible();
    void GetWaypointLocation(FVector& Location);
    void FindClosestBench();
    void OnCraftingBenchCreated_Event(class AActor* CraftingBench);
    void OnCraftingBenchDestroyed_Event(class AActor* CraftingBench);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_W_Waypoint_CraftingBench(int32 EntryPoint);
}; // Size: 0x368

#endif
