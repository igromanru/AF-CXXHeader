#ifndef UE4SS_SDK_W_Mods_EnableDisableRow_HPP
#define UE4SS_SDK_W_Mods_EnableDisableRow_HPP

class UW_Mods_EnableDisableRow_C : public UAbioticMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UBorder* Border_98;                                                         // 0x02E8 (size: 0x8)
    class UButton* Button_DownNew;                                                    // 0x02F0 (size: 0x8)
    class UButton* Button_ToggleEnabled;                                              // 0x02F8 (size: 0x8)
    class UButton* Button_UpNew;                                                      // 0x0300 (size: 0x8)
    class UCheckBox* CheckBox_25;                                                     // 0x0308 (size: 0x8)
    class UTextBlock* DisplayName;                                                    // 0x0310 (size: 0x8)
    class UImage* Image_407;                                                          // 0x0318 (size: 0x8)
    class USizeBox* SizeBox_Warning;                                                  // 0x0320 (size: 0x8)
    class UHorizontalBox* WarningImage;                                               // 0x0328 (size: 0x8)
    FModioModInfo ModInfo;                                                            // 0x0330 (size: 0x1E8)
    int64 ModId;                                                                      // 0x0518 (size: 0x8)
    class UWidget* CachedTooltip;                                                     // 0x0520 (size: 0x8)

    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void BP_OnEntryReleased();
    void BndEvt__W_Mods_EnableDisableRow_Button_UpNew_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Mods_EnableDisableRow_Button_DownNew_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Mods_EnableDisableRow_Button_ToggleEnabled_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void OnListItemObjectSet(class UObject* ListItemObject);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void Construct();
    void ExecuteUbergraph_W_Mods_EnableDisableRow(int32 EntryPoint);
}; // Size: 0x528

#endif
