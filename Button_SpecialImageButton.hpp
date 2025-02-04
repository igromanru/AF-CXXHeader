#ifndef UE4SS_SDK_Button_SpecialImageButton_HPP
#define UE4SS_SDK_Button_SpecialImageButton_HPP

class UButton_SpecialImageButton_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG_Image;                                                           // 0x02E8 (size: 0x8)
    class UButton* Button_0;                                                          // 0x02F0 (size: 0x8)
    class UTextBlock* MainText;                                                       // 0x02F8 (size: 0x8)
    FText DisplayText;                                                                // 0x0300 (size: 0x10)
    class UTexture2D* BackgroundImage;                                                // 0x0310 (size: 0x8)
    FLinearColor TextColor;                                                           // 0x0318 (size: 0x10)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Button_SpecialImageButton(int32 EntryPoint);
}; // Size: 0x328

#endif
