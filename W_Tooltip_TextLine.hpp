#ifndef UE4SS_SDK_W_Tooltip_TextLine_HPP
#define UE4SS_SDK_W_Tooltip_TextLine_HPP

class UW_Tooltip_TextLine_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* TooltipTextLine;                                                // 0x02E8 (size: 0x8)
    FText Text;                                                                       // 0x02F0 (size: 0x10)
    FLinearColor TextColor;                                                           // 0x0300 (size: 0x10)

    void Construct();
    void ExecuteUbergraph_W_Tooltip_TextLine(int32 EntryPoint);
}; // Size: 0x310

#endif
