#ifndef UE4SS_SDK_Abiotic_TriggerVolume_ParentBP_HPP
#define UE4SS_SDK_Abiotic_TriggerVolume_ParentBP_HPP

class AAbiotic_TriggerVolume_ParentBP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x02A0 (size: 0x8)
    class UBoxComponent* TriggerVolume;                                               // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    bool NPCsCanTrigger;                                                              // 0x02B8 (size: 0x1)
    FAbiotic_TriggerVolume_ParentBP_CWasTriggered WasTriggered;                       // 0x02C0 (size: 0x10)
    void WasTriggered();
    FVector VolumeSize;                                                               // 0x02D0 (size: 0x18)
    FName UniqueTriggerID;                                                            // 0x02E8 (size: 0x8)
    bool HasBeenTriggeredOnce;                                                        // 0x02F0 (size: 0x1)
    int32 TriggerLimit;                                                               // 0x02F4 (size: 0x4)
    int32 TimesTriggered;                                                             // 0x02F8 (size: 0x4)
    TArray<class AAbiotic_TriggerVolume_ParentBP_C*> OtherTriggersToTrigger;          // 0x0300 (size: 0x10)
    TArray<class AAbiotic_TriggerVolume_ParentBP_C*> OtherTriggersToAllowOverlaps;    // 0x0310 (size: 0x10)
    class AButton_Generic_C* TriggeredByButton;                                       // 0x0320 (size: 0x8)
    FSaveData_Trigger_Struct CurrentSaveData;                                         // 0x0328 (size: 0x18)
    bool RunTriggerOnWorldLoad;                                                       // 0x0340 (size: 0x1)
    bool LocalOnlyTrigger;                                                            // 0x0341 (size: 0x1)

    void ResetTriggerState();
    void TriggerLimitReached?(bool& LimitReached);
    void SaveTriggerData();
    void TryTriggerOtherTriggers();
    void ProcessTriggerOverlap(class AActor* Actor, bool& Success);
    void UserConstructionScript();
    void OnTrigger();
    void BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void UpdateTrigger_SetTriggered();
    void ReceiveBeginPlay();
    void OnTriggeredByButton(bool Activated);
    void OnLoadedFromSave();
    void ExecuteUbergraph_Abiotic_TriggerVolume_ParentBP(int32 EntryPoint);
    void WasTriggered__DelegateSignature();
}; // Size: 0x342

#endif
