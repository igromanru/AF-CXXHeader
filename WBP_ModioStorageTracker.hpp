#ifndef UE4SS_SDK_WBP_ModioStorageTracker_HPP
#define UE4SS_SDK_WBP_ModioStorageTracker_HPP

class UWBP_ModioStorageTracker_C : public UModioStorageTracker
{
    class UModioDefaultTextBlock* StorageUsedTextBlock;                               // 0x0368 (size: 0x8)

    void GetStorageUsedTextWidget();
}; // Size: 0x370

#endif
