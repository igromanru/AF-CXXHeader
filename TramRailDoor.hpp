#ifndef UE4SS_SDK_TramRailDoor_HPP
#define UE4SS_SDK_TramRailDoor_HPP

class ATramRailDoor_C : public ASecurityDoor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UTramSystem_TriggerEventComponent_C* TramSystem_TriggerEventComponent;      // 0x0390 (size: 0x8)

    void BndEvt__TramRailDoor_TramSystem_TriggerEventComponent_K2Node_ComponentBoundEvent_0_OnTriggerA__DelegateSignature();
    void BndEvt__TramRailDoor_TramSystem_TriggerEventComponent_K2Node_ComponentBoundEvent_1_OnTriggerB__DelegateSignature();
    void ExecuteUbergraph_TramRailDoor(int32 EntryPoint);
}; // Size: 0x398

#endif
