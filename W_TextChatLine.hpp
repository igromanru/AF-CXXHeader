#ifndef UE4SS_SDK_W_TextChatLine_HPP
#define UE4SS_SDK_W_TextChatLine_HPP

class UW_TextChatLine_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Popin;                                                    // 0x02E8 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x02F0 (size: 0x8)
    class UHorizontalBox* HBoxMain;                                                   // 0x02F8 (size: 0x8)
    class UTextBlock* MessageText;                                                    // 0x0300 (size: 0x8)
    class USpacer* PrefixSpacer;                                                      // 0x0308 (size: 0x8)
    class UTextBlock* PrefixText;                                                     // 0x0310 (size: 0x8)
    FText Message;                                                                    // 0x0318 (size: 0x10)
    FLinearColor MessageColor;                                                        // 0x0328 (size: 0x10)
    FText Prefix;                                                                     // 0x0338 (size: 0x10)
    FLinearColor PrefixColor;                                                         // 0x0348 (size: 0x10)
    bool HasFadedOut;                                                                 // 0x0358 (size: 0x1)

    void Construct();
    void ParentChatBoxStateChange(bool Opened);
    void RestartFadeOut();
    void ExecuteUbergraph_W_TextChatLine(int32 EntryPoint);
}; // Size: 0x359

#endif
