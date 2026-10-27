#ifndef UE4SS_SDK_WBP_ModioModCollectionDetailsDialog_HPP
#define UE4SS_SDK_WBP_ModioModCollectionDetailsDialog_HPP

class UWBP_ModioModCollectionDetailsDialog_C : public UModioModCollectionDetailsDialog
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0558 (size: 0x8)
    class UModioDefaultBorder* BackgroundBorder;                                      // 0x0560 (size: 0x8)
    class UWBP_ModioDefaultIconButton_C* CloseButton;                                 // 0x0568 (size: 0x8)
    class UModioDefaultTextBlock* CollectionNameText;                                 // 0x0570 (size: 0x8)
    class UWBP_ModioDefaultModCollectionPropCollectionVisualizer_C* CollectionProperties; // 0x0578 (size: 0x8)
    class UWBP_ModioDefaultModCollectionStatusWidget_C* CollectionStatus;             // 0x0580 (size: 0x8)
    class UModioWidgetStack* CollectionWidgetStack;                                   // 0x0588 (size: 0x8)
    class UWBP_ModioDefaultIconButton_C* ExpandDescriptionButton;                     // 0x0590 (size: 0x8)
    class UWBP_ModioDefaultButton_C* FollowButton;                                    // 0x0598 (size: 0x8)
    class UWidgetSwitcher* FollowButtonSwitcher;                                      // 0x05A0 (size: 0x8)
    class UModioDefaultImage* LogoImage;                                              // 0x05A8 (size: 0x8)
    class UModioDefaultModTileView* ModTileView;                                      // 0x05B0 (size: 0x8)
    class UWBP_ModioDefaultButton_C* MoreFromCreatorButton;                           // 0x05B8 (size: 0x8)
    class UWBP_ModioDefaultModDetailsMoreOptionsPopupMenu_C* MoreOptionsButton;       // 0x05C0 (size: 0x8)
    class UWBP_ModioDefaultPlatformUsername_C* PlatformUsername;                      // 0x05C8 (size: 0x8)
    class UWBP_ModioDefaultIconButton_C* RateDownButton;                              // 0x05D0 (size: 0x8)
    class UWBP_ModioDefaultIconButton_C* RateUpButton;                                // 0x05D8 (size: 0x8)
    class UModioDefaultTextBlock* SummaryShortText;                                   // 0x05E0 (size: 0x8)
    class UWBP_ModioDefaultTagDisplay_C* TagDisplay;                                  // 0x05E8 (size: 0x8)
    class UWBP_ModioDefaultButton_C* UnFollowButton;                                  // 0x05F0 (size: 0x8)
    FLinearColorRef PremiumBadgeColor;                                                // 0x05F8 (size: 0x18)
    FLinearColorRef BackgroundColor;                                                  // 0x0610 (size: 0x18)
    EModioRating CurrentCollectionRating;                                             // 0x0628 (size: 0x1)
    EModioRating NewRating;                                                           // 0x0629 (size: 0x1)
    int64 PendingRatingCollectionID;                                                  // 0x0630 (size: 0x8)

    void WidgetAction_CloseMenu(bool& Handled);
    void WidgetAction_CycleMenu(bool Next, bool& Handled);
    void WidgetAction_CycleCrafting(bool Next, bool& Handled);
    void WidgetAction_FaceTop(bool& Handled);
    void WidgetAction_DPadDirection(TEnumAsByte<E_NavigationDirection::Type> Direction, bool& Handled);
    void OnDialogClosed(class UObject* ActivationContext, bool bIsActivated);
    void DoNavigationToModList(EUINavigation Navigation);
    void OnRequestDisplayDialogEvent(EModioUIDialogType RequestedDialog, class UObject* InDataSource);
    void OnUnfollowButtonClicked(class UObject* ClickContext);
    void GetUnfollowButtonWidget();
    void OnGetModCollectionFollowStateResultHandler(FModioErrorCode ErrorCode, bool bIsCollectionFollowed);
    void OnModColllectionFollowStateChangeHandler(FModioModCollectionID CollectionID, bool bNewFollowState);
    void OnCollectionModEntryClicked(class UObject* ClickContext);
    void OnCollectionModEntryCreated(class UWidget* ObjectWidget, class UObject* Object);
    void GetCollectionModsObjectListViewWidget();
    void GetCollectionModsListViewWidget();
    void GetCloseDialogButtonWidget();
    void GetMoreOptionsMenuWidget();
    void GetExpandDescriptionButtonWidget();
    void GetTagDisplayWidget();
    void GetRateUpButtonWidget();
    void GetRateDownButtonWidget();
    void OnModCollectionLogoDownloadHandler(FModioModCollectionID ModCollectionId, FModioErrorCode ErrorCode, FModioOptionalImage Image, EModioLogoSize LogoSize);
    void GetModCollectionCuratorDisplayWidget();
    void GetModCollectionStatusWidget();
    void GetModCollectionPropertiesWidget();
    void GetModCollectionSummaryShortTextWidget();
    void GetFollowButtonWidget();
    void OnGetModCollectionModsHandler(FModioModCollectionID CollectionID, FModioErrorCode ErrorCode, FModioOptionalModInfoList Mods);
    void RegisterEventHandlers();
    void GetModCollectionLogoWidget();
    void GetModCollectionNameTextWidget();
    void DoNavigationToMoreOptions(EUINavigation Navigation);
    void DoNavigationUpFromCreator(EUINavigation Navigation);
    void DoNavigationFromVoteToTags(EUINavigation Navigation);
    void OpenStoreResultHandler(bool bResult, FString Message);
    void OnOpenStoreButtonClicked(class UObject* ClickContext);
    void GetWidgetToFocus(EUINavigation NavigationType);
    void GetModCollectionWidgetStack(class UModioWidgetStack*& WidgetStack);
    void Submit Mod Collection  Rating(EModioRating Rating);
    void ErrorHandler(const FModioErrorCode& Error);
    void ModManagementEventHandler(FModioModManagementEvent Event);
    void SubscriptionsChangedHandler(FModioModID ModId, bool bNewSubscriptionState);
    void GetMoreFromCreatorButtonWidget(TScriptInterface<class IModioUIClickableWidget>& MoreFromCreatorButton);
    void DoNavigationToFollowOrUnfollow(EUINavigation Navigation);
    void NavigateUpFromDependencies(EUINavigation Navigation);
    void GetBackgroundBorderWidget(TScriptInterface<class IModioUIHasConfigurableColor>& Border);
    void On Rating Change Submitted(FModioErrorCode ErrorCode);
    void OnMoreFromCreatorClicked(class UObject* ClickContext);
    void OnCloseDialogButtonClicked(class UObject* ClickContext);
    void OnModDependenciesButtonClicked(class UObject* ClickContext);
    void OnExpandDescriptionButtonClicked(class UObject* ClickContext);
    void ConfigureColors();
    void OnRateDownButtonClicked(class UObject* ClickContext);
    void OnRateUpButtonClicked(class UObject* ClickContext);
    void OnFollowButtonClicked(class UObject* ClickContext);
    void UpdateRateButtonLabelsAndState();
    void UpdateTagDisplay();
    void Update Collection Properties();
    void Update Collection Summary();
    void Update Collection Author();
    void Update Collection Name();
    void BindOnClickedEvents();
    void OnSetDataSource(class UObject* InDataSource);
    void SetDataSource(class UObject* InDataSource);
    void OnSubscriptionsChanged(FModioModID ModId, bool bNewSubscriptionState);
    void PreConstruct(bool IsDesignTime);
    void OnModManagementEvent(FModioModManagementEvent Event);
    void OnCollectionFollowStateChanged(FModioModCollectionID ModCollectionId, bool bNewFollowState);
    void OnDialogDisplayEvent(EModioUIDialogType DialogRequested, class UObject* DataSource);
    void Construct();
    void ExecuteUbergraph_WBP_ModioModCollectionDetailsDialog(int32 EntryPoint);
}; // Size: 0x638

#endif
