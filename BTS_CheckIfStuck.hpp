#ifndef UE4SS_SDK_BTS_CheckIfStuck_HPP
#define UE4SS_SDK_BTS_CheckIfStuck_HPP

class UBTS_CheckIfStuck_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0098 (size: 0x8)
    bool CheckIfStill;                                                                // 0x00A0 (size: 0x1)
    double DistanceThreshold;                                                         // 0x00A8 (size: 0x8)
    double DistanceTimestamp;                                                         // 0x00B0 (size: 0x8)

    void CheckIfStuck(class AAbiotic_AI_Controller_ParentBP_C* Controller);
    void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
    void ExecuteUbergraph_BTS_CheckIfStuck(int32 EntryPoint);
}; // Size: 0xB8

#endif
