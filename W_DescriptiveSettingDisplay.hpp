#ifndef UE4SS_SDK_W_DescriptiveSettingDisplay_HPP
#define UE4SS_SDK_W_DescriptiveSettingDisplay_HPP

class UW_DescriptiveSettingDisplay_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG;                                                                 // 0x02E8 (size: 0x8)
    class UTextBlock* DisplayDescText;                                                // 0x02F0 (size: 0x8)
    class UTextBlock* DisplayTextLabel;                                               // 0x02F8 (size: 0x8)
    class UImage* Image_172;                                                          // 0x0300 (size: 0x8)
    FText Title;                                                                      // 0x0308 (size: 0x10)
    FText Description;                                                                // 0x0318 (size: 0x10)
    TSoftObjectPtr<UTexture2D> SampleImage;                                           // 0x0328 (size: 0x28)

    void OnLoaded_C88BCC0F4F89BE66950137ACBE60CC53(class UObject* Loaded);
    void RefreshDisplay();
    void Construct();
    void ExecuteUbergraph_W_DescriptiveSettingDisplay(int32 EntryPoint);
}; // Size: 0x350

#endif
