#ifndef UE4SS_SDK_WBP_ModioDefaultModPropCollectionVisualizer_HPP
#define UE4SS_SDK_WBP_ModioDefaultModPropCollectionVisualizer_HPP

class UWBP_ModioDefaultModPropCollectionVisualizer_C : public UModioModPropCollectionVisualizer
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UModioDefaultBorder* Background;                                            // 0x0350 (size: 0x8)
    class UWBP_ModioDefaultModDownloadVisualizer_C* WBP_ModioDefaultModDownloadVisualizer; // 0x0358 (size: 0x8)
    class UWBP_ModioDefaultModRatingVisualizer_C* WBP_ModioDefaultModRatingVisualizer; // 0x0360 (size: 0x8)
    class UWBP_ModioDefaultModReleaseDateVisualizer_C* WBP_ModioDefaultModReleaseDateVisualizer; // 0x0368 (size: 0x8)
    class UWBP_ModioDefaultModSizeVisualizer_C* WBP_ModioDefaultModSizeVisualizer;    // 0x0370 (size: 0x8)
    class UWBP_ModioDefaultModSubscribersVisualizer_C* WBP_ModioDefaultModSubscribersVisualizer; // 0x0378 (size: 0x8)
    class UWBP_ModioDefaultModUpdatedVisualizer_C* WBP_ModioDefaultModUpdatedVisualizer; // 0x0380 (size: 0x8)
    class UWBP_ModioDefaultModVersionVisualizer_C* WBP_ModioDefaultModVersionVisualizer; // 0x0388 (size: 0x8)
    class UObject* EditorDataSource;                                                  // 0x0390 (size: 0x8)
    FLinearColorRef BackgroundColor;                                                  // 0x0398 (size: 0x18)

    void GetBackgroundWidget(TScriptInterface<class IModioUIHasConfigurableColor>& Background);
    void GetModPropertyVisualizerWidgets();
    void InitializeEditorPreview(bool bIsDesignTime);
    void OnSetDataSource(class UObject* InDataSource);
    void PreConstruct(bool IsDesignTime);
    void SetDataSource(class UObject* InDataSource);
    void ExecuteUbergraph_WBP_ModioDefaultModPropCollectionVisualizer(int32 EntryPoint);
}; // Size: 0x3B0

#endif
