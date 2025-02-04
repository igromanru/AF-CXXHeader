#ifndef UE4SS_SDK_BuffObject_Disruption_HPP
#define UE4SS_SDK_BuffObject_Disruption_HPP

class UBuffObject_Disruption_C : public UBuffObject_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0060 (size: 0x8)

    void Server_OnBuffTick(class AAbioticCharacter* Character, int32 Stack);
    void ExecuteUbergraph_BuffObject_Disruption(int32 EntryPoint);
}; // Size: 0x68

#endif
