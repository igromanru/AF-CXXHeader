#ifndef UE4SS_SDK_WBP_ModioDefaultModInstallationStatusWidget_HPP
#define UE4SS_SDK_WBP_ModioDefaultModInstallationStatusWidget_HPP

class UWBP_ModioDefaultModInstallationStatusWidget_C : public UModioModInstallationStatusWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0578 (size: 0x8)
    class UModioDefaultBorder* BackgroundBorder;                                      // 0x0580 (size: 0x8)
    class UModioDefaultProgressBar* ProgressWidget;                                   // 0x0588 (size: 0x8)
    class UModioDefaultImage* StatusIconWidget;                                       // 0x0590 (size: 0x8)
    class UModioDefaultTextBlock* StatusLabelWidget;                                  // 0x0598 (size: 0x8)
    bool bDisplayStatusText;                                                          // 0x05A0 (size: 0x1)
    FLinearColorRef DefaultBackgroundColor;                                           // 0x05A4 (size: 0x18)
    FLinearColorRef ErrorBackgroundColor;                                             // 0x05BC (size: 0x18)
    FLinearColorRef DefaultTextColor;                                                 // 0x05D4 (size: 0x18)
    FLinearColorRef DisabledTextColor;                                                // 0x05EC (size: 0x18)
    FLinearColorRef ProcessingTextColor;                                              // 0x0604 (size: 0x18)
    FLinearColorRef DefaultIconColor;                                                 // 0x061C (size: 0x18)
    FLinearColorRef DisabledIconColor;                                                // 0x0634 (size: 0x18)
    FLinearColorRef EnabledIconColor;                                                 // 0x064C (size: 0x18)
    FLinearColorRef ExtractingProgressBarColor;                                       // 0x0664 (size: 0x18)
    FText EnabledStatusText;                                                          // 0x0680 (size: 0x10)
    FText DisabledStatusText;                                                         // 0x0690 (size: 0x10)
    FText ErrorStatusText;                                                            // 0x06A0 (size: 0x10)
    FText QueuedStatusText;                                                           // 0x06B0 (size: 0x10)
    FText DownloadingStatusText;                                                      // 0x06C0 (size: 0x10)
    FText ExtractingStatusText;                                                       // 0x06D0 (size: 0x10)
    FText InitializingStatusText;                                                     // 0x06E0 (size: 0x10)
    FText UploadingStatusText;                                                        // 0x06F0 (size: 0x10)
    FText UploadedStatusText;                                                         // 0x0700 (size: 0x10)
    FText SystemInstallStatusText;                                                    // 0x0710 (size: 0x10)
    FSlateBrush SystemInstallStatusIcon;                                              // 0x0720 (size: 0xD0)
    FSlateBrush EnabledStatusIcon;                                                    // 0x07F0 (size: 0xD0)
    FSlateBrush DisabledStatusIcon;                                                   // 0x08C0 (size: 0xD0)
    FSlateBrush ErrorStatusIcon;                                                      // 0x0990 (size: 0xD0)
    FSlateBrush QueuedStatusIcon;                                                     // 0x0A60 (size: 0xD0)
    FSlateBrush DownloadingStatusIcon;                                                // 0x0B30 (size: 0xD0)
    FSlateBrush ExtractingStatusIcon;                                                 // 0x0C00 (size: 0xD0)
    FSlateBrush InitializingStatusIcon;                                               // 0x0CD0 (size: 0xD0)
    FSlateBrush UploadingStatusIcon;                                                  // 0x0DA0 (size: 0xD0)
    FSlateBrush UploadedStatusIcon;                                                   // 0x0E70 (size: 0xD0)

    void UpdateProgressBarValue(EModioModInstallationStatus NewStatus);
    void ApplyStatusVisibilityOverride(EModioModInstallationStatus NewStatus);
    void UpdateIcon(EModioModInstallationStatus NewState);
    void UpdateLabelText(EModioModInstallationStatus NewState);
    void UpdateSubWidgetColors(EModioModInstallationStatus NewStatus);
    void UpdateVisibility(EModioModInstallationStatus NewStatus);
    void InstallationStatusChanged(EModioModInstallationStatus NewStatus);
    void SetDefaultProgressBarColor();
    void SetExtractingProgressBarColor();
    void GetBackgroundBorderWidget(TScriptInterface<class IModioUIHasConfigurableColor>& BackgroundBorder);
    void GetStatusIconWidget();
    void GetProgressWidget();
    void GetStatusTextWidget();
    void ApplyTextVisibilityOverride();
    void PreConstruct(bool IsDesignTime);
    void OnInitialized();
    void ExecuteUbergraph_WBP_ModioDefaultModInstallationStatusWidget(int32 EntryPoint);
}; // Size: 0xF40

#endif
