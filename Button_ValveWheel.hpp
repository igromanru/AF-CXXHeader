#ifndef UE4SS_SDK_Button_ValveWheel_HPP
#define UE4SS_SDK_Button_ValveWheel_HPP

class AButton_ValveWheel_C : public AButton_Generic_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)

    void Local_JustActivated();
    void ExecuteUbergraph_Button_ValveWheel(int32 EntryPoint);
}; // Size: 0x438

#endif
