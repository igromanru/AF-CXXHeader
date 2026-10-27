#ifndef UE4SS_SDK_WBP_ModioDefaultCommandMenu_HPP
#define UE4SS_SDK_WBP_ModioDefaultCommandMenu_HPP

class UWBP_ModioDefaultCommandMenu_C : public UModioCommandMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UModioDefaultBorder* Background;                                            // 0x0378 (size: 0x8)
    class UWBP_ModioDefaultCommandList_C* InternalList;                               // 0x0380 (size: 0x8)
    FLinearColorRef BackgroundColor;                                                  // 0x0388 (size: 0x18)
    FWBP_ModioDefaultCommandMenu_COptionSelected OptionSelected;                      // 0x03A0 (size: 0x10)
    void OptionSelected();

    void GetBackgroundWidget(TScriptInterface<class IModioUIHasConfigurableColor>& BackgroundWidget);
    void GetWidgetToFocus(EUINavigation NavigationType);
    void GetSelectorWidget();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__WBP_ModioDefaultCommandMenu_InternalList_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(class UObject* SelectedObject);
    void ExecuteUbergraph_WBP_ModioDefaultCommandMenu(int32 EntryPoint);
    void OptionSelected__DelegateSignature();
}; // Size: 0x3B0

#endif
