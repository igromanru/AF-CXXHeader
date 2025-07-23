#ifndef UE4SS_SDK_BTT_UnlockCompendium_HPP
#define UE4SS_SDK_BTT_UnlockCompendium_HPP

class UBTT_UnlockCompendium_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    FDataTableRowHandle CompendiumRow;                                                // 0x00B0 (size: 0x10)
    ECompendiumUnlockType UnlockType;                                                 // 0x00C0 (size: 0x1)
    float UnlockRange;                                                                // 0x00C4 (size: 0x4)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_UnlockCompendium(int32 EntryPoint);
}; // Size: 0xC8

#endif
