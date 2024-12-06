#ifndef UE4SS_SDK_W_Player_Journal_MapCard_HPP
#define UE4SS_SDK_W_Player_Journal_MapCard_HPP

class UW_Player_Journal_MapCard_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* HoverExpand;                                              // 0x02E8 (size: 0x8)
    class UImage* BG;                                                                 // 0x02F0 (size: 0x8)
    class UButton* CardButton;                                                        // 0x02F8 (size: 0x8)
    class UImage* MapImage;                                                           // 0x0300 (size: 0x8)
    FDataTableRowHandle MapRow;                                                       // 0x0308 (size: 0x10)
    class UW_Player_Journal_Main_C* JournalParent;                                    // 0x0318 (size: 0x8)

    void OnLoaded_A9A6A6904B1B8A0B4181968C910D5D4A(class UObject* Loaded);
    void UpdateMapCard(class UW_Player_Journal_Main_C* JournalParent, FName NewMapRow);
    void BndEvt__W_Player_Journal_MapCard_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Player_Journal_MapCard_CardButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__W_Player_Journal_MapCard_CardButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_W_Player_Journal_MapCard(int32 EntryPoint);
}; // Size: 0x320

#endif
