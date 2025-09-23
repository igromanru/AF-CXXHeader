#ifndef UE4SS_SDK_BTT_ReloadWeapon_HPP
#define UE4SS_SDK_BTT_ReloadWeapon_HPP

class UBTT_ReloadWeapon_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    bool TryCrouchIfInCover;                                                          // 0x00B0 (size: 0x1)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void CombatReset_Event(bool Success);
    void ExecuteUbergraph_BTT_ReloadWeapon(int32 EntryPoint);
}; // Size: 0xB1

#endif
