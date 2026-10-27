#ifndef UE4SS_SDK_WBP_ModioDefaultModCollectionDescriptionDialog_HPP
#define UE4SS_SDK_WBP_ModioDefaultModCollectionDescriptionDialog_HPP

class UWBP_ModioDefaultModCollectionDescriptionDialog_C : public UModioUIComponentBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UWBP_ModioDefaultIconButton_C* CloseButton;                                 // 0x0350 (size: 0x8)
    class UModioDefaultTextBlock* ModDescriptionTextBlock;                            // 0x0358 (size: 0x8)
    class UModioDefaultScrollBox* ModioDescriptionScrollBox;                          // 0x0360 (size: 0x8)
    class UWBP_ModioDefaultButton_C* ScrollNavigationButton;                          // 0x0368 (size: 0x8)
    int32 NavigationScrollOffsetStep;                                                 // 0x0370 (size: 0x4)

    void WidgetAction_CloseMenu(bool& Handled);
    void WidgetAction_CycleMenu(bool Next, bool& Handled);
    void WidgetAction_CycleCrafting(bool Next, bool& Handled);
    void WidgetAction_FaceTop(bool& Handled);
    void WidgetAction_DPadDirection(TEnumAsByte<E_NavigationDirection::Type> Direction, bool& Handled);
    void GetWidgetToFocus(EUINavigation NavigationType);
    void GetDescriptionScrollBoxWidget(class UModioDefaultScrollBox*& ScrollBox);
    void GetScrollNavigationButtonWidget(TScriptInterface<class IModioUIClickableWidget>& NavButton);
    void CloseModDescriptionDialog(class UObject* ClickContext);
    void GetCloseDialogButtonWidget();
    void GetModDescriptionTextWidget();
    void DoScrollDown(EUINavigation Navigation);
    void DoScrollUp(EUINavigation Navigation);
    void OnSetDataSource(class UObject* InDataSource);
    void PreConstruct(bool IsDesignTime);
    void SetDataSource(class UObject* InDataSource);
    void Construct();
    void ExecuteUbergraph_WBP_ModioDefaultModCollectionDescriptionDialog(int32 EntryPoint);
}; // Size: 0x374

#endif
