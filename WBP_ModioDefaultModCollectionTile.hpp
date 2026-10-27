#ifndef UE4SS_SDK_WBP_ModioDefaultModCollectionTile_HPP
#define UE4SS_SDK_WBP_ModioDefaultModCollectionTile_HPP

class UWBP_ModioDefaultModCollectionTile_C : public UModioDefaultModCollectionTile
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03B0 (size: 0x8)
    class UModioDefaultBorder* Background;                                            // 0x03B8 (size: 0x8)
    class UWBP_ModioDefaultButton_C* ButtonOverlay;                                   // 0x03C0 (size: 0x8)
    class UWBP_ModioDefaultPopupCommandMenu_C* ContextMenuButton;                     // 0x03C8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_ViewMod;                                      // 0x03D0 (size: 0x8)
    class UWBP_ModioDefaultModCollectionStatusWidget_C* InstallStatus;                // 0x03D8 (size: 0x8)
    class UModioDefaultImage* ModCollectionLogoThumbnail;                             // 0x03E0 (size: 0x8)
    class UModioDefaultTextBlock* ModCollectionNameLabel;                             // 0x03E8 (size: 0x8)
    class UWBP_ModioDefaultModCollectionPropVisualizer_C* ModCollectionPropVisualizer; // 0x03F0 (size: 0x8)
    class UModioDefaultBorder* OuterBorder;                                           // 0x03F8 (size: 0x8)
    class UW_ButtonPromptHelper_TextLine_C* W_ButtonPromptHelper_TextLine;            // 0x0400 (size: 0x8)
    class UW_Keybind_C* W_Keybind;                                                    // 0x0408 (size: 0x8)
    FLinearColorRef NormalBorderColor;                                                // 0x0410 (size: 0x18)
    FLinearColorRef SelectedBorderColor;                                              // 0x0428 (size: 0x18)
    FLinearColorRef NormalBackgroundColor;                                            // 0x0440 (size: 0x18)
    FLinearColorRef SelectedBackgroundColor;                                          // 0x0458 (size: 0x18)
    FLinearColorRef PremiumBackgroundColor;                                           // 0x0470 (size: 0x18)
    FLinearColorRef NormalTextColor;                                                  // 0x0488 (size: 0x18)
    FLinearColorRef SelectedTextColor;                                                // 0x04A0 (size: 0x18)
    FLinearColorRef PriceTextColor;                                                   // 0x04B8 (size: 0x18)
    FText PurchasedLabelText;                                                         // 0x04D0 (size: 0x10)
    bool CurrentlySelected;                                                           // 0x04E0 (size: 0x1)

    void OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void GetInstallationStatusWidget();
    void SetThumbnailToDefault();
    void OnImageLoadStateChanged(class UObject* LoadContext, bool bLoadSuccess);
    void GetWidgetToFocus(EUINavigation NavigationType);
    void OnMenuToggleStateChanged(class UObject* Context, bool bIsOpen);
    void SetModOptionsMenuVisibility(bool bShow);
    void RegisterClickHandlers();
    void Deregister Event Receivers();
    void Configure Colors();
    void RegisterEventReceivers();
    void OnSubscriptionsChangedHandler(FModioModID InModID);
    void RebuildCommandListIfNeeded(FModioModCollectionID InModCollectionID);
    void Get Mod Collection Overlay Button(TScriptInterface<class IModioUIClickableWidget>& ClickableWidget);
    void ModManagementEventHandler(FModioModManagementEvent Event);
    void Get Mod Collection Logo Image(TScriptInterface<class IModioUIImageDisplayWidget>& LabelWidget);
    void Get Mod Collection Name Label(TScriptInterface<class IModioUIHasTextWidget>& LabelWidget);
    void GetBackgroundWidget(TScriptInterface<class IModioUIHasConfigurableColor>& BorderWidget);
    void GetOuterBorderWidget(TScriptInterface<class IModioUIHasConfigurableColor>& BorderWidget);
    void SetTextColor(TScriptInterface<class IModioUIHasTextWidget> Target, FLinearColorRef Color);
    void GetMoreOptionsMenuWidget();
    void Get Mod Collection Prop Visualizer Widget(TScriptInterface<class IModioUIDataSourceWidget>& ModPropVisualizer);
    void UpdateModNameLabel();
    void Update Collection Logo Thumbnail();
    void OnSetDataSource(class UObject* InDataSource);
    void OnModCollectionLogoTextureLoaded(class UTexture2DDynamic* Texture);
    void OnOverlayButtonClicked(class UObject* ClickContext);
    void LogoDownloadErrorHandler();
    void Mod Collection Logo Download Completed Handler(FModioModCollectionID ID, FModioErrorCode ErrorCode, FModioOptionalImage Image, EModioLogoSize LogoSize);
    void SetSelectedVisualState();
    void SetNormalVisualState();
    void SetBackgroundColor(FLinearColorRef Color);
    void SetBorderColor(FLinearColorRef Color);
    void OnModCreatorAvatarDownloadCompleted(FModioModID ModId, FModioErrorCode ErrorCode, FModioOptionalImage Image);
    void OnModGalleryImageDownloadCompleted(FModioModID ModId, FModioErrorCode ErrorCode, int32 ImageIndex, FModioOptionalImage Image);
    void OnModLogoDownloadCompleted(FModioModID ModId, FModioErrorCode ErrorCode, FModioOptionalImage Image, EModioLogoSize LogoSize);
    void PreConstruct(bool IsDesignTime);
    void SetDataSource(class UObject* InDataSource);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void BP_OnEntryReleased();
    void OnModCollectionCuratorAvatarDownloadCompleted(FModioModCollectionID ModCollectionId, FModioErrorCode ErrorCode, FModioOptionalImage Image);
    void OnInitialized();
    void OnModCollectionLogoDownloadCompleted(FModioModCollectionID ModCollectionId, FModioErrorCode ErrorCode, FModioOptionalImage Image, EModioLogoSize LogoSize);
    void BndEvt__WBP_ModioDefaultModCollectionTile_W_Keybind_K2Node_ComponentBoundEvent_0_KeybindUpdated__DelegateSignature();
    void ExecuteUbergraph_WBP_ModioDefaultModCollectionTile(int32 EntryPoint);
}; // Size: 0x4E1

#endif
