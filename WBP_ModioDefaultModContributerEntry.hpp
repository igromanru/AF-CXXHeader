#ifndef UE4SS_SDK_WBP_ModioDefaultModContributerEntry_HPP
#define UE4SS_SDK_WBP_ModioDefaultModContributerEntry_HPP

class UWBP_ModioDefaultModContributerEntry_C : public UModioUIComponentBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UModioDefaultBorder* Background;                                            // 0x0350 (size: 0x8)
    class UWBP_ModioDefaultButton_C* MoreFromCreatorButton;                           // 0x0358 (size: 0x8)
    class UWBP_ModioDefaultPlatformUsername_C* PlatformUsername;                      // 0x0360 (size: 0x8)
    class UModioDefaultImage* UserAvatar;                                             // 0x0368 (size: 0x8)
    FLinearColorRef BackgroundColor;                                                  // 0x0370 (size: 0x18)

    void GetSelectable(bool& bIsSelectable);
    void GetSelectedState(bool& bCurrentSelectedState);
    void GetToggleable(bool& bIsToggleable);
    void OnContributorClickedEvent(class UObject* ClickContext);
    void GetContributorButtonWidget(TScriptInterface<class IModioUIClickableWidget>& Widget);
    void GetContributorDisplayWidget(TScriptInterface<class IModioUIDataSourceWidget>& Widget);
    void GetUserAvatarThumbnailWidget(TScriptInterface<class IModioUIImageDisplayWidget>& Image);
    void GetBackgroundWidget(TScriptInterface<class IModioUIHasConfigurableColor>& Background);
    void ContributorAvatarDownloadCompletedHandler(FModioModID ModId, FModioErrorCode ErrorCode, FModioOptionalImage Image);
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
    void OnModLogoDownloadCompleted(FModioModID ModId, FModioErrorCode ErrorCode, FModioOptionalImage Image, EModioLogoSize LogoSize);
    void BP_OnEntryReleased();
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void PreConstruct(bool IsDesignTime);
    void SetDataSource(class UObject* InDataSource);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void ExecuteUbergraph_WBP_ModioDefaultModContributerEntry(int32 EntryPoint);
}; // Size: 0x388

#endif
