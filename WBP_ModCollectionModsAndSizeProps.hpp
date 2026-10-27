#ifndef UE4SS_SDK_WBP_ModCollectionModsAndSizeProps_HPP
#define UE4SS_SDK_WBP_ModCollectionModsAndSizeProps_HPP

class UWBP_ModCollectionModsAndSizeProps_C : public UModioUIComponentBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UWBP_ModioDefaultModCollectionSizeVisualizer_Horizontal_C* CollectionSizeWidget; // 0x0350 (size: 0x8)
    class UWBP_ModioDefaultModCollectionModCountVisualizer_Horizontal_C* ModCountWidget; // 0x0358 (size: 0x8)

    void SetDataSource(class UObject* InDataSource);
    void ExecuteUbergraph_WBP_ModCollectionModsAndSizeProps(int32 EntryPoint);
}; // Size: 0x360

#endif
