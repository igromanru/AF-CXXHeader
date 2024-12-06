#ifndef UE4SS_SDK_W_BenchUpgradeEntry_HPP
#define UE4SS_SDK_W_BenchUpgradeEntry_HPP

class UW_BenchUpgradeEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UBorder* BG_Border;                                                         // 0x02E8 (size: 0x8)
    class UButton* Button_Upgrade;                                                    // 0x02F0 (size: 0x8)
    class UImage* LockIcon;                                                           // 0x02F8 (size: 0x8)
    class UHorizontalBox* RecipeHBox;                                                 // 0x0300 (size: 0x8)
    class UW_InventoryItemSlot_C* RequiredItem_1;                                     // 0x0308 (size: 0x8)
    class UW_InventoryItemSlot_C* RequiredItem_2;                                     // 0x0310 (size: 0x8)
    class UW_InventoryItemSlot_C* RequiredItem_3;                                     // 0x0318 (size: 0x8)
    class UW_InventoryItemSlot_C* RequiredItem_4;                                     // 0x0320 (size: 0x8)
    class UTextBlock* UpgradeDescription;                                             // 0x0328 (size: 0x8)
    class UTextBlock* UpgradeName;                                                    // 0x0330 (size: 0x8)
    FBenchUpgradeRowHandle BenchUpgrade;                                              // 0x0338 (size: 0x20)
    bool HasUpgrade;                                                                  // 0x0358 (size: 0x1)
    FButtonStyle UpgradeButton_Style_Allowed;                                         // 0x0360 (size: 0x3F0)
    FButtonStyle UpgradeButton_Style_Disallowed;                                      // 0x0750 (size: 0x3F0)
    bool InDevelopment;                                                               // 0x0B40 (size: 0x1)
    class UTexture2D* BackgroundImage;                                                // 0x0B48 (size: 0x8)
    bool CanUpgrade;                                                                  // 0x0B50 (size: 0x1)

    bool HasSkillRequirements(TMap<ECharacterSkills, int32>& RequiredSkills, class AAbiotic_PlayerCharacter_C* Player);
    void RefreshState(class AAbiotic_PlayerCharacter_C* Player, FGameplayTagContainer& TagContainer, TArray<class UAbiotic_InventoryComponent_C*>& AdditionalInventories);
    void UpdateUpgradeRequirements(TArray<FItemCount>& RequiredItems, class AAbiotic_PlayerCharacter_C* Player, bool SkillLocked, TArray<class UAbiotic_InventoryComponent_C*>& AdditionalInventories, bool& Success);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__W_BenchUpgradeEntry_Button_Upgrade_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_W_BenchUpgradeEntry(int32 EntryPoint);
}; // Size: 0xB51

#endif
