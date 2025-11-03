#ifndef UE4SS_SDK_BTT_PlayAnimation_HPP
#define UE4SS_SDK_BTT_PlayAnimation_HPP

class UBTT_PlayAnimation_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    TSoftObjectPtr<UAnimMontage> MontageToPlay;                                       // 0x00B0 (size: 0x28)
    bool LockedInPlaceMontage;                                                        // 0x00D8 (size: 0x1)
    bool SayDialogQuip;                                                               // 0x00D9 (size: 0x1)
    TEnumAsByte<E_DialogLines::Type> DialogLineType;                                  // 0x00DA (size: 0x1)
    class UAnimInstance* AnimInstance;                                                // 0x00E0 (size: 0x8)
    FTimerHandle MontageTimer;                                                        // 0x00E8 (size: 0x8)

    void MontageTimeRanOut();
    void OnLoaded_17BBD28A447C3CC0FFADC1B198593F31(class UObject* Loaded);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void MontageEnded(class UAnimMontage* Montage, bool bInterrupted);
    void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_PlayAnimation(int32 EntryPoint);
}; // Size: 0xF0

#endif
