#ifndef UE4SS_SDK_WBP_ModioDefaultModCollectionPropCollectionVisualizer_HPP
#define UE4SS_SDK_WBP_ModioDefaultModCollectionPropCollectionVisualizer_HPP

class UWBP_ModioDefaultModCollectionPropCollectionVisualizer_C : public UModioModPropCollectionVisualizer
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UModioDefaultBorder* Background;                                            // 0x0350 (size: 0x8)
    class UWBP_ModioDefaultModCollectionReleaseDateVisualizer_C* DateLiveProp;        // 0x0358 (size: 0x8)
    class UWBP_ModioDefaultModCollectionUpdatedVisualizer_C* DateUpdatedProp;         // 0x0360 (size: 0x8)
    class UWBP_ModioDefaultModCollectionDownloadVisualizer_C* DownloadsProp;          // 0x0368 (size: 0x8)
    class UWBP_ModioDefaultModCollectionSizeVisualizer_C* FileSizeProp;               // 0x0370 (size: 0x8)
    class UWBP_ModioDefaultModCollectionFollowersVisualizer_C* FollowersProp;         // 0x0378 (size: 0x8)
    class UWBP_ModioDefaultModCollectionModsVisualizer_C* ModsProp;                   // 0x0380 (size: 0x8)
    class UWBP_ModioDefaultModCollectionRatingVisualizer_C* RatingProp;               // 0x0388 (size: 0x8)
    class UObject* EditorDataSource;                                                  // 0x0390 (size: 0x8)
    FLinearColorRef BackgroundColor;                                                  // 0x0398 (size: 0x18)

    void GetBackgroundWidget(TScriptInterface<class IModioUIHasConfigurableColor>& Background);
    void GetModPropertyVisualizerWidgets();
    void InitializeEditorPreview(bool bIsDesignTime);
    void OnSetDataSource(class UObject* InDataSource);
    void PreConstruct(bool IsDesignTime);
    void SetDataSource(class UObject* InDataSource);
    void ExecuteUbergraph_WBP_ModioDefaultModCollectionPropCollectionVisualizer(int32 EntryPoint);
}; // Size: 0x3B0

#endif
