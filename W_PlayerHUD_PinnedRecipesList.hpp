#ifndef UE4SS_SDK_W_PlayerHUD_PinnedRecipesList_HPP
#define UE4SS_SDK_W_PlayerHUD_PinnedRecipesList_HPP

class UW_PlayerHUD_PinnedRecipesList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02E8 (size: 0x8)
    class UVerticalBox* PinnedRecipes;                                                // 0x02F0 (size: 0x8)
    FSlateColor CanCraftColor;                                                        // 0x02F8 (size: 0x14)
    FSlateColor CannotCraftColor;                                                     // 0x030C (size: 0x14)

    void CheckForAvailableItemInPinnedRecipe(class AAbiotic_PlayerCharacter_C*& OwningCharacter, const FAbioticItemCount_Struct& ItemCount, class UW_InventoryItemSlot_C*& ItemSlot, FAbioticRecipe_Struct& Recipe, const TArray<FDataTableRowHandle>& BenchesAvailable, bool& OneItemIsMissing);
    void Add New Recipe Pin(FName Recipe);
    void Update Pinned Recipes Item(class AAbiotic_PlayerCharacter_C*& OwningCharacter);
    void CheckForDuplicateRecipe(const FName& RecipeToLookFor, bool& HasDuplicates, TArray<class UWidget*>& DuplicateRecipePin);
    void StartFillingRecipesToList(FName Recipe);
    void RefreshPinnedRecipeName(bool ChangeColorOnly, bool RevertToDefault, const class UTextBlock*& TextToUpdate, FText NewRecipeName);
    void ExecuteUbergraph_W_PlayerHUD_PinnedRecipesList(int32 EntryPoint);
}; // Size: 0x320

#endif
