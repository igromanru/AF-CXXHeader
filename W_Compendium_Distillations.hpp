#ifndef UE4SS_SDK_W_Compendium_Distillations_HPP
#define UE4SS_SDK_W_Compendium_Distillations_HPP

class UW_Compendium_Distillations_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* CompendiumTitleText;                                            // 0x02E8 (size: 0x8)
    class UImage* NoChemistryRecipeImage;                                             // 0x02F0 (size: 0x8)
    class UTextBlock* NoChemistryRecipeNotice;                                        // 0x02F8 (size: 0x8)
    class UStackBox* StackPanel;                                                      // 0x0300 (size: 0x8)
    class UW_Player_Journal_Main_C* ParentJournal;                                    // 0x0308 (size: 0x8)
    int32 CurrentRow;                                                                 // 0x0310 (size: 0x4)
    int32 CurrentColumn;                                                              // 0x0314 (size: 0x4)
    int32 MaxColumn;                                                                  // 0x0318 (size: 0x4)

    void RefreshFoundItems();
    void GetAlphabetChemistry(TArray<FName>& Array, TArray<FName>& AlphabetizedArray);
    void InitDistillationList();
    void Construct();
    void ExecuteUbergraph_W_Compendium_Distillations(int32 EntryPoint);
}; // Size: 0x31C

#endif
