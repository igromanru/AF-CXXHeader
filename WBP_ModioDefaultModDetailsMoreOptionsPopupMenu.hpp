#ifndef UE4SS_SDK_WBP_ModioDefaultModDetailsMoreOptionsPopupMenu_HPP
#define UE4SS_SDK_WBP_ModioDefaultModDetailsMoreOptionsPopupMenu_HPP

class UWBP_ModioDefaultModDetailsMoreOptionsPopupMenu_C : public UModioPopupCommandMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UWBP_ModioActionWidgetButton_C* BackButton;                                 // 0x0358 (size: 0x8)
    class UModioDropdownAnchor* DropdownAnchor;                                       // 0x0360 (size: 0x8)
    class UWBP_ModioDefaultIconButton_C* MenuButton;                                  // 0x0368 (size: 0x8)
    class UWidget* CommandMenu;                                                       // 0x0370 (size: 0x8)
    FInputActionOverride BoundActionOverride;                                         // 0x0378 (size: 0x18)

    void ApplyBoundActionOverride();
    void ToggleMenuOpenState();
    void DoNavigationToDropdownMenu(EUINavigation Navigation);
    void GetWidgetToFocus(EUINavigation NavigationType);
    void OnDropdownAnchorToggleStateChanged(class UObject* Context, bool bIsOpen);
    void GetDropdownAnchor();
    void GetDropdownAnchorWidget();
    void GetMenuButtonWidget();
    void OnMenuButtonClicked(class UObject* ClickContext);
    void ConstructCommandMenuWidget();
    void GetCommandMenuWidget();
    void OnGetMenuContent();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_ModioDefaultModDetailsMoreOptionsPopupMenu_BackButton_K2Node_ComponentBoundEvent_0_ModioClickableOnClickedMulticast__DelegateSignature(class UObject* ClickContext);
    void ExecuteUbergraph_WBP_ModioDefaultModDetailsMoreOptionsPopupMenu(int32 EntryPoint);
}; // Size: 0x390

#endif
