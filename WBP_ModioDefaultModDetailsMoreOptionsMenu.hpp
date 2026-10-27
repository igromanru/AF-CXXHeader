#ifndef UE4SS_SDK_WBP_ModioDefaultModDetailsMoreOptionsMenu_HPP
#define UE4SS_SDK_WBP_ModioDefaultModDetailsMoreOptionsMenu_HPP

class UWBP_ModioDefaultModDetailsMoreOptionsMenu_C : public UModioCommandMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UModioDefaultBorder* Background;                                            // 0x0378 (size: 0x8)
    class UWBP_ModioDefaultModDetailsCommandList_C* InternalList;                     // 0x0380 (size: 0x8)
    FLinearColorRef BackgroundColor;                                                  // 0x0388 (size: 0x18)

    void GetWidgetToFocus(EUINavigation NavigationType);
    void GetBackgroundWidget(TScriptInterface<class IModioUIHasConfigurableColor>& Background);
    void GetSelectorWidget();
    void PreConstruct(bool IsDesignTime);
    void BP_OnActivated();
    void Construct();
    void ExecuteUbergraph_WBP_ModioDefaultModDetailsMoreOptionsMenu(int32 EntryPoint);
}; // Size: 0x3A0

#endif
