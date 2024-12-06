#ifndef UE4SS_SDK_W_HUD_SleepingPlayers_HPP
#define UE4SS_SDK_W_HUD_SleepingPlayers_HPP

class UW_HUD_SleepingPlayers_C : public UAbioticWidget
{
    class UImage* Img_Bed;                                                            // 0x02E0 (size: 0x8)
    class UImage* Img_FF;                                                             // 0x02E8 (size: 0x8)
    class UTextBlock* SpeedCountText;                                                 // 0x02F0 (size: 0x8)

    void UpdateSleepingPlayersState(bool ShowWidget, int32 EepyScientistCounter);
}; // Size: 0x2F8

#endif
