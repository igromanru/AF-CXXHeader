#ifndef UE4SS_SDK_WBP_ModioDefaultModInstallationProgressBar_HPP
#define UE4SS_SDK_WBP_ModioDefaultModInstallationProgressBar_HPP

class UWBP_ModioDefaultModInstallationProgressBar_C : public UModioModInstallationStatusWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0578 (size: 0x8)
    class UModioDefaultProgressBar* ProgressBar;                                      // 0x0580 (size: 0x8)

    void UpdateVisibility(EModioModInstallationStatus Status);
    void GetProgressWidget();
    void UpdateStatusBarValue(EModioModInstallationStatus Status);
    void OnInstallationStatusChange(EModioModInstallationStatus NewStatus);
    void Construct();
    void ExecuteUbergraph_WBP_ModioDefaultModInstallationProgressBar(int32 EntryPoint);
}; // Size: 0x588

#endif
