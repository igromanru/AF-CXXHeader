#ifndef UE4SS_SDK_I_WidgetAction_HPP
#define UE4SS_SDK_I_WidgetAction_HPP

class II_WidgetAction_C : public IInterface
{

    void WidgetAction_DPadDirection(TEnumAsByte<E_NavigationDirection::Type> Direction, bool& Handled);
    void WidgetAction_FaceTop(bool& Handled);
    void WidgetAction_CycleCrafting(bool Next, bool& Handled);
    void WidgetAction_CycleMenu(bool Next, bool& Handled);
    void WidgetAction_CloseMenu(bool& Handled);
}; // Size: 0x28

#endif
