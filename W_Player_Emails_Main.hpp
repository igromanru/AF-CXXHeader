#ifndef UE4SS_SDK_W_Player_Emails_Main_HPP
#define UE4SS_SDK_W_Player_Emails_Main_HPP

class UW_Player_Emails_Main_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* LoadAttachment;                                           // 0x02E8 (size: 0x8)
    class UImage* AttachmentImage;                                                    // 0x02F0 (size: 0x8)
    class UImage* Attachments_BG;                                                     // 0x02F8 (size: 0x8)
    class UImage* BG_LOGO;                                                            // 0x0300 (size: 0x8)
    class UButton* CloseAttachmentButton;                                             // 0x0308 (size: 0x8)
    class UScrollBox* EmailMessage_ScrollBox;                                         // 0x0310 (size: 0x8)
    class UTextBlock* EmailParagraph;                                                 // 0x0318 (size: 0x8)
    class UHorizontalBox* HBOX_Attachments;                                           // 0x0320 (size: 0x8)
    class UCanvasPanel* ImageRevealCanvas;                                            // 0x0328 (size: 0x8)
    class UCanvasPanel* MainCanvas;                                                   // 0x0330 (size: 0x8)
    class UTextBlock* NoAttachmentsText;                                              // 0x0338 (size: 0x8)
    class UScrollBox* ScrollBox_EmailEntries;                                         // 0x0340 (size: 0x8)

    void PopulateAttachments(TArray<FEmailAttachment_Struct>& AttachmentsArray);
    void RefreshEmailList();
    void Construct();
    void DelayShowAttachmentPopup();
    void ToggleAttachmentPopup(bool Show, class UTexture2D* Texture);
    void BndEvt__W_Player_Emails_Main_CloseAttachmentButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_W_Player_Emails_Main(int32 EntryPoint);
}; // Size: 0x348

#endif
