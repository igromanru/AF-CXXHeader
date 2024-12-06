#ifndef UE4SS_SDK_W_TutorialPopup_SidePanel_HPP
#define UE4SS_SDK_W_TutorialPopup_SidePanel_HPP

class UW_TutorialPopup_SidePanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* CountdownText;                                                  // 0x02E8 (size: 0x8)
    class UImage* Image;                                                              // 0x02F0 (size: 0x8)
    class UImage* Image_40;                                                           // 0x02F8 (size: 0x8)
    class UImage* Image_58;                                                           // 0x0300 (size: 0x8)
    class UTextBlock* Text_Tip;                                                       // 0x0308 (size: 0x8)
    class UTextBlock* Text_Title;                                                     // 0x0310 (size: 0x8)
    class UImage* Video;                                                              // 0x0318 (size: 0x8)
    class UW_Keybind_C* W_Keybind;                                                    // 0x0320 (size: 0x8)
    int32 CurrentTime;                                                                // 0x0328 (size: 0x4)
    FName TutorialTipRow;                                                             // 0x032C (size: 0x8)
    FTimerHandle CountdownTimer;                                                      // 0x0338 (size: 0x8)

    void OnLoaded_3CA8971442D3016E81C437BD5486D8C1(class UObject* Loaded);
    void ReduceCountdown();
    void CloseTutorialPopup();
    void Construct();
    void HeldStarted(double InteractionDuration);
    void ExecuteUbergraph_W_TutorialPopup_SidePanel(int32 EntryPoint);
}; // Size: 0x340

#endif
