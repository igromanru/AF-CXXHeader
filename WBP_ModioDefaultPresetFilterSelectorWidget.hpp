#ifndef UE4SS_SDK_WBP_ModioDefaultPresetFilterSelectorWidget_HPP
#define UE4SS_SDK_WBP_ModioDefaultPresetFilterSelectorWidget_HPP

class UWBP_ModioDefaultPresetFilterSelectorWidget_C : public UModioPresetFilterSelector
{
    class UModioDefaultObjectSelector* UnderlyingPresetList;                          // 0x0360 (size: 0x8)

    void GetWidgetToFocus(EUINavigation NavigationType);
    void GetPresetListWidget();
    void GetFilterPresets();
}; // Size: 0x368

#endif
