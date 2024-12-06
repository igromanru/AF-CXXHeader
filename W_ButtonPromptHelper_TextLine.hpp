#ifndef UE4SS_SDK_W_ButtonPromptHelper_TextLine_HPP
#define UE4SS_SDK_W_ButtonPromptHelper_TextLine_HPP

class UW_ButtonPromptHelper_TextLine_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* TextBlock_71;                                                   // 0x02E8 (size: 0x8)
    FText Text;                                                                       // 0x02F0 (size: 0x10)

    void Construct();
    void ExecuteUbergraph_W_ButtonPromptHelper_TextLine(int32 EntryPoint);
}; // Size: 0x300

#endif
