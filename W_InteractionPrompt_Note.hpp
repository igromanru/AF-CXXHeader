#ifndef UE4SS_SDK_W_InteractionPrompt_Note_HPP
#define UE4SS_SDK_W_InteractionPrompt_Note_HPP

class UW_InteractionPrompt_Note_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* NoteText;                                                       // 0x02E8 (size: 0x8)
    FText Text;                                                                       // 0x02F0 (size: 0x10)

    void Construct();
    void ExecuteUbergraph_W_InteractionPrompt_Note(int32 EntryPoint);
}; // Size: 0x300

#endif
