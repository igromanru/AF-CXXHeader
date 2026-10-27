#ifndef UE4SS_SDK_ModioUICore_HPP
#define UE4SS_SDK_ModioUICore_HPP

#include "ModioUICore_enums.hpp"

struct FClassPathOverride
{
    bool bOverride;                                                                   // 0x0000 (size: 0x1)
    FSoftClassPath Value;                                                             // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FFloatOverride
{
    bool bOverride;                                                                   // 0x0000 (size: 0x1)
    float Value;                                                                      // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FHAlignOverride
{
    bool bOverride;                                                                   // 0x0000 (size: 0x1)
    TEnumAsByte<EHorizontalAlignment> Value;                                          // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FInputActionOverride
{
    bool bOverride;                                                                   // 0x0000 (size: 0x1)
    FDataTableRowHandle Value;                                                        // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FIntegerOverride
{
    bool bOverride;                                                                   // 0x0000 (size: 0x1)
    int32 Value;                                                                      // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FLinearColorRef
{
    FName ReferencedColorName;                                                        // 0x0000 (size: 0x8)
    FLinearColor FallbackColor;                                                       // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FLinearColorRefOverride
{
    bool bOverride;                                                                   // 0x0000 (size: 0x1)
    FLinearColorRef Color;                                                            // 0x0004 (size: 0x18)

}; // Size: 0x1C

struct FModioDialogButtonInfo
{
    FText ButtonLabel;                                                                // 0x0000 (size: 0x10)
    FClassPathOverride StyleOverride;                                                 // 0x0010 (size: 0x28)
    FInputActionOverride InputActionOverride;                                         // 0x0038 (size: 0x18)
    bool bShowTooltip;                                                                // 0x0050 (size: 0x1)
    FText TooltipTitleText;                                                           // 0x0058 (size: 0x10)
    FText TooltipInfoText;                                                            // 0x0068 (size: 0x10)
    FText TooltipTagText;                                                             // 0x0078 (size: 0x10)
    bool bFocusedByDefault;                                                           // 0x0088 (size: 0x1)

}; // Size: 0x90

struct FModioFeaturedCategoryParams
{
    FText CategoryName;                                                               // 0x0000 (size: 0x10)
    TArray<FString> Tags;                                                             // 0x0010 (size: 0x10)
    TArray<FString> ExcludedTags;                                                     // 0x0020 (size: 0x10)
    EModioSortDirection Direction;                                                    // 0x0030 (size: 0x1)
    EModioSortFieldType SortField;                                                    // 0x0031 (size: 0x1)
    int64 Count;                                                                      // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FModioRetryCounter
{
    int32 RetriesRemaining;                                                           // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FModioStackedBool
{
    TArray<bool> ValueStack;                                                          // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FModioTextValidationRule
{
    EModioTextValidationRule RuleToUse;                                               // 0x0000 (size: 0x1)
    FText ValidationMessage;                                                          // 0x0008 (size: 0x10)
    int32 MinimumLength;                                                              // 0x0018 (size: 0x4)
    int32 MaximumLength;                                                              // 0x001C (size: 0x4)

}; // Size: 0x20

struct FModioUIColorEntry : public FTableRowBase
{
    FLinearColor Color;                                                               // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FModioUICommandAssetEntry : public FTableRowBase
{
    TMap<FName, FText> CommandTexts;                                                  // 0x0008 (size: 0x50)
    TMap<FName, FSlateBrush> CommandIconBrushes;                                      // 0x0058 (size: 0x50)

}; // Size: 0xA8

struct FSlateFontInfoOverride
{
    bool bOverride;                                                                   // 0x0000 (size: 0x1)
    FSlateFontInfo Value;                                                             // 0x0008 (size: 0x60)

}; // Size: 0x68

struct FTextOverride
{
    bool bOverride;                                                                   // 0x0000 (size: 0x1)
    FText Value;                                                                      // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FTextTransformOverride
{
    bool bOverride;                                                                   // 0x0000 (size: 0x1)
    ETextTransformPolicy Value;                                                       // 0x0001 (size: 0x1)

}; // Size: 0x2

class IModCollectionRatingStateProvider : public IInterface
{

    void RequestModCollectionRatingChange(int64 CollectionID, EModioRating NewRating);
    void QueryModCollectionRating(int64 ModCollectionId);
}; // Size: 0x28

class IModRatingStateProvider : public IInterface
{

    void RequestModRatingChange(int64 ID, EModioRating NewRating);
    void QueryModRating(int64 ModId);
}; // Size: 0x28

class IModioActivatableWidget : public IInterface
{

    void RemoveActivationChangedHandler(const FRemoveActivationChangedHandlerHandler& Handler);
    void Deactivate();
    void AddActivationChangedHandler(const FAddActivationChangedHandlerHandler& Handler);
    void Activate();
}; // Size: 0x28

class IModioDialogButtonUIDetails : public IInterface
{

    void GetDialogButtonInfo();
}; // Size: 0x28

class IModioEnumEntryUIDetails : public IInterface
{

    void GetEnumEntryDetails(uint8& EnumValue, FText& EnumValueDisplayText);
}; // Size: 0x28

class IModioFocusableWidget : public IInterface
{

    void RemoveFocusPathChangedHandler(const FRemoveFocusPathChangedHandlerHandler& Handler);
    void GetWidgetToFocus(EUINavigation NavigationType);
    void AddFocusPathChangedHandler(const FAddFocusPathChangedHandlerHandler& Handler);
}; // Size: 0x28

class IModioGalleryImageUIDetails : public IInterface
{

    void GetIndex();
    void GetImage();
}; // Size: 0x28

class IModioModCollectionInfoUIDetails : public IInterface
{

    void GetModCollectionID();
    void GetFullModCollectionInfo();
}; // Size: 0x28

class IModioModDependencyUIDetails : public IInterface
{

    void GetModID();
    void GetModDependency();
}; // Size: 0x28

class IModioModFilterUIDetails : public IInterface
{

    void GetFilterParams();
    void GetFilterName(FText& Name);
}; // Size: 0x28

class IModioModInfoUIDetails : public IInterface
{

    void GetModID();
    void GetFullModInfo();
}; // Size: 0x28

class IModioModTagCategoryUIDetails : public IInterface
{

    void GetSelectedTags();
    void GetRawCategoryName();
    void GetLocalizedCategoryName();
    void GetIsCategoryLocked();
    void GetIsCategoryHidden();
    void GetCategoryTags();
    void GetAllowMultipleSelection();
}; // Size: 0x28

class IModioModTagOptionsUIDetails : public IInterface
{

    void GetSelectedTags();
    void GetCategories();
    void ClearSelectedTags();
}; // Size: 0x28

class IModioModTagUIDetails : public IInterface
{

    void SetSelectionState(bool bNewSelectionState);
    void GetSelectionState();
    void GetRawStringValue();
    void GetLocalizedText();
}; // Size: 0x28

class IModioScrollableWidget : public IInterface
{

    void SetScrollOffset(float Offset);
    void ScrollToTop();
    void ScrollToBottom();
    void GetScrollOffset();
}; // Size: 0x28

class IModioToggleableWidget : public IInterface
{

    void RemoveToggleStateChangedHandler(const FRemoveToggleStateChangedHandlerHandler& Handler);
    void Open(bool bForce, bool bFocusMenu);
    void IsOpen();
    void Close();
    void AddToggleStateChangedHandler(const FAddToggleStateChangedHandlerHandler& Handler);
}; // Size: 0x28

class IModioUIClickableWidget : public IInterface
{

    void RemoveClickedHandler(const FRemoveClickedHandlerHandler& Handler);
    void EnableClick();
    void DisableClick();
    void AddClickedHandler(const FAddClickedHandlerHandler& Handler);
}; // Size: 0x28

class IModioUICollectionFollowStateChangedReceiver : public IInterface
{

    void OnCollectionFollowStateChanged(FModioModCollectionID ModCollectionId, bool bNewFollowState);
}; // Size: 0x28

class IModioUICommandMenu : public IInterface
{

    void RemoveCommandListBuilder(const FRemoveCommandListBuilderBuilder& Builder);
    void RebuildCommandList();
    void AddCommandListBuilder(const FAddCommandListBuilderBuilder& Builder);
}; // Size: 0x28

class IModioUICommandObject : public IInterface
{

    void SetDataSource(class UObject* InDataSource);
    void GetCommandDisplayString();
    void GetCommandBrush();
    void Execute(class UObject* Context);
    void CanExecute(class UObject* Context);
}; // Size: 0x28

class IModioUIConnectivityChangedReceiver : public IInterface
{

    void OnConnectivityChanged(bool bNewConnectivityState);
}; // Size: 0x28

class IModioUIDataSourceWidget : public IInterface
{

    void SetDataSource(class UObject* InDataSource);
    void GetDataSource();
}; // Size: 0x28

class IModioUIDialog : public IInterface
{

    void ShowModal(bool bFocusCancelButton);
    void RemoveDialogShownHandler(const FRemoveDialogShownHandlerHandler& Handler);
    void RemoveDialogConfirmedHandler(const FRemoveDialogConfirmedHandlerHandler& Handler);
    void RemoveDialogCanceledHandler(const FRemoveDialogCanceledHandlerHandler& Handler);
    void RemoveDialogButtonClickedHandler(const FRemoveDialogButtonClickedHandlerHandler& Handler);
    void CloseModal();
    void AddDialogShownHandler(const FAddDialogShownHandlerHandler& Handler);
    void AddDialogConfirmedHandler(const FAddDialogConfirmedHandlerHandler& Handler);
    void AddDialogCanceledHandler(const FAddDialogCanceledHandlerHandler& Handler);
    void AddDialogButtonClickedHandler(const FAddDialogButtonClickedHandlerHandler& Handler);
}; // Size: 0x28

class IModioUIDialogDisplayEventReceiver : public IInterface
{

    void OnDialogDisplayEvent(EModioUIDialogType DialogRequested, class UObject* DataSource);
}; // Size: 0x28

class IModioUIHasConfigurableColor : public IInterface
{

    void ConfigureWidgetColorDirectly(FName ColorName, FSlateColor ColorValue);
    void ConfigureWidgetColor(FName ColorName, FLinearColorRef ColorValue);
}; // Size: 0x28

class IModioUIHasLoadStateWidget : public IInterface
{

    void SetLoadState(EModioUILoadState NewState);
    void RemoveLoadStateChangedHandler(const FRemoveLoadStateChangedHandlerHandler& Handler);
    void GetLoadState();
    void AddLoadStateChangedHandler(const FAddLoadStateChangedHandlerHandler& Handler);
}; // Size: 0x28

class IModioUIHasTextWidget : public IInterface
{

    void SetWidgetTextFont(FSlateFontInfo FontInfo);
    void SetWidgetText(const FText& DisplayText);
    void GetWidgetTextFont();
    void GetWidgetText();
}; // Size: 0x28

class IModioUIHasTooltipWidget : public IInterface
{

    void SetTooltipEnabledState(bool bNewEnabledState);
    void ConfigureTooltip(const FText& TitleText, const FText& InfoText, const FText& TagText);
}; // Size: 0x28

class IModioUIHoverableWidget : public IInterface
{

    void RemoveHoverStateChangedHandler(const FRemoveHoverStateChangedHandlerHandler& Handler);
    void EnableHoverEvents();
    void DisableHoverEvents();
    void AddHoverStateChangedHandler(const FAddHoverStateChangedHandlerHandler& Handler);
}; // Size: 0x28

class IModioUIImageDisplayWidget : public IInterface
{

    void SetDesiredBrushSize(FVector2D DesiredSize);
    void SetBrushMatchTextureSize(bool bMatchTextureSize);
    void SetBrushDirectly(const FSlateBrush& NewBrush);
    void RemoveImageLoadEventHandler(const FRemoveImageLoadEventHandlerHandler& Handler);
    void BeginLoadImageFromFile(FModioImageWrapper Image);
    void AddImageLoadEventHandler(const FAddImageLoadEventHandlerHandler& Handler);
}; // Size: 0x28

class IModioUIMediaDownloadCompletedReceiver : public IInterface
{

    void OnModLogoDownloadCompleted(FModioModID ModId, FModioErrorCode ErrorCode, FModioOptionalImage Image, EModioLogoSize LogoSize);
    void OnModGalleryImageDownloadCompleted(FModioModID ModId, FModioErrorCode ErrorCode, int32 ImageIndex, FModioOptionalImage Image);
    void OnModCreatorAvatarDownloadCompleted(FModioModID ModId, FModioErrorCode ErrorCode, FModioOptionalImage Image);
    void OnModCollectionLogoDownloadCompleted(FModioModCollectionID ModCollectionId, FModioErrorCode ErrorCode, FModioOptionalImage Image, EModioLogoSize LogoSize);
    void OnModCollectionCuratorAvatarDownloadCompleted(FModioModCollectionID ModCollectionId, FModioErrorCode ErrorCode, FModioOptionalImage Image);
}; // Size: 0x28

class IModioUIModCollectionInfoReceiver : public IInterface
{

    void OnModCollectionInfoRequestCompleted(FModioModCollectionID ID, FModioErrorCode ErrorCode, FModioOptionalModCollectionInfo Info);
    void OnListModCollectionsRequestCompleted(FString RequestIdentifier, FModioErrorCode ErrorCode, FModioOptionalModCollectionInfoList List);
    void OnGetModCollectionModsRequestCompleted(const FModioModCollectionID& CollectionID, FModioErrorCode ErrorCode, FModioOptionalModInfoList Mods);
}; // Size: 0x28

class IModioUIModCollectionListViewInterface : public IInterface
{

    void SetModCollectionSelectionByID(FModioModCollectionID ModCollectionId);
    void SetModCollectionFromModCollectionInfoList(const FModioModCollectionInfoList& InList, bool bAddToExisting);
    void SetModCollectionFromModCollectionInfoArray(const TArray<FModioModCollectionInfo>& inArray, bool bAddToExisting);
}; // Size: 0x28

class IModioUIModEnabledStateChangedReceiver : public IInterface
{

    void OnModEnabledStateChanged(FModioModID ModId, bool bNewEnabledState);
}; // Size: 0x28

class IModioUIModEnabledStateProvider : public IInterface
{

    void RequestModEnabledStateChange(FModioModID ID, bool bNewEnabledState);
    void RemoveModEnabledStateChangeHandler(const FRemoveModEnabledStateChangeHandlerHandler& Handler);
    void QueryIsModEnabled(FModioModID ModId);
    void AddModEnabledStateChangeHandler(const FAddModEnabledStateChangeHandlerHandler& Handler);
}; // Size: 0x28

class IModioUIModInfoReceiver : public IInterface
{

    void OnModInfoRequestCompleted(FModioModID ModId, FModioErrorCode ErrorCode, FModioOptionalModInfo Info);
    void OnListAllModsRequestCompleted(FString RequestIdentifier, FModioErrorCode ErrorCode, FModioOptionalModInfoList List);
}; // Size: 0x28

class IModioUIModListViewInterface : public IInterface
{

    void SetModsFromModInfoList(const FModioModInfoList& InList, bool bAddToExisting);
    void SetModsFromModInfoArray(const TArray<FModioModInfo>& inArray, bool bAddToExisting);
    void SetModsFromModCollectionEntryArray(const TArray<FModioModCollectionEntry>& inArray, bool bAddToExisting);
    void SetModSelectionByID(FModioModID ModId);
}; // Size: 0x28

class IModioUIModManagementEventReceiver : public IInterface
{

    void OnModManagementEvent(FModioModManagementEvent Event);
}; // Size: 0x28

class IModioUIModTagSelector : public IInterface
{

    void SetAvailableTagsFromModTagOptions(const FModioModTagOptions& InOptions);
    void SetAvailableTagsFromBoundModTagOptions(const TScriptInterface<class IModioModTagOptionsUIDetails>& InOptions);
    void RemoveTagSelectionChangedHandler(const FRemoveTagSelectionChangedHandlerHandler& Handler);
    void GetSelectedTags();
    void GetAllowLockedTags();
    void GetAllowHiddenTags();
    void ClearSelectedTags();
    void AddTagSelectionChangedHandler(const FAddTagSelectionChangedHandlerHandler& Handler);
}; // Size: 0x28

class IModioUIObjectListWidget : public IInterface
{

    void SetObjects(const TArray<UObject*>& InObjects);
    void RemoveObjectWidgetCreatedHandler(const FRemoveObjectWidgetCreatedHandlerHandler& Handler);
    void GetObjects();
    void GetObjectAt(int32 Index);
    void GetFirstEntryWidget();
    void AddObjectWidgetCreatedHandler(const FAddObjectWidgetCreatedHandlerHandler& Handler);
}; // Size: 0x28

class IModioUIObjectSelector : public IInterface
{

    void SetValues(const TArray<UObject*>& InValues);
    void SetSingleSelectionByValue(class UObject* Value, bool bEmitSelectionEvent);
    void SetSingleSelectionByIndex(int32 Index, bool bEmitSelectionEvent);
    void SetSelectedStateForValue(class UObject* Value, bool bNewSelectionState, bool bEmitSelectionEvent);
    void SetSelectedStateForIndex(int32 Index, bool bNewSelectionState, bool bEmitSelectionEvent);
    void SetMultiSelectionAllowed(bool bMultiSelectionAllowed);
    void SetListEntryWidgetClass(TSubclassOf<class UWidget> InNewEntryClass);
    void RemoveSelectionChangedHandler(const FRemoveSelectionChangedHandlerHandler& Handler);
    void GetWidgetForValue(class UObject* Value);
    void GetSingleSelectionIndex();
    void GetSingleSelectedValue();
    void GetSelectedValues();
    void GetNumEntries();
    void GetMultiSelectionAllowed();
    void GetLastSelectionIndex();
    void GetIndexForValue(class UObject* Value);
    void ClearSelectedValues();
    void AddSelectionChangedHandler(const FAddSelectionChangedHandlerHandler& Handler);
}; // Size: 0x28

class IModioUIProgressWidget : public IInterface
{

    void SetProgress(float NewProgressValue);
    void SetMarquee(bool bNewIsMarquee);
    void SetColorOverride(FLinearColor Override);
    void RemoveValueChangedHandler(const FRemoveValueChangedHandlerHandler& Handler);
    void GetProgress();
    void ClearColorOverride();
    void AddValueChangedHandler(const FAddValueChangedHandlerHandler& Handler);
}; // Size: 0x28

class IModioUISelectableWidget : public IInterface
{

    void ToggleSelectedState();
    void SetToggleable(bool bNewToggleableState);
    void SetSelectedState(bool bNewSelectedState);
    void SetSelectable(bool bNewSelectableState);
    void RemoveSelectedStateChangedHandler(const FRemoveSelectedStateChangedHandlerHandler& Handler);
    void GetToggleable(bool& bIsToggleable);
    void GetSelectedState(bool& bCurrentSelectedState);
    void GetSelectable(bool& bIsSelectable);
    void AddSelectedStateChangedHandler(const FAddSelectedStateChangedHandlerHandler& Handler);
}; // Size: 0x28

class IModioUIStringInputWidget : public IInterface
{

    void SetInput(FString Input);
    void SetHint(const FText& HintText);
    void RemoveTextCommittedHandler(const FRemoveTextCommittedHandlerHandler& Handler);
    void RemoveTextChangedHandler(const FRemoveTextChangedHandlerHandler& Handler);
    void GatherInput();
    void AddTextCommittedHandler(const FAddTextCommittedHandlerHandler& Handler);
    void AddTextChangedHandler(const FAddTextChangedHandlerHandler& Handler);
}; // Size: 0x28

class IModioUISubscriptionsChangedReceiver : public IInterface
{

    void OnSubscriptionsChanged(FModioModID ModId, bool bNewSubscriptionState);
}; // Size: 0x28

class IModioUITextValidator : public IInterface
{

    void ValidateText(const FText& inputText, FText& ValidationMessageText);
    void SetValidationError(const FText& ErrorText);
    void RemoveTextValidationCompletedHandler(const FRemoveTextValidationCompletedHandlerHandler& Handler);
    void GetTextValidationRules(TArray<FModioTextValidationRule>& Rules);
    void AddTextValidationCompletedHandler(const FAddTextValidationCompletedHandlerHandler& Handler);
}; // Size: 0x28

class IModioUIUserAvatarDownloadCompletedReceiver : public IInterface
{

    void OnUserAvatarDownloadCompleted(FModioErrorCode ErrorCode, FModioOptionalImage Image);
}; // Size: 0x28

class IModioUIUserChangedReceiver : public IInterface
{

    void OnUserChanged(FModioOptionalUser NewUser);
}; // Size: 0x28

class IModioUserUIDetails : public IInterface
{

    void GetUserID();
    void GetFullUser();
}; // Size: 0x28

class ULinearColorRefLibrary : public UBlueprintFunctionLibrary
{

    void ResolveOverrideAsExec(const FLinearColorRefOverride& Target, bool& bOverrideSet);
    void ResolveOverride(const FLinearColorRefOverride& Target, bool& bOverrideSet);
    void Resolve(const FLinearColorRef& Target, bool& bResolved);
    void RemoveColorChangeHandler(const FRemoveColorChangeHandlerHandler& Handler);
    void GetValidColorKeys();
    void AddColorChangeHandler(const FAddColorChangeHandlerHandler& Handler);
}; // Size: 0x28

class UModioButtonWidget : public UAbioticWidget
{
    class UButton* ModioButton;                                                       // 0x0318 (size: 0x8)
    FModioButtonWidgetOnClicked OnClicked;                                            // 0x0320 (size: 0x10)
    void ModioClickableOnClickedMulticast(class UObject* ClickContext);
    class UObject* DataSource;                                                        // 0x0330 (size: 0x8)
    bool bFocusOnHover;                                                               // 0x0338 (size: 0x1)
    bool bEnableKeyboardHover;                                                        // 0x0339 (size: 0x1)
    bool bShouldTriggerButtonClickOnEnter;                                            // 0x033A (size: 0x1)
    FModioButtonWidgetOnModioFocusPathChanged OnModioFocusPathChanged;                // 0x0348 (size: 0x10)
    void ModioOnFocusPathChangedMulticast(class UObject* FocusContext, FFocusEvent InFocusEvent, bool bIsFocused);
    FModioButtonWidgetOnSelected OnSelected;                                          // 0x0358 (size: 0x10)
    void ModioSelectableOnSelectionChangedMulticast(class UObject* SelectionContext, bool bNewSelectedState);
    FModioButtonWidgetOnHoverStateChanged OnHoverStateChanged;                        // 0x0368 (size: 0x10)
    void ModioHoverableOnHoverStateChangedMulticast(class UObject* HoverContext, bool bHoveredState);

    void HandleInnerButtonUnhovered();
    void HandleInnerButtonHovered();
    void HandleInnerButtonClicked();
    void GetSelected();
    void BP_OnUnhovered();
    void BP_OnSelected();
    void BP_OnHovered();
    void BP_OnDeselected();
}; // Size: 0x378

class UModioCommandEntry : public UModioUIComponentBase
{

    void HandleInnerButtonClicked(class UObject* ClickContext);
    void GetLabelWidget();
    void GetIconWidget();
    void GetClickableWidget();
}; // Size: 0x370

class UModioCommandMenu : public UModioUIComponentBase
{
    TArray<UObject*> CommandObjects;                                                  // 0x0350 (size: 0x10)

    void OnCommandSelected(class UObject* SelectedCommandObject);
    void GetSelectorWidget();
}; // Size: 0x370

class UModioCurrentUserAvatarWidget : public UModioUserDisplay
{
    FSlateBrush UnloadedBrush;                                                        // 0x0370 (size: 0xD0)
    FSlateBrush ErroredBrush;                                                         // 0x0440 (size: 0xD0)
    FSlateBrush LoadingBrush;                                                         // 0x0510 (size: 0xD0)

    void GetAvatarImageWidget();
}; // Size: 0x600

class UModioDefaultBorder : public UBorder
{
}; // Size: 0x340

class UModioDefaultCheckBox : public UCheckBox
{
    FMargin ContentPadding;                                                           // 0x0CC0 (size: 0x10)
    TSubclassOf<class UWidget> LabelClass;                                            // 0x0D38 (size: 0x8)
    class UWidget* LabelWidget;                                                       // 0x0D40 (size: 0x8)
    FText LabelText;                                                                  // 0x0D48 (size: 0x10)

    void SetLabel(const FText& InLabelText);
    void SetHovered(bool bHovered);
    void HandleOnCheckStateChanged(bool bIsChecked);
    void GetLabelTextBlockText();
    void GetLabel();
    void GetCheckboxContentPadding();
}; // Size: 0xD60

class UModioDefaultEditableTextBox : public UEditableTextBox
{
    FModioDefaultEditableTextBoxOnModioTextCommitted OnModioTextCommitted;            // 0x10A8 (size: 0x10)
    void ModioOnTextCommittedMulticast(class UObject* Context, const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    FModioDefaultEditableTextBoxOnModioTextChanged OnModioTextChanged;                // 0x10B8 (size: 0x10)
    void ModioOnTextChangedMulticast(class UObject* Context, const FText& Text);
    FModioDefaultEditableTextBoxOnModioFocusPathChanged OnModioFocusPathChanged;      // 0x10C8 (size: 0x10)
    void ModioOnFocusPathChangedMulticast(class UObject* FocusContext, FFocusEvent InFocusEvent, bool bIsFocused);

    void OnEditableTextBoxFocusChanged__DelegateSignature(bool bIsFocused);
}; // Size: 0x10E0

class UModioDefaultIconButton : public UModioDefaultTextButton
{
    FModioDefaultIconButtonOnLoadStateChanged OnLoadStateChanged;                     // 0x03B0 (size: 0x10)
    void ModioImageDisplayOnLoadStateChangedMulticast(class UObject* LoadContext, bool bLoadSuccess);

    void GetImageWidget();
}; // Size: 0x3C0

class UModioDefaultImage : public UImage
{
}; // Size: 0x310

class UModioDefaultModCollectionTile : public UModioUIComponentBase
{
    FModioDefaultModCollectionTileOnClicked OnClicked;                                // 0x0370 (size: 0x10)
    void ModioClickableOnClickedMulticast(class UObject* ClickContext);
    bool bSelected;                                                                   // 0x0380 (size: 0x1)
    FModioDefaultModCollectionTileOnSelected OnSelected;                              // 0x0388 (size: 0x10)
    void ModioSelectableOnSelectionChangedMulticast(class UObject* SelectionContext, bool bNewSelectedState);
    FModioDefaultModCollectionTileOnHoverStateChanged OnHoverStateChanged;            // 0x03A0 (size: 0x10)
    void ModioHoverableOnHoverStateChangedMulticast(class UObject* HoverContext, bool bHoveredState);

    void PopulateExtraOptionsCommands(TArray<UObject*>& Commands, class UObject* Context);
    void NotifyHoverStateChanged(bool bNewHoveredState);
    void NotifyClicked();
    void GetSelectedStateEx();
    void GetMoreOptionsMenuWidget();
}; // Size: 0x3B0

class UModioDefaultModCollectionTileView : public UTileView
{
    FModioDefaultModCollectionTileViewOnWidgetCreated OnWidgetCreated;                // 0x0CC0 (size: 0x10)
    void ModioObjectListOnObjectWidgetCreatedMulticast(class UWidget* ObjectWidget, class UObject* Object);
    FModioDefaultModCollectionTileViewOnModCollectionListSet OnModCollectionListSet;  // 0x0CD0 (size: 0x10)
    void OnModCollectionListSet(bool bIsEmpty);
    FModioDefaultModCollectionTileViewOnSelectedValueChanged OnSelectedValueChanged;  // 0x0CE0 (size: 0x10)
    void ModioOnObjectSelectionChangedMulticast(class UObject* SelectedValue);

}; // Size: 0xD10

class UModioDefaultModListView : public UListView
{
    FModioDefaultModListViewOnWidgetCreated OnWidgetCreated;                          // 0x0C98 (size: 0x10)
    void ModioObjectListOnObjectWidgetCreatedMulticast(class UWidget* ObjectWidget, class UObject* Object);
    FModioDefaultModListViewOnSelectedValueChanged OnSelectedValueChanged;            // 0x0CA8 (size: 0x10)
    void ModioOnObjectSelectionChangedMulticast(class UObject* SelectedValue);

    void OnEntryWidgetClicked(class UObject* Widget);
}; // Size: 0xCE0

class UModioDefaultModTile : public UModioUIComponentBase
{
    FModioDefaultModTileOnClicked OnClicked;                                          // 0x0370 (size: 0x10)
    void ModioClickableOnClickedMulticast(class UObject* ClickContext);
    bool bSelected;                                                                   // 0x0380 (size: 0x1)
    FModioDefaultModTileOnSelected OnSelected;                                        // 0x0388 (size: 0x10)
    void ModioSelectableOnSelectionChangedMulticast(class UObject* SelectionContext, bool bNewSelectedState);
    FModioDefaultModTileOnHoverStateChanged OnHoverStateChanged;                      // 0x03A0 (size: 0x10)
    void ModioHoverableOnHoverStateChangedMulticast(class UObject* HoverContext, bool bHoveredState);

    void PopulateExtraOptionsCommands(TArray<UObject*>& Commands, class UObject* Context);
    void NotifyHoverStateChanged(bool bNewHoveredState);
    void NotifyClicked();
    void GetSelectedStateEx();
    void GetMoreOptionsMenuWidget();
}; // Size: 0x3B0

class UModioDefaultModTileView : public UTileView
{
    FModioDefaultModTileViewOnWidgetCreated OnWidgetCreated;                          // 0x0CC0 (size: 0x10)
    void ModioObjectListOnObjectWidgetCreatedMulticast(class UWidget* ObjectWidget, class UObject* Object);
    FModioDefaultModTileViewOnModTileListSet OnModTileListSet;                        // 0x0CD0 (size: 0x10)
    void OnModTileListSet(bool bIsEmpty);
    FModioDefaultModTileViewOnSelectedValueChanged OnSelectedValueChanged;            // 0x0CE0 (size: 0x10)
    void ModioOnObjectSelectionChangedMulticast(class UObject* SelectedValue);

    void OnEntryWidgetClicked(class UObject* Widget);
}; // Size: 0xD10

class UModioDefaultModalDialogImpl : public UModioUIComponentBase
{
    FModioDefaultModalDialogImplOnDialogButtonClicked OnDialogButtonClicked;          // 0x0350 (size: 0x10)
    void ModioDialogButtonClickedEventMulticast(int32 ButtonIndex);
    bool bUseGeneratedButtonContent;                                                  // 0x0360 (size: 0x1)
    TArray<FModioDialogButtonInfo> DialogButtonData;                                  // 0x0368 (size: 0x10)

}; // Size: 0x378

class UModioDefaultMultiLineEditableTextBox : public UMultiLineEditableTextBox
{
    bool IsCaretMovedWhenGainFocus;                                                   // 0x10A0 (size: 0x1)
    bool SelectAllTextWhenFocused;                                                    // 0x10A1 (size: 0x1)
    bool RevertTextOnEscape;                                                          // 0x10A2 (size: 0x1)
    bool ClearKeyboardFocusOnCommit;                                                  // 0x10A3 (size: 0x1)
    bool SelectAllTextOnCommit;                                                       // 0x10A4 (size: 0x1)
    bool AlwaysShowScrollbars;                                                        // 0x10A5 (size: 0x1)
    bool AllowMultiLine;                                                              // 0x10A6 (size: 0x1)
    EVirtualKeyboardTrigger VirtualKeyboardTrigger;                                   // 0x10A7 (size: 0x1)
    ETextOverflowPolicy OverflowPolicy;                                               // 0x10A8 (size: 0x1)
    FModioDefaultMultiLineEditableTextBoxOnModioTextCommitted OnModioTextCommitted;   // 0x10B0 (size: 0x10)
    void ModioOnTextCommittedMulticast(class UObject* Context, const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    FModioDefaultMultiLineEditableTextBoxOnModioTextChanged OnModioTextChanged;       // 0x10C0 (size: 0x10)
    void ModioOnTextChangedMulticast(class UObject* Context, const FText& Text);

}; // Size: 0x10D0

class UModioDefaultObjectSelector : public UListView
{
    TSubclassOf<class UWidget> MultipleSelectionListItemClass;                        // 0x0C98 (size: 0x8)
    FModioDefaultObjectSelectorOnSelectedValueChanged OnSelectedValueChanged;         // 0x0CA0 (size: 0x10)
    void ModioOnObjectSelectionChangedMulticast(class UObject* SelectedValue);
    FModioDefaultObjectSelectorOnWidgetCreated OnWidgetCreated;                       // 0x0CC8 (size: 0x10)
    void ModioObjectListOnObjectWidgetCreatedMulticast(class UWidget* ObjectWidget, class UObject* Object);

    void OnEntryWidgetClicked(class UObject* Widget);
    void GetEntryWidgetFromItem(const class UObject* Item);
}; // Size: 0xCE0

class UModioDefaultProgressBar : public UProgressBar
{
}; // Size: 0x4A0

class UModioDefaultScrollBox : public UScrollBox
{
    bool bScrollByNavigationInput;                                                    // 0x0CE8 (size: 0x1)
    int32 NavigationScrollOffsetStep;                                                 // 0x0CEC (size: 0x4)
    float NavigationScrollOffsetSpeed;                                                // 0x0CF0 (size: 0x4)
    class UWidgetNavigation* UserDefinedNavigation;                                   // 0x0CF8 (size: 0x8)

    void UpdateNavigationData(int32 PendingScrollOffset);
    void OnUserScrolledHandle(float CurrentOffset);
    void HandleCustomBoundaryNavigation(EUINavigation InNavigation);
}; // Size: 0xD10

class UModioDefaultTagWidget : public UModioUIComponentBase
{

    void GetLabelWidget();
}; // Size: 0x348

class UModioDefaultTextBlock : public UTextBlock
{
    FLinearColorRefOverride TextColorOverride;                                        // 0x0398 (size: 0x1C)

}; // Size: 0x3C0

class UModioDefaultTextButton : public UModioButtonWidget
{
    FText LabelText;                                                                  // 0x0380 (size: 0x10)

    void GetLabelWidget();
}; // Size: 0x390

class UModioDropdownAnchor : public UMenuAnchor
{

    void ModioHandleMenuOpenChanged(bool bIsOpen);
}; // Size: 0x1F8

class UModioEnumEntryUI : public UObject
{
    uint8 UnderlyingEnumValue;                                                        // 0x0030 (size: 0x1)
    FText UnderlyingEnumValueDisplayText;                                             // 0x0038 (size: 0x10)

}; // Size: 0x48

class UModioEnumSelector : public UModioUIComponentBase
{
    FModioEnumSelectorOnSelectionChanged OnSelectionChanged;                          // 0x0350 (size: 0x10)
    void ModioOnObjectSelectionChangedMulticast(class UObject* SelectedValue);
    TArray<UObject*> CachedValues;                                                    // 0x0360 (size: 0x10)

    void NotifySelectionChanged(class UObject* SelectedObject);
    void InternalSelectionChangedHandler(class UObject* SelectedObject);
    void GetSelectorMenuWidget();
    void GetMenuToggleClickableWidget();
}; // Size: 0x370

class UModioEnumSelectorEntry : public UModioUIComponentBase
{
    FModioEnumSelectorEntryOnClicked OnClicked;                                       // 0x0360 (size: 0x10)
    void ModioClickableOnClickedMulticast(class UObject* ClickContext);
    FModioEnumSelectorEntryOnSelectionChanged OnSelectionChanged;                     // 0x0378 (size: 0x10)
    void ModioSelectableOnSelectionChangedMulticast(class UObject* SelectionContext, bool bNewSelectedState);

    void NotifySelectionChanged(bool bNewSelectedState);
    void NotifyClicked();
    void InternalSelectionChangedHandler(class UObject* SelectionContext, bool bNewSelectedState);
    void InternalClickHandler(class UObject* ClickContext);
    void GetSelectableWidget();
    void GetLabelWidget();
    void GetClickableWidget();
}; // Size: 0x388

class UModioEnumSelectorMenu : public UModioUIComponentBase
{
    FModioEnumSelectorMenuOnSelectionChanged OnSelectionChanged;                      // 0x0350 (size: 0x10)
    void ModioOnObjectSelectionChangedMulticast(class UObject* SelectedValue);
    TArray<UObject*> CachedValues;                                                    // 0x0360 (size: 0x10)

    void NotifySelectionChanged(class UObject* SelectedObject);
    void InternalSelectionChangedHandler(class UObject* SelectedObject);
    void GetSelectorWidget();
}; // Size: 0x370

class UModioFeatureVisibilityWidget : public UContentWidget
{
    EModioUIFeatureFlags FeatureToCheck;                                              // 0x0190 (size: 0x1)

}; // Size: 0x198

class UModioFeaturedCategoryParamsUI : public UObject
{
    FModioFeaturedCategoryParams Underlying;                                          // 0x0030 (size: 0x40)

}; // Size: 0x70

class UModioFilterCounterButton : public UModioDefaultTextButton
{

    void GetFilterCounterWidget();
}; // Size: 0x398

class UModioFilterPanel : public UModioUIComponentBase
{

    void GetTagSelectorWidget();
    void GetSelectedTags();
    void GetClearButtonWidget();
    void GetBackgroundButtonWidget();
    void ClearSelectedTags();
    void AddTagSelectionChangedHandler(const FAddTagSelectionChangedHandlerHandler& Handler);
}; // Size: 0x358

class UModioFilterParamsUI : public UObject
{
    FText FilterName;                                                                 // 0x0030 (size: 0x10)
    FModioFilterParams Underlying;                                                    // 0x0040 (size: 0xB8)

}; // Size: 0xF8

class UModioGalleryImageUI : public UObject
{
    FModioImageWrapper UnderlyingImage;                                               // 0x0030 (size: 0x10)
    int32 UnderlyingIndex;                                                            // 0x0040 (size: 0x4)

}; // Size: 0x48

class UModioGalleryListEntry : public UModioUIComponentBase
{
}; // Size: 0x360

class UModioImageGallery : public UModioUIComponentBase
{
    FModioModInfo BoundModInfo;                                                       // 0x0368 (size: 0x1E8)
    bool bUseLogoOnly;                                                                // 0x0550 (size: 0x1)

    void Refresh();
    void GetIncrementSelectionButtonWidget();
    void GetImageWidget();
    void GetImageSelectorWidget();
    void GetDecrementSelectionButtonWidget();
}; // Size: 0x558

class UModioModBrowser : public UModioUIComponentBase
{
    EModioModBrowserState CurrentView;                                                // 0x0390 (size: 0x1)
    FString StoredSearchString;                                                       // 0x0398 (size: 0x10)
    class UObject* StoredTagData;                                                     // 0x03A8 (size: 0x8)
    class UObject* StoredLibraryTagData;                                              // 0x03B0 (size: 0x8)
    class UObject* StoredCollectionTagData;                                           // 0x03B8 (size: 0x8)

    void SearchSubscriptionsAndInstallsWithStoredParams();
    void SearchLibraryWithStoredParams();
    void InitializeTagData(class UObject* InTagData);
    void InitializeLibraryTagData(class UObject* InTagData);
    void InitializeCollectionTagData(class UObject* InTagData);
    void IncrementPresetFilterSelection();
    void GetSearchTextWidget();
    void GetPresetFilterSelectorWidget();
    void GetModTileViewWidget();
    void GetModCollectionTileViewWidget();
    void GetFilterButtonWidget();
    void DoFilterParamsIncludeUserId(const FModioFilterParams& Params);
    void DecrementPresetFilterSelection();
}; // Size: 0x3C0

class UModioModBrowserDialogButtonInfoUI : public UObject
{
    FModioDialogButtonInfo Underlying;                                                // 0x0038 (size: 0x90)

}; // Size: 0xC8

class UModioModCollectionDetailsDialog : public UModioUIComponentBase
{
    FText ExpandLabelText;                                                            // 0x0378 (size: 0x10)
    FModioModCollectionInfo BoundModCollectionInfo;                                   // 0x0388 (size: 0x1C8)
    bool bHasFullDescription;                                                         // 0x0550 (size: 0x1)

    void PopulateExtraOptionsCommands(TArray<UObject*>& Commands, class UObject* Context);
    void GetTagDisplayWidget();
    void GetRateUpButtonWidget();
    void GetRateDownButtonWidget();
    void GetMoreOptionsMenuWidget();
    void GetModCollectionSummaryShortTextWidget();
    void GetModCollectionStatusWidget();
    void GetModCollectionPropertiesWidget();
    void GetModCollectionNameTextWidget();
    void GetModCollectionLogoWidget();
    void GetModCollectionCuratorDisplayWidget();
    void GetFollowButtonWidget();
    void GetExpandDescriptionButtonWidget();
    void GetCollectionModsListViewWidget();
    void GetCloseDialogButtonWidget();
}; // Size: 0x558

class UModioModCollectionEntryUI : public UObject
{
    FModioModCollectionEntry Underlying;                                              // 0x0030 (size: 0x220)
    bool bCachedSubscriptionStatus;                                                   // 0x0250 (size: 0x1)

}; // Size: 0x258

class UModioModCollectionInfoUI : public UObject
{
    FModioModCollectionInfo Underlying;                                               // 0x0030 (size: 0x1C8)

}; // Size: 0x1F8

class UModioModCollectionStatusWidget : public UModioUIComponentBase
{
    FModioModCollectionStatusWidgetOnCollectionFollowStateChangedEvent OnCollectionFollowStateChangedEvent; // 0x0368 (size: 0x10)
    void OnFollowStateChanged(EModioModCollectionState NewState);
    EModioModCollectionState CurrentCollectionFollowState;                            // 0x0378 (size: 0x1)

    void SetModCollectionFollowState(EModioModCollectionState NewState);
    void GetModCollectionInfo();
}; // Size: 0x380

class UModioModDependencyUI : public UObject
{
    FModioModDependency Underlying;                                                   // 0x0030 (size: 0xF8)

}; // Size: 0x128

class UModioModDetailsDialog : public UModioUIComponentBase
{
    FText ExpandLabelText;                                                            // 0x0368 (size: 0x10)
    FModioModInfo BoundModInfo;                                                       // 0x0378 (size: 0x1E8)
    bool bHasFullDescription;                                                         // 0x0560 (size: 0x1)

    void PopulateExtraOptionsCommands(TArray<UObject*>& Commands, class UObject* Context);
    void IsUserSubscribed();
    void GetTagDisplayWidget();
    void GetSubscribeButtonWidget();
    void GetRateUpButtonWidget();
    void GetRateDownButtonWidget();
    void GetMoreOptionsMenuWidget();
    void GetModSummaryShortTextWidget();
    void GetModStatusWidget();
    void GetModPropertiesWidget();
    void GetModNameTextWidget();
    void GetModImageGalleryWidget();
    void GetModDependenciesButtonWidget();
    void GetModAuthorDisplayWidget();
    void GetExpandDescriptionButtonWidget();
    void GetCloseDialogButtonWidget();
}; // Size: 0x568

class UModioModEnabledStatusWidget : public UModioUIComponentBase
{
}; // Size: 0x358

class UModioModEnabledToggleWidget : public UModioUIComponentBase
{
}; // Size: 0x358

class UModioModInfoUI : public UObject
{
    FModioModInfo Underlying;                                                         // 0x0030 (size: 0x1E8)

}; // Size: 0x218

class UModioModInstallationStatusWidget : public UModioUIComponentBase
{
    FModioModInfo BoundModInfo;                                                       // 0x0378 (size: 0x1E8)
    FModioModInstallationStatusWidgetOnInstallationStatusChanged OnInstallationStatusChanged; // 0x0560 (size: 0x10)
    void OnModInstallationStatusChanged(EModioModInstallationStatus NewStatus);
    EModioModInstallationStatus CurrentInstallationStatus;                            // 0x0570 (size: 0x1)

    void QueryProgressValueForState(EModioModProgressState ProgressState);
}; // Size: 0x578

class UModioModManagementEventReceiverLibrary : public UBlueprintFunctionLibrary
{

    void RegisterModManagementEventReceiver(class UObject* ObjectToRegister);
    void DeregisterModManagementEventReceiver(class UObject* ObjectToDeregister);
}; // Size: 0x28

class UModioModManagementEventUI : public UObject
{
    FModioModManagementEvent Underlying;                                              // 0x0028 (size: 0x18)

}; // Size: 0x40

class UModioModProgressInfoUI : public UObject
{
    FModioModProgressInfo Underlying;                                                 // 0x0028 (size: 0x50)

}; // Size: 0x78

class UModioModPropCollectionVisualizer : public UModioUIComponentBase
{

    void GetModPropertyVisualizerWidgets();
}; // Size: 0x348

class UModioModRatingDisplay : public UModioUIComponentBase
{

    void GetRatingPercentageLabelWidget();
    void GetRatingDescriptionLabelWidget();
}; // Size: 0x348

class UModioModSubscriptionStatusWidget : public UModioUIComponentBase
{
}; // Size: 0x358

class UModioModTagDisplay : public UModioUIComponentBase
{

    void GetTagContainerWidget();
}; // Size: 0x348

class UModioModTagInfoUI : public UObject
{
    FModioModTagInfo Underlying;                                                      // 0x0030 (size: 0xB8)
    FText LocalizedCategoryName;                                                      // 0x00E8 (size: 0x10)
    TArray<UModioModTagUI*> BindableTags;                                             // 0x00F8 (size: 0x10)

}; // Size: 0x108

class UModioModTagOptionsUI : public UObject
{
    FModioModTagOptions Underlying;                                                   // 0x0030 (size: 0x28)
    TArray<UModioModTagInfoUI*> BindableTagCategories;                                // 0x0058 (size: 0x10)

}; // Size: 0x68

class UModioModTagSelector : public UModioUIComponentBase
{
    TScriptInterface<class IModioModTagOptionsUIDetails> CachedTagOptions;            // 0x0350 (size: 0x10)

    void GetSelectorMenuWidget();
    void GetMenuToggleClickableWidget();
}; // Size: 0x360

class UModioModTagSelectorCategory : public UModioUIComponentBase
{

    void GetTagCategoryLabel();
    void GetCategoryTagListWidget();
}; // Size: 0x360

class UModioModTagSelectorEntry : public UModioUIComponentBase
{
    FModioModTagSelectorEntryOnSelectionStateChanged OnSelectionStateChanged;         // 0x0370 (size: 0x10)
    void ModioSelectableOnSelectionChangedMulticast(class UObject* SelectionContext, bool bNewSelectedState);
    FModioModTagSelectorEntryOnClicked OnClicked;                                     // 0x0380 (size: 0x10)
    void ModioClickableOnClickedMulticast(class UObject* ClickContext);

    void OnTagEntryClicked(class UObject* ClickedObject);
    void NotifySelectionChanged();
    void NotifyClicked();
    void GetTagLabelWidget();
    void GetSelectionWidget();
    void GetClickableWidget();
}; // Size: 0x390

class UModioModTagSelectorMenu : public UModioUIComponentBase
{
    bool bShowHiddenTags;                                                             // 0x0350 (size: 0x1)
    bool bShowLockedTags;                                                             // 0x0351 (size: 0x1)
    FModioModTagSelectorMenuOnTagSelectionChanged OnTagSelectionChanged;              // 0x0358 (size: 0x10)
    void ModioOnTagSelectionChangedMulticast();
    TScriptInterface<class IModioModTagOptionsUIDetails> CachedTagOptions;            // 0x0368 (size: 0x10)

    void OnCategoryWidgetCreated(class UWidget* CategoryWidget, class UObject* CategoryDataSource);
    void OnCategoryEntrySelectionChanged(class UObject* NewlySelectedEntry);
    void NotifySelectionChanged();
    void GetCategoryContainerWidget();
    void GetAllowedTags();
}; // Size: 0x378

class UModioModTagUI : public UObject
{
    FString Underlying;                                                               // 0x0030 (size: 0x10)
    FText LocalizedText;                                                              // 0x0040 (size: 0x10)
    bool bSelectionState;                                                             // 0x0050 (size: 0x1)

}; // Size: 0x58

class UModioObjectWrapBox : public UWrapBox
{
    TArray<UObject*> BoundObjects;                                                    // 0x01C8 (size: 0x10)
    TSubclassOf<class UWidget> WidgetClass;                                           // 0x01D8 (size: 0x8)
    FModioObjectWrapBoxOnWidgetCreated OnWidgetCreated;                               // 0x01E0 (size: 0x10)
    void ModioObjectListOnObjectWidgetCreatedMulticast(class UWidget* ObjectWidget, class UObject* Object);

}; // Size: 0x1F0

class UModioOperationTracker : public UModioUIComponentBase
{
    FText SizeFormatText;                                                             // 0x0390 (size: 0x10)
    FText SpeedFormatText;                                                            // 0x03A0 (size: 0x10)

    void RefreshQueueData();
    void HandleOperationComplete();
    void GetRadialProgressWidget();
    void GetQueueLabelTextWidget();
    void GetQueueCountTextWidget();
    void GetQueueCountIconWidget();
    void GetPercentProgressTextWidget();
    void GetOperationTypeIconWidget();
    void GetDownloadSpeedTextWidget();
    void GetDownloadSizeTextWidget();
}; // Size: 0x3B8

class UModioPopupCommandMenu : public UModioUIComponentBase
{

    void GetCommandMenuWidget();
    void ConstructCommandMenuWidget();
}; // Size: 0x350

class UModioPresetFilterEntryWidget : public UModioUIComponentBase
{

    void GetLabelWidget();
}; // Size: 0x368

class UModioPresetFilterSelector : public UModioUIComponentBase
{
    TArray<UObject*> CachedBoundPresets;                                              // 0x0350 (size: 0x10)

    void GetPresetListWidget();
    void GetFilterPresets();
}; // Size: 0x360

class UModioReportInfoUI : public UObject
{
    FModioReportParams ReportData;                                                    // 0x0030 (size: 0x58)
    class UObject* ModInfo;                                                           // 0x0088 (size: 0x8)

}; // Size: 0x90

class UModioRetryLibrary : public UBlueprintFunctionLibrary
{

    void Retry(FModioRetryCounter& Target);
    void ResetRetryCountPure(FModioRetryCounter& Target);
    void ResetRetryCount(FModioRetryCounter& Target);
    void CanRetryAsExec(const FModioRetryCounter& Target);
    void CanRetry(const FModioRetryCounter& Target);
}; // Size: 0x28

class UModioSearchBar : public UModioUIComponentBase
{

    void GetSearchBoxWidget();
    void GetButtonWidget();
}; // Size: 0x358

class UModioStackedBoolLibrary : public UBlueprintFunctionLibrary
{

    void PushBoolValue(FModioStackedBool& Target, bool bNewValue);
    void PopBoolValue(FModioStackedBool& Target, bool& bDidPopSuccessfully);
    void PeekBoolValue(const FModioStackedBool& Target, bool& bDidPeekSuccessfully);
}; // Size: 0x28

class UModioStorageTracker : public UModioUIComponentBase
{

    void RefreshData();
    void GetStorageUsedTextWidget();
}; // Size: 0x368

class UModioTagCounterIcon : public UModioUIComponentBase
{

    void SynchronizeCounter();
    void GetCounterLabelWidget();
}; // Size: 0x358

class UModioUICollectionFollowStateChangedReceiverLibrary : public UBlueprintFunctionLibrary
{

    void RegisterCollectionFollowStateChangedReceiver(class UObject* ObjectToRegister);
    void DeregisterCollectionFollowStateChangedReceiver(class UObject* ObjectToDeregister);
}; // Size: 0x28

class UModioUICommandLibrary : public UBlueprintFunctionLibrary
{

    void GetCommandText(FString CommandID, const FName& TextName, bool& bResolved);
    void GetCommandBrush(FString CommandID, const FName& BrushName, bool& bResolved);
    void GetCommandAssetEntry(FString CommandID, bool& bResolved);
}; // Size: 0x28

class UModioUICommonFunctionLibrary : public UBlueprintFunctionLibrary
{

    void ValidateWidget(FScriptInterface TargetWidget);
    void MapValueIntoRangeIndex(const TArray<FInt32Range>& ValueRanges, int32 Value, int32& OutIndex);
    void IsDesignTimeAsExec(class UWidget* Target);
    void IsDesignTime(class UWidget* Target);
    void GetModioText(FName StringKey);
    void GetLocalizedTagValue(const FModioModTagLocalizationData& InTagLocalizationData);
    void GetLocalizedTagCategory(const FModioModTagInfo& InTagInfo);
    void FormatTimespan(const FTimespan& Timespan, const FText& YearFormat, const FText& MonthFormat, const FText& DaysFormat, const FText& TodayFormat);
    void FormatNumberWithSIUnit(int64 Value, const FText& FormatText);
    void CreateBindableUserArrayFromArray(const TArray<FModioUser>& InUserArray);
    void CreateBindableUser(const FModioUser& InRawUser);
    void CreateBindableReportTypeEnumArray();
    void CreateBindableModTagRawValueFromString(FString InTag);
    void CreateBindableModTagRawValue(const FModioModTag& InTag);
    void CreateBindableModTagOptions(const FModioModTagOptions& InRawOptions);
    void CreateBindableModTagInfo(const FModioModTagInfo& InRawTagInfo);
    void CreateBindableModTagArrayFromStringArray(const TArray<FString>& InTags);
    void CreateBindableModTagArray(const TArray<FModioModTag>& InTags);
    void CreateBindableModTag(const FModioModTagLocalizationData& InTagLocalizationData);
    void CreateBindableModInfoArrayFromList(const FModioModInfoList& InModInfoList);
    void CreateBindableModInfo(const FModioModInfo& InModInfo);
    void CreateBindableModDependencyArrayFromList(const FModioModDependencyList& InModDependencyList);
    void CreateBindableModDependencyArrayFromArray(const TArray<FModioModDependency>& InModDependencyArray);
    void CreateBindableModDependency(const FModioModDependency& InModDependency);
    void CreateBindableModCollectionArrayFromList(const FModioModCollectionInfoList& InModCollectionList);
    void CreateBindableModCollection(const FModioModCollectionInfo& InRawCollection);
    void CreateBindableEnum(const uint8 InValue, const FText InText);
    void CheckLogoDownloadEventForDataSource(FModioModID EventModID, EModioLogoSize EventLogoSize, class UObject* DataSource, EModioLogoSize RequestedSize);
    void CheckLogoDownloadEvent(FModioModID EventModID, EModioLogoSize EventLogoSize, FModioModID RequestedModID, EModioLogoSize RequestedSize);
    void CheckCollectionLogoDownloadEventForDataSource(FModioModCollectionID EventModCollectionID, EModioLogoSize EventLogoSize, class UObject* DataSource, EModioLogoSize RequestedSize);
    void CheckCollectionLogoDownloadEvent(FModioModCollectionID EventModCollectionID, EModioLogoSize EventLogoSize, FModioModCollectionID RequestedModCollectionID, EModioLogoSize RequestedSize);
    void AsObjectArray(const TArray<int32>& TargetArray);
    void ApplyTextPropertyOverridesHelper(const FSlateFontInfoOverride& FontPropertiesOverride, const FHAlignOverride& TextJustificationOverride, const FTextTransformOverride& TextTransformOverride, class UObject* Target);
}; // Size: 0x28

class UModioUIComponentBase : public UAbioticWidget
{
    class UObject* DataSource;                                                        // 0x0318 (size: 0x8)
    FModioUIComponentBaseOnModioActivationChanged OnModioActivationChanged;           // 0x0320 (size: 0x10)
    void ModioOnActivationChangedMulticast(class UObject* ActivationContext, bool bIsActivated);
    FModioUIComponentBaseOnModioFocusPathChanged OnModioFocusPathChanged;             // 0x0330 (size: 0x10)
    void ModioOnFocusPathChangedMulticast(class UObject* FocusContext, FFocusEvent InFocusEvent, bool bIsFocused);
    bool bIsActivated;                                                                // 0x0340 (size: 0x1)

    void GetDesiredFocusTarget();
    void DeactivateWidget();
    void BP_OnDeactivated();
    void BP_OnActivated();
}; // Size: 0x348

class UModioUIConnectivityChangedReceiverLibrary : public UBlueprintFunctionLibrary
{

    void RegisterConnectivityChangedReceiver(class UObject* ObjectToRegister);
    void DeregisterConnectivityChangedReceiver(class UObject* ObjectToDeregister);
}; // Size: 0x28

class UModioUIDefaultModEnabledStateProvider : public UObject
{
}; // Size: 0x30

class UModioUIDialogDisplayEventReceiverLibrary : public UBlueprintFunctionLibrary
{

    void RegisterDialogDisplayEventReceiver(class UObject* ObjectToRegister);
    void DeregisterDialogDisplayEventReceiver(class UObject* ObjectToDeregister);
}; // Size: 0x28

class UModioUIDisplayFilteredModCollectionsCommand : public UObject
{
    class UObject* DataSource;                                                        // 0x0038 (size: 0x8)
    FModioFilterParams UnderlyingParams;                                              // 0x0040 (size: 0xB8)
    FName DisplayStringKey;                                                           // 0x00F8 (size: 0x8)

    void SetFilterParams(const FModioFilterParams& FilterParams);
    void SetDisplayStringKey(const FName& InDisplayStringKey);
}; // Size: 0x100

class UModioUIDisplayFilteredModsCommand : public UObject
{
    class UObject* DataSource;                                                        // 0x0038 (size: 0x8)
    FModioFilterParams UnderlyingParams;                                              // 0x0040 (size: 0xB8)
    FName DisplayStringKey;                                                           // 0x00F8 (size: 0x8)

    void SetFilterParams(const FModioFilterParams& FilterParams);
    void SetDisplayStringKey(const FName& InDisplayStringKey);
}; // Size: 0x100

class UModioUIInputValidationLibrary : public UBlueprintFunctionLibrary
{

    void ValidateUsingRule(const FModioTextValidationRule& Rule, const FText& TextToValidate, FText& ValidationMessageText);
    void ValidateNoWhitespace(const FText& TextToValidate);
    void ValidateNotEmpty(const FText& TextToValidate);
    void ValidateNotBlank(const FText& TextToValidate);
    void ValidateLength(const FText& TextToValidate, int32 DesiredMaximumLength, int32 DesiredMinimumLength);
    void ValidateEmailAddress(const FText& TextToValidate);
    void ValidateAlphanumeric(const FText& TextToValidate);
    void ValidateAllNumeric(const FText& TextToValidate);
    void ValidateAllLetters(const FText& TextToValidate);
    void DefaultValidateText(TScriptInterface<class IModioUITextValidator> TargetObject, const FText& inputText, FText& ValidationMessageText);
}; // Size: 0x28

class UModioUIManageModSubscriptionCommand : public UObject
{
    class UObject* DataSource;                                                        // 0x0030 (size: 0x8)

}; // Size: 0x38

class UModioUIMediaDownloadCompletedReceiverLibrary : public UBlueprintFunctionLibrary
{

    void RegisterMediaDownloadCompletedReceiver(class UObject* ObjectToRegister, EModioUIMediaDownloadEventType DownloadTypes);
    void DeregisterMediaDownloadCompletedReceiver(class UObject* ObjectToDeregister, EModioUIMediaDownloadEventType DownloadTypes);
}; // Size: 0x28

class UModioUIModCollectionInfoReceiverLibrary : public UBlueprintFunctionLibrary
{

    void RegisterModCollectionInfoReceiver(class UObject* ObjectToRegister, EModioUIModCollectionInfoEventType EventType);
    void DeregisterModCollectionInfoReceiver(class UObject* ObjectToDeregister, EModioUIModCollectionInfoEventType EventType);
}; // Size: 0x28

class UModioUIModEnabledStateChangedReceiverLibrary : public UBlueprintFunctionLibrary
{

    void RegisterModEnabledStateChangedReceiver(class UObject* ObjectToRegister);
    void DeregisterModEnabledStateChangedReceiver(class UObject* ObjectToDeregister);
}; // Size: 0x28

class UModioUIModInfoReceiverLibrary : public UBlueprintFunctionLibrary
{

    void RegisterModInfoReceiver(class UObject* ObjectToRegister, EModioUIModInfoEventType EventType);
    void DeregisterModInfoReceiver(class UObject* ObjectToDeregister, EModioUIModInfoEventType EventType);
}; // Size: 0x28

class UModioUIPrioritizeModCommand : public UObject
{
    class UObject* DataSource;                                                        // 0x0030 (size: 0x8)

}; // Size: 0x38

class UModioUIReportModCommand : public UObject
{
    class UObject* DataSource;                                                        // 0x0030 (size: 0x8)

}; // Size: 0x38

class UModioUISettings : public UObject
{
    TSoftObjectPtr<class UDataTable> ColorsTable;                                     // 0x0028 (size: 0x28)
    TSoftObjectPtr<class UDataTable> CommandsTable;                                   // 0x0050 (size: 0x28)
    TSoftObjectPtr<class UMaterial> UnderlineMaterial;                                // 0x0078 (size: 0x28)
    TSoftObjectPtr<class UMaterial> FakeCaretMaterial;                                // 0x00A0 (size: 0x28)
    TArray<FModioPresetFilterParams> PresetNamedFilters;                              // 0x00C8 (size: 0x10)
    FModioPresetFilterParams DefaultCollectionsFilter;                                // 0x00D8 (size: 0x68)

    void GetDefaultCollectionsFilter();
}; // Size: 0x140

class UModioUISubscriptionsChangedReceiverLibrary : public UBlueprintFunctionLibrary
{

    void RegisterSubscriptionsChangedReceiver(class UObject* ObjectToRegister);
    void DeregisterSubscriptionsChangedReceiver(class UObject* ObjectToDeregister);
}; // Size: 0x28

class UModioUISubsystem : public UEngineSubsystem
{
    class UObject* ModEnabledStateDataProvider;                                       // 0x0070 (size: 0x8)
    class UObject* ModRatingStateProvider;                                            // 0x0078 (size: 0x8)
    class UObject* ModCollectionRatingStateProvider;                                  // 0x0080 (size: 0x8)
    FModioUISubsystemOnPreUninstall OnPreUninstall;                                   // 0x01F8 (size: 0x10)
    void OnPreUninstallDelegate(FModioModID ModId);
    FModioUISubsystemOnModManagementEnabledStateChanged OnModManagementEnabledStateChanged; // 0x0320 (size: 0x10)
    void OnModManagementEnabledStateChanged(bool bEnabled);

    void UnsubscribeHandler(FModioErrorCode ErrorCode, FModioModID ID);
    void UnregisterPreUninstallHandler();
    void UninstallHandler(FModioErrorCode ErrorCode, FModioModID ID);
    void SubscriptionHandler(FModioErrorCode ErrorCode, FModioModID ID);
    void SetModRatingStateDataProvider(TScriptInterface<class IModRatingStateProvider> InModRatingStateProvider);
    void SetModEnabledStateDataProvider(TScriptInterface<class IModioUIModEnabledStateProvider> InModEnabledStateDataProvider);
    void SetModCollectionRatingStateDataProvider(TScriptInterface<class IModCollectionRatingStateProvider> InModCollectionRatingStateProvider);
    void RequestUserAvatar();
    void RequestUnsubscribeFromModCollectionWithHandler(FModioModCollectionID ID, FRequestUnsubscribeFromModCollectionWithHandlerDedicatedCallback DedicatedCallback);
    void RequestUnsubscribeFromModCollection(FModioModCollectionID ID);
    void RequestUnfollowModCollectionWithHandler(FModioModCollectionID ID, FRequestUnfollowModCollectionWithHandlerDedicatedCallback DedicatedCallback);
    void RequestUnfollowModCollection(FModioModCollectionID ID);
    void RequestSubscriptionForModIDWithHandler(FModioModID ID, bool IncludeDependencies, FRequestSubscriptionForModIDWithHandlerCallback Callback);
    void RequestSubscriptionForModID(FModioModID ID, bool IncludeDependencies);
    void RequestSubscribeToModCollectionWithHandler(FModioModCollectionID ID, FRequestSubscribeToModCollectionWithHandlerCallback Callback);
    void RequestSubscribeToModCollection(FModioModCollectionID ID);
    void RequestShowDialog(EModioUIDialogType DialogType, class UObject* DataSource);
    void RequestRemoveSubscriptionForModIDWithHandler(FModioModID ID, FRequestRemoveSubscriptionForModIDWithHandlerDedicatedCallback DedicatedCallback);
    void RequestRemoveSubscriptionForModID(FModioModID ID);
    void RequestModInfoForModIDs(TArray<FModioModID> IDs);
    void RequestModEnabledStateChange(FModioModID ID, bool bNewEnabledState);
    void RequestLogoDownloadForModID(FModioModID ID, EModioLogoSize LogoSize);
    void RequestLogoDownloadForModCollectionID(FModioModCollectionID ID, EModioLogoSize LogoSize);
    void RequestListModCollections(const FModioFilterParams& Filter, FString RequestIdentifier);
    void RequestListAllMods(FModioFilterParams Params, FString RequestIdentifier);
    void RequestGetModCollectionMods(FModioModCollectionID CollectionID);
    void RequestGalleryImageDownloadForModID(FModioModID ID, int32 Index, EModioGallerySize ImageSize);
    void RequestFollowModCollectionWithHandler(FModioModCollectionID ID, FRequestFollowModCollectionWithHandlerCallback Callback);
    void RequestFollowModCollection(FModioModCollectionID ID);
    void RequestEmailAuthenticationWithHandler(FModioEmailAuthCode Code, const FRequestEmailAuthenticationWithHandlerCallback Callback);
    void RegisterPreUninstallHandler(const FRegisterPreUninstallHandlerCallback& Callback);
    void QueryIsUserFollowingModCollectionWithHandler(FModioModCollectionID ID, FQueryIsUserFollowingModCollectionWithHandlerHandler Handler);
    void QueryIsModEnabled(FModioModID ID);
    void QueryConnectivityState();
    void OnModEnabledChanged(int64 RawModID, bool bNewEnabledState);
    void NotifyConnectivityChange(bool bNewConnectivityState);
    void ModCollectionUnfollowHandler(FModioErrorCode ErrorCode, FModioModCollectionID CollectionID);
    void IsUGCFeatureEnabled(EModioUIFeatureFlags Feature);
    void GetPlatformUnavailableModCount(FModioModCollectionID CollectionID);
    void GetCurrentDPIScaleValue();
    void EnableModManagement();
    void DisableModManagement();
}; // Size: 0x420

class UModioUIToggleModCollectionFollowedCommand : public UObject
{
    class UObject* DataSource;                                                        // 0x0048 (size: 0x8)

}; // Size: 0x50

class UModioUIToggleModEnabledCommand : public UObject
{
    class UObject* DataSource;                                                        // 0x0030 (size: 0x8)

}; // Size: 0x38

class UModioUIUserAvatarDownloadCompletedReceiverLibrary : public UBlueprintFunctionLibrary
{

    void RegisterUserAvatarDownloadCompletedReceiver(class UObject* ObjectToRegister);
    void DeregisterUserAvatarDownloadCompletedReceiver(class UObject* ObjectToDeregister);
}; // Size: 0x28

class UModioUIUserChangedReceiverLibrary : public UBlueprintFunctionLibrary
{

    void RegisterUserChangedReceiver(class UObject* ObjectToRegister);
    void DeregisterUserChangedReceiver(class UObject* ObjectToDeregister);
}; // Size: 0x28

class UModioUIViewModCollectionCommand : public UObject
{
    class UObject* DataSource;                                                        // 0x0030 (size: 0x8)

}; // Size: 0x38

class UModioUIViewModCollectionContributorsCommand : public UObject
{
    class UObject* DataSource;                                                        // 0x0030 (size: 0x8)

}; // Size: 0x38

class UModioUIViewModCommand : public UObject
{
    class UObject* DataSource;                                                        // 0x0030 (size: 0x8)

}; // Size: 0x38

class UModioUserDisplay : public UModioUIComponentBase
{
}; // Size: 0x348

class UModioUserUI : public UObject
{
    FModioUser Underlying;                                                            // 0x0030 (size: 0x40)

}; // Size: 0x70

class UModioWidgetStack : public UWidgetSwitcher
{
    FModioWidgetStackOnDisplayedWidgetChanged OnDisplayedWidgetChanged;               // 0x01A8 (size: 0x10)
    void ModioOnStackWidgetDisplayed(class UUserWidget* DisplayedWidget);
    TArray<UUserWidget*> GeneratedWidgets;                                            // 0x01C0 (size: 0x10)

    void RemoveWidget(class UUserWidget* Widget);
    void PushWidgetInstance(class UUserWidget* Widget);
    void PushWidget(TSubclassOf<class UUserWidget> WidgetClass);
    void PopWidget();
    void GetTopWidget();
    void GetStackCount();
    void ClearWidgets();
}; // Size: 0x1D0

class UPropertyOverridesLibrary : public UBlueprintFunctionLibrary
{

    void ResolveTextTransformOverrideAsExec(const FTextTransformOverride& Target, bool& bOverrideSet);
    void ResolveTextTransformOverride(const FTextTransformOverride& Target, bool& bOverrideSet);
    void ResolveTextOverrideAsExec(const FTextOverride& Target, bool& bOverrideSet);
    void ResolveTextOverride(const FTextOverride& Target, bool& bOverrideSet);
    void ResolveIntOverrideAsExec(const FIntegerOverride& Target, bool& bOverrideSet);
    void ResolveIntOverride(const FIntegerOverride& Target, bool& bOverrideSet);
    void ResolveInputActionOverrideAsExec(const FInputActionOverride& Target, bool& bOverrideSet);
    void ResolveInputActionOverride(const FInputActionOverride& Target, bool& bOverrideSet);
    void ResolveHAlignOverrideAsExec(const FHAlignOverride& Target, bool& bOverrideSet);
    void ResolveHAlignOverride(const FHAlignOverride& Target, bool& bOverrideSet);
    void ResolveFontInfoOverrideAsExec(const FSlateFontInfoOverride& Target, bool& bOverrideSet);
    void ResolveFontInfoOverride(const FSlateFontInfoOverride& Target, bool& bOverrideSet);
    void ResolveFloatOverrideAsExec(const FFloatOverride& Target, bool& bOverrideSet);
    void ResolveFloatOverride(const FFloatOverride& Target, bool& bOverrideSet);
    void ResolveClassPathOverrideAsExec_Casted(const FClassPathOverride& Target, UClass* BaseClass, bool& bOverrideSet);
    void ResolveClassPathOverrideAsExec(const FClassPathOverride& Target, bool& bOverrideSet);
    void ResolveClassPathOverride_Casted(const FClassPathOverride& Target, UClass* BaseClass, bool& bOverrideSet);
    void ResolveClassPathOverride(const FClassPathOverride& Target, bool& bOverrideSet);
    void ApplyTextTransformOverride(const FTextTransformOverride& Target, ETextTransformPolicy DefaultValue);
    void ApplyTextOverride(const FTextOverride& Target, FText DefaultValue);
    void ApplyIntOverride(const FIntegerOverride& Target, int32 DefaultValue);
    void ApplyInputActionOverride(const FInputActionOverride& Target, FDataTableRowHandle DefaultValue);
    void ApplyHAlignOverride(const FHAlignOverride& Target, TEnumAsByte<EHorizontalAlignment> DefaultValue);
    void ApplyFontInfoOverride(const FSlateFontInfoOverride& Target, FSlateFontInfo DefaultValue);
    void ApplyFloatOverride(const FFloatOverride& Target, float DefaultValue);
    void ApplyClassPathOverride_Casted(const FClassPathOverride& Target, UClass* BaseClass, UClass* DefaultValue);
    void ApplyClassPathOverride(const FClassPathOverride& Target, FSoftClassPath DefaultValue);
}; // Size: 0x28

#endif
