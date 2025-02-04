#ifndef UE4SS_SDK_DayNightManager_HPP
#define UE4SS_SDK_DayNightManager_HPP

class ADayNightManager_C : public AAbioticActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)
    class UBillboardComponent* Billboard1;                                            // 0x02D0 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x02D8 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x02E0 (size: 0x8)
    int32 DefaultStartingHour;                                                        // 0x02E8 (size: 0x4)
    int32 MorningStartHour;                                                           // 0x02EC (size: 0x4)
    int32 NightfallStartHour;                                                         // 0x02F0 (size: 0x4)
    int32 AssaultCheckHour;                                                           // 0x02F4 (size: 0x4)
    int32 WeatherCheckHour;                                                           // 0x02F8 (size: 0x4)
    double CurrentTimeInSeconds;                                                      // 0x0300 (size: 0x8)
    FTimerHandle DayNightTimer;                                                       // 0x0308 (size: 0x8)
    double 24HoursInSeconds;                                                          // 0x0310 (size: 0x8)
    double SecondsPerRealSecond_Day;                                                  // 0x0318 (size: 0x8)
    double DoNotModify!DayNightTickRate;                                              // 0x0320 (size: 0x8)
    int32 CurrentDay;                                                                 // 0x0328 (size: 0x4)
    bool IsNight;                                                                     // 0x032C (size: 0x1)
    FDayNightManager_CNightfall Nightfall;                                            // 0x0330 (size: 0x10)
    void Nightfall();
    FDayNightManager_CNewDay NewDay;                                                  // 0x0340 (size: 0x10)
    void NewDay(int32 DayNumber);
    FDayNightManager_CMorning Morning;                                                // 0x0350 (size: 0x10)
    void Morning();
    int32 LastKnownHour;                                                              // 0x0360 (size: 0x4)
    FDayNightManager_CTimeChanged TimeChanged;                                        // 0x0368 (size: 0x10)
    void TimeChanged(double TimeInSeconds);
    FDayNightManager_CHourChanged HourChanged;                                        // 0x0378 (size: 0x10)
    void HourChanged(int32 NewHour, int32 PreviousHour);
    double SecondsPerRealSecond_Night;                                                // 0x0388 (size: 0x8)
    TArray<TSoftObjectPtr<UDialogueWave>> Announcement Sounds in Order;               // 0x0390 (size: 0x10)
    int32 CurrentAnnouncementIndex;                                                   // 0x03A0 (size: 0x4)
    FTimerHandle NextAnnouncementLineTimer;                                           // 0x03A8 (size: 0x8)
    int32 AmbientTemperature_Day;                                                     // 0x03B0 (size: 0x4)
    int32 AmbientTemperature_Night;                                                   // 0x03B4 (size: 0x4)
    FVector AnnouncementLocationOffset;                                               // 0x03B8 (size: 0x18)
    TArray<FDataTableRowHandle> CurrentAnnouncementJournals;                          // 0x03D0 (size: 0x10)
    FTimerHandle AutosaveTimer;                                                       // 0x03E0 (size: 0x8)
    class UAudioComponent* LastAnnouncementSound;                                     // 0x03E8 (size: 0x8)
    bool HavePlayersLeftStartingZone;                                                 // 0x03F0 (size: 0x1)
    int32 LastAssaultDay;                                                             // 0x03F4 (size: 0x4)
    bool IsAssaultDay;                                                                // 0x03F8 (size: 0x1)
    int32 SleepingPlayers;                                                            // 0x03FC (size: 0x4)
    class AAbiotic_Survival_GameState_C* GameState;                                   // 0x0400 (size: 0x8)
    FDayNightManager_COnSleepingPlayersUpdated OnSleepingPlayersUpdated;              // 0x0408 (size: 0x10)
    void OnSleepingPlayersUpdated(int32 TotalPlayersSleeping);
    FDayNightManager_CSleepState_Changed SleepState_Changed;                          // 0x0418 (size: 0x10)
    void SleepState_Changed(class AAbiotic_Character_ParentBP_C* InteractingPlayer);
    FDayNightManager_CAssaultCheckTime AssaultCheckTime;                              // 0x0428 (size: 0x10)
    void AssaultCheckTime();
    int32 LastWeatherDay;                                                             // 0x0438 (size: 0x4)
    FName CurrentWeatherEvent;                                                        // 0x043C (size: 0x8)
    FDayNightManager_CWeatherEventUpdated WeatherEventUpdated;                        // 0x0448 (size: 0x10)
    void WeatherEventUpdated(FName NewWeatherEvent);
    int32 RequiredDaysBetweenWeather;                                                 // 0x0458 (size: 0x4)
    double TimeLastAutoSaved;                                                         // 0x0460 (size: 0x8)
    class AWeatherDirector* ActiveWeatherDirector;                                    // 0x0468 (size: 0x8)
    double ActiveAmbientRadiation;                                                    // 0x0470 (size: 0x8)
    TArray<FCompendiumEntryRowHandle> CurrentAnnouncementCompendium;                  // 0x0478 (size: 0x10)
    FWeatherEventRowHandle Weather_RequestByPlayer;                                   // 0x0488 (size: 0x20)
    FText CurrentAnnouncerName;                                                       // 0x04A8 (size: 0x10)

    void ClearActiveWeatherRequests();
    void CheckForWeatherRequest(bool& Requested);
    void VentWeatherFXToAllPlayers();
    void CheckForForcedWeatherType(FWeatherEventRowHandle& SpecialWeather);
    void IsCurrentlyDaytime(bool& IsDaytime);
    void SetNewWeatherDirector(TSubclassOf<class AWeatherDirector> NewDirector);
    void Check for Weather Event();
    void TriggerWeatherEvent(FWeatherEventRowHandle EventRow);
    void OnRep_CurrentWeatherEvent();
    void OnRep_SleepingPlayers();
    float GetClockSpeed();
    double Get in Game Time Dilation Factor();
    void UpdateLastAssaultDay(bool AssaultFinished);
    void CheckForVignetteResets();
    void CheckPlayersLeftStartingZone(bool& LeftZone);
    void Toggle Day Night Cycle(bool Pause);
    void SetFacilityWideAmbientTemperature();
    void GetCurrentAmbientTemperature(int32& Temperature);
    bool TimeForMorningAnnouncement(int32 Hour, int32 Minute);
    bool TimeForEveningAnnouncement(int32 Hour, int32 Minute);
    void OnRep_IsNight();
    void OnRep_LastKnownHour();
    void OnRep_CurrentDay();
    void OnRep_CurrentTimeInSeconds();
    void OnLoaded_AE9F8DCF4F024AF74FCA2EB76E56351A(class UObject* Loaded);
    void ReceiveBeginPlay();
    void ProgressClock();
    void Broadcast_BeginPlayAnnouncement(TEnumAsByte<E_AnnouncementType::Type> AnnounceType, FName CustomOverrideRow);
    void PlayNextAnnouncementLine();
    void InitDayNightTimer();
    void TryWorldAutosave();
    void StartAutosaveTimer();
    void SleepState_Changed_Event(class AAbiotic_Character_ParentBP_C* InteractingPlayer);
    void ExecuteUbergraph_DayNightManager(int32 EntryPoint);
    void WeatherEventUpdated__DelegateSignature(FName NewWeatherEvent);
    void AssaultCheckTime__DelegateSignature();
    void SleepState_Changed__DelegateSignature(class AAbiotic_Character_ParentBP_C* InteractingPlayer);
    void OnSleepingPlayersUpdated__DelegateSignature(int32 TotalPlayersSleeping);
    void HourChanged__DelegateSignature(int32 NewHour, int32 PreviousHour);
    void TimeChanged__DelegateSignature(double TimeInSeconds);
    void Morning__DelegateSignature();
    void NewDay__DelegateSignature(int32 DayNumber);
    void Nightfall__DelegateSignature();
}; // Size: 0x4B8

#endif
