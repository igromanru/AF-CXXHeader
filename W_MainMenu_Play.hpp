#ifndef UE4SS_SDK_W_MainMenu_Play_HPP
#define UE4SS_SDK_W_MainMenu_Play_HPP

class UW_MainMenu_Play_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UW_MainMenuButton_C* Button_Back;                                           // 0x02E8 (size: 0x8)
    class UW_MainMenuButton_C* Button_Continue;                                       // 0x02F0 (size: 0x8)
    class UW_MainMenuButton_C* Button_HostGame;                                       // 0x02F8 (size: 0x8)
    class UW_MainMenuButton_C* Button_ServerBrowser;                                  // 0x0300 (size: 0x8)
    TArray<FString> AllSaveFilesFound;                                                // 0x0308 (size: 0x10)

    void BndEvt__W_MainMenu_Play_Button_Back_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void BndEvt__W_MainMenu_Play_Button_HostGame_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature();
    void BndEvt__W_MainMenu_Play_Button_ServerBrowser_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature();
    void BndEvt__W_MainMenu_Play_Button_Continue_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature();
    void Construct();
    void ModJoin_Yes();
    void ModJoin_No();
    void ExecuteUbergraph_W_MainMenu_Play(int32 EntryPoint);
}; // Size: 0x318

#endif
