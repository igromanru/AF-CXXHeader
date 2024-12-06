#ifndef UE4SS_SDK_W_MainMenu_CustomizeCharacter_HPP
#define UE4SS_SDK_W_MainMenu_CustomizeCharacter_HPP

class UW_MainMenu_CustomizeCharacter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_Accessory;                         // 0x02E8 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_Beard;                             // 0x02F0 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_Belt;                              // 0x02F8 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_Bottom;                            // 0x0300 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_Fabric;                            // 0x0308 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_FannyPack;                         // 0x0310 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_Hair;                              // 0x0318 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_HairColor;                         // 0x0320 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_Head;                              // 0x0328 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_IDCard;                            // 0x0330 (size: 0x8)
    class UButton* Button_RotateLeft;                                                 // 0x0338 (size: 0x8)
    class UButton* Button_RotateRight;                                                // 0x0340 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_Shirts;                            // 0x0348 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_Shoes;                             // 0x0350 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_Top;                               // 0x0358 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_Voice;                             // 0x0360 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_Wristwatch;                        // 0x0368 (size: 0x8)
    class UTextBlock* CategoryText;                                                   // 0x0370 (size: 0x8)
    class UComboBoxString* ComboBoxString_0;                                          // 0x0378 (size: 0x8)
    class UImage* Image;                                                              // 0x0380 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0388 (size: 0x8)
    class UTextBlock* SelectedText;                                                   // 0x0390 (size: 0x8)
    class UUniformGridPanel* UGrid_Categories;                                        // 0x0398 (size: 0x8)
    class UUniformGridPanel* UGrid_CategoryOptions;                                   // 0x03A0 (size: 0x8)
    class UW_MainMenuButton_C* W_Button_DeletePreset;                                 // 0x03A8 (size: 0x8)
    class UW_MainMenuButton_C* W_Button_PlayVoice;                                    // 0x03B0 (size: 0x8)
    class UW_MainMenuButton_C* W_Button_SavePreset;                                   // 0x03B8 (size: 0x8)
    class UW_MainMenuButton_C* W_Button_Zoom;                                         // 0x03C0 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_BackAndSave;                          // 0x03C8 (size: 0x8)
    class UW_MenuTitleBig_C* W_MenuTitleBig;                                          // 0x03D0 (size: 0x8)
    bool MaleSelected;                                                                // 0x03D8 (size: 0x1)
    bool ZoomedIn;                                                                    // 0x03D9 (size: 0x1)
    FName Head;                                                                       // 0x03DC (size: 0x8)
    FName HeadAccessory;                                                              // 0x03E4 (size: 0x8)
    FName Wristwatch;                                                                 // 0x03EC (size: 0x8)
    FName fabric;                                                                     // 0x03F4 (size: 0x8)
    FName UpperBody;                                                                  // 0x03FC (size: 0x8)
    FName LowerBody;                                                                  // 0x0404 (size: 0x8)
    FName Hair;                                                                       // 0x040C (size: 0x8)
    FName HairColor;                                                                  // 0x0414 (size: 0x8)
    FName ShirtColor;                                                                 // 0x041C (size: 0x8)
    FName Shoes;                                                                      // 0x0424 (size: 0x8)
    FName Belt;                                                                       // 0x042C (size: 0x8)
    FName Beard;                                                                      // 0x0434 (size: 0x8)
    TSoftObjectPtr<UPlayerCharacterVoiceDataAsset> Voice;                             // 0x0440 (size: 0x28)
    FName IDCard;                                                                     // 0x0468 (size: 0x8)
    FName labcoat;                                                                    // 0x0470 (size: 0x8)
    FName FannyPack;                                                                  // 0x0478 (size: 0x8)
    int32 SelectedPreset;                                                             // 0x0480 (size: 0x4)
    FName CurrentCameraTag;                                                           // 0x0484 (size: 0x8)
    int32 LastVoiceLineType;                                                          // 0x048C (size: 0x4)
    class ACharacterCustomization_BP_C* Character Customization Ref;                  // 0x0490 (size: 0x8)
    FW_MainMenu_CustomizeCharacter_CCustomizationFinished CustomizationFinished;      // 0x0498 (size: 0x10)
    void CustomizationFinished();
    FTimerHandle RotationTimer;                                                       // 0x04A8 (size: 0x8)

    void DoesBeardTypeMatchHead?(FGameplayTag BeardTag, bool& Match);
    void GetCharacter(class AAbiotic_PlayerCharacter_C*& Character);
    void IsCustomizationUnlocked?(const FName& RowName, FString SpecialConditions, bool UnlockedByDefault, bool& Show);
    void ApplyCustomizationToCharacter(FName NewCustomization, TEnumAsByte<E_CustomizationCategories::Type> Type, TSoftObjectPtr<UPlayerCharacterVoiceDataAsset> Voice);
    void UpdateSelectedText(TEnumAsByte<E_CustomizationCategories::Type> Customization, FText Text, FString CategoryString);
    void SetCharactersToSaveData(class UAbiotic_CustomizationSave_C* SaveData);
    void SaveAllData(bool& NewSaveCreated);
    void GetCategoryDataTable(TEnumAsByte<E_CustomizationCategories::Type> Index, class UDataTable*& Table);
    void RefreshAllCustomizationButtons();
    void Populate Customization Button Grid(TEnumAsByte<E_CustomizationCategories::Type> Category, FString CategoryString);
    void BndEvt__W_MainMenuButton_BackAndSave_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void Construct();
    void BndEvt__W_MainMenu_CustomizeCharacter_W_MainMenuButton_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void BndEvt__W_MainMenu_CustomizeCharacter_W_Button_PlayVoice_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature();
    void NewCameraView(FName CameraTag);
    void BndEvt__W_MainMenu_CustomizeCharacter_Button_RotateRight_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__W_MainMenu_CustomizeCharacter_Button_RotateLeft_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
    void RotateLeft();
    void RotateRight();
    void BndEvt__W_MainMenu_CustomizeCharacter_Button_RotateLeft_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__W_MainMenu_CustomizeCharacter_Button_RotateRight_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_W_MainMenu_CustomizeCharacter(int32 EntryPoint);
    void CustomizationFinished__DelegateSignature();
}; // Size: 0x4B0

#endif
