#ifndef UE4SS_SDK_MainMenu_Intro_HPP
#define UE4SS_SDK_MainMenu_Intro_HPP

class AMainMenu_Intro_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)

    void ReceiveBeginPlay();
    void RandomElevatorShake();
    void ExecuteUbergraph_MainMenu_Intro(int32 EntryPoint);
}; // Size: 0x2A8

#endif
