#ifndef UE4SS_SDK_W_TeleporterTag_Option_HPP
#define UE4SS_SDK_W_TeleporterTag_Option_HPP

class UW_TeleporterTag_Option_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* ButtonTag;                                                         // 0x02E8 (size: 0x8)
    class UTextBlock* TextName;                                                       // 0x02F0 (size: 0x8)
    FString Name;                                                                     // 0x02F8 (size: 0x10)
    int32 Index;                                                                      // 0x0308 (size: 0x4)

    void Construct();
    void BndEvt__W_TeleporterTag_Option_Button_Accept_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_W_TeleporterTag_Option(int32 EntryPoint);
}; // Size: 0x30C

#endif
