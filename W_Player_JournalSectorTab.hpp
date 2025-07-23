#ifndef UE4SS_SDK_W_Player_JournalSectorTab_HPP
#define UE4SS_SDK_W_Player_JournalSectorTab_HPP

class UW_Player_JournalSectorTab_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Unread_Page_Bloom;                                        // 0x02E8 (size: 0x8)
    class UImage* Icon_UnreadJournalPage;                                             // 0x02F0 (size: 0x8)
    class UImage* IconImage;                                                          // 0x02F8 (size: 0x8)
    class UCheckBox* PageCheckbox;                                                    // 0x0300 (size: 0x8)
    class UTexture2D* Icon_Texture;                                                   // 0x0308 (size: 0x8)
    TEnumAsByte<E_JournalEntryCategories::Type> PageCategory;                         // 0x0310 (size: 0x1)
    FName Journal Entry;                                                              // 0x0314 (size: 0x8)
    FWorldFlagRowHandle WorldFlagToShowAsUnknown;                                     // 0x0320 (size: 0x20)
    FWorldFlagRowHandle WorldFlagToRevealIcon;                                        // 0x0340 (size: 0x20)
    FW_Player_JournalSectorTab_CClickJournalTab ClickJournalTab;                      // 0x0360 (size: 0x10)
    void ClickJournalTab(bool IsChecked, class UW_Player_JournalSectorTab_C* Tab);
    FWorldFlagRowHandle WorldFlagToRevealResources;                                   // 0x0370 (size: 0x20)
    bool AvailableInBuild;                                                            // 0x0390 (size: 0x1)
    FText DisplayName;                                                                // 0x0398 (size: 0x10)
    bool NotPressableButton;                                                          // 0x03A8 (size: 0x1)
    bool ShowLocationName;                                                            // 0x03A9 (size: 0x1)
    int32 CurrentNumberOfEntries;                                                     // 0x03AC (size: 0x4)
    FDataTableRowHandle ResourceDataTable;                                            // 0x03B0 (size: 0x10)
    bool CanShowResources;                                                            // 0x03C0 (size: 0x1)

    void CreateJournalNoteTooltip(FText Text, FText Text_Additional, FText Text_Negative, bool ShowResources);
    void AreWorldFlagsReady(bool& Ready);
    void Check Current Viewed Page(TEnumAsByte<E_JournalEntryCategories::Type> CurrentViewedPage, bool& Same Page);
    void StartHighlightUnreadIconPage();
    void Construct();
    void RefreshTabState(int32 NumberOfEntries);
    void BndEvt__W_Player_JournalSectorTab_PageCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_W_Player_JournalSectorTab(int32 EntryPoint);
    void ClickJournalTab__DelegateSignature(bool IsChecked, class UW_Player_JournalSectorTab_C* Tab);
}; // Size: 0x3C1

#endif
