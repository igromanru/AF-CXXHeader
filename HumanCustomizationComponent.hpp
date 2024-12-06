#ifndef UE4SS_SDK_HumanCustomizationComponent_HPP
#define UE4SS_SDK_HumanCustomizationComponent_HPP

class UHumanCustomizationComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    FName Customization_UpperBody;                                                    // 0x00B0 (size: 0x8)
    class USkeletalMeshComponent* HeadMesh;                                           // 0x00B8 (size: 0x8)
    class USkeletalMeshComponent* TorsoMesh;                                          // 0x00C0 (size: 0x8)
    class USkeletalMeshComponent* PantsMesh;                                          // 0x00C8 (size: 0x8)
    class USkeletalMeshComponent* FPLegs;                                             // 0x00D0 (size: 0x8)
    class USkeletalMeshComponent* BeardMesh;                                          // 0x00D8 (size: 0x8)
    FName Customization_HairColor;                                                    // 0x00E0 (size: 0x8)
    FName Customization_FacialTrait;                                                  // 0x00E8 (size: 0x8)
    class USkeletalMeshComponent* HeadAccessoryMesh;                                  // 0x00F0 (size: 0x8)
    FName Customization_HeadAccessory;                                                // 0x00F8 (size: 0x8)
    FName Customization_LowerBody;                                                    // 0x0100 (size: 0x8)
    class USkeletalMeshComponent* HairMesh;                                           // 0x0108 (size: 0x8)
    FName Customization_Watch;                                                        // 0x0110 (size: 0x8)
    FName Customization_Shoes;                                                        // 0x0118 (size: 0x8)
    FName Customization_HairStyle;                                                    // 0x0120 (size: 0x8)
    FName Customization_Belt;                                                         // 0x0128 (size: 0x8)
    FName Customization_IDCard;                                                       // 0x0130 (size: 0x8)
    FName Customization_ShirtColor;                                                   // 0x0138 (size: 0x8)
    FName Customization_Tie;                                                          // 0x0140 (size: 0x8)
    FName Customization_Head;                                                         // 0x0148 (size: 0x8)
    TSoftObjectPtr<UPlayerCharacterVoiceDataAsset> Customization_Voice;               // 0x0150 (size: 0x28)
    FName Customization_Labcoat;                                                      // 0x0178 (size: 0x8)
    class UPlayerCharacterVoiceDataAsset* Local_LoadedVoiceAsset;                     // 0x0180 (size: 0x8)
    bool HasBeenSetup;                                                                // 0x0188 (size: 0x1)
    FName MatSlot_ShirtColor;                                                         // 0x018C (size: 0x8)
    FName MatSlot_Skin;                                                               // 0x0194 (size: 0x8)
    FName MatSlot_Tie;                                                                // 0x019C (size: 0x8)
    FName MatSlot_IDCard;                                                             // 0x01A4 (size: 0x8)
    FName MatSlot_DoNotColorize;                                                      // 0x01AC (size: 0x8)
    FName MatSlot_Pants;                                                              // 0x01B4 (size: 0x8)
    FName MatSlot_HeadAccFrame;                                                       // 0x01BC (size: 0x8)
    FName MatSlot_Shoes;                                                              // 0x01C4 (size: 0x8)
    FName MatSlot_Belt;                                                               // 0x01CC (size: 0x8)
    FName MatSlot_Wristwatch;                                                         // 0x01D4 (size: 0x8)
    FName MatSlot_HeadAccGlass;                                                       // 0x01DC (size: 0x8)
    FName MatSlot_Labcoat;                                                            // 0x01E4 (size: 0x8)
    class UPhysicsAsset* BackupPhysAsset;                                             // 0x01F0 (size: 0x8)

    void Server_ApplyCustomizationChange(const FDataTableRowHandle& CustomizationDataRow, TEnumAsByte<E_CustomizationCategories::Type> CustomizationType, TSoftObjectPtr<UPlayerCharacterVoiceDataAsset> Customization_Voice);
    void Server_SetAllCustomization(TSoftObjectPtr<UPlayerCharacterVoiceDataAsset> Customization_Voice, FName Customization_Head, FName Customization_HairStyle, FName Customization_HairColor, FName Customization_HeadAccessory, FName Customization_UpperBody, FName Customization_LowerBody, FName Customization_ShirtColor, FName Customization_Belt, FName Customization_Shoes, FName Customization_Tie, FName Customization_FacialTrait, FName Customization_Watch, FName Customization_IDCard);
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
    void OnLoaded_F3230B6A4658A3019AEC508A23B9142D(class UObject* Loaded);
    void OnLoaded_1F820E0E4664243F3A3E42A7C1515D3B(class UObject* Loaded);
    void OnLoaded_6782285A456AFF654A9A69A3DBCBE72E(class UObject* Loaded);
    void OnLoaded_F3733C224D191A63918201B1C4496902(class UObject* Loaded);
    void OnLoaded_E640ABAB47E565B7A1C99CBA2B0E9821(class UObject* Loaded);
    void OnLoaded_B058503645888949B29B71B38927C1FD(class UObject* Loaded);
    void OnLoaded_1CDADEE14540702636BF7F9503C65A0D(class UObject* Loaded);
    void OnLoaded_FCB6F4D7459C8648DFEB408C7190B22D(class UObject* Loaded);
    void OnLoaded_F1A6DCF241BE513B86E45895A7C94C91(class UObject* Loaded);
    void OnLoaded_CA2704FF413B78FBB94F8687A59939FF(class UObject* Loaded);
    void OnLoaded_DF7DFC1D453D752E49E9079106CEF86F(class UObject* Loaded);
    void OnLoaded_4BD088E84B2D5FDA1D0267BCE15AFCC2(class UObject* Loaded);
    void OnLoaded_4D0648294C30E10B1BBFF1BD4FDC0E6D(class UObject* Loaded);
    void OnLoaded_097582544E1A53EBB6BCA2AA45798AE9(class UObject* Loaded);
    void OnLoaded_7552652C434B7B2B3F70E881AEA7F781(class UObject* Loaded);
    void OnLoaded_079A1BF0495D946F5E82DF960FA0F207(class UObject* Loaded);
    void OnLoaded_EB8F8D6D4D4534B1E2CACA91D54CBBB7(class UObject* Loaded);
    void OnLoaded_20F4EBB54478A959B448449C85AEC5F9(class UObject* Loaded);
    void RefreshAllCustomization();
    void Wardrobe_RefreshCustomization();
    void ExecuteUbergraph_HumanCustomizationComponent(int32 EntryPoint);
}; // Size: 0x1F8

#endif
