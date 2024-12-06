#ifndef UE4SS_SDK_W_InventoryWeight_HPP
#define UE4SS_SDK_W_InventoryWeight_HPP

class UW_InventoryWeight_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* PopNJiggle;                                               // 0x02E8 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x02F0 (size: 0x8)
    class UProgressBar* CurrentItemWeightBar;                                         // 0x02F8 (size: 0x8)
    class UImage* EncumberedBar;                                                      // 0x0300 (size: 0x8)
    class UImage* HeavyBar;                                                           // 0x0308 (size: 0x8)
    class UCanvasPanel* MainCanvas;                                                   // 0x0310 (size: 0x8)
    class UBorder* TooltipBorder;                                                     // 0x0318 (size: 0x8)
    class UProgressBar* WeightBar;                                                    // 0x0320 (size: 0x8)
    class UImage* WeightIcon;                                                         // 0x0328 (size: 0x8)
    bool FadesAfterUpdate;                                                            // 0x0330 (size: 0x1)
    FW_InventoryWeight_CFadeOutComplete FadeOutComplete;                              // 0x0338 (size: 0x10)
    void FadeOutComplete();
    bool RapidFade;                                                                   // 0x0348 (size: 0x1)
    bool WeightUpdatedDuringDelay;                                                    // 0x0349 (size: 0x1)
    TEnumAsByte<ECriticalityLevels::Type> WeightSeverity;                             // 0x034A (size: 0x1)
    double WeightPercent;                                                             // 0x0350 (size: 0x8)

    void ToggleCurrentItemWeight(bool Show, double WeightAsPercentage);
    void UpdateWeightBar(double WeightPercent);
    void BeginFadeUI(TEnumAsByte<ECriticalityLevels::Type> Criticality);
    void RapidFadeUI();
    void Construct();
    void ExecuteUbergraph_W_InventoryWeight(int32 EntryPoint);
    void FadeOutComplete__DelegateSignature();
}; // Size: 0x358

#endif
