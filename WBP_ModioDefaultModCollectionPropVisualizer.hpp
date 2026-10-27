#ifndef UE4SS_SDK_WBP_ModioDefaultModCollectionPropVisualizer_HPP
#define UE4SS_SDK_WBP_ModioDefaultModCollectionPropVisualizer_HPP

class UWBP_ModioDefaultModCollectionPropVisualizer_C : public UModioModPropCollectionVisualizer
{
    class UModioDefaultBorder* Background;                                            // 0x0348 (size: 0x8)
    class UWBP_ModioDefaultModCollectionDownloadVisualizer_Horizontal_C* CollectionDownloadVisualizer; // 0x0350 (size: 0x8)
    class UWBP_ModioDefaultModCollectionRatingVisualizer_Horizontal_C* CollectionRatingVisualizer; // 0x0358 (size: 0x8)
    class UWBP_ModioDefaultModCollectionSizeVisualizer_Horizontal_C* CollectionSizeVisualizer; // 0x0360 (size: 0x8)
    class UWBP_ModioDefaultModCollectionModCountVisualizer_Horizontal_C* ModCountVisualizer; // 0x0368 (size: 0x8)

    void GetModPropertyVisualizerWidgets();
}; // Size: 0x370

#endif
