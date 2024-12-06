#ifndef UE4SS_SDK_BuffObject_DioxoHealer_HPP
#define UE4SS_SDK_BuffObject_DioxoHealer_HPP

class UBuffObject_DioxoHealer_C : public UBuffObject_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0060 (size: 0x8)
    double AmountToHealPerTick;                                                       // 0x0068 (size: 0x8)

    void Server_OnBuffTick(class AAbioticCharacter* Character, int32 Stack);
    void ExecuteUbergraph_BuffObject_DioxoHealer(int32 EntryPoint);
}; // Size: 0x70

#endif
