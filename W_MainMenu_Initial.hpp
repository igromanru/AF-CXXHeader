#ifndef UE4SS_SDK_W_MainMenu_Initial_HPP
#define UE4SS_SDK_W_MainMenu_Initial_HPP

class UW_MainMenu_Initial_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* BounceEnterArrow;                                         // 0x02E8 (size: 0x8)
    class UWidgetAnimation* DriftGlow;                                                // 0x02F0 (size: 0x8)
    class UButton* Button_Discord;                                                    // 0x02F8 (size: 0x8)
    class UButton* Button_Instagram;                                                  // 0x0300 (size: 0x8)
    class UButton* Button_Reddit;                                                     // 0x0308 (size: 0x8)
    class UButton* Button_TikTok;                                                     // 0x0310 (size: 0x8)
    class UButton* Button_Twitter;                                                    // 0x0318 (size: 0x8)
    class UButton* Button_Youtube;                                                    // 0x0320 (size: 0x8)
    class UImage* HoverGlow;                                                          // 0x0328 (size: 0x8)
    class UImage* Image;                                                              // 0x0330 (size: 0x8)
    class UImage* Image_EnterArrow;                                                   // 0x0338 (size: 0x8)
    class UImage* TestTube;                                                           // 0x0340 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_Credits;                              // 0x0348 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_Customize;                            // 0x0350 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_Feedback;                             // 0x0358 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_Play;                                 // 0x0360 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_Quit;                                 // 0x0368 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_ReportBug;                            // 0x0370 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_Settings;                             // 0x0378 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_Tutorial;                             // 0x0380 (size: 0x8)
    class UW_MainMenu_QRCode_C* W_QRCode;                                             // 0x0388 (size: 0x8)
    FString ActiveQRURL;                                                              // 0x0390 (size: 0x10)

    void HandleURL(FString URL, class UTexture2D* QRCode);
    void OnFailure_92BAA3A245E75F4C996C098BE1F18EAA();
    void OnSuccess_92BAA3A245E75F4C996C098BE1F18EAA();
    void BndEvt__W_MainMenuButton_Settings_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature();
    void BndEvt__W_MainMenuButton_Quit_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature();
    void BndEvt__W_MainMenuButton_Play_Host_K2Node_ComponentBoundEvent_5_ButtonPressed__DelegateSignature();
    void Construct();
    void Quit_Stay();
    void Quit_Quit();
    void BndEvt__W_MainMenu_Initial_W_MainMenuButton_Tutorial_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature();
    void BndEvt__W_MainMenu_Initial_W_MainMenuButton_Feedback_K2Node_ComponentBoundEvent_7_ButtonPressed__DelegateSignature();
    void BndEvt__W_MainMenu_Initial_Button_Discord_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_MainMenu_Initial_Button_Twitter_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_MainMenu_Initial_Button_Youtube_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_MainMenu_Initial_Button_TikTok_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_MainMenu_Initial_Button_Reddit_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_MainMenuButton_Settings_1_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void Popup_Tutorial_Start();
    void Popup_Tutorial_Reject();
    void BndEvt__W_MainMenu_Initial_W_MainMenuButton_Credits_K2Node_ComponentBoundEvent_12_ButtonPressed__DelegateSignature();
    void Popup_Credits_Close();
    void BndEvt__W_MainMenu_Initial_Button_Instagram_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_MainMenu_Initial_W_MainMenuButton_ReportBug_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature();
    void CrossplayEnable_Yes();
    void CrossplayEnable_No();
    void CheckCrossplay();
    void ExecuteUbergraph_W_MainMenu_Initial(int32 EntryPoint);
}; // Size: 0x3A0

#endif
