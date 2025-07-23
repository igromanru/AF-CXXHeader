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

    void OnLoaded_B46F78604109768C97E18891B396D0F2(class UObject* Loaded);
    void MontageEnded(class UAnimMontage* Montage, bool bInterrupted);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_PlayAnimation(int32 EntryPoint);
}; // Size: 0xE8

#endif
