#ifndef UE4SS_SDK_W_CheatMenu_HPP
#define UE4SS_SDK_W_CheatMenu_HPP

class UW_CheatMenu_C : public UAbioticWidget
{
    bool GameCommandMode;                                                             // 0x02E0 (size: 0x1)

    void WidgetAction_DPadDirection(TEnumAsByte<E_NavigationDirection::Type> Direction, bool& Handled);
    void WidgetAction_FaceTop(bool& Handled);
    void WidgetAction_CycleCrafting(bool Next, bool& Handled);
    void WidgetAction_CloseMenu(bool& Handled);
    void WidgetAction_CycleMenu(bool Next, bool& Handled);
}; // Size: 0x2E1

#endif
