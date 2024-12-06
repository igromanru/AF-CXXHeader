#ifndef UE4SS_SDK_StyledKeyLabel_HPP
#define UE4SS_SDK_StyledKeyLabel_HPP

class UStyledKeyLabel_C : public UKeyLabel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UImage* IconImage;                                                          // 0x0348 (size: 0x8)
    class UTextBlock* LabelText;                                                      // 0x0350 (size: 0x8)
    bool UseBrackets;                                                                 // 0x0358 (size: 0x1)

    FSlateBrush GetIconBrush();
    FText GetDisplayNameUpper();
    void UpdateKeyLabel();
    void ExecuteUbergraph_StyledKeyLabel(int32 EntryPoint);
}; // Size: 0x359

#endif
