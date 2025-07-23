#ifndef UE4SS_SDK_W_Inventory_RepairArea_HPP
#define UE4SS_SDK_W_Inventory_RepairArea_HPP

class UW_Inventory_RepairArea_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG;                                                                 // 0x02E8 (size: 0x8)
    class UButton* Button_repair;                                                     // 0x02F0 (size: 0x8)
    class UButton* Button_scrap;                                                      // 0x02F8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0300 (size: 0x8)
    class UImage* SalvageIcon;                                                        // 0x0308 (size: 0x8)
    class UTextBlock* Text_Instruct1;                                                 // 0x0310 (size: 0x8)
    class UTextBlock* Text_Instruct2;                                                 // 0x0318 (size: 0x8)
    class UTextBlock* TitleMain;                                                      // 0x0320 (size: 0x8)
    bool HasEnoughToRepairCurrentItem;                                                // 0x0328 (size: 0x1)
    TEnumAsByte<E_CursorMode::Type> SalvageCursorMode;                                // 0x0329 (size: 0x1)

    void DoesLocalPlayerHaveItem?(FDataTableRowHandle Item, int32 Count, bool& Found);
    void BndEvt__Button_scrap_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_repair_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_W_Inventory_RepairArea(int32 EntryPoint);
}; // Size: 0x32A

#endif
