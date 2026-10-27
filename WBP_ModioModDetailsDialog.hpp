#ifndef UE4SS_SDK_WBP_ModioModDetailsDialog_HPP
#define UE4SS_SDK_WBP_ModioModDetailsDialog_HPP

class UWBP_ModioModDetailsDialog_C : public UModioModDetailsDialog
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0568 (size: 0x8)
    class UModioDefaultBorder* BackgroundBorder;                                      // 0x0570 (size: 0x8)
    class UWBP_ModioDefaultIconButton_C* CloseButton;                                 // 0x0578 (size: 0x8)
    class UWBP_ModioDefaultIconButton_C* DependenciesButton;                          // 0x0580 (size: 0x8)
    class UWBP_ModioDefaultIconButton_C* ExpandDescriptionButton;                     // 0x0588 (size: 0x8)
    class UWBP_ModioImageGallery_C* ImageGallery;                                     // 0x0590 (size: 0x8)
    class UModioWidgetStack* ModDescriptionStack;                                     // 0x0598 (size: 0x8)
    class UWBP_ModioDefaultModInstallationStatusWidget_C* ModInstallationStatus;      // 0x05A0 (size: 0x8)
    class UModioDefaultTextBlock* ModNameText;                                        // 0x05A8 (size: 0x8)
    class UWBP_ModioDefaultModPropCollectionVisualizer_C* ModProperties;              // 0x05B0 (size: 0x8)
    class UModioDefaultBorder* ModPropertiesBorder;                                   // 0x05B8 (size: 0x8)
    class UWBP_ModioDefaultButton_C* MoreFromCreatorButton;                           // 0x05C0 (size: 0x8)
    class UWBP_ModioDefaultModDetailsMoreOptionsPopupMenu_C* MoreOptionsButton;       // 0x05C8 (size: 0x8)
    class UWBP_ModioDefaultPlatformUsername_C* PlatformUsername;                      // 0x05D0 (size: 0x8)
    class UWBP_ModioDefaultIconButton_C* RateDownButton;                              // 0x05D8 (size: 0x8)
    class UWBP_ModioDefaultIconButton_C* RateUpButton;                                // 0x05E0 (size: 0x8)
    class UWBP_ModioDefaultButton_C* SubscribeButton;                                 // 0x05E8 (size: 0x8)
    class UWidgetSwitcher* SubscribeSwitcher;                                         // 0x05F0 (size: 0x8)
    class UModioDefaultTextBlock* SummaryShortText;                                   // 0x05F8 (size: 0x8)
    class UWBP_ModioDefaultTagDisplay_C* TagDisplay;                                  // 0x0600 (size: 0x8)
    FLinearColorRef BackgroundColor;                                                  // 0x0608 (size: 0x18)
    EModioRating CurrentModRating;                                                    // 0x0620 (size: 0x1)
    EModioRating NewRating;                                                           // 0x0621 (size: 0x1)
    int64 PendingRatingModID;                                                         // 0x0628 (size: 0x8)

    void WidgetAction_CloseMenu(bool& Handled);
    void WidgetAction_CycleMenu(bool Next, bool& Handled);
    void WidgetAction_CycleCrafting(bool Next, bool& Handled);
    void WidgetAction_FaceTop(bool& Handled);
    void WidgetAction_DPadDirection(TEnumAsByte<E_NavigationDirection::Type> Direction, bool& Handled);
    void DoNavigationToMoreOptions(EUINavigation Navigation);
    void DoNavigationUpFromCreator(EUINavigation Navigation);
    void DoNavigationDownFromCreator(EUINavigation Navigation);
    void DoNavigationFromVoteToTags(EUINavigation Navigation);
    void GetModDescriptionStackWidget(class UModioWidgetStack*& WidgetStack);
    void SubmitModRating(EModioRating Rating);
    void ErrorHandler(const FModioErrorCode& Error);
    void ModEnabledStateChangedHandler(const FModioModID& ModId, bool NewEnabledState);
    void ModManagementEventHandler(FModioModManagementEvent Event);
    void SubscriptionsChangedHandler(FModioModID ModId, bool bNewSubscriptionState);
    void GetMoreFromCreatorButtonWidget(TScriptInterface<class IModioUIClickableWidget>& MoreFromCreatorButton);
    void DoNavigationFromVoteToDown(EUINavigation Navigation);
    void DoNavigationUpFromSubscribe(EUINavigation Navigation);
    void NavigateUpFromDependencies(EUINavigation Navigation);
    void GetModPropertiesBorderWidget(TScriptInterface<class IModioUIHasConfigurableColor>& Border);
    void GetBackgroundBorderWidget(TScriptInterface<class IModioUIHasConfigurableColor>& Border);
    void GetModStatusWidget();
    void On Rating Change Submitted(FModioErrorCode ErrorCode);
    void GetModAuthorDisplayWidget();
    void OnMoreFromCreatorClicked(class UObject* ClickContext);
    void GetModImageGalleryWidget();
    void OnCloseDialogButtonClicked(class UObject* ClickContext);
    void GetCloseDialogButtonWidget();
    void GetModDependenciesButtonWidget();
    void OnModDependenciesButtonClicked(class UObject* ClickContext);
    void OnExpandDescriptionButtonClicked(class UObject* ClickContext);
    void ConfigureColors();
    void DoNavigationDownFromExpandDescription(EUINavigation Navigation);
    void GetMoreOptionsMenuWidget();
    void GetExpandDescriptionButtonWidget();
    void GetModSummaryShortTextWidget();
    void OnRateDownButtonClicked(class UObject* ClickContext);
    void OnRateUpButtonClicked(class UObject* ClickContext);
    void OnSubscribeButtonClicked(class UObject* ClickContext);
    void UpdateModDependenciesButton();
    void UpdateRateButtonLabelsAndState();
    void UpdateTagDisplay();
    void UpdateSubscribeButtonLabel();
    void UpdateModProperties();
    void UpdateModSummary();
    void UpdateModAuthor();
    void UpdateModName();
    void BindOnClickedEvents();
    void OnSetDataSource(class UObject* InDataSource);
    void GetTagDisplayWidget();
    void GetSubscribeButtonWidget();
    void GetRateUpButtonWidget();
    void GetRateDownButtonWidget();
    void GetModPropertiesWidget();
    void GetModNameTextWidget();
    void SetDataSource(class UObject* InDataSource);
    void OnSubscriptionsChanged(FModioModID ModId, bool bNewSubscriptionState);
    void PreConstruct(bool IsDesignTime);
    void OnModEnabledStateChanged(FModioModID ModId, bool bNewEnabledState);
    void OnModManagementEvent(FModioModManagementEvent Event);
    void ExecuteUbergraph_WBP_ModioModDetailsDialog(int32 EntryPoint);
}; // Size: 0x630

#endif
