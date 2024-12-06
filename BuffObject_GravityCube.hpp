#ifndef UE4SS_SDK_BuffObject_GravityCube_HPP
#define UE4SS_SDK_BuffObject_GravityCube_HPP

class UBuffObject_GravityCube_C : public UBuffObject_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0060 (size: 0x8)

    void Server_OnBuffApply(class AAbioticCharacter* Character);
    void Server_OnBuffRemove(class AAbioticCharacter* Character, bool bExpiredByTime);
    void ExecuteUbergraph_BuffObject_GravityCube(int32 EntryPoint);
}; // Size: 0x68

#endif
