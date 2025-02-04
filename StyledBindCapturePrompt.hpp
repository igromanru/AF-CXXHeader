#ifndef UE4SS_SDK_StyledBindCapturePrompt_HPP
#define UE4SS_SDK_StyledBindCapturePrompt_HPP

class UStyledBindCapturePrompt_C : public UBindCapturePrompt
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UW_Keybind_C* Keybind_Clear;                                                // 0x0350 (size: 0x8)
    class UW_Keybind_C* Keybind_Escape;                                               // 0x0358 (size: 0x8)

    void StopListening();
    void Construct();
    void ExecuteUbergraph_StyledBindCapturePrompt(int32 EntryPoint);
}; // Size: 0x360

#endif
