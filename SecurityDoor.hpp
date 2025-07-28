#ifndef UE4SS_SDK_SecurityDoor_HPP
#define UE4SS_SDK_SecurityDoor_HPP

class ASecurityDoor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UStaticMeshComponent* EditorHologram;                                       // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* DoorMesh;                                             // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    float DoorOpenTimeline_NewTrack_0_0DA2F8A242FE5F1A2166E1ACC983EDDE;               // 0x02B8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> DoorOpenTimeline__Direction_0DA2F8A242FE5F1A2166E1ACC983EDDE; // 0x02BC (size: 0x1)
    class UTimelineComponent* DoorOpenTimeline;                                       // 0x02C0 (size: 0x8)
    FVector DoorClosedPos;                                                            // 0x02C8 (size: 0x18)
    FVector DoorOpenPos;                                                              // 0x02E0 (size: 0x18)
    bool IsDoorOpen;                                                                  // 0x02F8 (size: 0x1)
    TArray<class AButton_Generic_C*> Button;                                          // 0x0300 (size: 0x10)
    TSoftObjectPtr<USoundBase> DoorOpenSound;                                         // 0x0310 (size: 0x28)
    TSoftObjectPtr<USoundBase> DoorCloseSound;                                        // 0x0338 (size: 0x28)
    double TimelineSpeed;                                                             // 0x0360 (size: 0x8)
    TArray<class AGenericKlaxon_C*> LinkedKlaxons;                                    // 0x0368 (size: 0x10)
    class AAbiotic_TriggerVolume_ParentBP_C* TriggerToActivateUponOpen;               // 0x0378 (size: 0x8)
    bool OpenTriggerActivated;                                                        // 0x0380 (size: 0x1)
    bool ShouldSave;                                                                  // 0x0381 (size: 0x1)
    bool noreset;                                                                     // 0x0382 (size: 0x1)

    void OnRep_IsDoorOpen();
    void UserConstructionScript();
    void DoorOpenTimeline__FinishedFunc();
    void DoorOpenTimeline__UpdateFunc();
    void OnLoaded_8587B5584243982CF1138EB85A4494E4(class UObject* Loaded);
    void OnLoaded_7ED38EB042E7E1757C206EB479EC18F2(class UObject* Loaded);
    void DoorTimeline();
    void ReceiveBeginPlay();
    void ButtonPressed(bool Activated);
    void ShowButtons();
    void ExecuteUbergraph_SecurityDoor(int32 EntryPoint);
}; // Size: 0x383

#endif
