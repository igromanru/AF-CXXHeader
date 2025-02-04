#ifndef UE4SS_SDK_W_Player_Journal_Main_HPP
#define UE4SS_SDK_W_Player_Journal_Main_HPP

class UW_Player_Journal_Main_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* AnimateUnreadFlicker;                                     // 0x02E8 (size: 0x8)
    class UWidgetAnimation* AnimateBackArrow;                                         // 0x02F0 (size: 0x8)
    class UCheckBox* BackButton;                                                      // 0x02F8 (size: 0x8)
    class UButton* Button_Compendium;                                                 // 0x0300 (size: 0x8)
    class UButton* Button_unpinAll;                                                   // 0x0308 (size: 0x8)
    class UButton* ClearCorpseWaypointsButton;                                        // 0x0310 (size: 0x8)
    class UW_Compendium_Main_C* Compendium_Main;                                      // 0x0318 (size: 0x8)
    class UImage* CompendiumIcon;                                                     // 0x0320 (size: 0x8)
    class UW_Player_JournalSectorTab_C* Dam_Tab;                                      // 0x0328 (size: 0x8)
    class UImage* DateTimeBar_BG;                                                     // 0x0330 (size: 0x8)
    class UComboBoxString* Dropdown_WaypointMode;                                     // 0x0338 (size: 0x8)
    class UW_Player_Emails_Main_C* Emails_Main;                                       // 0x0340 (size: 0x8)
    class UImage* FacilityBGMap;                                                      // 0x0348 (size: 0x8)
    class UImage* Icon_UnreadCompendiumEntries;                                       // 0x0350 (size: 0x8)
    class UCanvasPanel* JournalCanvasPanel;                                           // 0x0358 (size: 0x8)
    class UImage* JournalIcon;                                                        // 0x0360 (size: 0x8)
    class UCanvasPanel* JournalMapCanvas;                                             // 0x0368 (size: 0x8)
    class UImage* JournalNoiseLayer;                                                  // 0x0370 (size: 0x8)
    class UImage* JournalPageBG;                                                      // 0x0378 (size: 0x8)
    class UWidgetSwitcher* JournalWidgetSwitcher;                                     // 0x0380 (size: 0x8)
    class UW_Player_JournalSectorTab_C* Labs_Tab;                                     // 0x0388 (size: 0x8)
    class UW_Player_Journal_MapCard_C* MapCard_1;                                     // 0x0390 (size: 0x8)
    class UW_Player_Journal_MapCard_C* MapCard_2;                                     // 0x0398 (size: 0x8)
    class UW_Player_Journal_MapCard_C* MapCard_3;                                     // 0x03A0 (size: 0x8)
    class UW_Player_Journal_MapCard_C* MapCard_4;                                     // 0x03A8 (size: 0x8)
    class UW_Player_Journal_MapCard_C* MapCard_5;                                     // 0x03B0 (size: 0x8)
    class UW_Player_Journal_MapCard_C* MapView_Card;                                  // 0x03B8 (size: 0x8)
    class UBorder* MapViewBGBorder;                                                   // 0x03C0 (size: 0x8)
    class UW_Player_JournalSectorTab_C* MF_Tab;                                       // 0x03C8 (size: 0x8)
    class UTextBlock* NoMaps_Text;                                                    // 0x03D0 (size: 0x8)
    class UImage* NoteCategoryIcon;                                                   // 0x03D8 (size: 0x8)
    class UImage* NoteHR;                                                             // 0x03E0 (size: 0x8)
    class UTextBlock* NoteTextTitle;                                                  // 0x03E8 (size: 0x8)
    class UW_Player_JournalSectorTab_C* Office_Tab;                                   // 0x03F0 (size: 0x8)
    class UTextBlock* PinButtonText;                                                  // 0x03F8 (size: 0x8)
    class UTextBlock* PinCount;                                                       // 0x0400 (size: 0x8)
    class UImage* PinImage;                                                           // 0x0408 (size: 0x8)
    class UW_Player_JournalSectorTab_C* Plant_Tab;                                    // 0x0410 (size: 0x8)
    class UTextBlock* Quest_description;                                              // 0x0418 (size: 0x8)
    class UTextBlock* Quest_text;                                                     // 0x0420 (size: 0x8)
    class UW_Player_JournalSectorTab_C* Residence_Tab;                                // 0x0428 (size: 0x8)
    class UScrollBox* ScrollBox_Entries;                                              // 0x0430 (size: 0x8)
    class UW_Player_JournalSectorTab_C* Security_Tab;                                 // 0x0438 (size: 0x8)
    class UTextBlock* SubTitle_RecipeTypeText;                                        // 0x0440 (size: 0x8)
    class UTextBlock* Text_Clock;                                                     // 0x0448 (size: 0x8)
    class UTextBlock* Text_Date;                                                      // 0x0450 (size: 0x8)
    class UTextBlock* Text_Friday;                                                    // 0x0458 (size: 0x8)
    class UTextBlock* Text_Monday;                                                    // 0x0460 (size: 0x8)
    class UTextBlock* Text_Saturday;                                                  // 0x0468 (size: 0x8)
    class UTextBlock* Text_Sunday;                                                    // 0x0470 (size: 0x8)
    class UTextBlock* Text_Thursday;                                                  // 0x0478 (size: 0x8)
    class UTextBlock* Text_Tuesday;                                                   // 0x0480 (size: 0x8)
    class UTextBlock* Text_Wednesday;                                                 // 0x0488 (size: 0x8)
    class UTextBlock* TitleMain;                                                      // 0x0490 (size: 0x8)
    class UW_Player_JournalSectorTab_C* V_0083Tab;                                    // 0x0498 (size: 0x8)
    class UW_Player_JournalSectorTab_C* V_AnteverseA_Tab;                             // 0x04A0 (size: 0x8)
    class UW_Player_JournalSectorTab_C* V_AnteverseB_Tab;                             // 0x04A8 (size: 0x8)
    class UW_Player_JournalSectorTab_C* V_AnteverseC_Tab;                             // 0x04B0 (size: 0x8)
    class UW_Player_JournalSectorTab_C* V_Bos_Tab;                                    // 0x04B8 (size: 0x8)
    class UW_Player_JournalSectorTab_C* V_Canaan;                                     // 0x04C0 (size: 0x8)
    class UW_Player_JournalSectorTab_C* V_DistantShore_Tab;                           // 0x04C8 (size: 0x8)
    class UW_Player_JournalSectorTab_C* V_Flathill_Tab;                               // 0x04D0 (size: 0x8)
    class UW_Player_JournalSectorTab_C* V_Inq_Tab;                                    // 0x04D8 (size: 0x8)
    class UW_Player_JournalSectorTab_C* V_Intro_Tab;                                  // 0x04E0 (size: 0x8)
    class UW_Player_JournalSectorTab_C* V_MirrorWorldTab;                             // 0x04E8 (size: 0x8)
    class UW_Player_JournalSectorTab_C* V_NightTab;                                   // 0x04F0 (size: 0x8)
    class UW_Player_JournalSectorTab_C* V_RiseTab;                                    // 0x04F8 (size: 0x8)
    class UW_Player_JournalSectorTab_C* V_SI;                                         // 0x0500 (size: 0x8)
    class UW_Player_JournalSectorTab_C* V_SUOMI;                                      // 0x0508 (size: 0x8)
    class UW_Player_JournalSectorTab_C* V_Tile;                                       // 0x0510 (size: 0x8)
    class UW_Player_JournalSectorTab_C* V_Train_Tab;                                  // 0x0518 (size: 0x8)
    class UW_Player_JournalSectorTab_C* V_Voussoir_Tab;                               // 0x0520 (size: 0x8)
    class UW_Player_JournalSectorTab_C* V_WALL;                                       // 0x0528 (size: 0x8)
    class UVerticalBox* VBox_Entries;                                                 // 0x0530 (size: 0x8)
    class UW_Compendium_FishDatabase_C* W_Compendium_FishDatabase;                    // 0x0538 (size: 0x8)
    class UW_Compendium_Index_C* W_Compendium_Index;                                  // 0x0540 (size: 0x8)
    class UW_Compendium_SoupRecipes_C* W_Compendium_SoupRecipes;                      // 0x0548 (size: 0x8)
    TEnumAsByte<E_JournalEntryCategories::Type> CurrentPage;                          // 0x0550 (size: 0x1)
    FW_Player_Journal_Main_CJournalEntriesViewed JournalEntriesViewed;                // 0x0558 (size: 0x10)
    void JournalEntriesViewed();
    bool MapViewActive;                                                               // 0x0568 (size: 0x1)
    class ADayNightManager_C* DayNightManager;                                        // 0x0570 (size: 0x8)
    bool Use24Hour;                                                                   // 0x0578 (size: 0x1)
    FText CurrentTabText;                                                             // 0x0580 (size: 0x10)
    bool CurrentTabHasMaps;                                                           // 0x0590 (size: 0x1)
    FSlateBrush CurrentTabBrush;                                                      // 0x05A0 (size: 0xD0)
    class UWidget* CurrentBackButtonGoToWidget;                                       // 0x0670 (size: 0x8)
    FName CurrentEntry;                                                               // 0x0678 (size: 0x8)
    TArray<FName> NewlyReadEntries;                                                   // 0x0680 (size: 0x10)
    bool bIsCompendiumOpen;                                                           // 0x0690 (size: 0x1)

    void Update Date(int32 DayNumber);
    void Select Map Background();
    void SetNewActiveJournalWidget(class UWidget* Widget, class UWidget* BackButtonGoToWidget);
    void CheckForLargerFont();
    void GetNumberOfJournalEntries(TEnumAsByte<E_JournalEntryCategories::Type> Category, int32& FoundEntries);
    void CheckMapsExistForSector(TEnumAsByte<E_JournalEntryCategories::Type> Sector, bool& AtLeast1MapExists);
    FEventReply On_MapViewBGBorder_MouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ToggleMapView(bool ShowMap, class UW_Player_Journal_MapCard_C* MapCard);
    void PopulateMapCards(class UAbiotic_CharacterProgressionComponent_C* ProgressionComponent, int32& MapsFound);
    void ChangeJournalSectorTab(class UW_Player_JournalSectorTab_C* JournalTab);
    void Start Highlight Unread Journal Icon(TEnumAsByte<E_JournalEntryCategories::Type> JournalEntryCategory);
    void RefreshJournal(bool IsCurrentlyActive);
    void BndEvt__W_Player_Journal_Main_Tab_Journal_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void Construct();
    void UpdateLocalUnreadJournalEntries();
    void BndEvt__W_Player_Journal_Main_Dropdown_WaypointMode_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void TimeChanged_Event(double TimeInSeconds);
    void Use24HourCallback(bool NewValue);
    void SetActiveJournalPage(bool IsChecked, class UW_Player_JournalSectorTab_C* Tab);
    void BndEvt__W_Player_Journal_Main_Button_unpinAll_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void ReturnToJournalHome();
    void BndEvt__W_Player_Journal_Main_ClearCorpseWaypointsButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void OpenEmails();
    void OpenCompendium(FGameplayTag FilterTag, FString HeaderText);
    void BndEvt__W_Player_Journal_Main_Button_Compendium_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void OpenSoupRecipes();
    void UpdateCompendiumEntriesReadStatus(FCompendiumEntryRowHandle Entry);
    void OpenFishDatabase();
    void EscapeInputActivated();
    void ExecuteUbergraph_W_Player_Journal_Main(int32 EntryPoint);
    void JournalEntriesViewed__DelegateSignature();
}; // Size: 0x691

#endif
