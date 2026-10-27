#ifndef UE4SS_SDK_WBP_ModioDefaultModDependenciesConfirmDialog_HPP
#define UE4SS_SDK_WBP_ModioDefaultModDependenciesConfirmDialog_HPP

class UWBP_ModioDefaultModDependenciesConfirmDialog_C : public UModioUIComponentBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UWBP_ModioDefaultModalDialogImpl_C* DependenciesDialogImpl;                 // 0x0350 (size: 0x8)
    class UWBP_ModioDefaultModDependencyList_C* ModDependencyList;                    // 0x0358 (size: 0x8)
    class UScrollBox* ModDependencyScrollBox;                                         // 0x0360 (size: 0x8)
    class UModioDefaultBorder* ModioTotalBackgroundBorder;                            // 0x0368 (size: 0x8)
    class UModioDefaultImage* ModLogoImage;                                           // 0x0370 (size: 0x8)
    class UModioDefaultTextBlock* ModNameLabelTextBlock;                              // 0x0378 (size: 0x8)
    class UModioDefaultTextBlock* ModSizeTextBlock;                                   // 0x0380 (size: 0x8)
    class UModioDefaultTextBlock* TotalModSizeTextBlock;                              // 0x0388 (size: 0x8)
    FWBP_ModioDefaultModDependenciesConfirmDialog_COnDialogConfirmed OnDialogConfirmed; // 0x0390 (size: 0x10)
    void OnDialogConfirmed();
    FWBP_ModioDefaultModDependenciesConfirmDialog_COnDialogCanceled OnDialogCanceled; // 0x03A0 (size: 0x10)
    void OnDialogCanceled();
    FLinearColorRef TotalBackgroundColor;                                             // 0x03B0 (size: 0x18)
    FModioModID CurrentModID;                                                         // 0x03C8 (size: 0x8)
    double TargetModDependencyListScrollOffset;                                       // 0x03D0 (size: 0x8)
    FModioUnsigned64 TotalSizeToInstall;                                              // 0x03D8 (size: 0x8)

    void WidgetAction_CloseMenu(bool& Handled);
    void WidgetAction_CycleMenu(bool Next, bool& Handled);
    void WidgetAction_CycleCrafting(bool Next, bool& Handled);
    void WidgetAction_FaceTop(bool& Handled);
    void WidgetAction_DPadDirection(TEnumAsByte<E_NavigationDirection::Type> Direction, bool& Handled);
    void GetModLogoWidget();
    void OnModLogoFetched(FModioErrorCode ErrorCode, FModioOptionalImage Path);
    void OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void GetWidgetToFocus(EUINavigation NavigationType);
    void GetTotalModSizeTextWidget(TScriptInterface<class IModioUIHasTextWidget>& TextWidget);
    void GetTotalBackgroundBorder(TScriptInterface<class IModioUIHasConfigurableColor>& NewParam);
    void DoNavigationToDialog(EUINavigation Navigation);
    void On Fetch External Updates Complete(FModioErrorCode ErrorCode);
    void On Confirm Subscription();
    void GetModSizeWidget();
    void GetModNameWidget();
    void GetDependenciesDialogWidget();
    void GetDependencyModListWidget();
    void OnModDependenciesFetched(FModioErrorCode ErrorCode, FModioOptionalModDependencyList Dependencies);
    void OnDialogButtonClicked(int32 ButtonIndex);
    void OnSetDataSource(class UObject* InDataSource);
    void OnModCollectionCuratorAvatarDownloadCompleted(FModioModCollectionID ModCollectionId, FModioErrorCode ErrorCode, FModioOptionalImage Image);
    void OnModCollectionLogoDownloadCompleted(FModioModCollectionID ModCollectionId, FModioErrorCode ErrorCode, FModioOptionalImage Image, EModioLogoSize LogoSize);
    void OnModCreatorAvatarDownloadCompleted(FModioModID ModId, FModioErrorCode ErrorCode, FModioOptionalImage Image);
    void OnModGalleryImageDownloadCompleted(FModioModID ModId, FModioErrorCode ErrorCode, int32 ImageIndex, FModioOptionalImage Image);
    void OnModLogoDownloadCompleted(FModioModID ModId, FModioErrorCode ErrorCode, FModioOptionalImage Image, EModioLogoSize LogoSize);
    void AddDialogButtonClickedHandler(const FAddDialogButtonClickedHandlerHandler& Handler);
    void AddDialogShownHandler(const FAddDialogShownHandlerHandler& Handler);
    void CloseModal();
    void RemoveDialogButtonClickedHandler(const FRemoveDialogButtonClickedHandlerHandler& Handler);
    void RemoveDialogShownHandler(const FRemoveDialogShownHandlerHandler& Handler);
    void ShowModal(bool bFocusCancelButton);
    void PreConstruct(bool IsDesignTime);
    void SetDataSource(class UObject* InDataSource);
    void AddDialogConfirmedHandler(const FAddDialogConfirmedHandlerHandler& Handler);
    void AddDialogCanceledHandler(const FAddDialogCanceledHandlerHandler& Handler);
    void RemoveDialogConfirmedHandler(const FRemoveDialogConfirmedHandlerHandler& Handler);
    void RemoveDialogCanceledHandler(const FRemoveDialogCanceledHandlerHandler& Handler);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_ModioDefaultModDependenciesConfirmDialog(int32 EntryPoint);
    void OnDialogCanceled__DelegateSignature();
    void OnDialogConfirmed__DelegateSignature();
}; // Size: 0x3E0

#endif
