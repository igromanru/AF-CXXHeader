#ifndef UE4SS_SDK_WBP_ModioDefaultEnumSelectorEntry_HPP
#define UE4SS_SDK_WBP_ModioDefaultEnumSelectorEntry_HPP

class UWBP_ModioDefaultEnumSelectorEntry_C : public UModioEnumSelectorEntry
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UWBP_ModioDefaultButton_C* EntryButton;                                     // 0x0390 (size: 0x8)

    void GetLabelWidget();
    void GetClickableWidget();
    void OnAddedToFocusPath(FFocusEvent InFocusEvent);
    void ExecuteUbergraph_WBP_ModioDefaultEnumSelectorEntry(int32 EntryPoint);
}; // Size: 0x398

#endif
