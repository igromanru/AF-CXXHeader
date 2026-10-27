#ifndef UE4SS_SDK_WBP_ModioDefaultModCollectionFollowDialog_HPP
#define UE4SS_SDK_WBP_ModioDefaultModCollectionFollowDialog_HPP

class UWBP_ModioDefaultModCollectionFollowDialog_C : public UModioUIComponentBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UWBP_ModioDefaultModalDialogImpl_C* CollectionActionsDialogImpl;            // 0x0350 (size: 0x8)
    class UWBP_ModioDefaultSpecialButton_C* FollowAndSubscribeBTN;                    // 0x0358 (size: 0x8)
    class UScrollBox* ModCollectionActionsScrollBox;                                  // 0x0360 (size: 0x8)
    class UWBP_ModioDefaultModCollectionModList_C* ModDependencyList;                 // 0x0368 (size: 0x8)
    class UWBP_ModCollectionModsAndSizeProps_C* WBP_ModCollectionModsAndSizeProps;    // 0x0370 (size: 0x8)
    FWBP_ModioDefaultModCollectionFollowDialog_COnFollowClicked OnFollowClicked;      // 0x0378 (size: 0x10)
    void OnFollowClicked();
    FWBP_ModioDefaultModCollectionFollowDialog_COnDialogCanceled OnDialogCanceled;    // 0x0388 (size: 0x10)
    void OnDialogCanceled();
    FLinearColorRef TotalBackgroundColor;                                             // 0x0398 (size: 0x18)
    FModioModID CurrentModID;                                                         // 0x03B0 (size: 0x8)
    double TargetModDependencyListScrollOffset;                                       // 0x03B8 (size: 0x8)
    FModioUnsigned64 TotalSizeToInstall;                                              // 0x03C0 (size: 0x8)

    void WidgetAction_CloseMenu(bool& Handled);
    void WidgetAction_CycleMenu(bool Next, bool& Handled);
    void WidgetAction_CycleCrafting(bool Next, bool& Handled);
    void WidgetAction_FaceTop(bool& Handled);
    void WidgetAction_DPadDirection(TEnumAsByte<E_NavigationDirection::Type> Direction, bool& Handled);
    void OnFollowPriorToSubscribeComplete(FModioErrorCode ErrorCode, FModioOptionalModCollectionInfo CollectionInfo);
    void OnSubscribeCompleteHandler(FModioErrorCode ErrorCode);
    void OnFollowAndSubscribe();
    void GetCollectionStatsWidget(TScriptInterface<class IModioUIDataSourceWidget>& Result);
    void OnGetModCollectionModsHandler(FModioModCollectionID CollectionID, FModioErrorCode ErrorCode, FModioOptionalModInfoList Mods);
    void OnFollowCollectionComplete(FModioErrorCode ErrorCode, FModioOptionalModCollectionInfo CollectionInfo);
    void OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void GetWidgetToFocus(EUINavigation NavigationType);
    void DoNavigationToDialog(EUINavigation Navigation);
    void On Fetch External Updates Complete(FModioErrorCode ErrorCode);
    void On Follow Only();
    void GetCollectionActionsDialogWidget();
    void GetCollectionModListWidget();
    void OnModDependenciesFetched(FModioErrorCode ErrorCode, FModioOptionalModDependencyList Dependencies);
    void OnDialogButtonClicked(int32 ButtonIndex);
    void OnSetDataSource(class UObject* InDataSource);
    void OnListModCollectionsRequestCompleted(FString RequestIdentifier, FModioErrorCode ErrorCode, FModioOptionalModCollectionInfoList List);
    void OnModCollectionInfoRequestCompleted(FModioModCollectionID ID, FModioErrorCode ErrorCode, FModioOptionalModCollectionInfo Info);
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
    void OnGetModCollectionModsRequestCompleted(const FModioModCollectionID& CollectionID, FModioErrorCode ErrorCode, FModioOptionalModInfoList Mods);
    void BndEvt__WBP_ModioDefaultModCollectionFollowDialog_FollowAndSubscribeBTN_K2Node_ComponentBoundEvent_1_ModioClickableOnClickedMulticast__DelegateSignature(class UObject* ClickContext);
    void ExecuteUbergraph_WBP_ModioDefaultModCollectionFollowDialog(int32 EntryPoint);
    void OnDialogCanceled__DelegateSignature();
    void OnFollowClicked__DelegateSignature();
}; // Size: 0x3C8

#endif
