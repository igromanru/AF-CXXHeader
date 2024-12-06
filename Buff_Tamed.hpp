#ifndef UE4SS_SDK_Buff_Tamed_HPP
#define UE4SS_SDK_Buff_Tamed_HPP

class UBuff_Tamed_C : public UBuffObject_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0060 (size: 0x8)

    void Server_OnBuffApply(class AAbioticCharacter* Character);
    void ExecuteUbergraph_Buff_Tamed(int32 EntryPoint);
}; // Size: 0x68

#endif
