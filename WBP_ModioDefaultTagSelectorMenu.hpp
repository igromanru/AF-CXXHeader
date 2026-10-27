#ifndef UE4SS_SDK_WBP_ModioDefaultTagSelectorMenu_HPP
#define UE4SS_SDK_WBP_ModioDefaultTagSelectorMenu_HPP

class UWBP_ModioDefaultTagSelectorMenu_C : public UModioModTagSelectorMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class UModioDefaultObjectSelector* TagCategoryContainer;                          // 0x0380 (size: 0x8)
    FWBP_ModioDefaultTagSelectorMenu_COnNavigationOutsideBounds OnNavigationOutsideBounds; // 0x0388 (size: 0x10)
    void OnNavigationOutsideBounds(bool bDown);

    void HandleNavigationOutsideBounds(bool bDown, class UObject* ListItem);
    void OnObjectWidgetCreated(class UWidget* ObjectWidget, class UObject* Object);
    void GetWidgetToFocus_FromBottom();
    void GetCategoryContainerWidget_ObjectSelector(TScriptInterface<class IModioUIObjectSelector>& TagCategoryContainer);
    void GetWidgetToFocus(EUINavigation NavigationType);
    void GetCategoryContainerWidget();
    void ClearSelectedTags();
    void OnInitialized();
    void ExecuteUbergraph_WBP_ModioDefaultTagSelectorMenu(int32 EntryPoint);
    void OnNavigationOutsideBounds__DelegateSignature(bool bDown);
}; // Size: 0x398

#endif
