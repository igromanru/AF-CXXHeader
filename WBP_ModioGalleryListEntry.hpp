#ifndef UE4SS_SDK_WBP_ModioGalleryListEntry_HPP
#define UE4SS_SDK_WBP_ModioGalleryListEntry_HPP

class UWBP_ModioGalleryListEntry_C : public UModioGalleryListEntry
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    class UModioDefaultImage* Icon;                                                   // 0x0368 (size: 0x8)
    FLinearColorRef UnSelectedColor;                                                  // 0x0370 (size: 0x18)
    FLinearColorRef SelectedColor;                                                    // 0x0388 (size: 0x18)

    void UpdateIconColor(bool bIsSelected);
    void GetIconImage_ConfigurableColor();
    void GetIconImage();
    void PreConstruct(bool IsDesignTime);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void ExecuteUbergraph_WBP_ModioGalleryListEntry(int32 EntryPoint);
}; // Size: 0x3A0

#endif
