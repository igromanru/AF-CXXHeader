#ifndef UE4SS_SDK_W_OsAppWrapper_HPP
#define UE4SS_SDK_W_OsAppWrapper_HPP

class UW_OsAppWrapper_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button_Exit;                                                       // 0x02E8 (size: 0x8)
    class UNamedSlot* ContentSlot;                                                    // 0x02F0 (size: 0x8)
    class UTextBlock* DisplayNameText;                                                // 0x02F8 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0300 (size: 0x8)
    class UScrollBox* ScrollBox_Content;                                              // 0x0308 (size: 0x8)
    class UImage* WindowBG;                                                           // 0x0310 (size: 0x8)
    FW_OsAppWrapper_COnCloseButtonPressed OnCloseButtonPressed;                       // 0x0318 (size: 0x10)
    void OnCloseButtonPressed(class UW_OsAppWrapper_C* AppWrapper, class UWidget* App);
    TEnumAsByte<E_OS_Themes::Type> Theme;                                             // 0x0328 (size: 0x1)
    class UWidget* AppContent;                                                        // 0x0330 (size: 0x8)
    TSoftObjectPtr<UTexture2D> Soft Texture;                                          // 0x0338 (size: 0x28)
    FText DisplayName;                                                                // 0x0360 (size: 0x10)

    void PreConstruct(bool IsDesignTime);
    void BndEvt__W_OsAppWrapper_Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void Begin_TerminalInteract();
    void End_TerminalInteract();
    void ExecuteUbergraph_W_OsAppWrapper(int32 EntryPoint);
    void OnCloseButtonPressed__DelegateSignature(class UW_OsAppWrapper_C* AppWrapper, class UWidget* App);
}; // Size: 0x370

#endif
