#ifndef UE4SS_SDK_W_GameCommandMenu_HPP
#define UE4SS_SDK_W_GameCommandMenu_HPP

class UW_GameCommandMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UVerticalBox* CommandList;                                                  // 0x02E8 (size: 0x8)
    class UEditableTextBox* EditableTextBox;                                          // 0x02F0 (size: 0x8)
    TArray<UGameCommandWidget*> CheatCommands;                                        // 0x02F8 (size: 0x10)
    FString LastSearchString;                                                         // 0x0308 (size: 0x10)
    class UW_GameCommand_C* LastFocusedCommand;                                       // 0x0318 (size: 0x8)
    bool CommandsInitialized;                                                         // 0x0320 (size: 0x1)
    FString LastFirstParam;                                                           // 0x0328 (size: 0x10)
    FString LastSecondParam;                                                          // 0x0338 (size: 0x10)

    void SortGameCommandsByPinned(TArray<FGameCommandRowHandle>& OriginalArray);
    void ClearLastFocus();
    void Construct();
    void BndEvt__W_GameCommandMenu_EditableTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void FilterGameCommands();
    void BndEvt__W_GameCommandMenu_EditableTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void ChangedPinned();
    void ExecuteUbergraph_W_GameCommandMenu(int32 EntryPoint);
}; // Size: 0x348

#endif
