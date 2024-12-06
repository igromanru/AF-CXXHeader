#ifndef UE4SS_SDK_BTT_Speak_HPP
#define UE4SS_SDK_BTT_Speak_HPP

class UBTT_Speak_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    TEnumAsByte<E_DialogLines::Type> Dialog Line Type;                                // 0x00B0 (size: 0x1)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Speak(int32 EntryPoint);
}; // Size: 0xB1

#endif
