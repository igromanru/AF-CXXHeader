#ifndef UE4SS_SDK_WBP_ModioDefaultModTileModPropCollectionVisualizer_HPP
#define UE4SS_SDK_WBP_ModioDefaultModTileModPropCollectionVisualizer_HPP

class UWBP_ModioDefaultModTileModPropCollectionVisualizer_C : public UModioModPropCollectionVisualizer
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UModioDefaultBorder* Background;                                            // 0x0350 (size: 0x8)
    class UWBP_ModioDefaultModDownloadVisualizer_Horizontal_C* ModDownloadVisualizer; // 0x0358 (size: 0x8)
    class UWBP_ModioDefaultModRatingVisualizer_Horizontal_C* ModRatingVisualizer;     // 0x0360 (size: 0x8)
    class UWBP_ModioDefaultModSizeVisualizer_Horizontal_C* ModSizeVisualizer;         // 0x0368 (size: 0x8)
    class UObject* EditorDataSource;                                                  // 0x0370 (size: 0x8)
    FLinearColorRef BackgroundColor;                                                  // 0x0378 (size: 0x18)

    void GetBackgroundWidget(TScriptInterface<class IModioUIHasConfigurableColor>& Background);
    void GetModPropertyVisualizerWidgets();
    void InitializeEditorPreview(bool bIsDesignTime);
    void OnSetDataSource(class UObject* InDataSource);
    void PreConstruct(bool IsDesignTime);
    void SetDataSource(class UObject* InDataSource);
    void ExecuteUbergraph_WBP_ModioDefaultModTileModPropCollectionVisualizer(int32 EntryPoint);
}; // Size: 0x390

#endif
