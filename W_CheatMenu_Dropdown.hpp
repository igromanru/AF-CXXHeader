#ifndef UE4SS_SDK_W_CheatMenu_Dropdown_HPP
#define UE4SS_SDK_W_CheatMenu_Dropdown_HPP

class UW_CheatMenu_Dropdown_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UVerticalBox* VerticalBox;                                                  // 0x02E8 (size: 0x8)
    class UW_CheatMenu_C* CheatMenu;                                                  // 0x02F0 (size: 0x8)

    void Construct();
    void RefreshContent();
    void AddNewChild(FString ItemName);
    void RefreshDropdown();
    void ExecuteUbergraph_W_CheatMenu_Dropdown(int32 EntryPoint);
}; // Size: 0x2F8

#endif
