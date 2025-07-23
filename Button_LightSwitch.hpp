#ifndef UE4SS_SDK_Button_LightSwitch_HPP
#define UE4SS_SDK_Button_LightSwitch_HPP

class AButton_LightSwitch_C : public AButton_Generic_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0440 (size: 0x8)

    void TogglePowerFX();
    void ExecuteUbergraph_Button_LightSwitch(int32 EntryPoint);
}; // Size: 0x448

#endif
