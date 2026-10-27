#ifndef UE4SS_SDK_WBP_ModioDefaultTagDisplay_HPP
#define UE4SS_SDK_WBP_ModioDefaultTagDisplay_HPP

class UWBP_ModioDefaultTagDisplay_C : public UModioModTagDisplay
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UModioObjectWrapBox* ModTagContainerWidget;                                 // 0x0350 (size: 0x8)

    void OnTagWidgetClickedHandler(class UObject* ClickContext);
    void OnTagWidgetCreatedHandler(class UWidget* ObjectWidget, class UObject* Object);
    void GetWidgetToFocus(EUINavigation NavigationType);
    void GetTagContainerWidget();
    void Construct();
    void ExecuteUbergraph_WBP_ModioDefaultTagDisplay(int32 EntryPoint);
}; // Size: 0x358

#endif
