#ifndef UE4SS_SDK_W_Email_SectionDivider_HPP
#define UE4SS_SDK_W_Email_SectionDivider_HPP

class UW_Email_SectionDivider_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* DividerImage;                                                       // 0x02E8 (size: 0x8)
    FLinearColor BarColor;                                                            // 0x02F0 (size: 0x10)

    void Construct();
    void ExecuteUbergraph_W_Email_SectionDivider(int32 EntryPoint);
}; // Size: 0x300

#endif
