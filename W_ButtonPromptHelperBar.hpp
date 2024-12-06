#ifndef UE4SS_SDK_W_ButtonPromptHelperBar_HPP
#define UE4SS_SDK_W_ButtonPromptHelperBar_HPP

class UW_ButtonPromptHelperBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_77;                                           // 0x02E8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F0 (size: 0x8)
    TArray<FButtonPromptDisplay_Struct> ActionPromptsToDisplay;                       // 0x02F8 (size: 0x10)
    bool RanConstruct;                                                                // 0x0308 (size: 0x1)

    void Construct();
    void ExecuteUbergraph_W_ButtonPromptHelperBar(int32 EntryPoint);
}; // Size: 0x309

#endif
