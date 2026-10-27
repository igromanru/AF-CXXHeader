#ifndef UE4SS_SDK_HumanCustomizationComponent_HPP
#define UE4SS_SDK_HumanCustomizationComponent_HPP

class UHumanCustomizationComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    bool IgnoreCustomization;                                                         // 0x00B0 (size: 0x1)
    FCustomizationHeadRowHandle Customization_Head;                                   // 0x00B8 (size: 0x10)
    FCustomizationHeadAccessoryRowHandle Customization_HeadAccessory;                 // 0x00C8 (size: 0x10)
    FCustomizationHairStyleRowHandle Customization_HairStyle;                         // 0x00D8 (size: 0x10)
    FCustomizationHairColorRowHandle Customization_HairColor;                         // 0x00E8 (size: 0x10)
    FCustomizationBeardRowHandle Customization_FacialTrait;                           // 0x00F8 (size: 0x10)
    FCustomizationUpperBodyRowHandle Customization_UpperBody;                         // 0x0108 (size: 0x10)
    FCustomizationShirtColorRowHandle Customization_ShirtColor;                       // 0x0118 (size: 0x10)
    FCustomizationTieRowHandle Customization_Tie;                                     // 0x0128 (size: 0x10)
    FCustomizationIDCardRowHandle Customization_IDCard;                               // 0x0138 (size: 0x10)
    FCustomizationLowerBodyRowHandle Customization_LowerBody;                         // 0x0148 (size: 0x10)
    FCustomizationBeltRowHandle Customization_Belt;                                   // 0x0158 (size: 0x10)
    FCustomizationShoesRowHandle Customization_Shoes;                                 // 0x0168 (size: 0x10)
    FCustomizationWatchRowHandle Customization_Watch;                                 // 0x0178 (size: 0x10)
    double SkinBrightnessValue;                                                       // 0x0188 (size: 0x8)
    FCustomizationLabcoatRowHandle Customization_Labcoat;                             // 0x0190 (size: 0x10)
    TSoftObjectPtr<class UPlayerCharacterVoiceDataAsset> Customization_Voice;         // 0x01A0 (size: 0x28)
    class USkeletalMeshComponent* HeadMesh;                                           // 0x01C8 (size: 0x8)
    class USkeletalMeshComponent* TorsoMesh;                                          // 0x01D0 (size: 0x8)
    class USkeletalMeshComponent* PantsMesh;                                          // 0x01D8 (size: 0x8)
    class USkeletalMeshComponent* FPLegs;                                             // 0x01E0 (size: 0x8)
    class USkeletalMeshComponent* BeardMesh;                                          // 0x01E8 (size: 0x8)
    class USkeletalMeshComponent* HeadAccessoryMesh;                                  // 0x01F0 (size: 0x8)
    class USkeletalMeshComponent* HairMesh;                                           // 0x01F8 (size: 0x8)
    class UPlayerCharacterVoiceDataAsset* Local_LoadedVoiceAsset;                     // 0x0200 (size: 0x8)
    bool HasBeenSetup;                                                                // 0x0208 (size: 0x1)
    FName MatSlot_ShirtColor;                                                         // 0x020C (size: 0x8)
    FName MatSlot_Skin;                                                               // 0x0214 (size: 0x8)
    FName MatSlot_Tie;                                                                // 0x021C (size: 0x8)
    FName MatSlot_IDCard;                                                             // 0x0224 (size: 0x8)
    FName MatSlot_DoNotColorize;                                                      // 0x022C (size: 0x8)
    FName MatSlot_Pants;                                                              // 0x0234 (size: 0x8)
    FName MatSlot_HeadAccFrame;                                                       // 0x023C (size: 0x8)
    FName MatSlot_Shoes;                                                              // 0x0244 (size: 0x8)
    FName MatSlot_Belt;                                                               // 0x024C (size: 0x8)
    FName MatSlot_Wristwatch;                                                         // 0x0254 (size: 0x8)
    FName MatSlot_HeadAccGlass;                                                       // 0x025C (size: 0x8)
    FName MatSlot_Labcoat;                                                            // 0x0264 (size: 0x8)
    class UPhysicsAsset* BackupPhysAsset;                                             // 0x0270 (size: 0x8)
    FHumanCustomizationComponent_COnCustomizationComplete OnCustomizationComplete;    // 0x0278 (size: 0x10)
    void OnCustomizationComplete();
    bool CustomizationInProgress;                                                     // 0x0288 (size: 0x1)
    class UStaticMeshComponent* IDCardMesh;                                           // 0x0290 (size: 0x8)
    FTransform CachedIDCardLocation;                                                  // 0x02A0 (size: 0x60)
    bool StaticIDCardLocation;                                                        // 0x0300 (size: 0x1)
    bool OverrideIDComponentTarget;                                                   // 0x0301 (size: 0x1)

    void CacheIDCardLocation();
    void GetSkinBrightnessValue();
    void OnRep_SkinBrightnessValue();
    void SetMaterialColor(class UMeshComponent*& Mesh, FLinearColor Color, FName MaterialSlotName);
    void Server_ApplyCustomizationChange(const FAnyCustomizationRowHandle& CustomizationDataRow, TEnumAsByte<E_CustomizationCategories::Type> CustomizationType, TSoftObjectPtr<class UPlayerCharacterVoiceDataAsset> Customization_Voice, FVector GenericVector);
    void Server_SetAllCustomization(TSoftObjectPtr<class UPlayerCharacterVoiceDataAsset> Customization_Voice, FCustomizationHeadRowHandle Customization_Head, FCustomizationHairStyleRowHandle Customization_HairStyle, FCustomizationHairColorRowHandle Customization_HairColor, FCustomizationHeadAccessoryRowHandle Customization_HeadAccessory, FCustomizationUpperBodyRowHandle Customization_UpperBody, FCustomizationLowerBodyRowHandle Customization_LowerBody, FCustomizationShirtColorRowHandle Customization_ShirtColor, FCustomizationBeltRowHandle Customization_Belt, FCustomizationShoesRowHandle Customization_Shoes, FCustomizationTieRowHandle Customization_Tie, FCustomizationBeardRowHandle Customization_FacialTrait, FCustomizationWatchRowHandle Customization_Watch, FCustomizationIDCardRowHandle Customization_IDCard, double SkinTone);
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
}; // Size: 0x302

#endif
