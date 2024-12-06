#ifndef UE4SS_SDK_ComputerTerminal_Standard_HPP
#define UE4SS_SDK_ComputerTerminal_Standard_HPP

class AComputerTerminal_Standard_C : public AComputerTerminal_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0330 (size: 0x8)
    class UWidgetComponent* OperatingSystemWidget;                                    // 0x0338 (size: 0x8)
    class UW_OperatingSystem_Main_C* OperatingSystemWidget_Ref;                       // 0x0340 (size: 0x8)
    bool HasBeenUsed;                                                                 // 0x0348 (size: 0x1)
    FTimerHandle HasBeenUsed_Timer;                                                   // 0x0350 (size: 0x8)
    TArray<FDataTableRowHandle> Emails;                                               // 0x0358 (size: 0x10)
    TEnumAsByte<E_OS_Themes::Type> Terminal_OS_Theme;                                 // 0x0368 (size: 0x1)
    bool DebugTerminal;                                                               // 0x0369 (size: 0x1)

    void OnRep_HasBeenUsed();
    void ToggleTerminalUse_FX();
    void UseTerminal_Primary();
    void ReceiveBeginPlay();
    void ChimeLure();
    void ExecuteUbergraph_ComputerTerminal_Standard(int32 EntryPoint);
}; // Size: 0x36A

#endif
