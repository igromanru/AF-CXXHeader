#ifndef UE4SS_SDK_WBP_ModioDefaultTagWidget_HPP
#define UE4SS_SDK_WBP_ModioDefaultTagWidget_HPP

class UWBP_ModioDefaultTagWidget_C : public UModioDefaultTagWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UWBP_ModioDefaultIconButton_C* TagButton;                                   // 0x0350 (size: 0x8)
    FWBP_ModioDefaultTagWidget_COnTagClicked OnTagClicked;                            // 0x0358 (size: 0x10)
    void OnTagClicked(class UObject* Context);

    void OnTagButtonClickedHandler(class UObject* ClickContext);
    void GetTagButton(TScriptInterface<class IModioUIClickableWidget>& Button);
    void GetLabelWidget();
    void DisableClick();
    void EnableClick();
    void PreConstruct(bool IsDesignTime);
    void RemoveClickedHandler(const FRemoveClickedHandlerHandler& Handler);
    void AddClickedHandler(const FAddClickedHandlerHandler& Handler);
    void ExecuteUbergraph_WBP_ModioDefaultTagWidget(int32 EntryPoint);
    void OnTagClicked__DelegateSignature(class UObject* Context);
}; // Size: 0x368

#endif
