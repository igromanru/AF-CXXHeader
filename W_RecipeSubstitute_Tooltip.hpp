#ifndef UE4SS_SDK_W_RecipeSubstitute_Tooltip_HPP
#define UE4SS_SDK_W_RecipeSubstitute_Tooltip_HPP

class UW_RecipeSubstitute_Tooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UUniformGridPanel* IconGridPanel;                                           // 0x02E8 (size: 0x8)
    TArray<FDataTableRowHandle> ItemsToDisplay;                                       // 0x02F0 (size: 0x10)
    int32 MaxColumn;                                                                  // 0x0300 (size: 0x4)
    int32 CurrentRow;                                                                 // 0x0304 (size: 0x4)
    int32 CurrentColumn;                                                              // 0x0308 (size: 0x4)

    void Construct();
    void ExecuteUbergraph_W_RecipeSubstitute_Tooltip(int32 EntryPoint);
}; // Size: 0x30C

#endif
