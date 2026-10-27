#ifndef UE4SS_SDK_WBP_ModioDefaultReportContentDialog_HPP
#define UE4SS_SDK_WBP_ModioDefaultReportContentDialog_HPP

class UWBP_ModioDefaultReportContentDialog_C : public UModioUIComponentBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UWBP_ModioDefaultButton_C* BackButton;                                      // 0x0350 (size: 0x8)
    class UWBP_ModioDefaultButton_C* CancelButton;                                    // 0x0358 (size: 0x8)
    class UWBP_ModioDefaultButton_C* CancelButton_1;                                  // 0x0360 (size: 0x8)
    class UWidgetSwitcher* DialogSwitcher;                                            // 0x0368 (size: 0x8)
    class UModioDefaultEditableTextBox* EmailAddressEditableTextBox;                  // 0x0370 (size: 0x8)
    class UModioDefaultTextBlock* ErrorText;                                          // 0x0378 (size: 0x8)
    class UButton* InvisibleFocusButton;                                              // 0x0380 (size: 0x8)
    class UModioDefaultImage* ModLogoImage;                                           // 0x0388 (size: 0x8)
    class UModioDefaultTextBlock* ModNameLabel;                                       // 0x0390 (size: 0x8)
    class UModioDefaultMultiLineEditableTextBox* ReportDetailsEditableTextBox;        // 0x0398 (size: 0x8)
    class UWBP_ModioDefaultEnumSelectorMenu_C* ReportReasonSelector;                  // 0x03A0 (size: 0x8)
    class UWBP_ModioDefaultButton_C* SubmitButton;                                    // 0x03A8 (size: 0x8)
    class UModioDefaultTextBlock* VersionLabelTextBlock;                              // 0x03B0 (size: 0x8)
    class UModioDefaultTextBlock* VersionNumberTextBlock;                             // 0x03B8 (size: 0x8)
    FSlateBrush LoadingCog;                                                           // 0x03C0 (size: 0xD0)

    void WidgetAction_CloseMenu(bool& Handled);
    void WidgetAction_CycleMenu(bool Next, bool& Handled);
    void WidgetAction_CycleCrafting(bool Next, bool& Handled);
    void WidgetAction_FaceTop(bool& Handled);
    void WidgetAction_DPadDirection(TEnumAsByte<E_NavigationDirection::Type> Direction, bool& Handled);
    void GetInvisibleFocusButtonWidget();
    void GetErrorTextWidget();
    void UpdateSubmitButtonEnabledState();
    void ValidateReportContent();
    void OnEmailEntryTextChanged(class UObject* Context, const FText& Text);
    void GetWidgetToFocus(EUINavigation NavigationType);
    void TransitionToDetailsView();
    void GetVersionLabelTextBlockWidget(TScriptInterface<class IModioUIHasTextWidget>& TextWidget);
    void SetVersionInfoVisibility(ESlateVisibility NewVisibility);
    void GetDialogSwitcherWidget(class UWidgetSwitcher*& NewParam);
    void GetVersionNumberTextBlock(TScriptInterface<class IModioUIHasTextWidget>& VersionNumber);
    void ReportSubmissionCompleteHandler(FModioErrorCode ErrorCode);
    void OnReportReasonSelectionChanged(class UObject* SelectedValue);
    void OnReportDetailsTextChanged(class UObject* Context, const FText& Text);
    void GetEmailAddressEditableTextBoxWidget(TScriptInterface<class IModioUIStringInputWidget>& EmailAddressEditableTextBox);
    void GetReportDetailsEditableTextBoxWidget(TScriptInterface<class IModioUIStringInputWidget>& ReportDetailsEditableTextBox);
    void GetSubmitButtonWidget();
    void GetCancelButtonWidget();
    void GetBackButtonWidget();
    void GetModLogoImage(TScriptInterface<class IModioUIImageDisplayWidget>& LabelWidget);
    void GetModNameLabelWidget();
    void GetReportReasonSelectorWidget();
    void OnBackButtonClicked(class UObject* ClickContext);
    void BP_OnHandleBackAction();
    void CancelReportDialog(class UObject* ClickContext);
    void InitializeReportContentDialog();
    void ReturnToReasonSelect();
    void OnSubmitClicked(class UObject* ClickContext);
    void DisplayLoadingCog();
    void LogoDownloadCompletedHandler(FModioModID ModId, FModioErrorCode ErrorCode, FModioOptionalImage ImageOptional, EModioLogoSize LogoSize);
    void OnSetDataSource(class UObject* InDataSource);
    void OnModCollectionCuratorAvatarDownloadCompleted(FModioModCollectionID ModCollectionId, FModioErrorCode ErrorCode, FModioOptionalImage Image);
    void OnModCollectionLogoDownloadCompleted(FModioModCollectionID ModCollectionId, FModioErrorCode ErrorCode, FModioOptionalImage Image, EModioLogoSize LogoSize);
    void OnModCreatorAvatarDownloadCompleted(FModioModID ModId, FModioErrorCode ErrorCode, FModioOptionalImage Image);
    void OnModGalleryImageDownloadCompleted(FModioModID ModId, FModioErrorCode ErrorCode, int32 ImageIndex, FModioOptionalImage Image);
    void PreConstruct(bool IsDesignTime);
    void SetDataSource(class UObject* InDataSource);
    void OnModLogoDownloadCompleted(FModioModID ModId, FModioErrorCode ErrorCode, FModioOptionalImage Image, EModioLogoSize LogoSize);
    void ExecuteUbergraph_WBP_ModioDefaultReportContentDialog(int32 EntryPoint);
}; // Size: 0x490

#endif
