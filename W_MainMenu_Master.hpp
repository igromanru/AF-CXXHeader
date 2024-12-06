#ifndef UE4SS_SDK_W_MainMenu_Master_HPP
#define UE4SS_SDK_W_MainMenu_Master_HPP

class UW_MainMenu_Master_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* PulsePressAnything;                                       // 0x02E8 (size: 0x8)
    class UWidgetAnimation* FadeSplash;                                               // 0x02F0 (size: 0x8)
    class UWidgetSwitcher* MainMenuWidgetSwitcher;                                    // 0x02F8 (size: 0x8)
    class UImage* Splash_ABFLogo;                                                     // 0x0300 (size: 0x8)
    class UImage* Splash_Image;                                                       // 0x0308 (size: 0x8)
    class UTextBlock* Splash_PressAnything;                                           // 0x0310 (size: 0x8)
    class UImage* SplashBGCover;                                                      // 0x0318 (size: 0x8)
    class UCanvasPanel* SplashCanvas;                                                 // 0x0320 (size: 0x8)
    class UW_BetaNotice_C* W_BetaNotice_129;                                          // 0x0328 (size: 0x8)
    class UW_DemoNotice_C* W_DemoNotice;                                              // 0x0330 (size: 0x8)
    class UW_MainMenu_ContinueGame_C* W_MainMenu_ContinueGame;                        // 0x0338 (size: 0x8)
    class UW_MainMenu_CustomizeCharacter_C* W_MainMenu_CustomizeCharacter;            // 0x0340 (size: 0x8)
    class UW_MainMenu_HostGame_C* W_MainMenu_HostGame;                                // 0x0348 (size: 0x8)
    class UW_MainMenu_Initial_C* W_MainMenu_Initial;                                  // 0x0350 (size: 0x8)
    class UW_MainMenu_Play_C* W_MainMenu_Play;                                        // 0x0358 (size: 0x8)
    class UW_ServerBrowser_C* W_ServerBrowser;                                        // 0x0360 (size: 0x8)
    class UW_SettingsMenu_C* W_SettingsMenu;                                          // 0x0368 (size: 0x8)
    class UW_SettingsPage_FirstTime_C* W_SettingsPage_FirstTime;                      // 0x0370 (size: 0x8)
    class ACharacterCustomization_BP_C* CharacterCustomizationRef;                    // 0x0378 (size: 0x8)

    void WidgetAction_CloseMenu(bool& Handled);
    void WidgetAction_CycleMenu(bool Next, bool& Handled);
    void CheckNotices();
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply On_SplashBGCover_MouseButtonDown_0(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void SetMainMenuDemoMode();
    void OnFailure_E8952CF74CB5ADEDE9BD26B826E4E6D2();
    void OnSuccess_E8952CF74CB5ADEDE9BD26B826E4E6D2();
    void SessionInviteAccepted(FBlueprintSessionResult Session);
    void CustomizationFinished();
    void FirstTimeSettings_Completed();
    void Construct();
    void FadeOutSplash();
    void Continue_EarlyAccess();
    void ExecuteUbergraph_W_MainMenu_Master(int32 EntryPoint);
}; // Size: 0x380

#endif
