#ifndef UE4SS_SDK_W_Email_SectionFromLine_HPP
#define UE4SS_SDK_W_Email_SectionFromLine_HPP

class UW_Email_SectionFromLine_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* NameText;                                                       // 0x02E8 (size: 0x8)
    FString NameString;                                                               // 0x02F0 (size: 0x10)
    TEnumAsByte<E_OS_Themes::Type> FromStyle;                                         // 0x0300 (size: 0x1)
    bool IsReply;                                                                     // 0x0301 (size: 0x1)
    FSlateColor TextColor;                                                            // 0x0304 (size: 0x14)
    bool BiggerFont;                                                                  // 0x0318 (size: 0x1)

    void Construct();
    void ExecuteUbergraph_W_Email_SectionFromLine(int32 EntryPoint);
}; // Size: 0x319

#endif
