#ifndef UE4SS_SDK_Buff_IgnoreResistance_HPP
#define UE4SS_SDK_Buff_IgnoreResistance_HPP

class UBuff_IgnoreResistance_C : public UBuffObject_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0050 (size: 0x8)
    FGameplayTagContainer IgnoredResistanceTags;                                      // 0x0058 (size: 0x20)
    FGameplayTagContainer DamageTypeParentTag;                                        // 0x0078 (size: 0x20)

    void Server_OnBuffApply(class AAbioticCharacter* Character);
    void Server_OnBuffRemove(class AAbioticCharacter* Character, bool bExpiredByTime);
    void ExecuteUbergraph_Buff_IgnoreResistance(int32 EntryPoint);
}; // Size: 0x98

#endif
