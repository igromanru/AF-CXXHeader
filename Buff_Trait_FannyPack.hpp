#ifndef UE4SS_SDK_Buff_Trait_FannyPack_HPP
#define UE4SS_SDK_Buff_Trait_FannyPack_HPP

class UBuff_Trait_FannyPack_C : public UBuffObject_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0060 (size: 0x8)

    void Server_OnBuffApply(class AAbioticCharacter* Character);
    void Server_OnBuffRemove(class AAbioticCharacter* Character, bool bExpiredByTime);
    void ExecuteUbergraph_Buff_Trait_FannyPack(int32 EntryPoint);
}; // Size: 0x68

#endif
