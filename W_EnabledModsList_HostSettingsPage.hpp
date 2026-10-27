#ifndef UE4SS_SDK_W_EnabledModsList_HostSettingsPage_HPP
#define UE4SS_SDK_W_EnabledModsList_HostSettingsPage_HPP

class UW_EnabledModsList_HostSettingsPage_C : public UW_EnabledModsList_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)

    void RefreshList();
    void VerifyModsBeforeSaveOrHost(bool& BlockingState);
    void OnNoDependencyInfo_0EFE78444F243C1FD86121A7E4A172F4(const TArray<UAbioticModListItem*>& Items);
    void OnSuccess_0EFE78444F243C1FD86121A7E4A172F4(const TArray<UAbioticModListItem*>& Items);
    void OpenModsCustomizationForWorld(bool ExistingWorld);
    void OnSaveButtonPressed();
    void ExecuteUbergraph_W_EnabledModsList_HostSettingsPage(int32 EntryPoint);
}; // Size: 0x380

#endif
