#ifndef UE4SS_SDK_BTT_NarrativeSit_HPP
#define UE4SS_SDK_BTT_NarrativeSit_HPP

class UBTT_NarrativeSit_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    class AAbiotic_Character_ParentBP_C* AbioticCharacter;                            // 0x00B0 (size: 0x8)
    bool UseTargetSeatKey;                                                            // 0x00B8 (size: 0x1)
    FBlackboardKeySelector TargetSeatKey;                                             // 0x00C0 (size: 0x28)
    double SeatSearchRange;                                                           // 0x00E8 (size: 0x8)
    double GetUpAfterTime;                                                            // 0x00F0 (size: 0x8)
    double RandomDeviation;                                                           // 0x00F8 (size: 0x8)
    bool UseExternalTimer;                                                            // 0x0100 (size: 0x1)
    bool IgnoreFilter;                                                                // 0x0101 (size: 0x1)
    TArray<TSoftClassPtr<AAbioticDeployed_ParentBP_C>> FilterClasses;                 // 0x0108 (size: 0x10)
    bool ApplyWontSitDebuff;                                                          // 0x0118 (size: 0x1)
    FBuffDebuffRowHandle WontSitBuffRow;                                              // 0x0120 (size: 0x20)

    void TryResetBusyInSeat();
    void FindNearbySeatToSitIn(class AAbioticDeployed_Furniture_ParentBP_C*& OutputPin);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void StartSittingTimer();
    void FinishSitting();
    void ExecuteUbergraph_BTT_NarrativeSit(int32 EntryPoint);
}; // Size: 0x140

#endif
