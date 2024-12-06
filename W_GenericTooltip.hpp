#ifndef UE4SS_SDK_W_GenericTooltip_HPP
#define UE4SS_SDK_W_GenericTooltip_HPP

class UW_GenericTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* Tooltip_Text;                                                   // 0x02E8 (size: 0x8)
    class UTextBlock* Tooltip_Text2;                                                  // 0x02F0 (size: 0x8)
    class UTextBlock* Tooltip_Text3;                                                  // 0x02F8 (size: 0x8)
    FText Text;                                                                       // 0x0300 (size: 0x10)
    FText Text_Additional;                                                            // 0x0310 (size: 0x10)
    FText Text_Negative;                                                              // 0x0320 (size: 0x10)

    void RefreshTooltip();
    void Construct();
    void ExecuteUbergraph_W_GenericTooltip(int32 EntryPoint);
}; // Size: 0x330

#endif
