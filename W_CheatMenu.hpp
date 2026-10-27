#ifndef UE4SS_SDK_W_CheatMenu_HPP
#define UE4SS_SDK_W_CheatMenu_HPP

class UW_CheatMenu_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG;                                                                 // 0x02E8 (size: 0x8)
    class UButton* Button_Close;                                                      // 0x02F0 (size: 0x8)
    class UW_Debug_PlayerStats_C* W_Debug_PlayerStats;                                // 0x02F8 (size: 0x8)
    class UW_GameCommandMenu_C* W_GameCommandMenu;                                    // 0x0300 (size: 0x8)
    FName LikelyItemToSpawn;                                                          // 0x0308 (size: 0x8)
    class UW_CheatMenu_Dropdown_C* DropdownWidget;                                    // 0x0310 (size: 0x8)

    void WidgetAction_DPadDirection(TEnumAsByte<E_NavigationDirection::Type> Direction, bool& Handled);
    void WidgetAction_FaceTop(bool& Handled);
    void WidgetAction_CycleCrafting(bool Next, bool& Handled);
    void WidgetAction_CloseMenu(bool& Handled);
    void WidgetAction_CycleMenu(bool Next, bool& Handled);
    void OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void BndEvt__Button_55_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void CloseCheatMenu();
    void ExecuteUbergraph_W_CheatMenu(int32 EntryPoint);
}; // Size: 0x318

#endif
