#ifndef UE4SS_SDK_BuffObject_StrengthTick_HPP
#define UE4SS_SDK_BuffObject_StrengthTick_HPP

class UBuffObject_StrengthTick_C : public UBuffObject_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0060 (size: 0x8)
    double XPGainPerTick;                                                             // 0x0068 (size: 0x8)

    void Server_OnBuffTick(class AAbioticCharacter* Character, int32 Stack);
    void ExecuteUbergraph_BuffObject_StrengthTick(int32 EntryPoint);
}; // Size: 0x70

#endif
