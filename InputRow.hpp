#ifndef UE4SS_SDK_InputRow_HPP
#define UE4SS_SDK_InputRow_HPP

class UInputRow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG_Left;                                                            // 0x02E8 (size: 0x8)
    class UNamedSlot* Content1;                                                       // 0x02F0 (size: 0x8)
    class UNamedSlot* Content2;                                                       // 0x02F8 (size: 0x8)
    class UNamedSlot* Content2_1;                                                     // 0x0300 (size: 0x8)
    class UNamedSlot* Content2_2;                                                     // 0x0308 (size: 0x8)
    class UTextBlock* Keybind_Text;                                                   // 0x0310 (size: 0x8)
    FText Label;                                                                      // 0x0318 (size: 0x10)
    int32 Index;                                                                      // 0x0328 (size: 0x4)
    double MinDesiredWidth;                                                           // 0x0330 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_InputRow(int32 EntryPoint);
}; // Size: 0x338

#endif
