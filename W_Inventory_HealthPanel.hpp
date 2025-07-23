#ifndef UE4SS_SDK_W_Inventory_HealthPanel_HPP
#define UE4SS_SDK_W_Inventory_HealthPanel_HPP

class UW_Inventory_HealthPanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* FlashCondition;                                           // 0x02E8 (size: 0x8)
    class UWidgetAnimation* FlashEssentials;                                          // 0x02F0 (size: 0x8)
    class UImage* BackupIcon;                                                         // 0x02F8 (size: 0x8)
    class UImage* Body_Head;                                                          // 0x0300 (size: 0x8)
    class UImage* Body_LeftArm;                                                       // 0x0308 (size: 0x8)
    class UImage* Body_LeftLeg;                                                       // 0x0310 (size: 0x8)
    class UImage* Body_RightArm;                                                      // 0x0318 (size: 0x8)
    class UImage* Body_RightLeg;                                                      // 0x0320 (size: 0x8)
    class UImage* Body_Torso;                                                         // 0x0328 (size: 0x8)
    class UImage* Condition_BG;                                                       // 0x0330 (size: 0x8)
    class UImage* ConditionHeader_BG;                                                 // 0x0338 (size: 0x8)
    class UTextBlock* ContainerNameText;                                              // 0x0340 (size: 0x8)
    class UTextBlock* ContainerNameText_2;                                            // 0x0348 (size: 0x8)
    class UTextBlock* ContainerNameText_3;                                            // 0x0350 (size: 0x8)
    class UTextBlock* ContainerNameText_4;                                            // 0x0358 (size: 0x8)
    class UButton* DebugButton_ForceRefresh;                                          // 0x0360 (size: 0x8)
    class UImage* Essentials_BG;                                                      // 0x0368 (size: 0x8)
    class UImage* EssentialsHeader_BG;                                                // 0x0370 (size: 0x8)
    class UImage* HeadIndicator;                                                      // 0x0378 (size: 0x8)
    class UVerticalBox* HealthArrowVBox;                                              // 0x0380 (size: 0x8)
    class UVerticalBox* HealthArrowVBox_Down;                                         // 0x0388 (size: 0x8)
    class UProgressBar* HealthBar;                                                    // 0x0390 (size: 0x8)
    class UImage* HealthBarIcon;                                                      // 0x0398 (size: 0x8)
    class UTextBlock* HealthSummaryDescriptorText;                                    // 0x03A0 (size: 0x8)
    class UImage* HR_Bot;                                                             // 0x03A8 (size: 0x8)
    class UImage* HR_Top;                                                             // 0x03B0 (size: 0x8)
    class UImage* MedicalBag_BG;                                                      // 0x03B8 (size: 0x8)
    class UImage* MedicalBag_Bottom;                                                  // 0x03C0 (size: 0x8)
    class UImage* MedicalBag_Header;                                                  // 0x03C8 (size: 0x8)
    class UImage* MedicalBag_Left;                                                    // 0x03D0 (size: 0x8)
    class UImage* MedicalBag_Right;                                                   // 0x03D8 (size: 0x8)
    class UW_ClickableItemSlot_C* MedicalItem1;                                       // 0x03E0 (size: 0x8)
    class UW_ClickableItemSlot_C* MedicalItem2;                                       // 0x03E8 (size: 0x8)
    class UW_ClickableItemSlot_C* MedicalItem3;                                       // 0x03F0 (size: 0x8)
    class UW_ClickableItemSlot_C* MedicalItem4;                                       // 0x03F8 (size: 0x8)
    class UW_ClickableItemSlot_C* MedicalItem5;                                       // 0x0400 (size: 0x8)
    class UW_ClickableItemSlot_C* MedicalItem6;                                       // 0x0408 (size: 0x8)
    class UW_ClickableItemSlot_C* MedicalItem7;                                       // 0x0410 (size: 0x8)
    class UW_ClickableItemSlot_C* MedicalItem8;                                       // 0x0418 (size: 0x8)
    class UCircularThrobber* MedicalUseThrobber;                                      // 0x0420 (size: 0x8)
    class UImage* NoHealthIssues_BG;                                                  // 0x0428 (size: 0x8)
    class UTextBlock* NoHealthIssues_Text;                                            // 0x0430 (size: 0x8)
    class UImage* NoHealthIssuesIcon;                                                 // 0x0438 (size: 0x8)
    class UImage* NoMedicalItems_BG;                                                  // 0x0440 (size: 0x8)
    class UTextBlock* NoMedicalItemsText;                                             // 0x0448 (size: 0x8)
    class UImage* NoStatusBG;                                                         // 0x0450 (size: 0x8)
    class UImage* NoStatusIcon;                                                       // 0x0458 (size: 0x8)
    class UTextBlock* NoStatusText;                                                   // 0x0460 (size: 0x8)
    class UScrollBox* ScrollBox_Condition;                                            // 0x0468 (size: 0x8)
    class UScrollBox* ScrollBox_Issues;                                               // 0x0470 (size: 0x8)
    class UImage* SunDiskIcon;                                                        // 0x0478 (size: 0x8)
    class UImage* SunDiskIcon_Rot;                                                    // 0x0480 (size: 0x8)
    class UUniformGridPanel* UGrid_MedicalItems;                                      // 0x0488 (size: 0x8)
    class UW_ButtonPromptHelperBar_C* W_ButtonPromptHelperBar;                        // 0x0490 (size: 0x8)
    class UW_HealthEntry_C* W_HealthEntry_Continence;                                 // 0x0498 (size: 0x8)
    class UW_HealthEntry_C* W_HealthEntry_Fatigue;                                    // 0x04A0 (size: 0x8)
    class UW_HealthEntry_C* W_HealthEntry_Hunger;                                     // 0x04A8 (size: 0x8)
    class UW_HealthEntry_LimbCategory_C* W_HealthEntry_LimbCategory;                  // 0x04B0 (size: 0x8)
    class UW_HealthEntry_LimbCategory_C* W_HealthEntry_LimbCategory_1;                // 0x04B8 (size: 0x8)
    class UW_HealthEntry_LimbCategory_C* W_HealthEntry_LimbCategory_2;                // 0x04C0 (size: 0x8)
    class UW_HealthEntry_LimbCategory_C* W_HealthEntry_LimbCategory_3;                // 0x04C8 (size: 0x8)
    class UW_HealthEntry_LimbCategory_C* W_HealthEntry_LimbCategory_4;                // 0x04D0 (size: 0x8)
    class UW_HealthEntry_LimbCategory_C* W_HealthEntry_LimbCategory_5;                // 0x04D8 (size: 0x8)
    class UW_HealthEntry_C* W_HealthEntry_Thirst;                                     // 0x04E0 (size: 0x8)
    class UW_HUD_TemperatureBar_C* W_HUD_TemperatureBar;                              // 0x04E8 (size: 0x8)
    class UImage* Wound_Head_Bleeding;                                                // 0x04F0 (size: 0x8)
    class UImage* Wound_LeftArm_Bleeding;                                             // 0x04F8 (size: 0x8)
    class UImage* Wound_LeftArm_BoneInjury;                                           // 0x0500 (size: 0x8)
    class UImage* Wound_LeftLeg_Bleeding;                                             // 0x0508 (size: 0x8)
    class UImage* Wound_LeftLeg_BoneInjury;                                           // 0x0510 (size: 0x8)
    class UImage* Wound_RightArm__BoneInjury;                                         // 0x0518 (size: 0x8)
    class UImage* Wound_RightArm_Bleeding;                                            // 0x0520 (size: 0x8)
    class UImage* Wound_RightLeg_Bleeding;                                            // 0x0528 (size: 0x8)
    class UImage* Wound_RightLeg_BoneInjury;                                          // 0x0530 (size: 0x8)
    class UImage* Wound_Torso_Bleeding;                                               // 0x0538 (size: 0x8)
    TEnumAsByte<ECriticalityLevels::Type> HeadStatus;                                 // 0x0540 (size: 0x1)
    TEnumAsByte<ECriticalityLevels::Type> TorsoStatus;                                // 0x0541 (size: 0x1)
    TEnumAsByte<ECriticalityLevels::Type> LeftArmStatus;                              // 0x0542 (size: 0x1)
    TEnumAsByte<ECriticalityLevels::Type> RightArmStatus;                             // 0x0543 (size: 0x1)
    TEnumAsByte<ECriticalityLevels::Type> LeftLegStatus;                              // 0x0544 (size: 0x1)
    TEnumAsByte<ECriticalityLevels::Type> RightLegStatus;                             // 0x0545 (size: 0x1)
    class UW_PlayerHUD_Main_C* ParentHUD;                                             // 0x0548 (size: 0x8)
    class AAbiotic_Character_ParentBP_C* OwningCharacter;                             // 0x0550 (size: 0x8)
    TArray<class UW_ClickableItemSlot_C*> MedicalItemButtons;                         // 0x0558 (size: 0x10)
    bool RanConstruct;                                                                // 0x0568 (size: 0x1)
    TArray<class UW_HealthEntry_C*> StaticStatusEntries;                              // 0x0570 (size: 0x10)
    bool SunDisk;                                                                     // 0x0580 (size: 0x1)

    void UpdateStaticBuffEntries();
    void UpdateBleedingStatus(class UImage* Image, TEnumAsByte<ECriticalityLevels::Type> Critical Level);
    void RefreshVisibilityOnLimbCategoriesAndBuffLists();
    void AddBuffEntryToLimbCategory(EBodyLimbs Limb, class UW_HealthEntry_C*& Widget);
    void RefreshMedicalItemGrid();
    void GetCriticalityColor(TEnumAsByte<ECriticalityLevels::Type> Index, FLinearColor& Color, FSlateColor& SlateColor);
    void UpdateBodyStates(class AAbiotic_Character_ParentBP_C* Character);
    void Construct();
    void HealthChanged();
    void BndEvt__W_Inventory_BodyDiagram_Large_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void RefreshHealthScreen();
    void UpdateHealthBar();
    void CurrentBuffsUpdated(class UCharacterBuffComponent* BuffComponent);
    void UpdateStaticStatBars();
    void MedicalButtonPressed();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_W_Inventory_HealthPanel(int32 EntryPoint);
}; // Size: 0x581

#endif
