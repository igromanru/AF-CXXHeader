#ifndef UE4SS_SDK_WBP_ModioModBrowser_HPP
#define UE4SS_SDK_WBP_ModioModBrowser_HPP

class UWBP_ModioModBrowser_C : public UModioModBrowser
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UModioDefaultBorder* BackgroundBorder_1;                                    // 0x03C8 (size: 0x8)
    class UImage* BG_1;                                                               // 0x03D0 (size: 0x8)
    class UModioDefaultBorder* BottomBarBackground;                                   // 0x03D8 (size: 0x8)
    class UButton* Button_374;                                                        // 0x03E0 (size: 0x8)
    class UWBP_ModioDefaultButton_C* ClearSearchButton;                               // 0x03E8 (size: 0x8)
    class UWBP_ModioDefaultIconButton_C* CloseButton;                                 // 0x03F0 (size: 0x8)
    class UModioFeatureVisibilityWidget* CollectionsFeatureVisibility;                // 0x03F8 (size: 0x8)
    class UWBP_ModioDefaultIconButton_C* CollectionsViewButton;                       // 0x0400 (size: 0x8)
    class UWBP_ModioDefaultButton_C* ConfirmSearchHiddenButton;                       // 0x0408 (size: 0x8)
    class UWBP_ModioFilterCounterButton_C* FilterButton;                              // 0x0410 (size: 0x8)
    class UModioDefaultImage* HeaderSeparatorImage;                                   // 0x0418 (size: 0x8)
    class UW_Keybind_C* Keybind_MenuLeft;                                             // 0x0420 (size: 0x8)
    class UW_Keybind_C* Keybind_MenuRight;                                            // 0x0428 (size: 0x8)
    class UWBP_ModioDefaultIconButton_C* LibraryViewButton;                           // 0x0430 (size: 0x8)
    class UOverlay* LoadingOverlay;                                                   // 0x0438 (size: 0x8)
    class UImage* LoadingRunner_1;                                                    // 0x0440 (size: 0x8)
    class UModioWidgetStack* MainContentStack;                                        // 0x0448 (size: 0x8)
    class UWidgetSwitcher* MainViewSwitcher;                                          // 0x0450 (size: 0x8)
    class UVerticalBox* ModBrowserView;                                               // 0x0458 (size: 0x8)
    class UVerticalBox* ModCollectionsView;                                           // 0x0460 (size: 0x8)
    class UModioDefaultModCollectionTileView* ModCollectionTileView;                  // 0x0468 (size: 0x8)
    class UModioDefaultModTileView* ModTileView;                                      // 0x0470 (size: 0x8)
    class UWBP_ModioDefaultPresetFilterSelectorWidget_C* PresetFilterSelector;        // 0x0478 (size: 0x8)
    class UBorder* SearchBarHighlightBorder;                                          // 0x0480 (size: 0x8)
    class UOverlay* SearchBoxOverlay;                                                 // 0x0488 (size: 0x8)
    class UWBP_ModioDefaultIconButton_C* SearchButton;                                // 0x0490 (size: 0x8)
    class UWBP_ModioDefaultSlottedButton_C* SearchDetectionButton;                    // 0x0498 (size: 0x8)
    class UModioDefaultEditableTextBox* SearchEditableTextBox;                        // 0x04A0 (size: 0x8)
    class UHorizontalBox* SearchHorizontalBox;                                        // 0x04A8 (size: 0x8)
    class UTextBlock* SearchText_1;                                                   // 0x04B0 (size: 0x8)
    class UModioDefaultTextBlock* SearchTextBlock;                                    // 0x04B8 (size: 0x8)
    class UModioWidgetStack* SecondaryContentStack;                                   // 0x04C0 (size: 0x8)
    class UWidgetSwitcher* SubHeaderWidgetSwitcher;                                   // 0x04C8 (size: 0x8)
    class UWBP_ModioActionWidgetButton_C* TabLeftButton;                              // 0x04D0 (size: 0x8)
    class UWBP_ModioActionWidgetButton_C* TabRightButton;                             // 0x04D8 (size: 0x8)
    class UModioDefaultImage* ViewDescriptionImage;                                   // 0x04E0 (size: 0x8)
    class UModioDefaultTextBlock* ViewDescriptionText;                                // 0x04E8 (size: 0x8)
    class UW_Keybind_C* W_Keybind;                                                    // 0x04F0 (size: 0x8)
    FModioFilterParams SearchParams;                                                  // 0x04F8 (size: 0xB8)
    FLinearColorRef BackgroundColor;                                                  // 0x05B0 (size: 0x18)
    FSlateBrush LibraryIcon;                                                          // 0x05D0 (size: 0xD0)
    FSlateBrush RecentIcon;                                                           // 0x06A0 (size: 0xD0)
    FSlateBrush TrendingIcon;                                                         // 0x0770 (size: 0xD0)
    int32 SelectedLibraryCategoryIndex;                                               // 0x0840 (size: 0x4)
    FLinearColorRef HeaderSeparatorColor;                                             // 0x0844 (size: 0x18)
    bool bSearchBoxIsExpanded;                                                        // 0x085C (size: 0x1)
    FSlateBrush CollectionsIcon;                                                      // 0x0860 (size: 0xD0)
    FText ModSearchHintText;                                                          // 0x0930 (size: 0x10)
    FText CollectionSearchHintText;                                                   // 0x0940 (size: 0x10)
    FWBP_ModioModBrowser_CClosedPressed ClosedPressed;                                // 0x0950 (size: 0x10)
    void ClosedPressed();

    void WidgetAction_CloseMenu(bool& Handled);
    void WidgetAction_CycleMenu(bool Next, bool& Handled);
    void WidgetAction_CycleCrafting(bool Next, bool& Handled);
    void WidgetAction_FaceTop(bool& Handled);
    void WidgetAction_DPadDirection(TEnumAsByte<E_NavigationDirection::Type> Direction, bool& Handled);
    void ToggleLoadingOverlay(bool Show);
    void OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void GetPresetFilterSelectorWidget();
    void GetModTileViewWidget();
    void GetSearchTextWidget();
    void GetModCollectionTileViewWidget();
    void GetFilterButtonWidget();
    void GetActiveObjectListWidget(TScriptInterface<class IModioUIObjectListWidget>& ObjectList);
    void HandleMoreCollectionsWithTagSearch(const FModioOptionalModCollectionInfoList& OptionalModCollectionInfoList);
    void DoNavigationToModCollectionView(EUINavigation Navigation);
    void DisplayCollectionFilterPanel();
    void HandleMoreFromCuratorSearch(const FModioOptionalModCollectionInfoList& OptionalModCollectionInfoList);
    void ListAllModCollectionsRequestCompleteHandler(FString RequestIdentifier, FModioErrorCode ErrorCode, FModioOptionalModCollectionInfoList List);
    void OnGetGameInfoErrorHandler(FModioErrorCode ErrorCode, FModioOptionalGameInfo GameInfo);
    void DisplayModCollectionDetailsDialog(class UObject* InDataSource);
    void OnModCollectionTileEntryGenerated(class UWidget* ObjectWidget, class UObject* Object);
    void OnModCollectionTileClicked(class UObject* ClickContext);
    void Get Active Tile View Widget(TScriptInterface<class IModioScrollableWidget>& Tile View);
    void SearchModCollectionsOnline();
    void InitializeCollectionsView();
    void OnCollectionPageButtonClicked(class UObject* ClickContext);
    void DisplayDependencyDownloadDialog(class UObject* InDataSource);
    void OnSearchDetectionButtonHoverChanged(class UObject* HoverContext, bool bHoveredState);
    void OnSearchDetectionButtonFocusChanged(class UObject* FocusContext, FFocusEvent InFocusEvent, bool bIsFocused);
    void DoNavigationFromCloseToLeft(EUINavigation Navigation);
    void DoNavigationToPresetFilterSelector(EUINavigation Navigation);
    void HandleMoreWithTagSearch(const FModioOptionalModInfoList& OptionalModInfoList);
    void On Tab Right Button Clicked(class UObject* ClickContext);
    void On Tab Left Button Clicked(class UObject* ClickContext);
    void ClearAllTagData();
    void UpdateViewDescriptionHeader();
    void DisplayLibraryFilterPanel();
    void OnOpenStoreResultHandler(bool bResult, FString Message);
    void OnFilterPanelDeactivated();
    void ToggleCloseButtonVisibility(bool bVisible);
    void OnFetchExternalUpdatesDone(FModioErrorCode ErrorCode);
    void DoNavigationToSearch(EUINavigation Navigation);
    void SetSearchHoverFreezeState(bool bFreezeEnabled, bool bHovered);
    void SetSearchTextBoxVisibility(bool bIsVisible);
    void OnSearchEditableTextBoxTextCommitted(class UObject* CommitContext, const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void OnSubscriptionsChangedHandler(FModioModID ModId, bool NewSubscriptionState);
    void OnModTileEntryGenerated(class UWidget* ObjectWidget, class UObject* Object);
    void GetWidgetToFocus(EUINavigation NavigationType);
    void OnConfirmSearchButtonClicked(class UObject* ClickContext);
    void DoNavigationFromSearch(EUINavigation Navigation);
    void SearchModsLocally();
    void SearchModsOnline();
    void OnSearchEditableTextBoxWidgetFocusChanged(class UObject* FocusContext, FFocusEvent InFocusEvent, bool bIsFocused);
    void SearchMods();
    void HandleMoreFromCreatorSearch(const FModioOptionalModInfoList& OptionalModInfoList);
    void DoNavigationFromHeaderToDown(EUINavigation Navigation);
    void DoNavigationToSubHeader(EUINavigation Navigation);
    void DoNavigationToCollectionsTab(EUINavigation Navigation);
    void DoNavigationToModView(EUINavigation Navigation);
    void DoNavigationToLibraryTab(EUINavigation Navigation);
    void DoNavigationFromModTileToUp(EUINavigation Navigation);
    void DoNavigationFromLeftHeaderToDown(EUINavigation Navigation);
    void SetColors();
    void BP_OnHandleBackAction();
    void OnCloseBrowserButtonClicked(class UObject* ClickContext);
    void ListAllModsRequestCompleteHandler(FString RequestIdentifier, FModioErrorCode ErrorCode, FModioOptionalModInfoList List);
    void DisplayReportModDialog(class UObject* InDataSource);
    void DisplayModDetailsDialog(class UObject* InDataSource);
    void InitializeForUser(FModioUser User);
    void DialogDisplayEventHandler(EModioUIDialogType DialogRequested, class UObject* InDataSource);
    void ErrorHandler(FModioErrorCode ErrorCode);
    void OnModTileClicked(class UObject* ClickContext);
    void OnSearchButtonClicked(class UObject* ClickContext);
    void OnLibraryViewButtonClicked(class UObject* ClickContext);
    void OnPresetFilterTabLeftButtonClicked(class UObject* ClickContext);
    void InitializeModsView();
    void InitializeLibraryView();
    void AddRevenueTypeFilterParam(FModioFilterParams InFilterParams, FModioFilterParams& OutFilterParams);
    void SetFilterParamsToDefault(FModioFilterParams& Default Filter Params);
    void DisplayFilterPanel();
    void ClearAllSearchData();
    void BindWidgetHandlers();
    void OnPresetFilterTabRightButtonClicked(class UObject* ClickContext);
    void OnSubscriptionsFilterButtonClicked(class UObject* ClickContext);
    void OnPresetFilterChanged(class UObject* SelectedValue);
    void OnFilterPanelActivationChanged(class UObject* ActivationContext, bool bIsActivated);
    void OnFilterButtonClicked(class UObject* ClickContext);
    void OnClearSearchButtonClicked(class UObject* ClickContext);
    void Construct();
    void OnListAllModsRequestCompleted(FString RequestIdentifier, FModioErrorCode ErrorCode, FModioOptionalModInfoList List);
    void PreConstruct(bool IsDesignTime);
    void SelectFirstListItem();
    void OnSubscriptionsChanged(FModioModID ModId, bool bNewSubscriptionState);
    void OnDialogDisplayEvent(EModioUIDialogType DialogRequested, class UObject* DataSource);
    void FocusSearchEditableTextBox();
    void OnListModCollectionsRequestCompleted(FString RequestIdentifier, FModioErrorCode ErrorCode, FModioOptionalModCollectionInfoList List);
    void InitMenu();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__WBP_ModioModBrowser_ModTileView_K2Node_ComponentBoundEvent_0_OnModTileListSet__DelegateSignature(bool bIsEmpty);
    void BndEvt__WBP_ModioModBrowser_ModCollectionTileView_K2Node_ComponentBoundEvent_1_OnModCollectionListSet__DelegateSignature(bool bIsEmpty);
    void ExecuteUbergraph_WBP_ModioModBrowser(int32 EntryPoint);
    void ClosedPressed__DelegateSignature();
}; // Size: 0x960

#endif
