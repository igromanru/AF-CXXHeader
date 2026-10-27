#ifndef UE4SS_SDK_WBP_ModioActionWidgetButton_HPP
#define UE4SS_SDK_WBP_ModioActionWidgetButton_HPP

class UWBP_ModioActionWidgetButton_C : public UModioButtonWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    FButtonStyle ButtonStyle;                                                         // 0x0380 (size: 0x3F0)
    FLinearColor ButtonColorAndOpacity;                                               // 0x0770 (size: 0x10)
    FLinearColor ButtonBackgroundColor;                                               // 0x0780 (size: 0x10)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_ModioActionWidgetButton(int32 EntryPoint);
}; // Size: 0x790

#endif
