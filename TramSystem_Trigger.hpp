#ifndef UE4SS_SDK_TramSystem_Trigger_HPP
#define UE4SS_SDK_TramSystem_Trigger_HPP

class ATramSystem_Trigger_C : public ATramSystem_StopPoint_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* EditorMesh;                                           // 0x02B0 (size: 0x8)
    class ATramSystem_Rail_C* RailActor;                                              // 0x02B8 (size: 0x8)
    double RailDistance;                                                              // 0x02C0 (size: 0x8)
    FTransform TriggerLocation;                                                       // 0x02D0 (size: 0x60)
    double TramMoveDelay;                                                             // 0x0330 (size: 0x8)
    FTramSystem_Trigger_CPositiveDirectionTriggered PositiveDirectionTriggered;       // 0x0338 (size: 0x10)
    void PositiveDirectionTriggered();
    FTramSystem_Trigger_CNegativeDirectionTriggered NegativeDirectionTriggered;       // 0x0348 (size: 0x10)
    void NegativeDirectionTriggered();
    TEnumAsByte<ETramTriggerDirection::Type> MoveDelayDirection;                      // 0x0358 (size: 0x1)

    void TramReachedLocation(class ATram_ParentBP_C* Tram, bool PositiveDirection, bool& ContinueMoving);
    void UserConstructionScript();
    void StopTram(class ATram_ParentBP_C* Tram);
    void ExecuteUbergraph_TramSystem_Trigger(int32 EntryPoint);
    void NegativeDirectionTriggered__DelegateSignature();
    void PositiveDirectionTriggered__DelegateSignature();
}; // Size: 0x359

#endif
