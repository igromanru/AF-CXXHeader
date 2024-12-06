#ifndef UE4SS_SDK_W_Email_SectionBodyText_HPP
#define UE4SS_SDK_W_Email_SectionBodyText_HPP

class UW_Email_SectionBodyText_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* EmailParagraph;                                                 // 0x02E8 (size: 0x8)
    FString BodyText;                                                                 // 0x02F0 (size: 0x10)
    FSlateColor TextColor;                                                            // 0x0300 (size: 0x14)
    bool BiggerFont;                                                                  // 0x0314 (size: 0x1)
    TEnumAsByte<E_OS_Themes::Type> OSTheme;                                           // 0x0315 (size: 0x1)

    void Construct();
    void ExecuteUbergraph_W_Email_SectionBodyText(int32 EntryPoint);
}; // Size: 0x316

#endif
