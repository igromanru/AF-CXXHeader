#ifndef UE4SS_SDK_WBP_ModioImageGallery_HPP
#define UE4SS_SDK_WBP_ModioImageGallery_HPP

class UWBP_ModioImageGallery_C : public UModioImageGallery
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0558 (size: 0x8)
    class UWBP_ModioActionWidgetButton_C* DecrementGallerySelectionButton;            // 0x0560 (size: 0x8)
    class UImage* Gradient;                                                           // 0x0568 (size: 0x8)
    class UModioDefaultImage* Image;                                                  // 0x0570 (size: 0x8)
    class UModioDefaultObjectSelector* ImageSelector;                                 // 0x0578 (size: 0x8)
    class UHorizontalBox* ImageSelectorControls;                                      // 0x0580 (size: 0x8)
    class UOverlay* ImageSelectorOverlay;                                             // 0x0588 (size: 0x8)
    class UWBP_ModioActionWidgetButton_C* IncrementGallerySelectionButton;            // 0x0590 (size: 0x8)
    FSlateBrush LoadingCog;                                                           // 0x05A0 (size: 0xD0)
    bool bTouchInteractionActive;                                                     // 0x0670 (size: 0x1)

    void OnTouchStarted(FGeometry MyGeometry, const FPointerEvent& InTouchEvent);
    void OnTouchMoved(FGeometry MyGeometry, const FPointerEvent& InTouchEvent);
    void OnSetDataSource(class UObject* InDataSource);
    void BindSelectorHandlers();
    void OnDecrementGallerySelection(class UObject* ClickContext);
    void OnIncrementGallerySelection(class UObject* ClickContext);
    void GetIncrementSelectionButtonWidget();
    void GetDecrementSelectionButtonWidget();
    void OnImageSelectionChanged(class UObject* SelectedValue);
    void GetImageWidget();
    void GetImageSelectorWidget();
    void DisplayLoadingCog();
    void PreConstruct(bool IsDesignTime);
    void SetDataSource(class UObject* InDataSource);
    void ExecuteUbergraph_WBP_ModioImageGallery(int32 EntryPoint);
}; // Size: 0x671

#endif
