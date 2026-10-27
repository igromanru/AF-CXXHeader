#ifndef UE4SS_SDK_WBP_ModioDefaultModDependencyEntry_HPP
#define UE4SS_SDK_WBP_ModioDefaultModDependencyEntry_HPP

class UWBP_ModioDefaultModDependencyEntry_C : public UModioUIComponentBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UModioDefaultBorder* Background;                                            // 0x0350 (size: 0x8)
    class UModioDefaultImage* ModLogoThumbnail;                                       // 0x0358 (size: 0x8)
    class UModioDefaultTextBlock* ModNameLabel;                                       // 0x0360 (size: 0x8)
    class UModioDefaultTextBlock* ModSizeLabel;                                       // 0x0368 (size: 0x8)
    class UModioDefaultImage* ModStatusIcon;                                          // 0x0370 (size: 0x8)
    FLinearColorRef BackgroundColor;                                                  // 0x0378 (size: 0x18)
    class UMaterialInterface* InstalledStatusMaterial;                                // 0x0390 (size: 0x8)
    FModioModID CurrentModID;                                                         // 0x0398 (size: 0x8)
    EModioLogoSize DesiredLogoSize;                                                   // 0x03A0 (size: 0x1)
    FText InstalledStatusText;                                                        // 0x03A8 (size: 0x10)
    FLinearColorRef InstalledStatusColor;                                             // 0x03B8 (size: 0x18)
    FLinearColorRef NotInstalledStatusColor;                                          // 0x03D0 (size: 0x18)

    void GetSelectable(bool& bIsSelectable);
    void GetSelectedState(bool& bCurrentSelectedState);
    void GetToggleable(bool& bIsToggleable);
    void SetNotInstalledVisualState(FModioUnsigned64 ModFileSize);
    void SetInstalledVisualState();
    void GetModLogoThumbnailWidget(TScriptInterface<class IModioUIImageDisplayWidget>& Image);
    void GetBackgroundWidget(TScriptInterface<class IModioUIHasConfigurableColor>& Background);
    void GetModStatusImageWidget();
    void GetModSizeWidget();
    void GetModNameWidget();
    void ModLogoDownloadCompletedHandler(FModioModID ModId, FModioErrorCode ErrorCode, FModioOptionalImage Image, EModioLogoSize LogoSize);
    void OnSetDataSource(class UObject* InDataSource);
    void AddClickedHandler(const FAddClickedHandlerHandler& Handler);
    void DisableClick();
    void EnableClick();
    void RemoveClickedHandler(const FRemoveClickedHandlerHandler& Handler);
    void AddSelectedStateChangedHandler(const FAddSelectedStateChangedHandlerHandler& Handler);
    void RemoveSelectedStateChangedHandler(const FRemoveSelectedStateChangedHandlerHandler& Handler);
    void SetSelectable(bool bNewSelectableState);
    void SetSelectedState(bool bNewSelectedState);
    void SetToggleable(bool bNewToggleableState);
    void ToggleSelectedState();
    void OnModCollectionCuratorAvatarDownloadCompleted(FModioModCollectionID ModCollectionId, FModioErrorCode ErrorCode, FModioOptionalImage Image);
    void OnModCollectionLogoDownloadCompleted(FModioModCollectionID ModCollectionId, FModioErrorCode ErrorCode, FModioOptionalImage Image, EModioLogoSize LogoSize);
    void OnModCreatorAvatarDownloadCompleted(FModioModID ModId, FModioErrorCode ErrorCode, FModioOptionalImage Image);
    void OnModGalleryImageDownloadCompleted(FModioModID ModId, FModioErrorCode ErrorCode, int32 ImageIndex, FModioOptionalImage Image);
    void BP_OnEntryReleased();
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void PreConstruct(bool IsDesignTime);
    void SetDataSource(class UObject* InDataSource);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void OnModLogoDownloadCompleted(FModioModID ModId, FModioErrorCode ErrorCode, FModioOptionalImage Image, EModioLogoSize LogoSize);
    void ExecuteUbergraph_WBP_ModioDefaultModDependencyEntry(int32 EntryPoint);
}; // Size: 0x3E8

#endif
