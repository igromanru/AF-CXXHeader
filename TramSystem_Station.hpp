#ifndef UE4SS_SDK_TramSystem_Station_HPP
#define UE4SS_SDK_TramSystem_Station_HPP

class ATramSystem_Station_C : public ATramSystem_StopPoint_C
{
    class UTextRenderComponent* StationText;                                          // 0x02A0 (size: 0x8)
    class UTextRenderComponent* PortText;                                             // 0x02A8 (size: 0x8)
    class UTextRenderComponent* StarboardText;                                        // 0x02B0 (size: 0x8)
    class UInterpToMovementComponent* InterpToMovement;                               // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* EditorMesh;                                           // 0x02C0 (size: 0x8)
    FTramSystem_Station_CTramReachedStation TramReachedStation;                       // 0x02C8 (size: 0x10)
    void TramReachedStation();
    FWorldFlagRowHandle WorldFlagToTrigger;                                           // 0x02D8 (size: 0x20)
    FText StationName;                                                                // 0x02F8 (size: 0x10)
    TEnumAsByte<E_TramDoorState::Type> Station_TramDoorState;                         // 0x0308 (size: 0x1)

    void TriggerStationFlag();
    void IsStationLocked(bool& Locked);
    void TramReachedLocation(class ATram_ParentBP_C* Tram, bool PositiveDirection, bool& ContinueMoving);
    void UserConstructionScript();
    void TramReachedStation__DelegateSignature();
}; // Size: 0x309

#endif
