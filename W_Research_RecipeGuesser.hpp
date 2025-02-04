#ifndef UE4SS_SDK_W_Research_RecipeGuesser_HPP
#define UE4SS_SDK_W_Research_RecipeGuesser_HPP

class UW_Research_RecipeGuesser_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* BrainWiggle;                                              // 0x02E8 (size: 0x8)
    class UWidgetAnimation* ThinkAnim;                                                // 0x02F0 (size: 0x8)
    class UWidgetAnimation* BrainPop;                                                 // 0x02F8 (size: 0x8)
    class UButton* Button_Debug_MicroscopeTest;                                       // 0x0300 (size: 0x8)
    class UButton* Button_Debug_Skip;                                                 // 0x0308 (size: 0x8)
    class UButton* Button_Research;                                                   // 0x0310 (size: 0x8)
    class UImage* CraftingImage3D;                                                    // 0x0318 (size: 0x8)
    class UImage* DrawerBG;                                                           // 0x0320 (size: 0x8)
    class UUniformGridPanel* ItemGrid;                                                // 0x0328 (size: 0x8)
    class UW_Research_RG_ReceivingSlot_C* ReceivingSlot0;                             // 0x0330 (size: 0x8)
    class UW_Research_RG_ReceivingSlot_C* ReceivingSlot1;                             // 0x0338 (size: 0x8)
    class UW_Research_RG_ReceivingSlot_C* ReceivingSlot2;                             // 0x0340 (size: 0x8)
    class UW_Research_RG_ReceivingSlot_C* ReceivingSlot3;                             // 0x0348 (size: 0x8)
    class UTextBlock* SchematicTitle;                                                 // 0x0350 (size: 0x8)
    class UTextBlock* Text_PotentialRecipeTitle;                                      // 0x0358 (size: 0x8)
    class UTextBlock* TextBlock_DragInstructions;                                     // 0x0360 (size: 0x8)
    class UTextBlock* TextInstructions;                                               // 0x0368 (size: 0x8)
    TArray<FName> FakeItems;                                                          // 0x0370 (size: 0x10)
    TArray<FName> RecipeItems;                                                        // 0x0380 (size: 0x10)
    TArray<class UW_Research_RG_ReceivingSlot_C*> SlotArray;                          // 0x0390 (size: 0x10)
    TEnumAsByte<E_MinigameDifficulty::Type> Minigame Difficulty;                      // 0x03A0 (size: 0x1)
    FName ResearchItem;                                                               // 0x03A4 (size: 0x8)
    FAbioticRecipe_Struct RecipeData;                                                 // 0x03B0 (size: 0xB8)
    TArray<class UW_Research_RG_DraggableItem_C*> CurrentDraggableItems;              // 0x0468 (size: 0x10)
    FName CurrentRecipe;                                                              // 0x0478 (size: 0x8)
    FButtonStyle BrainStyle_4;                                                        // 0x0480 (size: 0x3F0)
    FButtonStyle BrainStyle_3;                                                        // 0x0870 (size: 0x3F0)
    FButtonStyle BrainStyle_2;                                                        // 0x0C60 (size: 0x3F0)
    FButtonStyle BrainStyle_1;                                                        // 0x1050 (size: 0x3F0)
    FLinearColor DefaultTitleColor;                                                   // 0x1440 (size: 0x10)

    void ResetBrainButton();
    void Reset Receiving Slot(class UW_Research_RG_ReceivingSlot_C* ReceivingSlot);
    void CorrectRecipe?(bool& Correct);
    void GetCraftingAreaWidget(class UW_Inventory_CraftingArea_C*& CraftingWidget);
    void CheckIfCanThink();
    void UpdateReceivingSlotsVisibility(bool IgnoreIconAndMaterial);
    void GetMaterialFromTagContainer(FGameplayTagContainer TagContainer, bool& Found, FName& OutputMaterialName);
    void SetupNewMinigame(FName Recipe);
    void Construct();
    void BndEvt__W_Research_RecipeGuesser_Button_Research_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Research_RecipeGuesser_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Research_RecipeGuesser_Button_Debug_Skip_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void SlotHasReset();
    void ExecuteUbergraph_W_Research_RecipeGuesser(int32 EntryPoint);
}; // Size: 0x1450

#endif
