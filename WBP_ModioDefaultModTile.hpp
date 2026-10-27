#ifndef UE4SS_SDK_WBP_ModioDefaultModTile_HPP
#define UE4SS_SDK_WBP_ModioDefaultModTile_HPP

class UWBP_ModioDefaultModTile_C : public UModioDefaultModTile
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03B0 (size: 0x8)
    class UModioDefaultBorder* Background;                                            // 0x03B8 (size: 0x8)
    class UWBP_ModioDefaultButton_C* ButtonOverlay;                                   // 0x03C0 (size: 0x8)
    class UWBP_ModioDefaultPopupCommandMenu_C* ContextMenuButton;                     // 0x03C8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_ViewMod;                                      // 0x03D0 (size: 0x8)
    class UWBP_ModioDefaultModInstallationStatusWidget_C* ModInstallationStatus;      // 0x03D8 (size: 0x8)
    class UModioDefaultImage* ModLogoThumbnail;                                       // 0x03E0 (size: 0x8)
    class UModioDefaultTextBlock* ModNameLabel;                                       // 0x03E8 (size: 0x8)
    class UWBP_ModioDefaultModTileModPropCollectionVisualizer_C* ModPropVisualizer;   // 0x03F0 (size: 0x8)
    class UModioDefaultBorder* OuterBorder;                                           // 0x03F8 (size: 0x8)
    class UWBP_ModioDefaultModInstallationProgressBar_C* ProgressBar;                 // 0x0400 (size: 0x8)
    class UW_ButtonPromptHelper_TextLine_C* W_ButtonPromptHelper_TextLine;            // 0x0408 (size: 0x8)
    class UW_Keybind_C* W_Keybind;                                                    // 0x0410 (size: 0x8)
    FLinearColorRef NormalBorderColor;                                                // 0x0418 (size: 0x18)
    FLinearColorRef SelectedBorderColor;                                              // 0x0430 (size: 0x18)
    FLinearColorRef NormalBackgroundColor;                                            // 0x0448 (size: 0x18)
    FLinearColorRef SelectedBackgroundColor;                                          // 0x0460 (size: 0x18)
    FLinearColorRef NormalTextColor;                                                  // 0x0478 (size: 0x18)
    FLinearColorRef SelectedTextColor;                                                // 0x0490 (size: 0x18)
    bool CurrentlySelected;                                                           // 0x04A8 (size: 0x1)

    void WidgetAction_CloseMenu(bool& Handled);
    void WidgetAction_CycleMenu(bool Next, bool& Handled);
    void WidgetAction_CycleCrafting(bool Next, bool& Handled);
    void WidgetAction_FaceTop(bool& Handled);
    void WidgetAction_DPadDirection(TEnumAsByte<E_NavigationDirection::Type> Direction, bool& Handled);
    void OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void SetThumbnailToDefault();
    void OnImageLoadStateChanged(class UObject* LoadContext, bool bLoadSuccess);
    void GetWidgetToFocus(EUINavigation NavigationType);
    void GetModDownloadProgressWidget(TScriptInterface<class IModioUIDataSourceWidget>& Widget);
    void OnMenuToggleStateChanged(class UObject* Context, bool bIsOpen);
    void SetModOptionsMenuVisibility(bool bShow);
    void RegisterClickHandlers();
    void Deregister Event Receivers();
    void Configure Colors();
    void RegisterEventReceivers();
    void OnSubscriptionsChangedHandler(FModioModID InModID);
    void RebuildCommandListIfNeeded(FModioModID InModID);
    void GetModOverlayButton(TScriptInterface<class IModioUIClickableWidget>& ClickableWidget);
    void ModManagementEventHandler(FModioModManagementEvent Event);
    void GetModLogoImage(TScriptInterface<class IModioUIImageDisplayWidget>& LabelWidget);
    void GetModNameLabel(TScriptInterface<class IModioUIHasTextWidget>& LabelWidget);
    void GetBackgroundWidget(TScriptInterface<class IModioUIHasConfigurableColor>& BorderWidget);
    void GetOuterBorderWidget(TScriptInterface<class IModioUIHasConfigurableColor>& BorderWidget);
    void SetTextColor(TScriptInterface<class IModioUIHasTextWidget> Target, FLinearColorRef Color);
    void GetMoreOptionsMenuWidget();
    void GetModInstallationStatusWidget(TScriptInterface<class IModioUIDataSourceWidget>& StatusWidget);
    void GetModPropVisualizerWidget(TScriptInterface<class IModioUIDataSourceWidget>& ModPropVisualizer);
    void UpdateModNameLabel();
    void UpdateModLogoThumbnail();
    void OnSetDataSource(class UObject* InDataSource);
    void OnModLogoTextureLoaded(class UTexture2DDynamic* Texture);
    void OnOverlayButtonClicked(class UObject* ClickContext);
    void LogoDownloadErrorHandler();
    void Mod Logo Download Completed Handler(FModioModID ModId, FModioErrorCode ErrorCode, FModioOptionalImage Image, EModioLogoSize LogoSize);
    void SetSelectedVisualState();
    void SetNormalVisualState();
    void SetBackgroundColor(FLinearColorRef Color);
    void SetBorderColor(FLinearColorRef Color);
    void OnModCollectionLogoDownloadCompleted(FModioModCollectionID ModCollectionId, FModioErrorCode ErrorCode, FModioOptionalImage Image, EModioLogoSize LogoSize);
    void OnModCreatorAvatarDownloadCompleted(FModioModID ModId, FModioErrorCode ErrorCode, FModioOptionalImage Image);
    void OnModGalleryImageDownloadCompleted(FModioModID ModId, FModioErrorCode ErrorCode, int32 ImageIndex, FModioOptionalImage Image);
    void PreConstruct(bool IsDesignTime);
    void OnModLogoDownloadCompleted(FModioModID ModId, FModioErrorCode ErrorCode, FModioOptionalImage Image, EModioLogoSize LogoSize);
    void SetDataSource(class UObject* InDataSource);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void OnModManagementEvent(FModioModManagementEvent Event);
    void OnSubscriptionsChanged(FModioModID ModId, bool bNewSubscriptionState);
    void OnModEnabledStateChanged(FModioModID ModId, bool bNewEnabledState);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void BP_OnEntryReleased();
    void OnModCollectionCuratorAvatarDownloadCompleted(FModioModCollectionID ModCollectionId, FModioErrorCode ErrorCode, FModioOptionalImage Image);
    void OnInitialized();
    void BndEvt__WBP_ModioDefaultModTile_W_Keybind_K2Node_ComponentBoundEvent_1_KeybindUpdated__DelegateSignature();
    void ExecuteUbergraph_WBP_ModioDefaultModTile(int32 EntryPoint);
}; // Size: 0x4A9

#endif
