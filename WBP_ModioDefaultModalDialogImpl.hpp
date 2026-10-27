#ifndef UE4SS_SDK_WBP_ModioDefaultModalDialogImpl_HPP
#define UE4SS_SDK_WBP_ModioDefaultModalDialogImpl_HPP

class UWBP_ModioDefaultModalDialogImpl_C : public UModioDefaultModalDialogImpl
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class UModioDefaultBorder* ButtonBackground;                                      // 0x0380 (size: 0x8)
    class UNamedSlot* ButtonContent;                                                  // 0x0388 (size: 0x8)
    class UModioDefaultObjectSelector* DefaultButtonContainerWidget;                  // 0x0390 (size: 0x8)
    class UModioDefaultTextBlock* DefaultHeaderContentText;                           // 0x0398 (size: 0x8)
    class UModioDefaultTextBlock* DefaultPrimaryContentText;                          // 0x03A0 (size: 0x8)
    class USizeBox* DialogSizeParent;                                                 // 0x03A8 (size: 0x8)
    class UModioDefaultBorder* FooterBackground;                                      // 0x03B0 (size: 0x8)
    class UNamedSlot* FooterContent;                                                  // 0x03B8 (size: 0x8)
    class UModioDefaultBorder* HeaderBackground;                                      // 0x03C0 (size: 0x8)
    class UNamedSlot* HeaderContent;                                                  // 0x03C8 (size: 0x8)
    class UModioDefaultBorder* PrimaryBackground;                                     // 0x03D0 (size: 0x8)
    class UNamedSlot* PrimaryContent;                                                 // 0x03D8 (size: 0x8)
    FLinearColorRef HeaderBackgroundColor;                                            // 0x03E0 (size: 0x18)
    FLinearColorRef PrimaryBackgroundColor;                                           // 0x03F8 (size: 0x18)
    FLinearColorRef ButtonBackgroundColor;                                            // 0x0410 (size: 0x18)
    FLinearColorRef FooterBackgroundColor;                                            // 0x0428 (size: 0x18)
    FText DefaultHeadingText;                                                         // 0x0440 (size: 0x10)
    FText DefaultPrimaryText;                                                         // 0x0450 (size: 0x10)
    FFloatOverride MinimumWidth;                                                      // 0x0460 (size: 0x8)
    FFloatOverride MinimumHeight;                                                     // 0x0468 (size: 0x8)

    void OnEntryGenerated(class UWidget* ObjectWidget, class UObject* Object);
    void HideDefaultWidgets();
    void GetWidgetToFocus(EUINavigation NavigationType);
    void GetButtonContainer();
    void GetButtonBackground(TScriptInterface<class IModioUIHasConfigurableColor>& Background);
    void GetPrimaryBackground(TScriptInterface<class IModioUIHasConfigurableColor>& Background);
    void GetFooterBackground(TScriptInterface<class IModioUIHasConfigurableColor>& Background);
    void GetHeaderBackground(TScriptInterface<class IModioUIHasConfigurableColor>& Background);
    void ConfigureGeneratedDialogButton(class UWidget* GeneratedButton);
    void ApplySizeOverrides();
    void OnGeneratedDialogButtonClicked(class UObject* ClickContext);
    void ApplyButtonConfiguration();
    void GetPrimaryTextWidget(TScriptInterface<class IModioUIHasTextWidget>& HeadingTextWidget);
    void GetHeadingTextWidget(TScriptInterface<class IModioUIHasTextWidget>& HeadingTextWidget);
    void ApplyDefaultText();
    void ApplyColors();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_ModioDefaultModalDialogImpl(int32 EntryPoint);
}; // Size: 0x470

#endif
