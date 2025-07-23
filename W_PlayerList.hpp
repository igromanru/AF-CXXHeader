#ifndef UE4SS_SDK_W_PlayerList_HPP
#define UE4SS_SDK_W_PlayerList_HPP

class UW_PlayerList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02E8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02F0 (size: 0x8)
    class UScrollBox* ScrollBox_PlayerList;                                           // 0x02F8 (size: 0x8)
    class UTextBlock* Title_ID;                                                       // 0x0300 (size: 0x8)
    class UTextBlock* Title_Ping;                                                     // 0x0308 (size: 0x8)
    class UTextBlock* Title_Players;                                                  // 0x0310 (size: 0x8)
    class UW_HUD_PlayerListRow_C* W_HUD_PlayerListRow;                                // 0x0318 (size: 0x8)
    double LastFPS;                                                                   // 0x0320 (size: 0x8)
    double LastWorldDeltaSeconds;                                                     // 0x0328 (size: 0x8)
    TEnumAsByte<E_PlayerListViewType::Type> List Type;                                // 0x0330 (size: 0x1)
    float RefreshFrequency;                                                           // 0x0334 (size: 0x4)
    TArray<FString> LastBannedPlayerList;                                             // 0x0338 (size: 0x10)
    TArray<FAbioticBlockedPlayer> LastBlockedPlayerList;                              // 0x0348 (size: 0x10)
    bool PlatformBlockListLoaded;                                                     // 0x0358 (size: 0x1)

    void Construct();
    void RefreshPlayerList();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void OnPlatformBlockListLoaded();
    void ExecuteUbergraph_W_PlayerList(int32 EntryPoint);
}; // Size: 0x359

#endif
