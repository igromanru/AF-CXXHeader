#ifndef UE4SS_SDK_W_MainMenu_BackgroundSelection_HPP
#define UE4SS_SDK_W_MainMenu_BackgroundSelection_HPP

class UW_MainMenu_BackgroundSelection_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTileView* BackgroundEntryGrid;                                             // 0x02E8 (size: 0x8)

    void PopulateBackgroundList();
    void Construct();
    void ExecuteUbergraph_W_MainMenu_BackgroundSelection(int32 EntryPoint);
}; // Size: 0x2F0

#endif
