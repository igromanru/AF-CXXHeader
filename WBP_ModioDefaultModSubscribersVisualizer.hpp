#ifndef UE4SS_SDK_WBP_ModioDefaultModSubscribersVisualizer_HPP
#define UE4SS_SDK_WBP_ModioDefaultModSubscribersVisualizer_HPP

class UWBP_ModioDefaultModSubscribersVisualizer_C : public UModioUIComponentBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UModioDefaultImage* Icon;                                                   // 0x0350 (size: 0x8)
    class UModioDefaultTextBlock* LabelText;                                          // 0x0358 (size: 0x8)
    class UModioDefaultTextBlock* ValueText;                                          // 0x0360 (size: 0x8)
    FText LabelTextValue;                                                             // 0x0368 (size: 0x10)
    class UObject* EditorDataSource;                                                  // 0x0378 (size: 0x8)
    FText SubscriberCountFormatText;                                                  // 0x0380 (size: 0x10)
    bool bShowPropertyLabel;                                                          // 0x0390 (size: 0x1)
    FLinearColorRef PropertyLabelColor;                                               // 0x0394 (size: 0x18)

    void GetLabelTextWidget();
    void GetValueTextWidget();
    void OnSetDataSource(class UObject* InDataSource);
    void InitializeEditorPreview(bool bIsDesignTime);
    void PreConstruct(bool IsDesignTime);
    void SetDataSource(class UObject* InDataSource);
    void ExecuteUbergraph_WBP_ModioDefaultModSubscribersVisualizer(int32 EntryPoint);
}; // Size: 0x3AC

#endif
