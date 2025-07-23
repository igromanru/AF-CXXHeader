#ifndef UE4SS_SDK_Trigger_AmnesiaThreshold_HPP
#define UE4SS_SDK_Trigger_AmnesiaThreshold_HPP

class ATrigger_AmnesiaThreshold_C : public AAbiotic_TriggerVolume_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)

    void BndEvt__Trigger_AmnesiaThreshold_TriggerVolume_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnTrigger();
    void ExecuteUbergraph_Trigger_AmnesiaThreshold(int32 EntryPoint);
}; // Size: 0x350

#endif
