#ifndef UE4SS_SDK_WeatherDirector_ParentBP_HPP
#define UE4SS_SDK_WeatherDirector_ParentBP_HPP

class AWeatherDirector_ParentBP_C : public AWeatherDirector
{
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)

    void GetPlayersInFacility(TArray<class AAbiotic_PlayerCharacter_C*>& OutPlayers);
}; // Size: 0x2A0

#endif
