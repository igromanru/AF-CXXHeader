#ifndef UE4SS_SDK_HumanCustomizationComponent_HPP
#define UE4SS_SDK_HumanCustomizationComponent_HPP

class UHumanCustomizationComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    bool IgnoreCustomization;                                                         // 0x00B0 (size: 0x1)
    FName Customization_Head;                                                         // 0x00B4 (size: 0x8)
    FName Customization_HeadAccessory;                                                // 0x00BC (size: 0x8)
    FName Customization_HairStyle;                                                    // 0x00C4 (size: 0x8)
    FName Customization_HairColor;                                                    // 0x00CC (size: 0x8)
    FName Customization_FacialTrait;                                                  // 0x00D4 (size: 0x8)
    FName Customization_UpperBody;                                                    // 0x00DC (size: 0x8)
    FName Customization_ShirtColor;                                                   // 0x00E4 (size: 0x8)
    FName Customization_Tie;                                                          // 0x00EC (size: 0x8)
    FName Customization_IDCard;                                                       // 0x00F4 (size: 0x8)
    FName Customization_LowerBody;                                                    // 0x00FC (size: 0x8)
    FName Customization_Belt;                                                         // 0x0104 (size: 0x8)
    FName Customization_Shoes;                                                        // 0x010C (size: 0x8)
    FName Customization_Watch;                                                        // 0x0114 (size: 0x8)
    double SkinBrightnessValue;                                                       // 0x0120 (size: 0x8)
    FName Customization_Labcoat;                                                      // 0x0128 (size: 0x8)
    TSoftObjectPtr<UPlayerCharacterVoiceDataAsset> Customization_Voice;               // 0x0130 (size: 0x28)
    class USkeletalMeshComponent* HeadMesh;                                           // 0x0158 (size: 0x8)
    class USkeletalMeshComponent* TorsoMesh;                                          // 0x0160 (size: 0x8)
    class USkeletalMeshComponent* PantsMesh;                                          // 0x0168 (size: 0x8)
    class USkeletalMeshComponent* FPLegs;                                             // 0x0170 (size: 0x8)
    class USkeletalMeshComponent* BeardMesh;                                          // 0x0178 (size: 0x8)
    class USkeletalMeshComponent* HeadAccessoryMesh;                                  // 0x0180 (size: 0x8)
    class USkeletalMeshComponent* HairMesh;                                           // 0x0188 (size: 0x8)
    class UPlayerCharacterVoiceDataAsset* Local_LoadedVoiceAsset;                     // 0x0190 (size: 0x8)
    bool HasBeenSetup;                                                                // 0x0198 (size: 0x1)
    FName MatSlot_ShirtColor;                                                         // 0x019C (size: 0x8)
    FName MatSlot_Skin;                                                               // 0x01A4 (size: 0x8)
    FName MatSlot_Tie;                                                                // 0x01AC (size: 0x8)
    FName MatSlot_IDCard;                                                             // 0x01B4 (size: 0x8)
    FName MatSlot_DoNotColorize;                                                      // 0x01BC (size: 0x8)
    FName MatSlot_Pants;                                                              // 0x01C4 (size: 0x8)
    FName MatSlot_HeadAccFrame;                                                       // 0x01CC (size: 0x8)
    FName MatSlot_Shoes;                                                              // 0x01D4 (size: 0x8)
    FName MatSlot_Belt;                                                               // 0x01DC (size: 0x8)
    FName MatSlot_Wristwatch;                                                         // 0x01E4 (size: 0x8)
    FName MatSlot_HeadAccGlass;                                                       // 0x01EC (size: 0x8)
    FName MatSlot_Labcoat;                                                            // 0x01F4 (size: 0x8)
    class UPhysicsAsset* BackupPhysAsset;                                             // 0x0200 (size: 0x8)
    FHumanCustomizationComponent_COnCustomizationComplete OnCustomizationComplete;    // 0x0208 (size: 0x10)
    void OnCustomizationComplete();
    bool CustomizationInProgress;                                                     // 0x0218 (size: 0x1)

    FLinearColor GetSkinBrightnessValue();
    void OnRep_SkinBrightnessValue();
    void SetMaterialColor(class UMeshComponent*& Mesh, FLinearColor Color, FName MaterialSlotName);
    void Server_ApplyCustomizationChange(const FDataTableRowHandle& CustomizationDataRow, TEnumAsByte<E_CustomizationCategories::Type> CustomizationType, TSoftObjectPtr<UPlayerCharacterVoiceDataAsset> Customization_Voice, FVector GenericVector);
    void Server_SetAllCustomization(TSoftObjectPtr<UPlayerCharacterVoiceDataAsset> Customization_Voice, FName Customization_Head, FName Customization_HairStyle, FName Customization_HairColor, FName Customization_HeadAccessory, FName Customization_UpperBody, FName Customization_LowerBody, FName Customization_ShirtColor, FName Customization_Belt, FName Customization_Shoes, FName Customization_Tie, FName Customization_FacialTrait, FName Customization_Watch, FName Customization_IDCard, double SkinTone);
    void Server_CloneCustomizationDataFromOtherComponent(class UHumanCustomizationComponent_C* OtherCustomizationComponent);
    void OnRep_Customization_Voice();
    void OnRep_Customization_Labcoat();
    void OnRep_Customization_Head();
    void OnRep_Customization_Tie();
    void OnRep_Customization_ShirtColor();
    void OnRep_Customization_IDCard();
    void OnRep_Customization_Belt();
    void OnRep_Customization_HairStyle();
    void OnRep_Customization_Shoes();
    void OnRep_Customization_Watch();
    void OnRep_Customization_LowerBody();
    void OnRep_Customization_HeadAccessory();
    void OnRep_Customization_FacialTrait();
    void OnRep_Customization_HairColor();
    void OnRep_Customization_UpperBody();
    void SetupCustomizationComponent();
    void RefreshAllCustomization();
    void ExecuteUbergraph_HumanCustomizationComponent(int32 EntryPoint);
    void OnCustomizationComplete__DelegateSignature();
}; // Size: 0x219

#endif
