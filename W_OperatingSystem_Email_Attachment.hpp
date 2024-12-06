#ifndef UE4SS_SDK_W_OperatingSystem_Email_Attachment_HPP
#define UE4SS_SDK_W_OperatingSystem_Email_Attachment_HPP

class UW_OperatingSystem_Email_Attachment_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* AttachmentIcon;                                                     // 0x02E8 (size: 0x8)
    class UButton* Button_130;                                                        // 0x02F0 (size: 0x8)
    class UTextBlock* FilenameText;                                                   // 0x02F8 (size: 0x8)
    FEmailAttachment_Struct AttachmentData;                                           // 0x0300 (size: 0x48)
    class UW_OperatingSystem_Main_C* ParentOSWidget;                                  // 0x0348 (size: 0x8)

    void BndEvt__W_OperatingSystem_Email_Attachment_Button_130_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_W_OperatingSystem_Email_Attachment(int32 EntryPoint);
}; // Size: 0x350

#endif
