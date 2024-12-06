#ifndef UE4SS_SDK_Buff_Trait_ItemGranter_HPP
#define UE4SS_SDK_Buff_Trait_ItemGranter_HPP

class UBuff_Trait_ItemGranter_C : public UBuffObject_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0060 (size: 0x8)
    TArray<FAbioticItemCount_Struct> ItemsToGive;                                     // 0x0068 (size: 0x10)

    void Server_OnBuffApply(class AAbioticCharacter* Character);
    void ExecuteUbergraph_Buff_Trait_ItemGranter(int32 EntryPoint);
}; // Size: 0x78

#endif
