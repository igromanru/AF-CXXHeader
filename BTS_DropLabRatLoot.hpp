#ifndef UE4SS_SDK_BTS_DropLabRatLoot_HPP
#define UE4SS_SDK_BTS_DropLabRatLoot_HPP

class UBTS_DropLabRatLoot_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0098 (size: 0x8)

    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BTS_DropLabRatLoot(int32 EntryPoint);
}; // Size: 0xA0

#endif
