#ifndef UE4SS_SDK_BTS_ChooseBestTarget_HPP
#define UE4SS_SDK_BTS_ChooseBestTarget_HPP

class UBTS_ChooseBestTarget_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0098 (size: 0x8)

    void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
    void ExecuteUbergraph_BTS_ChooseBestTarget(int32 EntryPoint);
}; // Size: 0xA0

#endif
