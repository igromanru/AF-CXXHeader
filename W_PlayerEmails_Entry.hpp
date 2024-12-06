#ifndef UE4SS_SDK_W_PlayerEmails_Entry_HPP
#define UE4SS_SDK_W_PlayerEmails_Entry_HPP

class UW_PlayerEmails_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UCheckBox* EmailCheckbox;                                                   // 0x02E8 (size: 0x8)
    class UTextBlock* EmailTitle;                                                     // 0x02F0 (size: 0x8)
    class UImage* Paperclip;                                                          // 0x02F8 (size: 0x8)
    FAbiotic_EmailStruct EmailContent;                                                // 0x0300 (size: 0x68)
    class UW_Player_Emails_Main_C* ParentJournal;                                     // 0x0368 (size: 0x8)
    FName Email Row Name;                                                             // 0x0370 (size: 0x8)
    FSlateColor JournalTextColor;                                                     // 0x0378 (size: 0x14)

    void DisplayNewEmail();
    void DeselectOtherEmails();
    void Construct();
    void BndEvt__EmailCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void SetAsActiveEmail();
    void ExecuteUbergraph_W_PlayerEmails_Entry(int32 EntryPoint);
}; // Size: 0x38C

#endif
