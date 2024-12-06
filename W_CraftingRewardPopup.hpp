#ifndef UE4SS_SDK_W_CraftingRewardPopup_HPP
#define UE4SS_SDK_W_CraftingRewardPopup_HPP

class UW_CraftingRewardPopup_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Popup;                                                    // 0x02E8 (size: 0x8)
    class UImage* BG;                                                                 // 0x02F0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02F8 (size: 0x8)
    class UTextBlock* TitleMain_1;                                                    // 0x0300 (size: 0x8)
    FTimerHandle AnimationTimer;                                                      // 0x0308 (size: 0x8)

    void ShowCraftReward(FString InString);
    void AnimationStage2();
    void AnimationStage3();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_W_CraftingRewardPopup(int32 EntryPoint);
}; // Size: 0x310

#endif
