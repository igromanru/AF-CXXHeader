#ifndef UE4SS_SDK_WBP_ModioDefaultEnumSelectorMenu_HPP
#define UE4SS_SDK_WBP_ModioDefaultEnumSelectorMenu_HPP

class UWBP_ModioDefaultEnumSelectorMenu_C : public UModioEnumSelectorMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UModioDefaultBorder* Background;                                            // 0x0378 (size: 0x8)
    class UModioDefaultObjectSelector* EnumListView;                                  // 0x0380 (size: 0x8)
    FLinearColorRef BackgroundColor;                                                  // 0x0388 (size: 0x18)

    void GetBackgroundWidget(TScriptInterface<class IModioUIHasConfigurableColor>& BackgroundWidget);
    void GetWidgetToFocus(EUINavigation NavigationType);
    void GetSelectorWidget();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_ModioDefaultEnumSelectorMenu(int32 EntryPoint);
}; // Size: 0x3A0

#endif
