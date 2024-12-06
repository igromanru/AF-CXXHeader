#ifndef UE4SS_SDK_W_ButtonPromptHelper_Entry_HPP
#define UE4SS_SDK_W_ButtonPromptHelper_Entry_HPP

class UW_ButtonPromptHelper_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UHorizontalBox* HorizontalBox;                                              // 0x02E8 (size: 0x8)
    FText TextToDisplay;                                                              // 0x02F0 (size: 0x10)
    TArray<FKeybindSettingRowHandle> Inputs;                                          // 0x0300 (size: 0x10)
    bool RanConstruct;                                                                // 0x0310 (size: 0x1)

    void AddKeybinds();
    void AddText(FText Text);
    void Construct();
    void ExecuteUbergraph_W_ButtonPromptHelper_Entry(int32 EntryPoint);
}; // Size: 0x311

#endif
