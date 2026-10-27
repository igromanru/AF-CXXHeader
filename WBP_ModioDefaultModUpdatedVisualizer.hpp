#ifndef UE4SS_SDK_WBP_ModioDefaultModUpdatedVisualizer_HPP
#define UE4SS_SDK_WBP_ModioDefaultModUpdatedVisualizer_HPP

class UWBP_ModioDefaultModUpdatedVisualizer_C : public UModioUIComponentBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UModioDefaultImage* Icon;                                                   // 0x0350 (size: 0x8)
    class UModioDefaultTextBlock* LabelText;                                          // 0x0358 (size: 0x8)
    class UModioDefaultTextBlock* ValueText;                                          // 0x0360 (size: 0x8)
    FText LabelTextValue;                                                             // 0x0368 (size: 0x10)
    class UObject* EditorDataSource;                                                  // 0x0378 (size: 0x8)
    bool bShowPropertyLabel;                                                          // 0x0380 (size: 0x1)
    FLinearColorRef PropertyLabelColor;                                               // 0x0384 (size: 0x18)
    FText ValueFormatText;                                                            // 0x03A0 (size: 0x10)
    bool bUseTimeElapsed;                                                             // 0x03B0 (size: 0x1)
    FText Year Format;                                                                // 0x03B8 (size: 0x10)
    FText Month Format;                                                               // 0x03C8 (size: 0x10)
    FText Day Format;                                                                 // 0x03D8 (size: 0x10)
    FText Today Format;                                                               // 0x03E8 (size: 0x10)

    void GetLabelTextWidget();
    void GetValueTextWidget();
    void OnSetDataSource(class UObject* InDataSource);
    void InitializeEditorPreview(bool bIsDesignTime);
    void PreConstruct(bool IsDesignTime);
    void SetDataSource(class UObject* InDataSource);
    void ExecuteUbergraph_WBP_ModioDefaultModUpdatedVisualizer(int32 EntryPoint);
}; // Size: 0x3F8

#endif
