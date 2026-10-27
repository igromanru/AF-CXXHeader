#ifndef UE4SS_SDK_WBP_ModioDefaultRadialProgressWidget_HPP
#define UE4SS_SDK_WBP_ModioDefaultRadialProgressWidget_HPP

class UWBP_ModioDefaultRadialProgressWidget_C : public UModioUIComponentBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UModioDefaultImage* ProgressImage;                                          // 0x0350 (size: 0x8)
    class UMaterialInterface* RadialProgressMaterial;                                 // 0x0358 (size: 0x8)
    class UMaterialInstanceDynamic* ProgressMaterialInstance;                         // 0x0360 (size: 0x8)
    double CurrentProgressValue;                                                      // 0x0368 (size: 0x8)
    FLinearColor OriginalColor;                                                       // 0x0370 (size: 0x10)
    double PreviewProgress;                                                           // 0x0380 (size: 0x8)

    void GetProgress();
    void ApplyPreviewProgress();
    void OnSetColorOverride(FLinearColor NewColor);
    void OnSetProgress(double NewProgressValue);
    void GetProgressImageWidget();
    void ApplyMaterialInstance();
    void AddValueChangedHandler(const FAddValueChangedHandlerHandler& Handler);
    void RemoveValueChangedHandler(const FRemoveValueChangedHandlerHandler& Handler);
    void SetMarquee(bool bNewIsMarquee);
    void PreConstruct(bool IsDesignTime);
    void SetProgress(float NewProgressValue);
    void SetColorOverride(FLinearColor Override);
    void ClearColorOverride();
    void ExecuteUbergraph_WBP_ModioDefaultRadialProgressWidget(int32 EntryPoint);
}; // Size: 0x388

#endif
