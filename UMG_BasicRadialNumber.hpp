#ifndef UE4SS_SDK_UMG_BasicRadialNumber_HPP
#define UE4SS_SDK_UMG_BasicRadialNumber_HPP

class UUMG_BasicRadialNumber_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* HotkeyNumberBox;                                                    // 0x02E8 (size: 0x8)
    class UTextBlock* HotkeyNumberText;                                               // 0x02F0 (size: 0x8)
    class USizeBox* Sizer;                                                            // 0x02F8 (size: 0x8)
    int32 Number;                                                                     // 0x0300 (size: 0x4)
    double IconSize;                                                                  // 0x0308 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_UMG_BasicRadialNumber(int32 EntryPoint);
}; // Size: 0x310

#endif
