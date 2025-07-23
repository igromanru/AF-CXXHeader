#ifndef UE4SS_SDK_SettingRow_HPP
#define UE4SS_SDK_SettingRow_HPP

class USettingRow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG_Left;                                                            // 0x02E8 (size: 0x8)
    class UButton* Button_Reset;                                                      // 0x02F0 (size: 0x8)
    class UAbioticVisibilityWidget* CVarVisibilityWidget;                             // 0x02F8 (size: 0x8)
    class UImage* MissingFeatureIcon;                                                 // 0x0300 (size: 0x8)
    class UNamedSlot* SettingContent;                                                 // 0x0308 (size: 0x8)
    class UTextBlock* Settings_Text;                                                  // 0x0310 (size: 0x8)
    FText Label;                                                                      // 0x0318 (size: 0x10)
    double MinDesiredWidth;                                                           // 0x0328 (size: 0x8)
    bool NotFinished;                                                                 // 0x0330 (size: 0x1)
    bool ShowResetButton;                                                             // 0x0331 (size: 0x1)
    class UAutoSettingWidget* ContentWidget;                                          // 0x0338 (size: 0x8)
    FName CVarVisibility;                                                             // 0x0340 (size: 0x8)
    FGameSetting Setting Display;                                                     // 0x0348 (size: 0x130)
    FSettingRow_CUpdateSettingDisplay UpdateSettingDisplay;                           // 0x0478 (size: 0x10)
    void UpdateSettingDisplay(FGameSetting NewSetting, bool Close);
    FSettingRow_CSettingHovered SettingHovered;                                       // 0x0488 (size: 0x10)
    void SettingHovered(class USettingRow_C* Setting);

    void Construct();
    void BndEvt__SettingRow_Button_Reset_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void OnContentSet(class UAutoSettingWidget* Widget);
    void OnCurrentValueUpdated(FString Value);
    void PreConstruct(bool IsDesignTime);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_SettingRow(int32 EntryPoint);
    void SettingHovered__DelegateSignature(class USettingRow_C* Setting);
    void UpdateSettingDisplay__DelegateSignature(FGameSetting NewSetting, bool Close);
}; // Size: 0x498

#endif
