#ifndef UE4SS_SDK_WBP_ModioDefaultCommandList_HPP
#define UE4SS_SDK_WBP_ModioDefaultCommandList_HPP

class UWBP_ModioDefaultCommandList_C : public UModioUIComponentBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UModioDefaultObjectSelector* InternalCommandList;                           // 0x0350 (size: 0x8)
    FWBP_ModioDefaultCommandList_COnSelectionChanged OnSelectionChanged;              // 0x0358 (size: 0x10)
    void OnSelectionChanged(class UObject* SelectedObject);

    void GetLastSelectionIndex();
    void GetWidgetForValue(class UObject* Value);
    void GetIndexForValue(class UObject* Value);
    void GetNumEntries();
    void GetSingleSelectionIndex();
    void GetMultiSelectionAllowed();
    void GetSelectedValues();
    void GetSingleSelectedValue();
    void OnSetSelectedStateForIndex(int32 Index, bool NewSelectionState, bool EmitSelectionEvent);
    void OnEntryGenerated(class UWidget* ObjectWidget, class UObject* Object);
    void GetCommandListWidget_ObjectList();
    void OnSetValues(const TArray<UObject*>& InValues);
    void GetCommandListWidget();
    void GetWidgetToFocus(EUINavigation NavigationType);
    void OnEntryClicked(class UObject* ClickContext);
    void ClearSelectedValues();
    void SetListEntryWidgetClass(TSubclassOf<class UWidget> InNewEntryClass);
    void SetMultiSelectionAllowed(bool bMultiSelectionAllowed);
    void SetSelectedStateForValue(class UObject* Value, bool bNewSelectionState, bool bEmitSelectionEvent);
    void SetSingleSelectionByIndex(int32 Index, bool bEmitSelectionEvent);
    void SetSingleSelectionByValue(class UObject* Value, bool bEmitSelectionEvent);
    void SetValues(const TArray<UObject*>& InValues);
    void AddSelectionChangedHandler(const FAddSelectionChangedHandlerHandler& Handler);
    void RemoveSelectionChangedHandler(const FRemoveSelectionChangedHandlerHandler& Handler);
    void SetSelectedStateForIndex(int32 Index, bool bNewSelectionState, bool bEmitSelectionEvent);
    void OnInitialized();
    void ExecuteUbergraph_WBP_ModioDefaultCommandList(int32 EntryPoint);
    void OnSelectionChanged__DelegateSignature(class UObject* SelectedObject);
}; // Size: 0x368

#endif
