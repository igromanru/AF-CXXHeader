#ifndef UE4SS_SDK_W_HUD_PlayerListRow_HPP
#define UE4SS_SDK_W_HUD_PlayerListRow_HPP

class UW_HUD_PlayerListRow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* BanButtonText;                                                  // 0x02E8 (size: 0x8)
    class UButton* Button_Ban;                                                        // 0x02F0 (size: 0x8)
    class UButton* Button_Kick;                                                       // 0x02F8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0300 (size: 0x8)
    class UTextBlock* KickButtonText;                                                 // 0x0308 (size: 0x8)
    class UTextBlock* Name;                                                           // 0x0310 (size: 0x8)
    class UTextBlock* StatusText;                                                     // 0x0318 (size: 0x8)
    class UTextBlock* UniquePlayerID;                                                 // 0x0320 (size: 0x8)
    class AAbiotic_PlayerState_C* PlayerState;                                        // 0x0328 (size: 0x8)
    TEnumAsByte<E_PlayerListViewType::Type> ListType;                                 // 0x0330 (size: 0x1)
    FString BannedPlayerName;                                                         // 0x0338 (size: 0x10)
    FString BannedPlayerID;                                                           // 0x0348 (size: 0x10)
    bool NoInteraction;                                                               // 0x0358 (size: 0x1)

    void RefreshRow();
    void UpdatePing();
    void BndEvt__W_HUD_PlayerListRow_Button_Kick_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_HUD_PlayerListRow_Button_Ban_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_W_HUD_PlayerListRow(int32 EntryPoint);
}; // Size: 0x359

#endif
