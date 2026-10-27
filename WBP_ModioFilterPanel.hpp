#ifndef UE4SS_SDK_WBP_ModioFilterPanel_HPP
#define UE4SS_SDK_WBP_ModioFilterPanel_HPP

class UWBP_ModioFilterPanel_C : public UModioFilterPanel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0358 (size: 0x8)
    class UWBP_ModioDefaultButton_C* BackgroundButton;                                // 0x0360 (size: 0x8)
    class UWBP_ModioDefaultButton_C* ClearAllInvisibleButton;                         // 0x0368 (size: 0x8)
    class UModioDefaultBorder* FilterHeaderBorder;                                    // 0x0370 (size: 0x8)
    class UModioDefaultBorder* FilterPanelBackgroundBorder;                           // 0x0378 (size: 0x8)
    class UWBP_ModioDefaultTagSelectorMenu_C* TagSelectorMenu;                        // 0x0380 (size: 0x8)
    FLinearColorRef FilterPanelBackgroundColor;                                       // 0x0388 (size: 0x18)
    FLinearColorRef FilterPanelHeaderColor;                                           // 0x03A0 (size: 0x18)

    void WidgetAction_CloseMenu(bool& Handled);
    void WidgetAction_CycleMenu(bool Next, bool& Handled);
    void WidgetAction_CycleCrafting(bool Next, bool& Handled);
    void WidgetAction_FaceTop(bool& Handled);
    void WidgetAction_DPadDirection(TEnumAsByte<E_NavigationDirection::Type> Direction, bool& Handled);
    void GetFilterPanelHeaderBorderWidget(TScriptInterface<class IModioUIHasConfigurableColor>& Border);
    void GetFilterPanelBackgroundWidget(TScriptInterface<class IModioUIHasConfigurableColor>& Border);
    void BP_OnHandleBackAction();
    void GetWidgetToFocus(EUINavigation NavigationType);
    void DeactivatePanel(class UObject* ClickContext);
    void GetBackgroundButtonWidget();
    void OnClearAllButtonClicked(class UObject* ClickContext);
    void GetTagSelectorWidget();
    void GetClearButtonWidget();
    void BndEvt__WBP_ModioFilterPanel_TagSelectorMenu_K2Node_ComponentBoundEvent_0_OnNavigationOutsideBounds__DelegateSignature(bool bDown);
    void OnInitialized();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_ModioFilterPanel(int32 EntryPoint);
}; // Size: 0x3B8

#endif
