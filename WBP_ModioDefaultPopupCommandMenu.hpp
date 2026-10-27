#ifndef UE4SS_SDK_WBP_ModioDefaultPopupCommandMenu_HPP
#define UE4SS_SDK_WBP_ModioDefaultPopupCommandMenu_HPP

class UWBP_ModioDefaultPopupCommandMenu_C : public UModioPopupCommandMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UWBP_ModioActionWidgetButton_C* BackButton;                                 // 0x0358 (size: 0x8)
    class UModioDropdownAnchor* DropdownAnchor;                                       // 0x0360 (size: 0x8)
    class UWBP_ModioDefaultIconButton_C* MenuButton;                                  // 0x0368 (size: 0x8)
    class UW_Keybind_C* W_Keybind;                                                    // 0x0370 (size: 0x8)
    class UWidget* CommandMenuWidget;                                                 // 0x0378 (size: 0x8)
    FWBP_ModioDefaultPopupCommandMenu_COnToggleStateChanged OnToggleStateChanged;     // 0x0380 (size: 0x10)
    void OnToggleStateChanged(class UObject* Context, bool bIsOpen);
    FDataTableRowHandle TriggeringInputAction;                                        // 0x0390 (size: 0x10)

    void IsOpen();
    void OnDropdownAnchorToggleStateChanged(class UObject* Context, bool bIsOpen);
    void OnBackButtonClicked(class UObject* ClickContext);
    void GetDropdownAnchorWidget();
    void GetWidgetToFocus(EUINavigation NavigationType);
    void GetMenuButton();
    void OnMenuButtonClicked(class UObject* ClickContext);
    void ConstructCommandMenuWidget();
    void GetCommandMenuWidget();
    void OnGetMenuContent();
    void AddToggleStateChangedHandler(const FAddToggleStateChangedHandlerHandler& Handler);
    void RemoveToggleStateChangedHandler(const FRemoveToggleStateChangedHandlerHandler& Handler);
    void Close();
    void Open(bool bForce, bool bFocusMenu);
    void OnInitialized();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void DelayedControllerUpdate();
    void ForceClose();
    void ExecuteUbergraph_WBP_ModioDefaultPopupCommandMenu(int32 EntryPoint);
    void OnToggleStateChanged__DelegateSignature(class UObject* Context, bool bIsOpen);
}; // Size: 0x3A0

#endif
