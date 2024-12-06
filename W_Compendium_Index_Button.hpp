#ifndef UE4SS_SDK_W_Compendium_Index_Button_HPP
#define UE4SS_SDK_W_Compendium_Index_Button_HPP

class UW_Compendium_Index_Button_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* AnimateUnreadFlicker;                                     // 0x02E8 (size: 0x8)
    class UButton* Button;                                                            // 0x02F0 (size: 0x8)
    class UImage* Icon_UnreadCompendiumEntries;                                       // 0x02F8 (size: 0x8)
    class UTextBlock* TextBelow;                                                      // 0x0300 (size: 0x8)
    FText ButtonText;                                                                 // 0x0308 (size: 0x10)
    class UTexture2D* Icon;                                                           // 0x0318 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void UpdateUnreadIconVisual(bool Play);
    void ExecuteUbergraph_W_Compendium_Index_Button(int32 EntryPoint);
}; // Size: 0x320

#endif
