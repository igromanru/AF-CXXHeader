#ifndef UE4SS_SDK_W_BeaconWaypoint_HPP
#define UE4SS_SDK_W_BeaconWaypoint_HPP

class UW_BeaconWaypoint_C : public UW_Waypoint_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    FString BeaconStringData;                                                         // 0x0348 (size: 0x10)
    class AActor* LinkedActor;                                                        // 0x0358 (size: 0x8)

    void GetWaypointLocation(FVector& Location);
    bool ShouldBeVisible();
    void OnFailure_D26D26F4456DADB9F8B0FFB121B1B968(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void OnSuccess_D26D26F4456DADB9F8B0FFB121B1B968(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_W_BeaconWaypoint(int32 EntryPoint);
}; // Size: 0x360

#endif
