#ifndef UE4SS_SDK_W_BenchUpgradeScreen_HPP
#define UE4SS_SDK_W_BenchUpgradeScreen_HPP

class UW_BenchUpgradeScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_145;                                              // 0x02E8 (size: 0x8)
    class UTextBlock* CraftingLevel_T1;                                               // 0x02F0 (size: 0x8)
    class UTextBlock* CraftingLevel_T2;                                               // 0x02F8 (size: 0x8)
    class UTextBlock* CraftingLevel_T3;                                               // 0x0300 (size: 0x8)
    class UImage* Divider_4;                                                          // 0x0308 (size: 0x8)
    class UImage* Divider_5;                                                          // 0x0310 (size: 0x8)
    class UImage* Divider_Bottom_Bottom;                                              // 0x0318 (size: 0x8)
    class UImage* Divider_Bottom_Top;                                                 // 0x0320 (size: 0x8)
    class UImage* Divider_Middle_Bottom;                                              // 0x0328 (size: 0x8)
    class UImage* Divider_Middle_Top;                                                 // 0x0330 (size: 0x8)
    class UImage* DividerBig_1;                                                       // 0x0338 (size: 0x8)
    class UImage* DividerBig_2;                                                       // 0x0340 (size: 0x8)
    class UImage* DividerBig_3;                                                       // 0x0348 (size: 0x8)
    class UW_BenchUpgradeEntry_C* Upgrade_BenchWarmer;                                // 0x0350 (size: 0x8)
    class UW_BenchUpgradeEntry_C* Upgrade_Cheffigy;                                   // 0x0358 (size: 0x8)
    class UW_BenchUpgradeEntry_C* Upgrade_Dioxohealer;                                // 0x0360 (size: 0x8)
    class UW_BenchUpgradeEntry_C* Upgrade_ItemTransporter;                            // 0x0368 (size: 0x8)
    class UW_BenchUpgradeEntry_C* Upgrade_ItemTransporter_ChefStation;                // 0x0370 (size: 0x8)
    class UW_BenchUpgradeEntry_C* Upgrade_MatterSynthesizer;                          // 0x0378 (size: 0x8)
    class UW_BenchUpgradeEntry_C* Upgrade_MetabolicField;                             // 0x0380 (size: 0x8)
    class UW_BenchUpgradeEntry_C* Upgrade_PortalSuppression;                          // 0x0388 (size: 0x8)
    class UW_BenchUpgradeEntry_C* Upgrade_TougherBench;                               // 0x0390 (size: 0x8)
    class UVerticalBox* VerticalBox_16;                                               // 0x0398 (size: 0x8)

    void RefreshUpgrades(class AAbiotic_PlayerCharacter_C* Player, FGameplayTagContainer& TagContainer, TArray<class UAbiotic_InventoryComponent_C*>& AdditionalInventories);
    void Construct();
    void RefreshBenchUpgradeScreen();
    void ExecuteUbergraph_W_BenchUpgradeScreen(int32 EntryPoint);
}; // Size: 0x3A0

#endif
