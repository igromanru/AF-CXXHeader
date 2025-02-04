#ifndef UE4SS_SDK_Abiotic_DebugCameraController_HPP
#define UE4SS_SDK_Abiotic_DebugCameraController_HPP

class AAbiotic_DebugCameraController_C : public ADebugCameraController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UCheatComponent_C* CheatComponent;                                          // 0x09F8 (size: 0x8)
    double Ctrls_GamepadXSensitivity;                                                 // 0x0A00 (size: 0x8)
    double Ctrls_GamepadYSensitivity;                                                 // 0x0A08 (size: 0x8)

    void InpActEvt_E_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_E_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_Q_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Q_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void GamepadXSensitivityCallback(float NewValue);
    void GamepadYSensitivityCallback(float NewValue);
    void ExecuteUbergraph_Abiotic_DebugCameraController(int32 EntryPoint);
}; // Size: 0xA10

#endif
