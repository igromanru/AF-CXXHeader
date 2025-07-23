#ifndef UE4SS_SDK_W_Credits_Main_HPP
#define UE4SS_SDK_W_Credits_Main_HPP

class UW_Credits_Main_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x02E8 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x02F0 (size: 0x8)
    class UW_MainMenuButton_C* BackButton;                                            // 0x02F8 (size: 0x8)
    class UW_MainMenuButton_C* BackButton_1;                                          // 0x0300 (size: 0x8)
    class UHorizontalBox* GameplayButtons;                                            // 0x0308 (size: 0x8)
    class UBorder* MainBorder;                                                        // 0x0310 (size: 0x8)
    class UHorizontalBox* MenuButtons;                                                // 0x0318 (size: 0x8)
    class UScrollBox* Scrollbox_Credits;                                              // 0x0320 (size: 0x8)
    class UW_Credits_CategoryTitle_C* W_Credits_CategoryTitle;                        // 0x0328 (size: 0x8)
    class UW_Credits_GenericEntry_C* W_Credits_GenericEntry;                          // 0x0330 (size: 0x8)
    class UW_Credits_GenericEntry_C* W_Credits_GenericEntry_68;                       // 0x0338 (size: 0x8)
    class UW_Keybind_C* W_Keybind;                                                    // 0x0340 (size: 0x8)
    class UW_Keybind_C* W_Keybind_1;                                                  // 0x0348 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x0350 (size: 0x8)
    bool Scroll;                                                                      // 0x0358 (size: 0x1)
    double CurrentScrollSpeed;                                                        // 0x0360 (size: 0x8)
    double DEFAULT_ScrollSpeed;                                                       // 0x0368 (size: 0x8)
    double DEBUG_ScrollSpeed;                                                         // 0x0370 (size: 0x8)
    bool GameplayMode;                                                                // 0x0378 (size: 0x1)
    bool ReachedEnd;                                                                  // 0x0379 (size: 0x1)
    bool EditorDebugMode;                                                             // 0x037A (size: 0x1)
    FW_Credits_Main_CCreditsEndReached CreditsEndReached;                             // 0x0380 (size: 0x10)
    void CreditsEndReached(bool ManuallyCalled);

    void WidgetAction_CloseMenu(bool& Handled);
    void WidgetAction_CycleMenu(bool Next, bool& Handled);
    void WidgetAction_CycleCrafting(bool Next, bool& Handled);
    void WidgetAction_FaceTop(bool& Handled);
    void WidgetAction_DPadDirection(TEnumAsByte<E_NavigationDirection::Type> Direction, bool& Handled);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Gameplay_ExitCredits();
    void BndEvt__W_Credits_Main_BackButton_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void Menu_ExitCredits();
    void ExecuteUbergraph_W_Credits_Main(int32 EntryPoint);
    void CreditsEndReached__DelegateSignature(bool ManuallyCalled);
}; // Size: 0x390

#endif
