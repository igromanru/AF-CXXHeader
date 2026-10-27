#ifndef UE4SS_SDK_W_Debug_Levels_HPP
#define UE4SS_SDK_W_Debug_Levels_HPP

class UW_Debug_Levels_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG;                                                                 // 0x02E8 (size: 0x8)
    class UTextBlock* Text_LevelFX;                                                   // 0x02F0 (size: 0x8)
    class UVerticalBox* VBox_Levels;                                                  // 0x02F8 (size: 0x8)
    class UW_CheatMenu_C* ParentCheatMenu;                                            // 0x0300 (size: 0x8)

    void Construct();
    void RefreshLevelData();
    void ExecuteUbergraph_W_Debug_Levels(int32 EntryPoint);
}; // Size: 0x308

#endif
