#ifndef UE4SS_SDK_W_Credits_CategoryTitle_HPP
#define UE4SS_SDK_W_Credits_CategoryTitle_HPP

class UW_Credits_CategoryTitle_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* Cat_Subtitle;                                                   // 0x02E8 (size: 0x8)
    class UTextBlock* Cat_Title;                                                      // 0x02F0 (size: 0x8)
    FString Text;                                                                     // 0x02F8 (size: 0x10)
    FString Subtext;                                                                  // 0x0308 (size: 0x10)

    void Construct();
    void ExecuteUbergraph_W_Credits_CategoryTitle(int32 EntryPoint);
}; // Size: 0x318

#endif
