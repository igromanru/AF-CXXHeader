#ifndef UE4SS_SDK_W_MainMenu_CustomizeCharacter_HPP
#define UE4SS_SDK_W_MainMenu_CustomizeCharacter_HPP

class UW_MainMenu_CustomizeCharacter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_Accessory;                         // 0x02E8 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_Beard;                             // 0x02F0 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_Belt;                              // 0x02F8 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_Bottom;                            // 0x0300 (size: 0x8)
    class UButton* Button_DeletePreset;                                               // 0x0308 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_Fabric;                            // 0x0310 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_FannyPack;                         // 0x0318 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_Hair;                              // 0x0320 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_HairColor;                         // 0x0328 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_Head;                              // 0x0330 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_IDCard;                            // 0x0338 (size: 0x8)
    class UButton* Button_RotateLeft;                                                 // 0x0340 (size: 0x8)
    class UButton* Button_RotateRight;                                                // 0x0348 (size: 0x8)
    class UButton* Button_SavePreset;                                                 // 0x0350 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_Shirts;                            // 0x0358 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_Shoes;                             // 0x0360 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_Top;                               // 0x0368 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_Voice;                             // 0x0370 (size: 0x8)
    class UW_CustomizationCategoryButton_C* Button_Wristwatch;                        // 0x0378 (size: 0x8)
    class UTextBlock* CategoryText;                                                   // 0x0380 (size: 0x8)
    class UCheckBox* checkbox_debug_characterweights;                                 // 0x0388 (size: 0x8)
    class UComboBoxString* ComboBoxString_0;                                          // 0x0390 (size: 0x8)
    class UHorizontalBox* HBox_SkinTone;                                              // 0x0398 (size: 0x8)
    class UImage* Image;                                                              // 0x03A0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x03A8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x03B0 (size: 0x8)
    class UTextBlock* SelectedText;                                                   // 0x03B8 (size: 0x8)
    class UTextBlock* SkinTone_Text;                                                  // 0x03C0 (size: 0x8)
    class USpinBox* SpinBox_SkinTone;                                                 // 0x03C8 (size: 0x8)
    class UUniformGridPanel* UGrid_Categories;                                        // 0x03D0 (size: 0x8)
    class UUniformGridPanel* UGrid_CategoryOptions;                                   // 0x03D8 (size: 0x8)
    class UW_MainMenuButton_C* W_Button_Mods;                                         // 0x03E0 (size: 0x8)
    class UW_MainMenuButton_C* W_Button_PlayVoice;                                    // 0x03E8 (size: 0x8)
    class UW_MainMenuButton_C* W_Button_Zoom;                                         // 0x03F0 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_BackAndSave;                          // 0x03F8 (size: 0x8)
    class UW_MenuTitleBig_C* W_MenuTitleBig;                                          // 0x0400 (size: 0x8)
    bool MaleSelected;                                                                // 0x0408 (size: 0x1)
    bool ZoomedIn;                                                                    // 0x0409 (size: 0x1)
    FCustomizationHeadRowHandle Head;                                                 // 0x0410 (size: 0x10)
    FCustomizationHeadAccessoryRowHandle HeadAccessory;                               // 0x0420 (size: 0x10)
    FCustomizationWatchRowHandle Wristwatch;                                          // 0x0430 (size: 0x10)
    FCustomizationTieRowHandle Fabric;                                                // 0x0440 (size: 0x10)
    FCustomizationUpperBodyRowHandle UpperBody;                                       // 0x0450 (size: 0x10)
    FCustomizationLowerBodyRowHandle LowerBody;                                       // 0x0460 (size: 0x10)
    FCustomizationHairStyleRowHandle Hair;                                            // 0x0470 (size: 0x10)
    FCustomizationHairColorRowHandle HairColor;                                       // 0x0480 (size: 0x10)
    FCustomizationShirtColorRowHandle ShirtColor;                                     // 0x0490 (size: 0x10)
    FCustomizationShoesRowHandle Shoes;                                               // 0x04A0 (size: 0x10)
    FCustomizationBeltRowHandle Belt;                                                 // 0x04B0 (size: 0x10)
    FCustomizationBeardRowHandle Beard;                                               // 0x04C0 (size: 0x10)
    TSoftObjectPtr<class UPlayerCharacterVoiceDataAsset> Voice;                       // 0x04D0 (size: 0x28)
    FCustomizationIDCardRowHandle IDCard;                                             // 0x04F8 (size: 0x10)
    FCustomizationLabcoatRowHandle Labcoat;                                           // 0x0508 (size: 0x10)
    FCustomizationFannyPackRowHandle FannyPack;                                       // 0x0518 (size: 0x10)
    int32 SelectedPreset;                                                             // 0x0528 (size: 0x4)
    FName CurrentCameraTag;                                                           // 0x052C (size: 0x8)
    int32 LastVoiceLineType;                                                          // 0x0534 (size: 0x4)
    class ACharacterCustomization_BP_C* Character Customization Ref;                  // 0x0538 (size: 0x8)
    FW_MainMenu_CustomizeCharacter_CCustomizationFinished CustomizationFinished;      // 0x0540 (size: 0x10)
    void CustomizationFinished();
    FTimerHandle RotationTimer;                                                       // 0x0550 (size: 0x8)
    double SkinTone;                                                                  // 0x0558 (size: 0x8)
    FRotator InitialRotation;                                                         // 0x0560 (size: 0x18)
    bool IsRotating;                                                                  // 0x0578 (size: 0x1)
    TEnumAsByte<E_CustomizationCategories::Type> LastCategory;                        // 0x0579 (size: 0x1)
    FString LastCategoryString;                                                       // 0x0580 (size: 0x10)

    void CustomizationCategoryToAnyCustomization(TEnumAsByte<E_CustomizationCategories::Type> Category, class UObject* __WorldContext, EAnyCustomizationTable& Customization);
    void DoesBeardTypeMatchHead?(FGameplayTag BeardTag, bool& Match);
    void GetCharacter(class AAbiotic_PlayerCharacter_C*& Character);
    void IsCustomizationUnlocked?(const FAnyCustomizationRowHandle& RowName, bool UnlockedByDefault, FGameEntitlementRowHandle GameEntitlement, FAchievementRowHandle Achievement, bool& Show);
    void ApplyCustomizationToCharacter(FAnyCustomizationRowHandle NewCustomization, TEnumAsByte<E_CustomizationCategories::Type> Type, TSoftObjectPtr<class UPlayerCharacterVoiceDataAsset> Voice, FVector GenericVector);
    void UpdateSelectedText(TEnumAsByte<E_CustomizationCategories::Type> Customization, FText Text, FString CategoryString);
    void SetCharactersToSaveData(class UAbiotic_CustomizationSave_C* SaveData);
    void SaveAllData(bool& NewSaveCreated);
    void RefreshAllCustomizationButtons();
    void Populate Customization Button Grid(TEnumAsByte<E_CustomizationCategories::Type> Category, FString CategoryString);
    void OnNotifyEnd_A94CAD9141B793A937156598BC267AA8(FName NotifyName);
    void OnNotifyBegin_A94CAD9141B793A937156598BC267AA8(FName NotifyName);
    void OnInterrupted_A94CAD9141B793A937156598BC267AA8(FName NotifyName);
    void OnBlendOut_A94CAD9141B793A937156598BC267AA8(FName NotifyName);
    void OnCompleted_A94CAD9141B793A937156598BC267AA8(FName NotifyName);
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
    void BndEvt__W_MainMenu_CustomizeCharacter_SpinBox_SkinTone_K2Node_ComponentBoundEvent_9_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void RotateInitial();
    void BackAndSaveCustomization();
    void BndEvt__W_MainMenu_CustomizeCharacter_checkbox_debug_characterweights_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__W_MainMenu_CustomizeCharacter_W_Button_Zoom_1_K2Node_ComponentBoundEvent_8_ButtonPressed__DelegateSignature();
    void OnEnabledModsChanged_Event();
    void ExecuteUbergraph_W_MainMenu_CustomizeCharacter(int32 EntryPoint);
    void CustomizationFinished__DelegateSignature();
}; // Size: 0x590

#endif
