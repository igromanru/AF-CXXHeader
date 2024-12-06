#ifndef UE4SS_SDK_CoffeeMachine_BP_HPP
#define UE4SS_SDK_CoffeeMachine_BP_HPP

class ACoffeeMachine_BP_C : public AVendingMachine_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B00 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_CoffeeMachine_BP(int32 EntryPoint);
}; // Size: 0xB08

#endif
