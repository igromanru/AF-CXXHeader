#ifndef UE4SS_SDK_W_HealthEntry_HPP
#define UE4SS_SDK_W_HealthEntry_HPP

class UW_HealthEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* ShowDescription;                                          // 0x02E8 (size: 0x8)
    class UButton* Button_0;                                                          // 0x02F0 (size: 0x8)
    class UTextBlock* DescText;                                                       // 0x02F8 (size: 0x8)
    class UImage* Icon;                                                               // 0x0300 (size: 0x8)
    class UBorder* MainBorder;                                                        // 0x0308 (size: 0x8)
    class UImage* SelectionBG;                                                        // 0x0310 (size: 0x8)
    class UImage* SeverityIcon;                                                       // 0x0318 (size: 0x8)
    class UProgressBar* StatProgressBar;                                              // 0x0320 (size: 0x8)
    class UTextBlock* StatusNameText;                                                 // 0x0328 (size: 0x8)
    FBuffDebuff BuffData;                                                             // 0x0330 (size: 0x240)
    bool ShowProgressBar;                                                             // 0x0570 (size: 0x1)
    bool InvertProgressBar;                                                           // 0x0571 (size: 0x1)
    TArray<FBuffDebuffRowHandle> ProgressBar_BuffLinks;                               // 0x0578 (size: 0x10)
    FBuffDebuff FallBackBuffData;                                                     // 0x0588 (size: 0x240)
    FName StatListenerName;                                                           // 0x07C8 (size: 0x8)
    bool StaticHasBeenUpdated;                                                        // 0x07D0 (size: 0x1)

    void UpdateProgressBarState();
    void OnLoaded_7008E80247204599426DEC9DB512949A(class UObject* Loaded);
    void Construct();
    void BndEvt__W_HealthEntryList_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__W_HealthEntryList_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void RefreshHealthEntryWidget(bool RefillBuffData, FBuffDebuff NewBuffData);
    void ExecuteUbergraph_W_HealthEntry(int32 EntryPoint);
}; // Size: 0x7D1

#endif
