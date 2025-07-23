#ifndef UE4SS_SDK_W_TraderScreen_HPP
#define UE4SS_SDK_W_TraderScreen_HPP

class UW_TraderScreen_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* FadeTraderImage;                                          // 0x02E8 (size: 0x8)
    class UButton* Button_Buy;                                                        // 0x02F0 (size: 0x8)
    class UButton* Button_CraftQueue_Left;                                            // 0x02F8 (size: 0x8)
    class UButton* Button_CraftQueue_LeftMin;                                         // 0x0300 (size: 0x8)
    class UButton* Button_CraftQueue_Right;                                           // 0x0308 (size: 0x8)
    class UButton* Button_CraftQueue_RightMax;                                        // 0x0310 (size: 0x8)
    class UTextBlock* BuyButton_Text;                                                 // 0x0318 (size: 0x8)
    class UTextBlock* Cost_Column_1;                                                  // 0x0320 (size: 0x8)
    class UTextBlock* Cost_Column_2;                                                  // 0x0328 (size: 0x8)
    class UImage* CraftCount_LeftArrow;                                               // 0x0330 (size: 0x8)
    class UImage* CraftCount_RightArrow;                                              // 0x0338 (size: 0x8)
    class UTextBlock* CraftingButtonText_1;                                           // 0x0340 (size: 0x8)
    class UTextBlock* CraftingButtonText_2;                                           // 0x0348 (size: 0x8)
    class UTextBlock* DEVNOTICE_WFS;                                                  // 0x0350 (size: 0x8)
    class UUniformGridPanel* ShopGridPanel;                                           // 0x0358 (size: 0x8)
    class UTextBlock* TitleMain_Trading;                                              // 0x0360 (size: 0x8)
    class UTextBlock* TitleWith_Trading;                                              // 0x0368 (size: 0x8)
    class UImage* TraderImage;                                                        // 0x0370 (size: 0x8)
    class UW_TraderItem_Entry_C* W_TraderItem_Entry;                                  // 0x0378 (size: 0x8)
    class UW_TraderItem_Entry_C* W_TraderItem_Entry_1;                                // 0x0380 (size: 0x8)
    class UW_TraderItem_Entry_C* W_TraderItem_Entry_2;                                // 0x0388 (size: 0x8)
    class UW_TraderItem_Entry_C* W_TraderItem_Entry_3;                                // 0x0390 (size: 0x8)
    class UW_TraderItem_Entry_C* W_TraderItem_Entry_4;                                // 0x0398 (size: 0x8)
    class UW_TraderItem_Entry_C* W_TraderItem_Entry_5;                                // 0x03A0 (size: 0x8)
    class UW_TraderItem_Entry_C* W_TraderItem_Entry_6;                                // 0x03A8 (size: 0x8)
    class UW_TraderItem_Entry_C* W_TraderItem_Entry_7;                                // 0x03B0 (size: 0x8)
    class UW_TraderItem_Entry_C* W_TraderItem_Entry_8;                                // 0x03B8 (size: 0x8)
    class UW_TraderItem_Entry_C* W_TraderItem_Entry_9;                                // 0x03C0 (size: 0x8)
    class UW_TraderItem_Entry_C* W_TraderItem_Entry_10;                               // 0x03C8 (size: 0x8)
    class UW_TraderItem_Entry_C* W_TraderItem_Entry_11;                               // 0x03D0 (size: 0x8)
    class UW_TraderItem_Entry_C* W_TraderItem_Entry_12;                               // 0x03D8 (size: 0x8)
    class UW_TraderItem_Entry_C* W_TraderItem_Entry_13;                               // 0x03E0 (size: 0x8)
    int32 CurrentRow;                                                                 // 0x03E8 (size: 0x4)
    int32 CurrentColumn;                                                              // 0x03EC (size: 0x4)
    int32 MaxColumn;                                                                  // 0x03F0 (size: 0x4)
    int32 MaxRow;                                                                     // 0x03F4 (size: 0x4)
    class UW_TraderItem_Entry_C* SelectedItem;                                        // 0x03F8 (size: 0x8)
    int32 LeftoverRows;                                                               // 0x0400 (size: 0x4)
    int32 BuyCount;                                                                   // 0x0404 (size: 0x4)
    int32 MaxTradeableCount;                                                          // 0x0408 (size: 0x4)
    FButtonStyle BuyButton_Style_Disallowed;                                          // 0x0410 (size: 0x3F0)
    FButtonStyle BuyButton_Style_Allowed;                                             // 0x0800 (size: 0x3F0)

    void EligibleToTrade(bool& CanTrade);
    void SetTradeItemCount(int32 InCount);
    void OnLoaded_A879F6B84A42ACCEA6FFB59AEEF5EE61(class UObject* Loaded);
    void RefreshTradeScreen(class UTraderComponent_C* TraderComponent, int32 LastSelectedItem);
    void NewItemSelected(class UW_TraderItem_Entry_C* Item, bool Selected);
    void BndEvt__W_TraderScreen_Button_UnpinRecipe_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void GetMaxTradeQuantity();
    void BndEvt__W_TraderScreen_Button_CraftQueue_RightMax_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_TraderScreen_Button_CraftQueue_LeftMin_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_TraderScreen_Button_CraftQueue_Right_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_TraderScreen_Button_CraftQueue_Left_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void UpdateButtonVisuals(bool Tradeable);
    void ExecuteUbergraph_W_TraderScreen(int32 EntryPoint);
}; // Size: 0xBF0

#endif
