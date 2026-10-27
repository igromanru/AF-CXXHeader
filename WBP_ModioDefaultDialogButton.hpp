#ifndef UE4SS_SDK_WBP_ModioDefaultDialogButton_HPP
#define UE4SS_SDK_WBP_ModioDefaultDialogButton_HPP

class UWBP_ModioDefaultDialogButton_C : public UWBP_ModioDefaultButton_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0518 (size: 0x8)

    void OnSetDataSource(class UObject* NewDataSource);
    void BP_OnEntryReleased();
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void SetDataSource(class UObject* InDataSource);
    void ExecuteUbergraph_WBP_ModioDefaultDialogButton(int32 EntryPoint);
}; // Size: 0x520

#endif
