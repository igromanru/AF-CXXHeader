#ifndef UE4SS_SDK_Buff_FrozenCore_HPP
#define UE4SS_SDK_Buff_FrozenCore_HPP

class UBuff_FrozenCore_C : public UBuffObject_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0060 (size: 0x8)
    FBuffDebuffRowHandle FrostDebuff;                                                 // 0x0068 (size: 0x20)

    void Server_OnBuffTick(class AAbioticCharacter* Character, int32 Stack);
    void Server_OnBuffRemove(class AAbioticCharacter* Character, bool bExpiredByTime);
    void ExecuteUbergraph_Buff_FrozenCore(int32 EntryPoint);
}; // Size: 0x88

#endif
