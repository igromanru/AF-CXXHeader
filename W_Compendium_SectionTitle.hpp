#ifndef UE4SS_SDK_W_Compendium_SectionTitle_HPP
#define UE4SS_SDK_W_Compendium_SectionTitle_HPP

class UW_Compendium_SectionTitle_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* Text_SubText;                                                   // 0x02E8 (size: 0x8)
    class UTextBlock* Text_Title;                                                     // 0x02F0 (size: 0x8)
    FText Title;                                                                      // 0x02F8 (size: 0x10)
    FText Subtitle;                                                                   // 0x0308 (size: 0x10)
    bool Unlocked;                                                                    // 0x0318 (size: 0x1)

    void Construct();
    void ExecuteUbergraph_W_Compendium_SectionTitle(int32 EntryPoint);
}; // Size: 0x319

#endif
