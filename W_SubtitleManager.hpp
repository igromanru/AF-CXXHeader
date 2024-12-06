#ifndef UE4SS_SDK_W_SubtitleManager_HPP
#define UE4SS_SDK_W_SubtitleManager_HPP

class UW_SubtitleManager_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UScaleBox* ScaleBox_0;                                                      // 0x02E8 (size: 0x8)
    class UVerticalBox* VerticalBox_51;                                               // 0x02F0 (size: 0x8)
    bool UseAccessibilitySettings;                                                    // 0x02F8 (size: 0x1)
    bool SubtitlesEnabled;                                                            // 0x02F9 (size: 0x1)

    FText Get Dialog Owner Name(class AAbiotic_Character_ParentBP_C* CharacterRef);
    void QueueSubtitlesFromAudioComponent(class UDialogueWave* Dialogue, class UAudioComponent* AudioComponentReference, const FText& Name, TSoftClassPtr<UUserWidget> WidgetClass);
    void QueueSubtitlesFromCharacter(class UDialogueWave* Dialogue, class AAbiotic_Character_ParentBP_C* CharacterRef, TSoftClassPtr<UUserWidget> WidgetClass);
    class UAudioComponent* GetRadioAudioComponent();
    bool DoesDialogueExist(class UDialogueWave* DialogueWave, bool SkipRadio, class UW_SubtitleEntry_Parent_C*& SubtitleEntry);
    void QueueSubtitlesFromRadio(class UDialogueWave* Dialogue, FName NarrativeRow);
    void QueueSubtitles(FText Name, TArray<FString>& Lines, TArray<double>& Times, double Length, bool RadioLinked, class UDialogueWave* DialogueReference, class UAudioComponent* AudioComponentReference, bool ManualRemoval, double ManualStartTime, TSoftClassPtr<UUserWidget> WidgetClass);
    void Construct();
    void UpdateSubtitlesEnabled(bool NewValue);
    void UpdateSubtitlesSize(float NewValue);
    void ExecuteUbergraph_W_SubtitleManager(int32 EntryPoint);
}; // Size: 0x2FA

#endif
