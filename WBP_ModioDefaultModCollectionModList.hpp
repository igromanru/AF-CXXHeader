#ifndef UE4SS_SDK_WBP_ModioDefaultModCollectionModList_HPP
#define UE4SS_SDK_WBP_ModioDefaultModCollectionModList_HPP

class UWBP_ModioDefaultModCollectionModList_C : public UModioUIComponentBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UModioDefaultObjectSelector* InternalDependecyList;                         // 0x0350 (size: 0x8)
    FWBP_ModioDefaultModCollectionModList_COnSelectionChanged OnSelectionChanged;     // 0x0358 (size: 0x10)
    void OnSelectionChanged(class UObject* SelectedObject);

    void GetLastSelectionIndex();
    void GetWidgetForValue(class UObject* Value);
    void GetIndexForValue(class UObject* Value);
    void GetNumEntries();
    void GetSingleSelectionIndex();
    void GetMultiSelectionAllowed();
    void GetSelectedValues();
    void GetSingleSelectedValue();
    void OnEntryGenerated(class UWidget* ObjectWidget, class UObject* Object);
    void Get Dependency List Widget_ObjectList();
    void GetWidgetToFocus(EUINavigation NavigationType);
    void Get Dependency List Widget_Selector();
    void OnEntryClicked(class UObject* ClickContext);
    void ClearSelectedValues();
    void SetListEntryWidgetClass(TSubclassOf<class UWidget> InNewEntryClass);
    void SetMultiSelectionAllowed(bool bMultiSelectionAllowed);
    void SetSelectedStateForIndex(int32 Index, bool bNewSelectionState, bool bEmitSelectionEvent);
    void SetSelectedStateForValue(class UObject* Value, bool bNewSelectionState, bool bEmitSelectionEvent);
    void SetSingleSelectionByIndex(int32 Index, bool bEmitSelectionEvent);
    void SetSingleSelectionByValue(class UObject* Value, bool bEmitSelectionEvent);
    void SetValues(const TArray<UObject*>& InValues);
    void AddSelectionChangedHandler(const FAddSelectionChangedHandlerHandler& Handler);
    void RemoveSelectionChangedHandler(const FRemoveSelectionChangedHandlerHandler& Handler);
    void OnInitialized();
    void ExecuteUbergraph_WBP_ModioDefaultModCollectionModList(int32 EntryPoint);
    void OnSelectionChanged__DelegateSignature(class UObject* SelectedObject);
}; // Size: 0x368

#endif
