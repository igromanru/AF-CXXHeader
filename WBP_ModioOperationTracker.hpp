#ifndef UE4SS_SDK_WBP_ModioOperationTracker_HPP
#define UE4SS_SDK_WBP_ModioOperationTracker_HPP

class UWBP_ModioOperationTracker_C : public UModioOperationTracker
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03B8 (size: 0x8)
    class UHorizontalBox* DownloadInfoHorizontalBox;                                  // 0x03C0 (size: 0x8)
    class UModioDefaultTextBlock* DownloadSizeTextBlock;                              // 0x03C8 (size: 0x8)
    class UModioDefaultTextBlock* DownloadSpeedTextBlock;                             // 0x03D0 (size: 0x8)
    class UModioDefaultImage* OperationTypeIcon;                                      // 0x03D8 (size: 0x8)
    class UModioDefaultTextBlock* PercentProgressTextBlock;                           // 0x03E0 (size: 0x8)
    class UModioDefaultImage* QueueCountIcon;                                         // 0x03E8 (size: 0x8)
    class UModioDefaultTextBlock* QueueCountTextBlock;                                // 0x03F0 (size: 0x8)
    class UModioDefaultTextBlock* QueuedLabelTextBlock;                               // 0x03F8 (size: 0x8)
    class UWBP_ModioDefaultRadialProgressWidget_C* RadialProgressWidget;              // 0x0400 (size: 0x8)
    FSlateBrush DownloadingImageBrush;                                                // 0x0410 (size: 0xD0)
    FSlateBrush ExtractingImageBrush;                                                 // 0x04E0 (size: 0xD0)
    FSlateBrush QueueCountImageBrush;                                                 // 0x05B0 (size: 0xD0)
    FLinearColorRef DownloadingIconColor;                                             // 0x0680 (size: 0x18)
    FLinearColorRef QueueCountIconColor;                                              // 0x0698 (size: 0x18)
    FLinearColorRef ExtractingIconColor;                                              // 0x06B0 (size: 0x18)

    void GetPercentProgressTextWidget();
    void GetDownloadSpeedTextWidget();
    void GetDownloadSizeTextWidget();
    void OnOperationBegin(FModioModManagementEvent Event);
    void GetQueueLabelTextWidget();
    void UpdateProgressIconByModProgressState(EModioModProgressState ModProgressState);
    void OnRefreshQueueData();
    void OnPreConstruct();
    void OnOperationComplete();
    void GetRadialProgressWidget();
    void GetQueueCountTextWidget();
    void GetQueueCountIconWidget();
    void GetOperationTypeIconWidget();
    void PreConstruct(bool IsDesignTime);
    void RefreshQueueData();
    void HandleOperationComplete();
    void ExecuteUbergraph_WBP_ModioOperationTracker(int32 EntryPoint);
}; // Size: 0x6C8

#endif
