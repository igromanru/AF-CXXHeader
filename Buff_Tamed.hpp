#ifndef UE4SS_SDK_Buff_Tamed_HPP
#define UE4SS_SDK_Buff_Tamed_HPP

class UBuff_Tamed_C : public UBuffObject_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0060 (size: 0x8)
    FVector LastLocation;                                                             // 0x0068 (size: 0x18)

    void TryTeleportToOwner(class ANPC_Monster_Pest_C* CurrentPet, bool& IsTeleporting);
    void TryRegisterToCoreCompanionBuff(class ANPC_Base_ParentBP_C* Character);
    void Server_OnBuffApply(class AAbioticCharacter* Character);
    void Server_OnBuffRemove(class AAbioticCharacter* Character, bool bExpiredByTime);
    void Server_OnBuffTick(class AAbioticCharacter* Character, int32 Stack);
    void ExecuteUbergraph_Buff_Tamed(int32 EntryPoint);
}; // Size: 0x80

#endif
