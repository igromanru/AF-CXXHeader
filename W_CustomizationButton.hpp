#ifndef UE4SS_SDK_W_CustomizationButton_HPP
#define UE4SS_SDK_W_CustomizationButton_HPP

class UW_CustomizationButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UCheckBox* CustomizationCheckbox;                                           // 0x02E8 (size: 0x8)
    class UImage* CustomizationImage;                                                 // 0x02F0 (size: 0x8)
    class UCircularThrobber* LoadingThrobber;                                         // 0x02F8 (size: 0x8)
    class URetainerBox* RetainerBox_315;                                              // 0x0300 (size: 0x8)
    class UImage* SelectionBorder;                                                    // 0x0308 (size: 0x8)
    FAbiotic_CustomizationStruct CustomizationData;                                   // 0x0310 (size: 0x178)
    FDataTableRowHandle CustomizationDataRow;                                         // 0x0488 (size: 0x10)
    TEnumAsByte<E_CustomizationCategories::Type> CustomizationType;                   // 0x0498 (size: 0x1)
    bool Locked;                                                                      // 0x0499 (size: 0x1)
    double IconZoom;                                                                  // 0x04A0 (size: 0x8)
    TSoftObjectPtr<UPlayerCharacterVoiceDataAsset> CustomizationAsset;                // 0x04A8 (size: 0x28)
    FW_CustomizationButton_CUpdateCustomization UpdateCustomization;                  // 0x04D0 (size: 0x10)
    void UpdateCustomization(FName NewCustomization, TEnumAsByte<E_CustomizationCategories::Type> Type, TSoftObjectPtr<UPlayerCharacterVoiceDataAsset> Voice);
    class UHumanCustomizationComponent_C* Current Customization;                      // 0x04E0 (size: 0x8)

    void HeadChange_BeardCheck();
    void New Customization Change(class UHumanCustomizationComponent_C* CurrentCustomization);
    void ToggleSelectionState(bool On);
    void ApplyCustomization();
    void OnLoaded_67D5F94B40963D93A300EDBAF6703A5F(class UObject* Loaded);
    void Construct();
    void BndEvt__CustomizationCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_W_CustomizationButton(int32 EntryPoint);
    void UpdateCustomization__DelegateSignature(FName NewCustomization, TEnumAsByte<E_CustomizationCategories::Type> Type, TSoftObjectPtr<UPlayerCharacterVoiceDataAsset> Voice);
}; // Size: 0x4E8

#endif
