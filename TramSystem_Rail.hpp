#ifndef UE4SS_SDK_TramSystem_Rail_HPP
#define UE4SS_SDK_TramSystem_Rail_HPP

class ATramSystem_Rail_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x02A0 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    class ATramSystem_Station_C* Station1;                                            // 0x02B8 (size: 0x8)
    class ATramSystem_Station_C* Station2;                                            // 0x02C0 (size: 0x8)
    class ATramSystem_Station_C* Trigger;                                             // 0x02C8 (size: 0x8)
    TMap<ATramSystem_StopPoint_C*, double> StopPoints;                                // 0x02D0 (size: 0x50)
    TMap<class ATramSystem_StopPoint_C*, class ATramSystem_Rail_C*> NextRails;        // 0x0320 (size: 0x50)

    void GetDirectionFromStation(class ATramSystem_StopPoint_C* Station, bool& Positive);
    void GetNextStopPoint(class ATramSystem_StopPoint_C* CurrentPoint, bool PositiveDirection, class ATramSystem_Rail_C*& NextRail, class ATramSystem_StopPoint_C*& NextStopPoint, class ATramSystem_Station_C*& NextStation, double& CurrentStopDistance, double& NextStopDistance, bool& Positive);
    void InitStopPoints();
    void FixStationRotation();
    void ResetSpline();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_TramSystem_Rail(int32 EntryPoint);
}; // Size: 0x370

#endif
