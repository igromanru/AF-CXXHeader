#ifndef UE4SS_SDK_WBP_ModioDefaultCommandEntry_HPP
#define UE4SS_SDK_WBP_ModioDefaultCommandEntry_HPP

class UWBP_ModioDefaultCommandEntry_C : public UModioCommandEntry
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UWBP_ModioDefaultButton_C* InternalButton;                                  // 0x0378 (size: 0x8)

    void ItemSelectionChangedHandler(bool bIsSelected);
    void GetLabelWidget();
    void GetClickableWidget();
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void ExecuteUbergraph_WBP_ModioDefaultCommandEntry(int32 EntryPoint);
}; // Size: 0x380

#endif
