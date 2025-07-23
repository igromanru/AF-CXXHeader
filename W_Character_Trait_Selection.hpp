#ifndef UE4SS_SDK_W_Character_Trait_Selection_HPP
#define UE4SS_SDK_W_Character_Trait_Selection_HPP

class UW_Character_Trait_Selection_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG1;                                                                // 0x02E8 (size: 0x8)
    class UImage* BG1_2;                                                              // 0x02F0 (size: 0x8)
    class UImage* BG2;                                                                // 0x02F8 (size: 0x8)
    class UImage* BG2_1;                                                              // 0x0300 (size: 0x8)
    class UImage* BG4;                                                                // 0x0308 (size: 0x8)
    class UImage* BG_AvailablePoints;                                                 // 0x0310 (size: 0x8)
    class UImage* BG_StartingPoints;                                                  // 0x0318 (size: 0x8)
    class UImage* BGMain;                                                             // 0x0320 (size: 0x8)
    class UW_MainMenuButton_C* Button_Finish;                                         // 0x0328 (size: 0x8)
    class UCircularThrobber* CircularThrobber_0;                                      // 0x0330 (size: 0x8)
    class UTextBlock* PointsAvailable_Text;                                           // 0x0338 (size: 0x8)
    class UTextBlock* PointsCount_Text;                                               // 0x0340 (size: 0x8)
    class UScrollBox* Scrollbox_AvailableTraits_Neg;                                  // 0x0348 (size: 0x8)
    class UScrollBox* Scrollbox_AvailableTraits_Pos;                                  // 0x0350 (size: 0x8)
    class UScrollBox* Scrollbox_StartingStats;                                        // 0x0358 (size: 0x8)
    class UTextBlock* StartingPointsCountText;                                        // 0x0360 (size: 0x8)
    class UUniformGridPanel* TraitGrid;                                               // 0x0368 (size: 0x8)
    class UCanvasPanel* TraitSelect;                                                  // 0x0370 (size: 0x8)
    class UVerticalBox* VBox_StartingStats;                                           // 0x0378 (size: 0x8)
    class UW_Character_Job_Selection_C* W_Character_Job_Selection;                    // 0x0380 (size: 0x8)
    class UW_Character_JobSummary_C* W_Character_JobSummary;                          // 0x0388 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton;                                      // 0x0390 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_3;                                    // 0x0398 (size: 0x8)
    class UW_UIPopup_Generic_C* W_UIPopup_Generic;                                    // 0x03A0 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_24;                                         // 0x03A8 (size: 0x8)
    int32 Starting Trait Points;                                                      // 0x03B0 (size: 0x4)
    TMap<FName, int32> TraitsAndPoints;                                               // 0x03B8 (size: 0x50)
    int32 FinalPoints;                                                                // 0x0408 (size: 0x4)
    FName Selected_Job;                                                               // 0x040C (size: 0x8)
    bool HasMadeCharacterBefore;                                                      // 0x0414 (size: 0x1)
    bool EnteredAmnesiaThreshold;                                                     // 0x0415 (size: 0x1)

    void GetFinishPopupContent(FText& Title, FText& Content, FText& Yes, FText& No);
    void UpdateCharacterStatSummary();
    void UpdateJobSummary();
    void CalculatePointsAvailable(FName SelectedJob);
    void Change Trait Points(FName Name, bool IsJobChange, bool Remove, FTrait_Struct TraitData, int32& FinalPoints);
    void Construct();
    void BndEvt__Button_Finish_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void BndEvt__W_MainMenuButton_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature();
    void CompleteTraitSelection();
    void PopupYesSelected();
    void PopupNoSelected();
    void CloseInitialPopup();
    void ExecuteUbergraph_W_Character_Trait_Selection(int32 EntryPoint);
}; // Size: 0x416

#endif
