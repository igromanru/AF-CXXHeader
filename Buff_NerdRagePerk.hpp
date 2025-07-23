#ifndef UE4SS_SDK_Buff_NerdRagePerk_HPP
#define UE4SS_SDK_Buff_NerdRagePerk_HPP

class UBuff_NerdRagePerk_C : public UBuffObject_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0060 (size: 0x8)
    class UAbiotic_CharacterBuffComponent_C* BuffComponent;                           // 0x0068 (size: 0x8)
    TArray<FBuffDebuffRowHandle> BleedBuffs;                                          // 0x0070 (size: 0x10)
    class AAbioticCharacter* Character;                                               // 0x0080 (size: 0x8)
    FBuffDebuffRowHandle NerdRageBuff;                                                // 0x0088 (size: 0x20)

    void OnReceivedBuff(FBuffDebuffRowHandle BuffDebuffRowHandle);
    void Server_OnBuffApply(class AAbioticCharacter* Character);
    void Server_OnBuffRemove(class AAbioticCharacter* Character, bool bExpiredByTime);
    void ExecuteUbergraph_Buff_NerdRagePerk(int32 EntryPoint);
}; // Size: 0xA8

#endif
