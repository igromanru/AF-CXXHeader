#ifndef UE4SS_SDK_W_HUD_PlayerList_Main_HPP
#define UE4SS_SDK_W_HUD_PlayerList_Main_HPP

class UW_HUD_PlayerList_Main_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* Autosave_Text;                                                  // 0x02E8 (size: 0x8)
    class UTextBlock* FPS_text;                                                       // 0x02F0 (size: 0x8)
    class UTextBlock* Host_Text;                                                      // 0x02F8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0300 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0308 (size: 0x8)
    class UTextBlock* Ping_Text;                                                      // 0x0310 (size: 0x8)
    class UScrollBox* ScrollBox_PlayerList;                                           // 0x0318 (size: 0x8)
    class UTextBlock* Uptime_Text;                                                    // 0x0320 (size: 0x8)
    class UW_HUD_PlayerListRow_C* W_HUD_PlayerListRow;                                // 0x0328 (size: 0x8)
    class UW_Keybind_C* W_Keybind;                                                    // 0x0330 (size: 0x8)
    class UTextBlock* WorldSave_Text;                                                 // 0x0338 (size: 0x8)
    double LastFPS;                                                                   // 0x0340 (size: 0x8)
    double LastWorldDeltaSeconds;                                                     // 0x0348 (size: 0x8)

    void Construct();
    void RefreshPlayerList();
    void UpdateValues();
    void ExecuteUbergraph_W_HUD_PlayerList_Main(int32 EntryPoint);
}; // Size: 0x350

#endif
