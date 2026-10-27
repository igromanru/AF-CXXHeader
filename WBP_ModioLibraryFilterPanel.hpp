#ifndef UE4SS_SDK_WBP_ModioLibraryFilterPanel_HPP
#define UE4SS_SDK_WBP_ModioLibraryFilterPanel_HPP

class UWBP_ModioLibraryFilterPanel_C : public UModioFilterPanel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0358 (size: 0x8)
    class UWBP_ModioDefaultButton_C* BackgroundButton;                                // 0x0360 (size: 0x8)
    class UWBP_ModioDefaultButton_C* ClearAllInvisibleButton;                         // 0x0368 (size: 0x8)
    class UModioDefaultBorder* FilterHeaderBorder;                                    // 0x0370 (size: 0x8)
    class UModioDefaultBorder* FilterPanelBackgroundBorder;                           // 0x0378 (size: 0x8)
    class UWBP_ModioLibraryCategorySelector_C* LibraryCategorySelector;               // 0x0380 (size: 0x8)
    class UWBP_ModioDefaultTagSelectorMenu_C* TagSelectorMenu;                        // 0x0388 (size: 0x8)
    FLinearColorRef FilterPanelBackgroundColor;                                       // 0x0390 (size: 0x18)
    FLinearColorRef FilterPanelHeaderColor;                                           // 0x03A8 (size: 0x18)

    void WidgetAction_CloseMenu(bool& Handled);
    void WidgetAction_CycleMenu(bool Next, bool& Handled);
    void WidgetAction_CycleCrafting(bool Next, bool& Handled);
    void WidgetAction_FaceTop(bool& Handled);
    void WidgetAction_DPadDirection(TEnumAsByte<E_NavigationDirection::Type> Direction, bool& Handled);
    void GetLastSelectionIndex();
    void GetIndexForValue(class UObject* Value);
    void GetMultiSelectionAllowed();
    void GetNumEntries();
    void GetSelectedValues();
    void GetSingleSelectedValue();
    void GetSingleSelectionIndex();
    void GetWidgetForValue(class UObject* Value);
    void DoNavigationToLibraryCategoryFromBottom(EUINavigation Navigation);
    void GetFilterPanelHeaderBorder(TScriptInterface<class IModioUIHasConfigurableColor>& Border);
    void GetFilterPanelBackgroundBorder(TScriptInterface<class IModioUIHasConfigurableColor>& Border);
    void GetLibraryCategorySelectorWidget(TScriptInterface<class IModioUIObjectSelector>& LibraryCategorySelector);
    void BP_OnHandleBackAction();
    void GetWidgetToFocus(EUINavigation NavigationType);
    void DeactivatePanel(class UObject* ClickContext);
    void GetBackgroundButtonWidget();
    void OnClearAllButtonClicked(class UObject* ClickContext);
    void GetTagSelectorWidget();
    void GetClearButtonWidget();
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
    void OnInitialized();
    void BndEvt__WBP_ModioFilterPanel_TagSelectorMenu_K2Node_ComponentBoundEvent_0_OnNavigationOutsideBounds__DelegateSignature(bool bDown);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_ModioLibraryFilterPanel_LibraryCategorySelector_K2Node_ComponentBoundEvent_1_OnNavigationOutsideBounds__DelegateSignature(bool bDown);
    void ExecuteUbergraph_WBP_ModioLibraryFilterPanel(int32 EntryPoint);
}; // Size: 0x3C0

#endif
