#ifndef UE4SS_SDK_W_Mods_List_HPP
#define UE4SS_SDK_W_Mods_List_HPP

class UW_Mods_List_C : public UAbioticMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button_PageLeft;                                                   // 0x02E8 (size: 0x8)
    class UButton* Button_PageRight;                                                  // 0x02F0 (size: 0x8)
    class UImage* Image;                                                              // 0x02F8 (size: 0x8)
    class UImage* Image_36;                                                           // 0x0300 (size: 0x8)
    class UTextBlock* PagePosition;                                                   // 0x0308 (size: 0x8)
    class UW_Mods_ListEntry_C* W_Mods_ListEntry0;                                     // 0x0310 (size: 0x8)
    class UW_Mods_ListEntry_C* W_Mods_ListEntry1;                                     // 0x0318 (size: 0x8)
    class UW_Mods_ListEntry_C* W_Mods_ListEntry2;                                     // 0x0320 (size: 0x8)
    class UW_Mods_ListEntry_C* W_Mods_ListEntry3;                                     // 0x0328 (size: 0x8)
    class UW_Mods_ListEntry_C* W_Mods_ListEntry4;                                     // 0x0330 (size: 0x8)
    class UW_Mods_ListEntry_C* W_Mods_ListEntry5;                                     // 0x0338 (size: 0x8)
    TEnumAsByte<EModListType::Type> ModListType;                                      // 0x0340 (size: 0x1)
    TArray<UW_Mods_ListEntry_C*> ModListEntries;                                      // 0x0348 (size: 0x10)
    int64 PageNumber;                                                                 // 0x0358 (size: 0x8)
    int64 PagedResultsCount;                                                          // 0x0360 (size: 0x8)

    void UpdatePagesFromResults(int64 ResultsCount, int64 PageCount);
    void ResetList();
    void DisplayList();
    void PreConstruct(bool IsDesignTime);
    void OnModListComplete(FModioErrorCode ErrorCode, FModioOptionalModInfoList Result);
    void BndEvt__W_Mods_List_Button_PageLeft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Mods_List_Button_PageRight_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_W_Mods_List(int32 EntryPoint);
}; // Size: 0x368

#endif
