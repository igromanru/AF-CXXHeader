#ifndef UE4SS_SDK_W_PlayerHUD_ItemActionList_HPP
#define UE4SS_SDK_W_PlayerHUD_ItemActionList_HPP

class UW_PlayerHUD_ItemActionList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UVerticalBox* ActionList;                                                   // 0x02E8 (size: 0x8)
    class UHorizontalBox* Hbox_JumpPrompt;                                            // 0x02F0 (size: 0x8)
    class UHorizontalBox* HBox_PrimaryPrompt;                                         // 0x02F8 (size: 0x8)
    class UW_Keybind_C* JumpKeybind;                                                  // 0x0300 (size: 0x8)
    class UTextBlock* JumpKeySuffix;                                                  // 0x0308 (size: 0x8)
    class UW_Keybind_C* PrimaryFireKeybind;                                           // 0x0310 (size: 0x8)
    class UTextBlock* PrimaryFireSuffix;                                              // 0x0318 (size: 0x8)
    TArray<FItemActionRowHandle> ItemActions;                                         // 0x0320 (size: 0x10)

    void RemoveActionFromList(FItemActionRowHandle Remove, bool& Success);
    void AddActionToList(FItemActionRowHandle Add, bool& Success);
    void UpdateExitPromptLine(bool ShowFlag, FText Action, FText Item Name, bool Driving);
    void UpdatePrimaryPromptLine(bool ShowFlag, FText Action, FText Item Name);
    void SetActionList(TArray<FItemActionRowHandle>& Actions);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_PlayerHUD_ItemActionList(int32 EntryPoint);
}; // Size: 0x330

#endif
