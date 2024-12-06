#ifndef UE4SS_SDK_W_SubtitleEntry_Parent_HPP
#define UE4SS_SDK_W_SubtitleEntry_Parent_HPP

class UW_SubtitleEntry_Parent_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    FText SubtitleName;                                                               // 0x02E8 (size: 0x10)
    FString SubtitleText;                                                             // 0x02F8 (size: 0x10)
    TArray<FString> Lines;                                                            // 0x0308 (size: 0x10)
    TArray<double> Times;                                                             // 0x0318 (size: 0x10)
    double Length;                                                                    // 0x0328 (size: 0x8)
    class UDialogueWave* DialogueReference;                                           // 0x0330 (size: 0x8)
    bool RadioLinked;                                                                 // 0x0338 (size: 0x1)
    int32 CurrentIndex;                                                               // 0x033C (size: 0x4)
    class UAudioComponent* AudioComponentReference;                                   // 0x0340 (size: 0x8)
    bool ManualRemoval;                                                               // 0x0348 (size: 0x1)
    double ManualStartTime;                                                           // 0x0350 (size: 0x8)
    double LastStartTimeStamp;                                                        // 0x0358 (size: 0x8)
    bool IsBeingRemoved;                                                              // 0x0360 (size: 0x1)
    bool ForceSubtitleToShow;                                                         // 0x0361 (size: 0x1)
    bool OverrideBackgroundOpacity;                                                   // 0x0362 (size: 0x1)
    bool NeverStack;                                                                  // 0x0363 (size: 0x1)

    void GetSubtitleImageArrow(class UWidget*& Widget);
    void GetSubtitleNameWidget(class UTextBlock*& Widget);
    void GetSubtitleTextWidget(class UTextBlock*& Widget);
    void GetBorderSubtitleBG(class UBorder*& Widget);
    void GetDirectionSizeBox(class UWidget*& Widget);
    void TickDirectionalArrow();
    void TickCurrentIndex();
    void InitDelayedStart();
    void VerifyAudio();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void RemoveSubtitle();
    void FastRemoveSubtitle();
    void ExecuteUbergraph_W_SubtitleEntry_Parent(int32 EntryPoint);
}; // Size: 0x364

#endif
