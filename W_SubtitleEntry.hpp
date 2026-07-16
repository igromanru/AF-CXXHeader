#ifndef UE4SS_SDK_W_SubtitleEntry_HPP
#define UE4SS_SDK_W_SubtitleEntry_HPP

class UW_SubtitleEntry_C : public UW_SubtitleEntry_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UBorder* Border_SubtitleBG;                                                 // 0x0370 (size: 0x8)
    class USizeBox* DirectionSizeBox;                                                 // 0x0378 (size: 0x8)
    class UImage* Image_Arrow;                                                        // 0x0380 (size: 0x8)
    class UTextBlock* SubtitleNameWidget;                                             // 0x0388 (size: 0x8)
    class UTextBlock* SubtitleTextWidget;                                             // 0x0390 (size: 0x8)

    void GetSubtitleTextWidget(class UTextBlock*& Widget);
    void GetSubtitleNameWidget(class UTextBlock*& Widget);
    void GetSubtitleImageArrow(class UWidget*& Widget);
    void GetDirectionSizeBox(class UWidget*& Widget);
    void GetBorderSubtitleBG(class UBorder*& Widget);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_W_SubtitleEntry(int32 EntryPoint);
}; // Size: 0x398

#endif
