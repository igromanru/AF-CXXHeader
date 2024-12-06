#ifndef UE4SS_SDK_W_BetaWatermark_HPP
#define UE4SS_SDK_W_BetaWatermark_HPP

class UW_BetaWatermark_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* Text;                                                           // 0x02E8 (size: 0x8)
    class UTextBlock* text2;                                                          // 0x02F0 (size: 0x8)
    class UTextBlock* text_top;                                                       // 0x02F8 (size: 0x8)
    class UTextBlock* wander;                                                         // 0x0300 (size: 0x8)
    class UTextBlock* WatermarkText;                                                  // 0x0308 (size: 0x8)

    void SomeTimer();
    void Construct();
    void ExecuteUbergraph_W_BetaWatermark(int32 EntryPoint);
}; // Size: 0x310

#endif
