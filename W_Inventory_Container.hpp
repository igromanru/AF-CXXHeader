#ifndef UE4SS_SDK_W_Inventory_Container_HPP
#define UE4SS_SDK_W_Inventory_Container_HPP

class UW_Inventory_Container_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BackupIcon;                                                         // 0x02E8 (size: 0x8)
    class UButton* Button_DeleteItems;                                                // 0x02F0 (size: 0x8)
    class UButton* Button_EditContainerName;                                          // 0x02F8 (size: 0x8)
    class UButton* Button_SortContainer;                                              // 0x0300 (size: 0x8)
    class UButton* Button_StoreAll;                                                   // 0x0308 (size: 0x8)
    class UButton* Button_StoreAllOfType;                                             // 0x0310 (size: 0x8)
    class UButton* Button_TakeAll;                                                    // 0x0318 (size: 0x8)
    class UImage* CharacterPaneBG;                                                    // 0x0320 (size: 0x8)
    class UTextBlock* ContainerNameText;                                              // 0x0328 (size: 0x8)
    class UImage* Icon;                                                               // 0x0330 (size: 0x8)
    class UImage* Image;                                                              // 0x0338 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0340 (size: 0x8)
    class UImage* Image_98;                                                           // 0x0348 (size: 0x8)
    class UW_Keybind_C* Keybind_TakeAll;                                              // 0x0350 (size: 0x8)
    class UW_Keybind_C* Keybind_TakeAll_1;                                            // 0x0358 (size: 0x8)
    class UW_Keybind_C* Keybind_TakeAll_3;                                            // 0x0360 (size: 0x8)
    class UImage* RadioactiveBG;                                                      // 0x0368 (size: 0x8)
    class UBorder* RadioactiveHoverBorder;                                            // 0x0370 (size: 0x8)
    class UImage* RadioactiveIcon;                                                    // 0x0378 (size: 0x8)
    class UTextBlock* RadioactivityText;                                              // 0x0380 (size: 0x8)
    class UTextBlock* TakeAll_Text;                                                   // 0x0388 (size: 0x8)
    class UTextBlock* TakeAll_Text_1;                                                 // 0x0390 (size: 0x8)
    class UTextBlock* TakeAll_Text_2;                                                 // 0x0398 (size: 0x8)
    class UTextBlock* TakeAll_Text_3;                                                 // 0x03A0 (size: 0x8)
    class UTextBlock* TakeAll_Text_4;                                                 // 0x03A8 (size: 0x8)
    class UTextBlock* TakeAll_Text_5;                                                 // 0x03B0 (size: 0x8)
    class UImage* TemperatureBG;                                                      // 0x03B8 (size: 0x8)
    class UImage* TemperatureIcon;                                                    // 0x03C0 (size: 0x8)
    class UW_InventoryGrid_C* W_InventoryGrid;                                        // 0x03C8 (size: 0x8)
    bool IsDefaultDisplayName;                                                        // 0x03D0 (size: 0x1)
    TArray<FAbiotic_InventoryItemSlotStruct> ItemsToBeAdd;                            // 0x03D8 (size: 0x10)
    int32 Leftover;                                                                   // 0x03E8 (size: 0x4)
    FAbiotic_InventoryItemSlotStruct Current Item;                                    // 0x03F0 (size: 0x98)
    class UAbiotic_InventoryComponent_C* Inventory;                                   // 0x0488 (size: 0x8)
    TArray<FDataTableRowHandle> ItemData;                                             // 0x0490 (size: 0x10)
    int32 Count Found;                                                                // 0x04A0 (size: 0x4)
    TArray<class UAbiotic_InventoryComponent_C*> Inventory List;                      // 0x04A8 (size: 0x10)
    TArray<FName> Item Name;                                                          // 0x04B8 (size: 0x10)

    void TrashCanCheck(class UObject* ContainerOwner);
    void UpdateContainerStatusIcons();
    void InventoryUpdated(class UAbiotic_InventoryComponent_C* Inventory);
    void SetInventoryReference(class UAbiotic_InventoryComponent_C* InventoryComponent);
    void OnLoaded_C7771981410A588BC5E6D7893ABE5605(class UObject* Loaded);
    void OnFailure_D695227746EC17A25216EBADA1AF134C(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void OnSuccess_D695227746EC17A25216EBADA1AF134C(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void BndEvt__W_Inventory_Container_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void TryTakeAllItemsFromContainer();
    void SetNewContainerName();
    void CancelRenameContainer();
    void OnTextChanged(const FText& Text);
    void BndEvt__W_Inventory_Container_Button_EditContainerName_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Inventory_Container_Button_StoreAllOfType_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void RefreshContainerInfoAndGrid();
    void Construct();
    void StoreAllOfType();
    void BndEvt__W_Inventory_Container_Button_SortContainer_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Inventory_Container_Button_DeleteItems_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void CloseInitialPopup();
    void ConfirmDeleteItems();
    void ExecuteUbergraph_W_Inventory_Container(int32 EntryPoint);
}; // Size: 0x4C8

#endif
