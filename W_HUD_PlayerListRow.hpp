#ifndef UE4SS_SDK_W_HUD_PlayerListRow_HPP
#define UE4SS_SDK_W_HUD_PlayerListRow_HPP

class UW_HUD_PlayerListRow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* BanButtonText;                                                  // 0x02E8 (size: 0x8)
    class UTextBlock* BlockButtonText;                                                // 0x02F0 (size: 0x8)
    class UButton* Button_Ban;                                                        // 0x02F8 (size: 0x8)
    class UButton* Button_Block;                                                      // 0x0300 (size: 0x8)
    class UButton* Button_Kick;                                                       // 0x0308 (size: 0x8)
    class UButton* Button_Mute;                                                       // 0x0310 (size: 0x8)
    class UButton* Button_Profile;                                                    // 0x0318 (size: 0x8)
    class UButton* Button_Report;                                                     // 0x0320 (size: 0x8)
    class UImage* Image;                                                              // 0x0328 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0330 (size: 0x8)
    class UTextBlock* KickButtonText;                                                 // 0x0338 (size: 0x8)
    class UTextBlock* MuteButtonText;                                                 // 0x0340 (size: 0x8)
    class UTextBlock* Name;                                                           // 0x0348 (size: 0x8)
    class UImage* PlatformIcon;                                                       // 0x0350 (size: 0x8)
    class UTextBlock* ProfileButtonText;                                              // 0x0358 (size: 0x8)
    class UTextBlock* ReportButtonText;                                               // 0x0360 (size: 0x8)
    class UTextBlock* StatusText;                                                     // 0x0368 (size: 0x8)
    class UTextBlock* UniquePlayerID;                                                 // 0x0370 (size: 0x8)
    class AAbiotic_PlayerState_C* PlayerState;                                        // 0x0378 (size: 0x8)
    TEnumAsByte<E_PlayerListViewType::Type> ListType;                                 // 0x0380 (size: 0x1)
    FString BannedPlayerName;                                                         // 0x0388 (size: 0x10)
    FString BannedPlayerID;                                                           // 0x0398 (size: 0x10)
    bool NoInteraction;                                                               // 0x03A8 (size: 0x1)
    FAbioticBlockedPlayer SavedPlayerInfo;                                            // 0x03B0 (size: 0x20)
    TEnumAsByte<EAbioticPlatform> Platform;                                           // 0x03D0 (size: 0x1)
    bool HasPlayerState;                                                              // 0x03D1 (size: 0x1)
    FW_HUD_PlayerListRow_CRefreshRequested RefreshRequested;                          // 0x03D8 (size: 0x10)
    void RefreshRequested();

    void ConvertUniqueID(FString& InStr, FString& OutStr);
    void UpdateButtonVisibility(bool Mute, bool bLock, bool Report, bool Ban, bool Kick);
    FString GetNameString();
    FString GetUniqueIDString();
    void BndEvt__W_HUD_PlayerListRow_Button_Profile_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_HUD_PlayerListRow_Button_Mute_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_HUD_PlayerListRow_Button_Report_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_HUD_PlayerListRow_Button_Block_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__W_HUD_PlayerListRow_Button_Ban_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void UpdateButtonStates();
    void RefreshRow();
    void UpdatePing();
    void BndEvt__W_HUD_PlayerListRow_Button_Kick_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_W_HUD_PlayerListRow(int32 EntryPoint);
    void RefreshRequested__DelegateSignature();
}; // Size: 0x3E8

#endif
