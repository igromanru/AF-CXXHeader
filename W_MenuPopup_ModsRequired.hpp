#ifndef UE4SS_SDK_W_MenuPopup_ModsRequired_HPP
#define UE4SS_SDK_W_MenuPopup_ModsRequired_HPP

class UW_MenuPopup_ModsRequired_C : public UModioUIComponentBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UBackgroundBlur* BackgroundBlur_87;                                         // 0x0350 (size: 0x8)
    class UModioDefaultBorder* BottomBarBackground;                                   // 0x0358 (size: 0x8)
    class UModioDefaultTextBlock* ColActionsConfirmTextBlock;                         // 0x0360 (size: 0x8)
    class UWBP_ModioDefaultModalDialogImpl_C* CollectionActionsDialogImpl;            // 0x0368 (size: 0x8)
    class UWBP_ModioDefaultSpecialButton_C* FollowAndSubscribeBTN;                    // 0x0370 (size: 0x8)
    class UCircularThrobber* LoadingThrobber;                                         // 0x0378 (size: 0x8)
    class UScrollBox* ModCollectionActionsScrollBox;                                  // 0x0380 (size: 0x8)
    class UWBP_ModioDefaultModCollectionModList_C* ModDependencyList;                 // 0x0388 (size: 0x8)
    class UModioDefaultTextBlock* ProgressTextBlock;                                  // 0x0390 (size: 0x8)
    FW_MenuPopup_ModsRequired_COnFollowClicked OnFollowClicked;                       // 0x0398 (size: 0x10)
    void OnFollowClicked();
    FW_MenuPopup_ModsRequired_COnDialogCanceled OnDialogCanceled;                     // 0x03A8 (size: 0x10)
    void OnDialogCanceled();
    FLinearColorRef TotalBackgroundColor;                                             // 0x03B8 (size: 0x18)
    FModioModID CurrentModID;                                                         // 0x03D0 (size: 0x8)
    double TargetModDependencyListScrollOffset;                                       // 0x03D8 (size: 0x8)
    FModioUnsigned64 TotalSizeToInstall;                                              // 0x03E0 (size: 0x8)
    TArray<FModioModID> ModList;                                                      // 0x03E8 (size: 0x10)
    bool ModListIsDownload;                                                           // 0x03F8 (size: 0x1)
    TArray<int64> SessionLoadOrder;                                                   // 0x0400 (size: 0x10)
    FW_MenuPopup_ModsRequired_CModsSuccess ModsSuccess;                               // 0x0410 (size: 0x10)
    void ModsSuccess(TArray<int64>& LoadOrder);
    FText TextTitle;                                                                  // 0x0420 (size: 0x10)
    FText TextMain;                                                                   // 0x0430 (size: 0x10)
    FText TextYes;                                                                    // 0x0440 (size: 0x10)
    FText TextNo;                                                                     // 0x0450 (size: 0x10)
    TArray<FModioModID> ModListToDisplay;                                             // 0x0460 (size: 0x10)

    void WidgetAction_CloseMenu(bool& Handled);
    void WidgetAction_CycleMenu(bool Next, bool& Handled);
    void WidgetAction_CycleCrafting(bool Next, bool& Handled);
    void WidgetAction_FaceTop(bool& Handled);
    void WidgetAction_DPadDirection(TEnumAsByte<E_NavigationDirection::Type> Direction, bool& Handled);
    void OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void GetWidgetToFocus(EUINavigation NavigationType);
    void DoNavigationToDialog(EUINavigation Navigation);
    void OnModDependenciesFetched(FModioErrorCode ErrorCode, FModioOptionalModDependencyList Dependencies);
    void OnDialogButtonClicked(int32 ButtonIndex);
    void OnCancelled_FA7683E442B85B5FCD01D8B5FE240C7A(const TArray<FModioModID>& Mods, int32 InstalledCount, int32 TotalCount, FString Reason);
    void OnFailure_FA7683E442B85B5FCD01D8B5FE240C7A(const TArray<FModioModID>& Mods, int32 InstalledCount, int32 TotalCount, FString Reason);
    void OnProgress_FA7683E442B85B5FCD01D8B5FE240C7A(const TArray<FModioModID>& Mods, int32 InstalledCount, int32 TotalCount, FString Reason);
    void OnSuccess_FA7683E442B85B5FCD01D8B5FE240C7A(const TArray<FModioModID>& Mods, int32 InstalledCount, int32 TotalCount, FString Reason);
    void OnListModCollectionsRequestCompleted(FString RequestIdentifier, FModioErrorCode ErrorCode, FModioOptionalModCollectionInfoList List);
    void OnModCollectionInfoRequestCompleted(FModioModCollectionID ID, FModioErrorCode ErrorCode, FModioOptionalModCollectionInfo Info);
    void AddDialogButtonClickedHandler(const FAddDialogButtonClickedHandlerHandler& Handler);
    void AddDialogShownHandler(const FAddDialogShownHandlerHandler& Handler);
    void CloseModal();
    void RemoveDialogButtonClickedHandler(const FRemoveDialogButtonClickedHandlerHandler& Handler);
    void RemoveDialogShownHandler(const FRemoveDialogShownHandlerHandler& Handler);
    void ShowModal(bool bFocusCancelButton);
    void PreConstruct(bool IsDesignTime);
    void AddDialogConfirmedHandler(const FAddDialogConfirmedHandlerHandler& Handler);
    void AddDialogCanceledHandler(const FAddDialogCanceledHandlerHandler& Handler);
    void RemoveDialogConfirmedHandler(const FRemoveDialogConfirmedHandlerHandler& Handler);
    void RemoveDialogCanceledHandler(const FRemoveDialogCanceledHandlerHandler& Handler);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnGetModCollectionModsRequestCompleted(const FModioModCollectionID& CollectionID, FModioErrorCode ErrorCode, FModioOptionalModInfoList Mods);
    void BndEvt__WBP_ModioDefaultModCollectionFollowDialog_FollowAndSubscribeBTN_K2Node_ComponentBoundEvent_1_ModioClickableOnClickedMulticast__DelegateSignature(class UObject* ClickContext);
    void CustomEvent(FModioErrorCode ErrorCode, FModioOptionalModInfoList Result);
    void ForceCancelDirectConnectModDownloads();
    void OnProgress_Event(const TArray<FModioModID>& Mods, int32 InstalledCount, int32 TotalCount, FString Reason);
    void Construct();
    void Destruct();
    void ExecuteUbergraph_W_MenuPopup_ModsRequired(int32 EntryPoint);
    void ModsSuccess__DelegateSignature(TArray<int64>& LoadOrder);
    void OnDialogCanceled__DelegateSignature();
    void OnFollowClicked__DelegateSignature();
}; // Size: 0x470

#endif
