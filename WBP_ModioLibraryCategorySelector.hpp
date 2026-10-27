#ifndef UE4SS_SDK_WBP_ModioLibraryCategorySelector_HPP
#define UE4SS_SDK_WBP_ModioLibraryCategorySelector_HPP

class UWBP_ModioLibraryCategorySelector_C : public UModioUIComponentBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UWBP_ModioDefaultSingleTagSelectorEntry_C* AllModsSelectorEntry;            // 0x0350 (size: 0x8)
    class UVerticalBox* CategoriesVerticalBox;                                        // 0x0358 (size: 0x8)
    class UWBP_ModioDefaultIconButton_C* CategoryButton;                              // 0x0360 (size: 0x8)
    class UWBP_ModioDefaultSingleTagSelectorEntry_C* FollowedCollectionsEntry;        // 0x0368 (size: 0x8)
    class UWBP_ModioDefaultSingleTagSelectorEntry_C* InstalledSelectorEntry;          // 0x0370 (size: 0x8)
    class UModioFeatureVisibilityWidget* MonetizationVisibilityWidget;                // 0x0378 (size: 0x8)
    class UWBP_ModioDefaultSingleTagSelectorEntry_C* PurchasedSelectorEntry;          // 0x0380 (size: 0x8)
    bool bSelectable;                                                                 // 0x0388 (size: 0x1)
    bool bSelected;                                                                   // 0x0389 (size: 0x1)
    bool bToggleable;                                                                 // 0x038A (size: 0x1)
    FSlateBrush ExpandedIconBrush;                                                    // 0x0390 (size: 0xD0)
    FSlateBrush ClosedIconBrush;                                                      // 0x0460 (size: 0xD0)
    FLinearColorRef IconColor;                                                        // 0x0530 (size: 0x18)
    FWBP_ModioLibraryCategorySelector_COnNavigationOutsideBounds OnNavigationOutsideBounds; // 0x0548 (size: 0x10)
    void OnNavigationOutsideBounds(bool bDown);

    void GetLastSelectionIndex();
    void GetIndexForValue(class UObject* Value);
    void GetMultiSelectionAllowed();
    void GetNumEntries();
    void GetSelectedValues();
    void GetSingleSelectedValue();
    void GetSingleSelectionIndex();
    void GetWidgetForValue(class UObject* Value);
    void OnFollowedCollectionsSelectionChanged(class UObject* SelectionContext, bool bNewSelectedState);
    void GetFollowedCollectionsEntry(TScriptInterface<class IModioUISelectableWidget>& SelectableWidget);
    void GetWidgetToFocus(EUINavigation NavigationType);
    void DoNavigationToOutsideBounds(EUINavigation Navigation);
    void DoNavigationToPurchasedMods(EUINavigation Navigation);
    void DoNavigationToAllModsEntry(EUINavigation Navigation);
    void DoNavigationToInstalledEntry(EUINavigation Navigation);
    void DoNavigationFromTagCategoryButtonDown(EUINavigation Navigation);
    void CheckDefaultAllModsSelection();
    void AddHandlers();
    void InitializeAppearance();
    void OnInstalledSelectionChanged(class UObject* SelectionContext, bool bNewSelectedState);
    void OnPurchasedSelectionChanged(class UObject* SelectionContext, bool bNewSelectedState);
    void OnAllModsSelectionChanged(class UObject* SelectionContext, bool bNewSelectedState);
    void GetPurchasedSelectorEntry(TScriptInterface<class IModioUISelectableWidget>& SelectableWidget);
    void GetInstalledSelectorEntry(TScriptInterface<class IModioUISelectableWidget>& SelectableWidget);
    void GetAllModsSelectorEntry(TScriptInterface<class IModioUISelectableWidget>& SelectableWidget);
    void OnCategoryButtonClicked(class UObject* ClickContext);
    void SetVisualState(bool bCollapsed);
    void SetIconColors();
    void GetCategoryIconWidget(TScriptInterface<class IModioUIImageDisplayWidget>& ClickableWidget);
    void GetCategoryButtonWidget(TScriptInterface<class IModioUIClickableWidget>& ClickableWidget);
    void AddSelectionChangedHandler(const FAddSelectionChangedHandlerHandler& Handler);
    void ClearSelectedValues();
    void RemoveSelectionChangedHandler(const FRemoveSelectionChangedHandlerHandler& Handler);
    void SetListEntryWidgetClass(TSubclassOf<class UWidget> InNewEntryClass);
    void SetMultiSelectionAllowed(bool bMultiSelectionAllowed);
    void SetSelectedStateForIndex(int32 Index, bool bNewSelectionState, bool bEmitSelectionEvent);
    void SetSelectedStateForValue(class UObject* Value, bool bNewSelectionState, bool bEmitSelectionEvent);
    void SetSingleSelectionByIndex(int32 Index, bool bEmitSelectionEvent);
    void SetSingleSelectionByValue(class UObject* Value, bool bEmitSelectionEvent);
    void SetValues(const TArray<UObject*>& InValues);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_WBP_ModioLibraryCategorySelector(int32 EntryPoint);
    void OnNavigationOutsideBounds__DelegateSignature(bool bDown);
}; // Size: 0x558

#endif
