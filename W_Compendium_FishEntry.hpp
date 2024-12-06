#ifndef UE4SS_SDK_W_Compendium_FishEntry_HPP
#define UE4SS_SDK_W_Compendium_FishEntry_HPP

class UW_Compendium_FishEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG;                                                                 // 0x02E8 (size: 0x8)
    class UImage* BG_MainText;                                                        // 0x02F0 (size: 0x8)
    class UImage* BG_Title;                                                           // 0x02F8 (size: 0x8)
    class UTextBlock* FishDescriptionText;                                            // 0x0300 (size: 0x8)
    class UW_InventoryItemSlot_C* FishItemSlot;                                       // 0x0308 (size: 0x8)
    class UTextBlock* FishNameText;                                                   // 0x0310 (size: 0x8)
    class UTextBlock* FoundTitleText;                                                 // 0x0318 (size: 0x8)
    class UHorizontalBox* HBox_Location;                                              // 0x0320 (size: 0x8)
    class UHorizontalBox* HBox_Salvage;                                               // 0x0328 (size: 0x8)
    class UTextBlock* LocationText;                                                   // 0x0330 (size: 0x8)
    class UTextBlock* ResourcesText;                                                  // 0x0338 (size: 0x8)
    FName FishRow;                                                                    // 0x0340 (size: 0x8)
    bool Undiscovered;                                                                // 0x0348 (size: 0x1)
    FText Text_Flavor;                                                                // 0x0350 (size: 0x10)
    FText Text_Name;                                                                  // 0x0360 (size: 0x10)

    void GetFishLocationNames(TArray<FString>& Locations);
    void BP_OnEntryReleased();
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void Construct();
    void ExecuteUbergraph_W_Compendium_FishEntry(int32 EntryPoint);
}; // Size: 0x370

#endif
