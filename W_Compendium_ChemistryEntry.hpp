#ifndef UE4SS_SDK_W_Compendium_ChemistryEntry_HPP
#define UE4SS_SDK_W_Compendium_ChemistryEntry_HPP

class UW_Compendium_ChemistryEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* ChemistryNameText;                                              // 0x02E8 (size: 0x8)
    class UButton* DevButton_Spawn;                                                   // 0x02F0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F8 (size: 0x8)
    class UW_InventoryItemSlot_C* Item2;                                              // 0x0300 (size: 0x8)
    class UW_InventoryItemSlot_C* Item3;                                              // 0x0308 (size: 0x8)
    class UW_InventoryItemSlot_C* Item4;                                              // 0x0310 (size: 0x8)
    class UW_InventoryItemSlot_C* PrimaryChemistryItem;                               // 0x0318 (size: 0x8)
    FName ChemistryRecipeRow;                                                         // 0x0320 (size: 0x8)
    bool Unlocked;                                                                    // 0x0328 (size: 0x1)

    void BP_OnEntryReleased();
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void Construct();
    void BndEvt__W_Compendium_ChemistryEntry_DevButton_Spawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_W_Compendium_ChemistryEntry(int32 EntryPoint);
}; // Size: 0x329

#endif
