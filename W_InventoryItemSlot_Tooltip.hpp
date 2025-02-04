#ifndef UE4SS_SDK_W_InventoryItemSlot_Tooltip_HPP
#define UE4SS_SDK_W_InventoryItemSlot_Tooltip_HPP

class UW_InventoryItemSlot_Tooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* PulseRadiation;                                           // 0x02E8 (size: 0x8)
    class UTextBlock* Armor_Text;                                                     // 0x02F0 (size: 0x8)
    class UTextBlock* AssetID_Text;                                                   // 0x02F8 (size: 0x8)
    class UVerticalBox* BuffApply_VBox;                                               // 0x0300 (size: 0x8)
    class UImage* BuffDivider;                                                        // 0x0308 (size: 0x8)
    class UTextBlock* CanBePlanted_text;                                              // 0x0310 (size: 0x8)
    class UTextBlock* CanChopUpRemains_text;                                          // 0x0318 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0320 (size: 0x8)
    class UTextBlock* CapacityText;                                                   // 0x0328 (size: 0x8)
    class UTextBlock* CarryWeightText;                                                // 0x0330 (size: 0x8)
    class UVerticalBox* CenterInfoVBox;                                               // 0x0338 (size: 0x8)
    class UHorizontalBox* Cold_HBox;                                                  // 0x0340 (size: 0x8)
    class UTextBlock* CookingTimeLeft;                                                // 0x0348 (size: 0x8)
    class UImage* CraftableIcon;                                                      // 0x0350 (size: 0x8)
    class UTextBlock* CraftableText;                                                  // 0x0358 (size: 0x8)
    class UImage* DamagedIcon;                                                        // 0x0360 (size: 0x8)
    class UTextBlock* DamagedTExt;                                                    // 0x0368 (size: 0x8)
    class UTextBlock* DamageText;                                                     // 0x0370 (size: 0x8)
    class UImage* Divider1;                                                           // 0x0378 (size: 0x8)
    class UTextBlock* DurabilityText;                                                 // 0x0380 (size: 0x8)
    class UTextBlock* EquipSlotText;                                                  // 0x0388 (size: 0x8)
    class UTextBlock* FatigueText;                                                    // 0x0390 (size: 0x8)
    class UTextBlock* Fishing_ReelSpeed_Text;                                         // 0x0398 (size: 0x8)
    class UTextBlock* FlavorText_Text;                                                // 0x03A0 (size: 0x8)
    class UImage* FlavorTextDivider;                                                  // 0x03A8 (size: 0x8)
    class UHorizontalBox* HBox_BrokenNotify;                                          // 0x03B0 (size: 0x8)
    class UHorizontalBox* HBox_CraftableNotify;                                       // 0x03B8 (size: 0x8)
    class UHorizontalBox* Hbox_SalvageItems;                                          // 0x03C0 (size: 0x8)
    class UHorizontalBox* Heat_Hbox;                                                  // 0x03C8 (size: 0x8)
    class UTextBlock* HungerText;                                                     // 0x03D0 (size: 0x8)
    class UTextBlock* ItemDescription_Text;                                           // 0x03D8 (size: 0x8)
    class UTextBlock* ItemName_Text;                                                  // 0x03E0 (size: 0x8)
    class UVerticalBox* ItemUseFlags_VBox;                                            // 0x03E8 (size: 0x8)
    class UTextBlock* LiquidText;                                                     // 0x03F0 (size: 0x8)
    class UTextBlock* Paintable_Text;                                                 // 0x03F8 (size: 0x8)
    class UHorizontalBox* RadiationHBox;                                              // 0x0400 (size: 0x8)
    class UImage* RadiationIcon;                                                      // 0x0408 (size: 0x8)
    class UImage* RadiationIcon_1;                                                    // 0x0410 (size: 0x8)
    class UImage* RadiationIcon_2;                                                    // 0x0418 (size: 0x8)
    class UImage* RadiationIcon_3;                                                    // 0x0420 (size: 0x8)
    class UTextBlock* RadiationWarning_Text;                                          // 0x0428 (size: 0x8)
    class UHorizontalBox* RadioactivityBox;                                           // 0x0430 (size: 0x8)
    class UTextBlock* RadioactivityWarning_Text;                                      // 0x0438 (size: 0x8)
    class UTextBlock* RequiresBaking;                                                 // 0x0440 (size: 0x8)
    class UTextBlock* SalvageText;                                                    // 0x0448 (size: 0x8)
    class UImage* ScrappedDivider;                                                    // 0x0450 (size: 0x8)
    class UTextBlock* SoupIngredientText;                                             // 0x0458 (size: 0x8)
    class UCanvasPanel* SubstituteGridBox;                                            // 0x0460 (size: 0x8)
    class UTextBlock* TemperatureCold_Text;                                           // 0x0468 (size: 0x8)
    class UTextBlock* TemperatureHot_Text;                                            // 0x0470 (size: 0x8)
    class UTextBlock* ThirstText;                                                     // 0x0478 (size: 0x8)
    class UBorder* Tooltip_Border;                                                    // 0x0480 (size: 0x8)
    class UVerticalBox* VerticalBox_106;                                              // 0x0488 (size: 0x8)
    class UTextBlock* Weight_Text;                                                    // 0x0490 (size: 0x8)
    FAbiotic_InventoryItemStruct ItemData;                                            // 0x0498 (size: 0x650)
    FAbiotic_InventoryChangeableDataStruct ChangeableItemData;                        // 0x0AE8 (size: 0x118)
    bool JustTitle;                                                                   // 0x0C00 (size: 0x1)
    bool BuiltBuffList;                                                               // 0x0C01 (size: 0x1)
    TEnumAsByte<E_ItemTooltipState::Type> TooltipState;                               // 0x0C02 (size: 0x1)
    bool BriefTooltip;                                                                // 0x0C03 (size: 0x1)
    FLinearColor DefaultTextColor;                                                    // 0x0C04 (size: 0x10)
    FRecipeSubstitutes_Struct SubstituteItemData;                                     // 0x0C18 (size: 0x58)
    double LocationX;                                                                 // 0x0C70 (size: 0x8)
    double LocationY;                                                                 // 0x0C78 (size: 0x8)
    TEnumAsByte<E_InventorySlotType::Type> InvSlotType;                               // 0x0C80 (size: 0x1)
    bool IsRepresentationSlot;                                                        // 0x0C81 (size: 0x1)
    bool CraftableNotice;                                                             // 0x0C82 (size: 0x1)
    FName ItemRowName;                                                                // 0x0C84 (size: 0x8)
    bool BrokenItem;                                                                  // 0x0C8C (size: 0x1)
    double LiquidWeightMultiplier;                                                    // 0x0C90 (size: 0x8)
    bool HiddenItem;                                                                  // 0x0C98 (size: 0x1)
    bool FoundActiveSetBonus;                                                         // 0x0C99 (size: 0x1)
    TArray<class UW_Tooltip_TextLine_C*> FoundSetBonusText;                           // 0x0CA0 (size: 0x10)

    void SetWeaponDamageText();
    void CheckIfItemStripped(bool IsStripped);
    void CheckIfRecipeStripped();
    void CheckSoupRecipeCount(bool RequireSoupSkill, int32& SoupRecipes);
    void CenterDividerVisibillityCheck(bool& Visible);
    FAbiotic_InventoryItemStruct GetCorrectConsumeItemData();
    void CheckForTextureVariantOverrides();
    void Set Tooltip Location(FVector2D Mouse Position, FVector2D& Tooltip Desired Location);
    void RefreshTooltipInformation();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Adjust Tooltip Position On Viewport();
    void Setup Tooltip Info();
    void ExecuteUbergraph_W_InventoryItemSlot_Tooltip(int32 EntryPoint);
}; // Size: 0xCB0

#endif
