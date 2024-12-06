#ifndef UE4SS_SDK_W_Compendium_SoupRecipes_HPP
#define UE4SS_SDK_W_Compendium_SoupRecipes_HPP

class UW_Compendium_SoupRecipes_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* CompendiumTitleText;                                            // 0x02E8 (size: 0x8)
    class UImage* NoSoupImage;                                                        // 0x02F0 (size: 0x8)
    class UTextBlock* NoSoupNotice;                                                   // 0x02F8 (size: 0x8)
    class UUniformGridPanel* SoupListGridPanel;                                       // 0x0300 (size: 0x8)
    class UW_Compendium_SoupEntry_C* W_Compendium_SoupEntry_1;                        // 0x0308 (size: 0x8)
    class UW_Player_Journal_Main_C* ParentJournal;                                    // 0x0310 (size: 0x8)
    int32 CurrentRow;                                                                 // 0x0318 (size: 0x4)
    int32 CurrentColumn;                                                              // 0x031C (size: 0x4)
    int32 MaxColumn;                                                                  // 0x0320 (size: 0x4)

    void CanCookSoup?(bool& SoupUnlocked);
    void GetAlphabetSoup(TArray<FName>& Array, TArray<FName>& AlphabetizedArray);
    void RefreshSoupRecipeList();
    void Construct();
    void ExecuteUbergraph_W_Compendium_SoupRecipes(int32 EntryPoint);
}; // Size: 0x324

#endif
