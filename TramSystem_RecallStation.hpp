#ifndef UE4SS_SDK_TramSystem_RecallStation_HPP
#define UE4SS_SDK_TramSystem_RecallStation_HPP

class ATramSystem_RecallStation_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UStaticMeshComponent* ScreenBG1;                                            // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* ScreenBG;                                             // 0x02A8 (size: 0x8)
    class UTextRenderComponent* RecallText;                                           // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x02B8 (size: 0x8)
    class UChildActorComponent* RecallButton;                                         // 0x02C0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C8 (size: 0x8)
    class ATram_ParentBP_C* LinkedTram;                                               // 0x02D0 (size: 0x8)
    class ATramSystem_Station_C* LinkedStation;                                       // 0x02D8 (size: 0x8)
    TEnumAsByte<E_TramRecallStatus::Type> TramRecallStatus;                           // 0x02E0 (size: 0x1)
    TEnumAsByte<E_TramRecallStatus::Type> LastTramRecallState;                        // 0x02E1 (size: 0x1)

    void WarnLastInteractedPlayer(FText Text, TEnumAsByte<ECriticalityLevels::Type> Color, bool WarningBeep);
    void TramRecallPressed(bool Activated);
    void UpdateRecallStatus(bool Initial);
    void OnRep_TramRecallStatus();
    void TramReachedStation();
    void TramTargetStationUpdated(class ATramSystem_Station_C* NewTarget);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_TramSystem_RecallStation(int32 EntryPoint);
}; // Size: 0x2E2

#endif
