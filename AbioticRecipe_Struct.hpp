#ifndef UE4SS_SDK_AbioticRecipe_Struct_HPP
#define UE4SS_SDK_AbioticRecipe_Struct_HPP

struct FAbioticRecipe_Struct
{
    FDataTableRowHandle ItemToCreate_4_842F5059497E898D938220BCCC148B08;              // 0x0000 (size: 0x10)
    int32 CountToCreate_17_9ACBB85C48DCB6769A2331AB7B56E2C8;                          // 0x0010 (size: 0x4)
    TEnumAsByte<E_RecipeCategory::Type> Category_22_940DB5D6483687DCE5FF63A7711F71C3; // 0x0014 (size: 0x1)
    TArray<FAbioticItemCount_Struct> RecipeItems_7_0F13BA7A407C72065EE926B9D41B8B9E;  // 0x0018 (size: 0x10)
    TArray<FDataTableRowHandle> BenchesRequired_10_493C635841D8143BB87BDCA941CD28A6;  // 0x0028 (size: 0x10)
    double CraftDuration_13_BFC1ED4A429775D36D12E683816868D6;                         // 0x0038 (size: 0x8)
    TArray<FDataTableRowHandle> LinkedRecipesToUnlock_28_EAECA1EA4C69C00231A206961B10737D; // 0x0040 (size: 0x10)
    bool NotUnlockableByPickup_24_B20B4A1149D919E221126BA38DB0D6C2;                   // 0x0050 (size: 0x1)
    FResearch_Struct ResearchData_31_461737CF4D96D522FB3DC88C54DA0508;                // 0x0058 (size: 0x18)
    FStatModifierRowHandle StatModifier_41_48EF866B4719B527AA6212AD8AC21DFE;          // 0x0070 (size: 0x20)
    FGameplayTagContainer RecipeTags_44_45098727469F09EC03E5F689D36398D8;             // 0x0090 (size: 0x20)
    bool StrippedFromBuild_46_61BC23684470C1F8417C2CB501AE385D;                       // 0x00B0 (size: 0x1)

}; // Size: 0xB1

#endif
