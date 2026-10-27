#ifndef UE4SS_SDK_W_MainMenu_Mods_HPP
#define UE4SS_SDK_W_MainMenu_Mods_HPP

class UW_MainMenu_Mods_C : public UAbioticMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UW_MainMenuButton_C* Button_Back;                                           // 0x02E8 (size: 0x8)
    class UW_MainMenuButton_C* Button_Browse;                                         // 0x02F0 (size: 0x8)
    class UW_MainMenuButton_C* Button_Installed;                                      // 0x02F8 (size: 0x8)
    class UImage* Image_253;                                                          // 0x0300 (size: 0x8)
    class UCanvasPanel* LoggedInCanvas;                                               // 0x0308 (size: 0x8)
    class UCanvasPanel* LoginCanvas;                                                  // 0x0310 (size: 0x8)
    class UCanvasPanel* Splash_Loading;                                               // 0x0318 (size: 0x8)
    class UTextBlock* Splash_LoadingText;                                             // 0x0320 (size: 0x8)
    class UWBP_ModioModBrowser_C* WBP_ModioModBrowser;                                // 0x0328 (size: 0x8)
    bool bAcceptToS;                                                                  // 0x0330 (size: 0x1)
    class UW_MenuPopup_YesNo_C* ActivePopup;                                          // 0x0338 (size: 0x8)

    void RemoveActivePopup();
    void GoToMainMenu();
    void OnFailure_AC0A894A4996357F97F69284FD0DD09D(FString PrivacyPolicyUrl, FString TermsOfServiceUrl);
    void OnTermsOfServiceAcceptanceNeeded_AC0A894A4996357F97F69284FD0DD09D(FString PrivacyPolicyUrl, FString TermsOfServiceUrl);
    void OnSuccess_AC0A894A4996357F97F69284FD0DD09D(FString PrivacyPolicyUrl, FString TermsOfServiceUrl);
    void BndEvt__W_MainMenu_Mods_Button_Back_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature();
    void StartAuthentication();
    void ToS_Yes();
    void ToS_No();
    void LoginRetryNo();
    void LoginRetryYes();
    void BndEvt__W_MainMenu_Mods_Button_Installed_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void BndEvt__W_MainMenu_Mods_Button_Browse_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature();
    void BndEvt__W_MainMenu_Mods_WBP_ModioModBrowser_K2Node_ComponentBoundEvent_3_ClosedPressed__DelegateSignature();
    void ExecuteUbergraph_W_MainMenu_Mods(int32 EntryPoint);
}; // Size: 0x340

#endif
