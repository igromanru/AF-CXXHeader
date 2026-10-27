#ifndef UE4SS_SDK_W_CustomizationCategoryButton_HPP
#define UE4SS_SDK_W_CustomizationCategoryButton_HPP

class UW_CustomizationCategoryButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Background;                                                         // 0x02E8 (size: 0x8)
    class UCheckBox* CustomizationCheckbox;                                           // 0x02F0 (size: 0x8)
    class UImage* CustomizationImage;                                                 // 0x02F8 (size: 0x8)
    class UCircularThrobber* LoadingThrobber;                                         // 0x0300 (size: 0x8)
    class UImage* SelectionBorder;                                                    // 0x0308 (size: 0x8)
    FAnyCustomizationRowHandle CustomizationDataRow;                                  // 0x0310 (size: 0x18)
    TEnumAsByte<E_CustomizationCategories::Type> CustomizationType;                   // 0x0328 (size: 0x1)
    bool Locked;                                                                      // 0x0329 (size: 0x1)
    FText CustomizationTitleText;                                                     // 0x0330 (size: 0x10)
    TSoftObjectPtr<class UTexture2D> Icon;                                            // 0x0340 (size: 0x28)
    FName CameraTag;                                                                  // 0x0368 (size: 0x8)
    FW_CustomizationCategoryButton_CCallCheckStateChanged CallCheckStateChanged;      // 0x0370 (size: 0x10)
    void CallCheckStateChanged(FName CameraTag);
    FW_CustomizationCategoryButton_CStartPopulateButton StartPopulateButton;          // 0x0380 (size: 0x10)
    void StartPopulateButton(TEnumAsByte<E_CustomizationCategories::Type> Category, FString Title);

    void ToggleSelectionState(bool On);
    void OnLoaded_CB3389E041DFF529780E7B98E8F9A354(class UObject* Loaded);
    void Construct();
    void BndEvt__CustomizationCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_W_CustomizationCategoryButton(int32 EntryPoint);
    void StartPopulateButton__DelegateSignature(TEnumAsByte<E_CustomizationCategories::Type> Category, FString Title);
    void CallCheckStateChanged__DelegateSignature(FName CameraTag);
}; // Size: 0x390

#endif
