#ifndef UE4SS_SDK_Buff_IgnoreResistance_HPP
#define UE4SS_SDK_Buff_IgnoreResistance_HPP

class UBuff_IgnoreResistance_C : public UBuffObject_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0060 (size: 0x8)
    FGameplayTagContainer IgnoredResistanceTags;                                      // 0x0068 (size: 0x20)
    FGameplayTagContainer DamageTypeParentTag;                                        // 0x0088 (size: 0x20)

    void Server_OnBuffApply(class AAbioticCharacter* Character);
    void Server_OnBuffRemove(class AAbioticCharacter* Character, bool bExpiredByTime);
    void ExecuteUbergraph_Buff_IgnoreResistance(int32 EntryPoint);
}; // Size: 0xA8

#endif
