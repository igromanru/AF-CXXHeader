#ifndef UE4SS_SDK_BuffObject_SetBonus_HPP
#define UE4SS_SDK_BuffObject_SetBonus_HPP

class UBuffObject_SetBonus_C : public UBuffObject_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0060 (size: 0x8)

    void UpdateSetBonusesState(class AAbiotic_PlayerCharacter_C* OwningCharacter);
    void Server_OnBuffApply(class AAbioticCharacter* Character);
    void Server_OnBuffRemove(class AAbioticCharacter* Character, bool bExpiredByTime);
    void ExecuteUbergraph_BuffObject_SetBonus(int32 EntryPoint);
}; // Size: 0x68

#endif
