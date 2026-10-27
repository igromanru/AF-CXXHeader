#ifndef UE4SS_SDK_WBP_ModioDefaultTagCategoryContainer_HPP
#define UE4SS_SDK_WBP_ModioDefaultTagCategoryContainer_HPP

class UWBP_ModioDefaultTagCategoryContainer_C : public UModioModTagSelectorCategory
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    class UWBP_ModioDefaultIconButton_C* TagCategoryButton;                           // 0x0368 (size: 0x8)
    class UModioDefaultObjectSelector* TagListView;                                   // 0x0370 (size: 0x8)
    bool bSelectable;                                                                 // 0x0378 (size: 0x1)
    bool bSelected;                                                                   // 0x0379 (size: 0x1)
    bool bToggleable;                                                                 // 0x037A (size: 0x1)
    FSlateBrush ExpandedIconBrush;                                                    // 0x0380 (size: 0xD0)
    FSlateBrush ClosedIconBrush;                                                      // 0x0450 (size: 0xD0)
    FLinearColorRef IconColor;                                                        // 0x0520 (size: 0x18)
    FWBP_ModioDefaultTagCategoryContainer_COnNavigationOutsideBounds OnNavigationOutsideBounds; // 0x0538 (size: 0x10)
    void OnNavigationOutsideBounds(bool bDown, class UObject* ListItem);

    void GetSelectable(bool& bIsSelectable);
    void GetSelectedState(bool& bCurrentSelectedState);
    void GetToggleable(bool& bIsToggleable);
    void DoNavigationToTagCategoryButton(EUINavigation Navigation);
    void GetWidgetToFocus_LastItem();
    void GetWidgetToFocus_SelectedItem();
    void OnCategoryButtonClicked(class UObject* ClickContext);
    void GetWidgetToFocus(EUINavigation NavigationType);
    void DoNavigationFromTagCategoryButtonDown(EUINavigation Navigation);
    void ProcessNavigationFromOutside(bool bFromDown);
    void DoNavigationOutsideBoundsUp(EUINavigation Navigation);
    void DoNavigationOutsideBoundsDown(EUINavigation Navigation);
    void SetVisualState(bool bCollapsed);
    void SetIconColors();
    void GetCategoryIconWidget(TScriptInterface<class IModioUIImageDisplayWidget>& ClickableWidget);
    void GetCategoryButtonWidget(TScriptInterface<class IModioUIClickableWidget>& ClickableWidget);
    void GetTagCategoryLabel();
    void GetCategoryTagListWidget();
    void AddSelectedStateChangedHandler(const FAddSelectedStateChangedHandlerHandler& Handler);
    void RemoveSelectedStateChangedHandler(const FRemoveSelectedStateChangedHandlerHandler& Handler);
    void SetSelectable(bool bNewSelectableState);
    void SetSelectedState(bool bNewSelectedState);
    void SetToggleable(bool bNewToggleableState);
    void ToggleSelectedState();
    void AddClickedHandler(const FAddClickedHandlerHandler& Handler);
    void DisableClick();
    void EnableClick();
    void RemoveClickedHandler(const FRemoveClickedHandlerHandler& Handler);
    void BP_OnEntryReleased();
    void PreConstruct(bool IsDesignTime);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void BndEvt__WBP_ModioDefaultTagCategoryContainer_TagListView_K2Node_ComponentBoundEvent_2_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered);
    void ExecuteUbergraph_WBP_ModioDefaultTagCategoryContainer(int32 EntryPoint);
    void OnNavigationOutsideBounds__DelegateSignature(bool bDown, class UObject* ListItem);
}; // Size: 0x548

#endif
