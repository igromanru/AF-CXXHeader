#ifndef UE4SS_SDK_WBP_ModioDefaultModCollectionRatingVisualizer_Horizontal_HPP
#define UE4SS_SDK_WBP_ModioDefaultModCollectionRatingVisualizer_Horizontal_HPP

class UWBP_ModioDefaultModCollectionRatingVisualizer_Horizontal_C : public UModioUIComponentBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UModioDefaultImage* Icon;                                                   // 0x0350 (size: 0x8)
    class UModioDefaultTextBlock* LabelText;                                          // 0x0358 (size: 0x8)
    class UModioDefaultTextBlock* ValueText;                                          // 0x0360 (size: 0x8)
    FText FilesizeLabelText;                                                          // 0x0368 (size: 0x10)
    class UObject* EditorDataSource;                                                  // 0x0378 (size: 0x8)
    bool bShowPropertyLabel;                                                          // 0x0380 (size: 0x1)
    FLinearColorRef PositiveRatingColor;                                              // 0x0384 (size: 0x18)
    FLinearColorRef NegativeRatingColor;                                              // 0x039C (size: 0x18)
    FLinearColorRef NeutralRatingColor;                                               // 0x03B4 (size: 0x18)

    void GetIconWidget();
    void GetLabelTextWidget();
    void GetValueTextWidget();
    void OnSetDataSource(class UObject* InDataSource);
    void InitializeEditorPreview(bool bIsDesignTime);
    void PreConstruct(bool IsDesignTime);
    void SetDataSource(class UObject* InDataSource);
    void ExecuteUbergraph_WBP_ModioDefaultModCollectionRatingVisualizer_Horizontal(int32 EntryPoint);
}; // Size: 0x3CC

#endif
