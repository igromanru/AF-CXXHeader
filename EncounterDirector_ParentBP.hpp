#ifndef UE4SS_SDK_EncounterDirector_ParentBP_HPP
#define UE4SS_SDK_EncounterDirector_ParentBP_HPP

class AEncounterDirector_ParentBP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    int32 LastEncounterDay;                                                           // 0x02A8 (size: 0x4)
    int32 DaysUntilNextEncounter;                                                     // 0x02AC (size: 0x4)

    void StartEncounter();
    void CheckDay(int32 DayNumber);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_EncounterDirector_ParentBP(int32 EntryPoint);
}; // Size: 0x2B0

#endif
