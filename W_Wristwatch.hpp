#ifndef UE4SS_SDK_W_Wristwatch_HPP
#define UE4SS_SDK_W_Wristwatch_HPP

class UW_Wristwatch_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* AlarmIcon;                                                          // 0x02E8 (size: 0x8)
    class UTextBlock* AM_PM_Text;                                                     // 0x02F0 (size: 0x8)
    class UImage* BACKGROUND_DAY_COLOR;                                               // 0x02F8 (size: 0x8)
    class UImage* BACKGROUND_NIGHT_COLOR;                                             // 0x0300 (size: 0x8)
    class UImage* BGLines;                                                            // 0x0308 (size: 0x8)
    class UTextBlock* CalendarText;                                                   // 0x0310 (size: 0x8)
    class UImage* Compass_E;                                                          // 0x0318 (size: 0x8)
    class UImage* Compass_N;                                                          // 0x0320 (size: 0x8)
    class UImage* Compass_NE;                                                         // 0x0328 (size: 0x8)
    class UImage* Compass_NW;                                                         // 0x0330 (size: 0x8)
    class UImage* Compass_S;                                                          // 0x0338 (size: 0x8)
    class UImage* Compass_SE;                                                         // 0x0340 (size: 0x8)
    class UImage* Compass_SW;                                                         // 0x0348 (size: 0x8)
    class UImage* Compass_W;                                                          // 0x0350 (size: 0x8)
    class UImage* Day_Icon;                                                           // 0x0358 (size: 0x8)
    class UTextBlock* Daytime_Text;                                                   // 0x0360 (size: 0x8)
    class UImage* FridayDot;                                                          // 0x0368 (size: 0x8)
    class UTextBlock* HourText;                                                       // 0x0370 (size: 0x8)
    class UTextBlock* MinutesText;                                                    // 0x0378 (size: 0x8)
    class UImage* MondayDot;                                                          // 0x0380 (size: 0x8)
    class UImage* Night_Icon;                                                         // 0x0388 (size: 0x8)
    class UTextBlock* Night_Text;                                                     // 0x0390 (size: 0x8)
    class UImage* SaturdayDot;                                                        // 0x0398 (size: 0x8)
    class UImage* SundayDot;                                                          // 0x03A0 (size: 0x8)
    class UImage* TempDot;                                                            // 0x03A8 (size: 0x8)
    class UTextBlock* TemperatureText;                                                // 0x03B0 (size: 0x8)
    class UImage* ThursdayDot;                                                        // 0x03B8 (size: 0x8)
    class UImage* TuesdayDot;                                                         // 0x03C0 (size: 0x8)
    class UImage* WednesdayDot;                                                       // 0x03C8 (size: 0x8)
    class ADayNightManager_C* DayNightManager;                                        // 0x03D0 (size: 0x8)
    bool HourlyBeepsEnabled;                                                          // 0x03D8 (size: 0x1)
    int32 TargetTemperature;                                                          // 0x03DC (size: 0x4)
    int32 CurrentTemperature;                                                         // 0x03E0 (size: 0x4)
    bool TempUseCelsius;                                                              // 0x03E4 (size: 0x1)
    bool Use24Hour;                                                                   // 0x03E5 (size: 0x1)

    void UpdateDay(int32 DayNumber);
    void SetCurrentMinutesDisplay(int32 Minutes);
    void ChangeDayNightMode(bool Night);
    void Construct();
    void HourlyBeep(int32 NewHour, int32 PreviousHour);
    void ToggleHourlyBeeps(bool Enable);
    void UpdateWatchface(double TimeInSeconds);
    void NightfallAlarm();
    void DaybreakAlarm();
    void UpdateTemperatureText(double TemperatureFareinheit);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void TemperatureCelsiusCallback(bool NewValue);
    void Use24HourCallback(bool NewValue);
    void ExecuteUbergraph_W_Wristwatch(int32 EntryPoint);
}; // Size: 0x3E6

#endif
