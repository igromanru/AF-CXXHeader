#ifndef UE4SS_SDK_W_OperatingSystem_InboxEntry_HPP
#define UE4SS_SDK_W_OperatingSystem_InboxEntry_HPP

class UW_OperatingSystem_InboxEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UCheckBox* EmailCheckbox;                                                   // 0x02E8 (size: 0x8)
    class UTextBlock* EmailTitle;                                                     // 0x02F0 (size: 0x8)
    class UImage* Paperclip;                                                          // 0x02F8 (size: 0x8)
    class UW_OperatingSystem_Main_C* ParentOperatingSystem;                           // 0x0300 (size: 0x8)
    FAbiotic_EmailStruct EmailStruct;                                                 // 0x0308 (size: 0x68)
    FName Email Row Name;                                                             // 0x0370 (size: 0x8)
    FCheckBoxStyle CheckBoxStyle_DefaultTheme;                                        // 0x0380 (size: 0xAD0)
    FCheckBoxStyle CheckBoxStyle_StoneTheme;                                          // 0x0E50 (size: 0xAD0)

    void DisplayNewEmail();
    void PopulateAttachments();
    void DeselectOtherEmails();
    void Construct();
    void BndEvt__EmailCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void SetAsActiveEmail();
    void ExecuteUbergraph_W_OperatingSystem_InboxEntry(int32 EntryPoint);
}; // Size: 0x1920

#endif
