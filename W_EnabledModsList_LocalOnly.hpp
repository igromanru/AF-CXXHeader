#ifndef UE4SS_SDK_W_EnabledModsList_LocalOnly_HPP
#define UE4SS_SDK_W_EnabledModsList_LocalOnly_HPP

class UW_EnabledModsList_LocalOnly_C : public UW_EnabledModsList_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)

    void RefreshList();
    void VerifyModsBeforeSaveOrHost(bool& BlockingState);
    void OnNoDependencyInfo_A458D64D4E6E2EB5EC77C6AF1290E4B1(const TArray<UAbioticModListItem*>& Items);
    void OnSuccess_A458D64D4E6E2EB5EC77C6AF1290E4B1(const TArray<UAbioticModListItem*>& Items);
    void OpenModsCustomizationForWorld(bool ExistingWorld);
    void OnSaveButtonPressed();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void RefreshModList();
    void ExecuteUbergraph_W_EnabledModsList_LocalOnly(int32 EntryPoint);
}; // Size: 0x380

#endif
