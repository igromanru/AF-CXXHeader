#ifndef UE4SS_SDK_BTS_TrySpeakDialog_HPP
#define UE4SS_SDK_BTS_TrySpeakDialog_HPP

class UBTS_TrySpeakDialog_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0098 (size: 0x8)
    TEnumAsByte<E_DialogLines::Type> Dialog Line Type;                                // 0x00A0 (size: 0x1)

    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BTS_TrySpeakDialog(int32 EntryPoint);
}; // Size: 0xA1

#endif
