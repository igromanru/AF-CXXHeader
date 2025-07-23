#ifndef UE4SS_SDK_Abiotic_WaypointActor_HPP
#define UE4SS_SDK_Abiotic_WaypointActor_HPP

class AAbiotic_WaypointActor_C : public ATargetPoint
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    FDataTableRowHandle WaypointRow;                                                  // 0x02A0 (size: 0x10)
    double Duration;                                                                  // 0x02B0 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_Abiotic_WaypointActor(int32 EntryPoint);
}; // Size: 0x2B8

#endif
