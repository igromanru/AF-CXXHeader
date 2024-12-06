#ifndef UE4SS_SDK_W_Compendium_Main_HPP
#define UE4SS_SDK_W_Compendium_Main_HPP

class UW_Compendium_Main_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* CompendiumTitleText;                                            // 0x02E8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F0 (size: 0x8)
    class UListView* ListView_CompEntries;                                            // 0x02F8 (size: 0x8)
    class UCanvasPanel* MainCanvas;                                                   // 0x0300 (size: 0x8)
    class UScrollBox* Scrollbox_CompContent;                                          // 0x0308 (size: 0x8)
    FCompendiumEntryRowHandle CurrentCompendiumRow;                                   // 0x0310 (size: 0x20)
    FW_Compendium_Main_CUpdateUnreadCompendiumIndex UpdateUnreadCompendiumIndex;      // 0x0330 (size: 0x10)
    void UpdateUnreadCompendiumIndex(FCompendiumEntryRowHandle Entry);
    FGameplayTag LastFilterTag;                                                       // 0x0340 (size: 0x8)
    FString LastHeaderText;                                                           // 0x0348 (size: 0x10)

    void CreateCompendiumPage_Divider();
    void CreateCompendiumPage_Content(FText& SectionText, TSoftObjectPtr<UTexture2D>& OptionalSectionImage, bool Unlocked, FName NPCRow, int32 SectionIndex, ECompendiumUnlockType SectionType, FCompendiumEntryRowHandle CompendiumRow);
    void CreateCompendiumPage_Title(FText& Title, FText& Subtitle, bool Unlocked);
    void DisplayCompendiumPage(FCompendiumEntryRowHandle CurrentCompendiumRow);
    void RefreshCompendiumList(FGameplayTag FilterTag, FString HeaderText);
    void Construct();
    void BndEvt__W_Compendium_Main_ListView_CompEntries_K2Node_ComponentBoundEvent_0_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
    void ExecuteUbergraph_W_Compendium_Main(int32 EntryPoint);
    void UpdateUnreadCompendiumIndex__DelegateSignature(FCompendiumEntryRowHandle Entry);
}; // Size: 0x358

#endif
