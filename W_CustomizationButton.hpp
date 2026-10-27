#ifndef UE4SS_SDK_W_CustomizationButton_HPP
#define UE4SS_SDK_W_CustomizationButton_HPP

class UW_CustomizationButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UCheckBox* CustomizationCheckbox;                                           // 0x02E8 (size: 0x8)
    class UImage* CustomizationImage;                                                 // 0x02F0 (size: 0x8)
    class UImage* Icon_Mod;                                                           // 0x02F8 (size: 0x8)
    class UCircularThrobber* LoadingThrobber;                                         // 0x0300 (size: 0x8)
    class URetainerBox* RetainerBox_315;                                              // 0x0308 (size: 0x8)
    class UImage* SelectionBorder;                                                    // 0x0310 (size: 0x8)
    FAbioticCustomization CustomizationData;                                          // 0x0318 (size: 0x198)
    FAnyCustomizationRowHandle CustomizationDataRow;                                  // 0x04B0 (size: 0x18)
    TEnumAsByte<E_CustomizationCategories::Type> CustomizationType;                   // 0x04C8 (size: 0x1)
    bool Locked;                                                                      // 0x04C9 (size: 0x1)
    double IconZoom;                                                                  // 0x04D0 (size: 0x8)
    TSoftObjectPtr<class UPlayerCharacterVoiceDataAsset> CustomizationAsset;          // 0x04D8 (size: 0x28)
    FW_CustomizationButton_CUpdateCustomization UpdateCustomization;                  // 0x0500 (size: 0x10)
    void UpdateCustomization(FAnyCustomizationRowHandle NewCustomization, TEnumAsByte<E_CustomizationCategories::Type> Type, TSoftObjectPtr<class UPlayerCharacterVoiceDataAsset> Voice, FVector GenericVector);
    class UHumanCustomizationComponent_C* Current Customization;                      // 0x0510 (size: 0x8)
    TArray<TSoftObjectPtr<class UPlayerCharacterVoiceDataAsset>> GameVoices;          // 0x0518 (size: 0x10)

    void HeadChange_BeardCheck();
    void New Customization Change(class UHumanCustomizationComponent_C* CurrentCustomization);
    void ToggleSelectionState(bool On);
    void ApplyCustomization();
    void OnLoaded_67D5F94B40963D93A300EDBAF6703A5F(class UObject* Loaded);
    void Construct();
    void BndEvt__CustomizationCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_W_CustomizationButton(int32 EntryPoint);
    void UpdateCustomization__DelegateSignature(FAnyCustomizationRowHandle NewCustomization, TEnumAsByte<E_CustomizationCategories::Type> Type, TSoftObjectPtr<class UPlayerCharacterVoiceDataAsset> Voice, FVector GenericVector);
}; // Size: 0x528

#endif
