#ifndef UE4SS_SDK_MainMenu_HPP
#define UE4SS_SDK_MainMenu_HPP

class AMainMenu_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    class USoundBase* Chosen_funnyline;                                               // 0x02A8 (size: 0x8)

    void ReceiveBeginPlay();
    void SetCreditScrollSpeed(double Speed);
    void ExecuteUbergraph_MainMenu(int32 EntryPoint);
}; // Size: 0x2B0

#endif
