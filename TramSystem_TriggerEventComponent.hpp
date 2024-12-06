#ifndef UE4SS_SDK_TramSystem_TriggerEventComponent_HPP
#define UE4SS_SDK_TramSystem_TriggerEventComponent_HPP

class UTramSystem_TriggerEventComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    TArray<FTramEventBind_Struct> TriggerABinds;                                      // 0x00B0 (size: 0x10)
    TArray<FTramEventBind_Struct> TriggerBBinds;                                      // 0x00C0 (size: 0x10)
    FTramSystem_TriggerEventComponent_COnTriggerA OnTriggerA;                         // 0x00D0 (size: 0x10)
    void OnTriggerA();
    FTramSystem_TriggerEventComponent_COnTriggerB OnTriggerB;                         // 0x00E0 (size: 0x10)
    void OnTriggerB();

    void TriggerBCalled();
    void TriggerACalled();
    void BindTriggers();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_TramSystem_TriggerEventComponent(int32 EntryPoint);
    void OnTriggerB__DelegateSignature();
    void OnTriggerA__DelegateSignature();
}; // Size: 0xF0

#endif
