#ifndef UE4SS_SDK_W_OperatingSystem_Main_HPP
#define UE4SS_SDK_W_OperatingSystem_Main_HPP

class UW_OperatingSystem_Main_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* PopupAttachment;                                          // 0x02E8 (size: 0x8)
    class UImage* AttachmentBar_BG;                                                   // 0x02F0 (size: 0x8)
    class UImage* AttachmentBG;                                                       // 0x02F8 (size: 0x8)
    class UImage* AttachmentImage;                                                    // 0x0300 (size: 0x8)
    class UButton* Button_Email;                                                      // 0x0308 (size: 0x8)
    class UButton* Button_ExitEmails;                                                 // 0x0310 (size: 0x8)
    class UButton* Button_ExitImage;                                                  // 0x0318 (size: 0x8)
    class UButton* Button_Logout;                                                     // 0x0320 (size: 0x8)
    class UButton* Button_StartMenu;                                                  // 0x0328 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0330 (size: 0x8)
    class UUniformGridPanel* DesktopIconGrid;                                         // 0x0338 (size: 0x8)
    class UImage* DesktopTaskbarBG;                                                   // 0x0340 (size: 0x8)
    class UImage* Email_BG_Image;                                                     // 0x0348 (size: 0x8)
    class UTextBlock* EmailFolder_NameText;                                           // 0x0350 (size: 0x8)
    class UScrollBox* EmailMessage_ScrollBox;                                         // 0x0358 (size: 0x8)
    class UTextBlock* EmailParagraph;                                                 // 0x0360 (size: 0x8)
    class UCanvasPanel* EmailWindow;                                                  // 0x0368 (size: 0x8)
    class UImage* EmailWindowBG;                                                      // 0x0370 (size: 0x8)
    class UTextBlock* EmailWindowTitleText;                                           // 0x0378 (size: 0x8)
    class UHorizontalBox* HBOX_Attachments;                                           // 0x0380 (size: 0x8)
    class UCanvasPanel* ImagePopupCanvas;                                             // 0x0388 (size: 0x8)
    class UImage* MouseCursor;                                                        // 0x0390 (size: 0x8)
    class UTextBlock* NoAttachmentsText;                                              // 0x0398 (size: 0x8)
    class UTextBlock* PopupFilenameText;                                              // 0x03A0 (size: 0x8)
    class UScrollBox* ScrollBox_Emails;                                               // 0x03A8 (size: 0x8)
    class UCanvasPanel* StartMenuWindow;                                              // 0x03B0 (size: 0x8)
    class UTextBlock* TimeText;                                                       // 0x03B8 (size: 0x8)
    class UButton* CurrentHoveredButton;                                              // 0x03C0 (size: 0x8)
    TArray<FDataTableRowHandle> Emails;                                               // 0x03C8 (size: 0x10)
    class AComputerTerminal_Standard_C* TerminalParent;                               // 0x03D8 (size: 0x8)
    bool WishlistTerminal;                                                            // 0x03E0 (size: 0x1)
    TEnumAsByte<E_OS_Themes::Type> OS_Visual_Theme;                                   // 0x03E1 (size: 0x1)
    TMap<TEnumAsByte<E_OS_Themes::Type>, FLinearColor> OS_Visual_MainText_Color;      // 0x03E8 (size: 0x50)
    TMap<TEnumAsByte<E_OS_Themes::Type>, FLinearColor> OS_Visual_DesktopIconText_Color; // 0x0438 (size: 0x50)
    TMap<TEnumAsByte<E_OS_Themes::Type>, FLinearColor> OS_Visual_XButton_Color;       // 0x0488 (size: 0x50)
    FName DefaultApp;                                                                 // 0x04D8 (size: 0x8)
    TMap<class FName, class FOS_AppData> Apps;                                        // 0x04E0 (size: 0x50)

    void WidgetAction_CloseMenu(bool& Handled);
    void WidgetAction_CycleMenu(bool Next, bool& Handled);
    void WidgetAction_CycleCrafting(bool Next, bool& Handled);
    void WidgetAction_FaceTop(bool& Handled);
    void WidgetAction_DPadDirection(TEnumAsByte<E_NavigationDirection::Type> Direction, bool& Handled);
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void GetEmails(TArray<FDataTableRowHandle>& Emails);
    void UpdateAppIcons();
    void AddDesktopIcon(class UWidget* Content);
    void SetTheme();
    void ToggleAttachmentPopup(bool Show, class UTexture2D* Texture, FText Filename);
    void PopulateAttachments(TArray<FEmailAttachment_Struct>& AttachmentsArray);
    void GetCurrentHoverButton(bool& Success, class UButton*& Widget);
    void OnLoaded_8D920A7F4510E1A6D22EE1A4EB44251D(UClass* Loaded);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ToggleEmail(bool Open);
    void BndEvt__Button_Email_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Email_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Email_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_ExitEmails_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_ExitEmails_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_ExitEmails_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Logout_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void ToggleStartMenu(bool Open);
    void BndEvt__Button_StartMenu_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void PopulateEmailInbox(const TArray<FDataTableRowHandle>& Emails);
    void BndEvt__W_OperatingSystem_Main_Button_ExitImage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void DelayShowAttachmentPopup();
    void Construct();
    void UpdateOSTime(double TimeInSeconds);
    void PreConstruct(bool IsDesignTime);
    void OpenApp(FName ButtonID);
    void ClickAppIcon(class UW_OsAppIconButton_C* Widget, FName ButtonID);
    void Begin_TerminalInteract();
    void End_TerminalInteract();
    void ExecuteUbergraph_W_OperatingSystem_Main(int32 EntryPoint);
}; // Size: 0x530

#endif
