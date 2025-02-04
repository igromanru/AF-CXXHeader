#ifndef UE4SS_SDK_W_PlayerHUD_InteractionPrompt_HPP
#define UE4SS_SDK_W_PlayerHUD_InteractionPrompt_HPP

class UW_PlayerHUD_InteractionPrompt_C : public UUserWidget
{
    class UImage* ActionIcon;                                                         // 0x02E0 (size: 0x8)
    class UTextBlock* DescriptionText;                                                // 0x02E8 (size: 0x8)
    class UProgressBar* DurabilityBar;                                                // 0x02F0 (size: 0x8)
    class UHorizontalBox* HBox_HoldInteract;                                          // 0x02F8 (size: 0x8)
    class UHorizontalBox* HBox_HoldPackage;                                           // 0x0300 (size: 0x8)
    class UHorizontalBox* Hbox_JumpPrompt;                                            // 0x0308 (size: 0x8)
    class UHorizontalBox* HBox_PressInteract;                                         // 0x0310 (size: 0x8)
    class UHorizontalBox* HBox_PressPackage;                                          // 0x0318 (size: 0x8)
    class UHorizontalBox* HBox_PrimaryPrompt;                                         // 0x0320 (size: 0x8)
    class UHorizontalBox* HBox_SecondaryPrompt;                                       // 0x0328 (size: 0x8)
    class UW_Keybind_C* HoldInteractKeybind;                                          // 0x0330 (size: 0x8)
    class UTextBlock* HoldInteractSuffix;                                             // 0x0338 (size: 0x8)
    class UW_Keybind_C* HoldPackageKeybind;                                           // 0x0340 (size: 0x8)
    class UTextBlock* HoldPackageSuffix;                                              // 0x0348 (size: 0x8)
    class UTextBlock* InteractionObjectName;                                          // 0x0350 (size: 0x8)
    class UW_Keybind_C* JumpKeybind;                                                  // 0x0358 (size: 0x8)
    class UTextBlock* JumpKeySuffix;                                                  // 0x0360 (size: 0x8)
    class UW_Keybind_C* PressInteractKeybind;                                         // 0x0368 (size: 0x8)
    class UTextBlock* PressInteractSuffix;                                            // 0x0370 (size: 0x8)
    class UW_Keybind_C* PressPackageKeybind;                                          // 0x0378 (size: 0x8)
    class UTextBlock* PressPackageSuffix;                                             // 0x0380 (size: 0x8)
    class UW_Keybind_C* PrimaryFireKeybind;                                           // 0x0388 (size: 0x8)
    class UTextBlock* PrimaryFireSuffix;                                              // 0x0390 (size: 0x8)
    class UImage* RadioactiveIcon;                                                    // 0x0398 (size: 0x8)
    class UW_Keybind_C* SecondaryFireKeybind;                                         // 0x03A0 (size: 0x8)
    class UTextBlock* SecondaryFireSuffix;                                            // 0x03A8 (size: 0x8)
    class UVerticalBox* VBox_NoteList;                                                // 0x03B0 (size: 0x8)
    class UW_CookingPrompt_C* W_CookingPrompt;                                        // 0x03B8 (size: 0x8)
    class AActor* FocusedObject;                                                      // 0x03C0 (size: 0x8)
    FText InteractSuffixPartA;                                                        // 0x03C8 (size: 0x10)
    FText CurrentLookAt_ItemName;                                                     // 0x03D8 (size: 0x10)
    FSlateColor CurrentLookAt_Color;                                                  // 0x03E8 (size: 0x14)

    void UpdateCookingPrompt(class ACookingProxy_BP_C* Proxy);
    void UpdateItemDurability(double CurrentDurability, double MaxDurability);
    void Check Actor in Pinned Recipe(class AActor*& ActorToCheck, class AAbiotic_PlayerCharacter_C*& InteractingCharacter, bool& Exist);
    FAbiotic_InventoryItemStruct GetItemDataFromActor(class UObject* Object);
    void GetInteractTexts(class AActor* HitActor, const FAbiotic_InventoryItemStruct& ItemData, FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void DoesLineAlreadyExist(FText Line, bool& Exists);
    void UpdateJumpPromptLine(bool ShowFlag, FText Action, FText Item Name);
    void UpdatePrimaryPromptLine(bool ShowFlag, FText Action, FText Item Name);
    void UpdateTextPromptLine(class UWidget* WidgetToToggle, class UTextBlock* TextToChange, bool ShowFlag, FText& FormatString);
    void UpdateInteractionPrompts(bool ShowPressInteract, bool ShowHoldInteract, bool ShowPressPackage, bool ShowHoldPackage, bool ObjectUnderConstruction, double ConstructionPercent, bool RequiresPower, bool Radioactive, bool ShowDescription, TArray<FText>& ExtraNoteLines, class AActor* HitActor, class UActorComponent* HitComponent);
}; // Size: 0x3FC

#endif
