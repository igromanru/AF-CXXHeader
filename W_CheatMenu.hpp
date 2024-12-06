#ifndef UE4SS_SDK_W_CheatMenu_HPP
#define UE4SS_SDK_W_CheatMenu_HPP

class UW_CheatMenu_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG;                                                                 // 0x02E8 (size: 0x8)
    class UButton* Button_Close;                                                      // 0x02F0 (size: 0x8)
    class UImage* TAB_BG;                                                             // 0x02F8 (size: 0x8)
    class UImage* TAB_Divider;                                                        // 0x0300 (size: 0x8)
    FName LikelyItemToSpawn;                                                          // 0x0308 (size: 0x8)
    class UW_CheatMenu_Dropdown_C* DropdownWidget;                                    // 0x0310 (size: 0x8)

    void WidgetAction_CloseMenu(bool& Handled);
    void WidgetAction_CycleMenu(bool Next, bool& Handled);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void BndEvt__Button_55_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void CloseCheatMenu();
    void ExecuteUbergraph_W_CheatMenu(int32 EntryPoint);
}; // Size: 0x318

#endif
