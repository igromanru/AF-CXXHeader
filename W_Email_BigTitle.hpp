#ifndef UE4SS_SDK_W_Email_BigTitle_HPP
#define UE4SS_SDK_W_Email_BigTitle_HPP

class UW_Email_BigTitle_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* BigTitleText;                                                   // 0x02E8 (size: 0x8)
    FString TitleText;                                                                // 0x02F0 (size: 0x10)
    FSlateColor TextColor;                                                            // 0x0300 (size: 0x14)
    bool BiggerFont;                                                                  // 0x0314 (size: 0x1)

    void Construct();
    void ExecuteUbergraph_W_Email_BigTitle(int32 EntryPoint);
}; // Size: 0x315

#endif
