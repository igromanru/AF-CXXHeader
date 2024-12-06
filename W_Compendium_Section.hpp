#ifndef UE4SS_SDK_W_Compendium_Section_HPP
#define UE4SS_SDK_W_Compendium_Section_HPP

class UW_Compendium_Section_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button_DebugUnlock;                                                // 0x02E8 (size: 0x8)
    class UHorizontalBox* HBox_ResistanceWeakness;                                    // 0x02F0 (size: 0x8)
    class UImage* ImageBorder;                                                        // 0x02F8 (size: 0x8)
    class UVerticalBox* ImageVBox;                                                    // 0x0300 (size: 0x8)
    class UTextBlock* SectionContentText;                                             // 0x0308 (size: 0x8)
    class UImage* SectionImage;                                                       // 0x0310 (size: 0x8)
    FText SectionText;                                                                // 0x0318 (size: 0x10)
    TSoftObjectPtr<UTexture2D> OptionalSectionImage;                                  // 0x0328 (size: 0x28)
    bool Unlocked;                                                                    // 0x0350 (size: 0x1)
    FSlateFontInfo LockedFont;                                                        // 0x0358 (size: 0x60)
    FSlateFontInfo UnlockedFont;                                                      // 0x03B8 (size: 0x60)
    FName NPCRow;                                                                     // 0x0418 (size: 0x8)
    int32 SectionIndex;                                                               // 0x0420 (size: 0x4)
    ECompendiumUnlockType SectionType;                                                // 0x0424 (size: 0x1)
    FCompendiumEntryRowHandle CompendiumRow;                                          // 0x0428 (size: 0x20)

    void SetLockedContentText();
    void OnLoaded_4B58DDD04E2C6C0F477AE9B496ECCB24(class UObject* Loaded);
    void Construct();
    void BndEvt__W_Compendium_Section_Button_DebugUnlock_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_W_Compendium_Section(int32 EntryPoint);
}; // Size: 0x448

#endif
