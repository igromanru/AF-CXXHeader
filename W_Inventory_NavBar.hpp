#ifndef UE4SS_SDK_W_Inventory_NavBar_HPP
#define UE4SS_SDK_W_Inventory_NavBar_HPP

class UW_Inventory_NavBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Journal_Notify_Bloom;                                     // 0x02E8 (size: 0x8)
    class UWidgetAnimation* RArrow_Bloom;                                             // 0x02F0 (size: 0x8)
    class UWidgetAnimation* LArrow_Bloom;                                             // 0x02F8 (size: 0x8)
    class UButton* Button_LeftArrow;                                                  // 0x0300 (size: 0x8)
    class UButton* Button_RightArrow;                                                 // 0x0308 (size: 0x8)
    class UImage* Image;                                                              // 0x0310 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0318 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0320 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0328 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0330 (size: 0x8)
    class UW_Keybind_C* Keybind_MenuLeft;                                             // 0x0338 (size: 0x8)
    class UW_Keybind_C* Keybind_MenuRight;                                            // 0x0340 (size: 0x8)
    class UImage* NavBG;                                                              // 0x0348 (size: 0x8)
    class UImage* NotifyIcon_Journal;                                                 // 0x0350 (size: 0x8)
    class UCheckBox* Tab_Backpack;                                                    // 0x0358 (size: 0x8)
    class UCheckBox* Tab_Crafting;                                                    // 0x0360 (size: 0x8)
    class UCheckBox* Tab_Health;                                                      // 0x0368 (size: 0x8)
    class UCheckBox* Tab_Journal;                                                     // 0x0370 (size: 0x8)
    class UCheckBox* Tab_Skills;                                                      // 0x0378 (size: 0x8)
    TArray<class UCheckBox*> NavTabs;                                                 // 0x0380 (size: 0x10)
    FW_Inventory_NavBar_CJournal_EntryBloom Journal_EntryBloom;                       // 0x0390 (size: 0x10)
    void Journal_EntryBloom();
    FW_Inventory_NavBar_CCycleNavTab CycleNavTab;                                     // 0x03A0 (size: 0x10)
    void CycleNavTab(bool Next);

    void BndEvt__W_Inventory_NavBar_Button_LeftArrow_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__W_Inventory_NavBar_Button_LeftArrow_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Inventory_NavBar_Button_RightArrow_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__W_Inventory_NavBar_Button_RightArrow_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__W_Inventory_NavBar_Button_LeftArrow_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__W_Inventory_NavBar_Button_RightArrow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_W_Inventory_NavBar(int32 EntryPoint);
    void CycleNavTab__DelegateSignature(bool Next);
    void Journal_EntryBloom__DelegateSignature();
}; // Size: 0x3B0

#endif
