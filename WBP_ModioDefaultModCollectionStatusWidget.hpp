#ifndef UE4SS_SDK_WBP_ModioDefaultModCollectionStatusWidget_HPP
#define UE4SS_SDK_WBP_ModioDefaultModCollectionStatusWidget_HPP

class UWBP_ModioDefaultModCollectionStatusWidget_C : public UModioModCollectionStatusWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)
    class UModioDefaultBorder* BackgroundBorder;                                      // 0x0388 (size: 0x8)
    class UModioDefaultImage* StatusIconWidget;                                       // 0x0390 (size: 0x8)
    class UModioDefaultTextBlock* StatusLabelWidget;                                  // 0x0398 (size: 0x8)
    bool bDisplayStatusText;                                                          // 0x03A0 (size: 0x1)
    FLinearColorRef NotFollowedBackgroundColor;                                       // 0x03A4 (size: 0x18)
    FLinearColorRef FollowedBackgroundColor;                                          // 0x03BC (size: 0x18)
    FLinearColorRef FollowedIconColor;                                                // 0x03D4 (size: 0x18)
    FLinearColorRef IncompleteIconColor;                                              // 0x03EC (size: 0x18)
    FLinearColorRef NotFollowedTextColor;                                             // 0x0404 (size: 0x18)
    FLinearColorRef NotFollowedIconColor;                                             // 0x041C (size: 0x18)
    FLinearColorRef SubscribedTextColor;                                              // 0x0434 (size: 0x18)
    FLinearColorRef IncompleteTextColor;                                              // 0x044C (size: 0x18)
    FLinearColorRef SubscribedIconColor;                                              // 0x0464 (size: 0x18)
    FLinearColorRef FollowedTextColor;                                                // 0x047C (size: 0x18)
    FLinearColorRef IncompleteBackgroundColor;                                        // 0x0494 (size: 0x18)
    FLinearColorRef SubscribedBackgroundColor;                                        // 0x04AC (size: 0x18)
    FText SubscribedText;                                                             // 0x04C8 (size: 0x10)
    FText IncompleteText;                                                             // 0x04D8 (size: 0x10)
    FText FollowedText;                                                               // 0x04E8 (size: 0x10)
    FSlateBrush IncompleteIcon;                                                       // 0x0500 (size: 0xD0)
    FSlateBrush NotFollowedIcon;                                                      // 0x05D0 (size: 0xD0)
    FSlateBrush SubscribedIcon;                                                       // 0x06A0 (size: 0xD0)
    FSlateBrush FollowedIcon;                                                         // 0x0770 (size: 0xD0)
    FText NotFollowedText;                                                            // 0x0840 (size: 0x10)

    void OnIsFollowingCollectionComplete(FModioErrorCode ErrorCode, bool bIsCollectionFollowed);
    void UpdateStateVisuals();
    void UpdateIcon(EModioModCollectionState NewState);
    void UpdateLabelText(EModioModCollectionState NewState);
    void UpdateSubWidgetColors(EModioModCollectionState NewState);
    void UpdateVisibility(EModioModCollectionState NewState);
    void GetBackgroundBorderWidget(TScriptInterface<class IModioUIHasConfigurableColor>& BackgroundBorder);
    void GetStatusIconWidget();
    void GetStatusTextWidget();
    void ApplyTextVisibilityOverride();
    void OnCollectionFollowStateChanged(FModioModCollectionID ModCollectionId, bool bNewFollowState);
    void SetDataSource(class UObject* InDataSource);
    void Construct();
    void ExecuteUbergraph_WBP_ModioDefaultModCollectionStatusWidget(int32 EntryPoint);
}; // Size: 0x850

#endif
