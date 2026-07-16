#ifndef UE4SS_SDK_Soundscape_HPP
#define UE4SS_SDK_Soundscape_HPP

#include "Soundscape_enums.hpp"

struct FSoundscapeColorModulationSettings
{
    bool bRandomizeVolume;                                                            // 0x0000 (size: 0x1)
    float VolumeMin;                                                                  // 0x0004 (size: 0x4)
    float VolumeMax;                                                                  // 0x0008 (size: 0x4)
    bool bRandomizePitch;                                                             // 0x000C (size: 0x1)
    float PitchMin;                                                                   // 0x0010 (size: 0x4)
    float PitchMax;                                                                   // 0x0014 (size: 0x4)
    bool bFadeVolume;                                                                 // 0x0018 (size: 0x1)
    float MinFadeInTime;                                                              // 0x001C (size: 0x4)
    float MaxFadeInTime;                                                              // 0x0020 (size: 0x4)
    float MinFadeOutTime;                                                             // 0x0024 (size: 0x4)
    float MaxFadeOutTime;                                                             // 0x0028 (size: 0x4)
    bool bOnlyFadeInOnRetrigger;                                                      // 0x002C (size: 0x1)

}; // Size: 0x30

struct FSoundscapeColorPlaybackSettings
{
    bool bRandomizeStartingSeekTime;                                                  // 0x0000 (size: 0x1)
    bool bLimitPlaybackDuration;                                                      // 0x0001 (size: 0x1)
    float MinPlaybackDuration;                                                        // 0x0004 (size: 0x4)
    float MaxPlaybackDuration;                                                        // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FSoundscapeColorPoint
{
    FGameplayTag ColorPoint;                                                          // 0x0000 (size: 0x8)
    FVector Location;                                                                 // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FSoundscapeColorPointCollection
{
    TArray<FSoundscapeColorPointVectorArray> ColorPointCollection;                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FSoundscapeColorPointVectorArray
{
    FGameplayTag ColorPoint;                                                          // 0x0000 (size: 0x8)
    TArray<FVector> Locations;                                                        // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FSoundscapeColorSpawnSettings
{
    bool bDelayFirstSpawn;                                                            // 0x0000 (size: 0x1)
    float MinFirstSpawnDelay;                                                         // 0x0004 (size: 0x4)
    float MaxFirstSpawnDelay;                                                         // 0x0008 (size: 0x4)
    bool bContinuouslyRespawn;                                                        // 0x000C (size: 0x1)
    float MinSpawnDelay;                                                              // 0x0010 (size: 0x4)
    float MaxSpawnDelay;                                                              // 0x0014 (size: 0x4)
    int32 MaxNumberOfSpawnedElements;                                                 // 0x0018 (size: 0x4)
    float MinSpawnDistance;                                                           // 0x001C (size: 0x4)
    float MaxSpawnDistance;                                                           // 0x0020 (size: 0x4)
    bool bCullByMaxSpawnDistance;                                                     // 0x0024 (size: 0x1)
    float MinSpawnAngle;                                                              // 0x0028 (size: 0x4)
    float MaxSpawnAngle;                                                              // 0x002C (size: 0x4)
    bool bClampHeight;                                                                // 0x0030 (size: 0x1)
    ESoundscapeColorAltitudeClampMode ClampMode;                                      // 0x0031 (size: 0x1)
    float MinSpawnHeightClamp;                                                        // 0x0034 (size: 0x4)
    float MaxSpawnHeightClamp;                                                        // 0x0038 (size: 0x4)
    bool bRotateSoundSource;                                                          // 0x003C (size: 0x1)
    float MinAzimuthalRotationAngle;                                                  // 0x0040 (size: 0x4)
    float MaxAzimuthalRotationAngle;                                                  // 0x0044 (size: 0x4)
    float MinAltitudinalRotationAngle;                                                // 0x0048 (size: 0x4)
    float MaxAltitudinalRotationAngle;                                                // 0x004C (size: 0x4)
    bool bPositionByTrace;                                                            // 0x0050 (size: 0x1)
    FVector TraceVector;                                                              // 0x0058 (size: 0x18)
    float TraceDistance;                                                              // 0x0070 (size: 0x4)
    TEnumAsByte<ECollisionChannel> TraceChannel;                                      // 0x0074 (size: 0x1)
    bool bFilterByColorPointDensity;                                                  // 0x0075 (size: 0x1)
    FGameplayTag ColorPoint;                                                          // 0x0078 (size: 0x8)
    int32 MinColorPointNumber;                                                        // 0x0080 (size: 0x4)
    bool bIgnoreZAxisWhenCullingByMaxDistance;                                        // 0x0084 (size: 0x1)

}; // Size: 0x88

struct FSoundscapeColorVoiceParams
{
}; // Size: 0x40

struct FSoundscapePaletteCollection
{
    TSet<FSoftObjectPath> SoundscapePaletteCollection;                                // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FSoundscapePaletteCollectionLoaded
{
    TSet<USoundscapePalette*> SoundscapePaletteCollection;                            // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FSoundscapePaletteColor
{
    class USoundscapeColor* SoundscapeColor;                                          // 0x0000 (size: 0x8)
    float ColorVolume;                                                                // 0x0008 (size: 0x4)
    float ColorPitch;                                                                 // 0x000C (size: 0x4)
    float ColorFadeIn;                                                                // 0x0010 (size: 0x4)
    float ColorFadeOut;                                                               // 0x0014 (size: 0x4)

}; // Size: 0x18

class UActiveSoundscapeColor : public UObject
{
    class USoundBase* Sound;                                                          // 0x0028 (size: 0x8)
    FSoundscapeColorModulationSettings ModulationBehavior;                            // 0x0038 (size: 0x30)
    FSoundscapeColorPlaybackSettings PlaybackBehavior;                                // 0x0068 (size: 0xC)
    FSoundscapeColorSpawnSettings SpawnBehavior;                                      // 0x0078 (size: 0x88)
    TArray<class UActiveSoundscapeColorVoice*> SoundscapeColorVoicePool;              // 0x0178 (size: 0x10)

    void UpdateSoundscapeColor();
    void Stop(float ColorFadeOutTime);
    void Play(float ColorVolume, float ColorPitch, float ColorFadeInTime);
    bool IsPlaying();
}; // Size: 0x190

class UActiveSoundscapeColorVoice : public UObject
{
    class UAudioComponent* AudioComponent;                                            // 0x0028 (size: 0x8)
    FTimerHandle TimerHandle;                                                         // 0x0030 (size: 0x8)
    bool bFree;                                                                       // 0x0038 (size: 0x1)

    void StopLimitedDurationVoice(float FadeOutTime);
}; // Size: 0x40

class UActiveSoundscapePalette : public UObject
{
    class UWorld* World;                                                              // 0x0028 (size: 0x8)
    TArray<class UActiveSoundscapeColor*> ActiveSoundscapeColors;                     // 0x0030 (size: 0x10)

    void Stop();
    void Play();
}; // Size: 0x40

class USoundscapeBPFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool SpawnSoundscapePalette(class UObject* WorldContextObject, class USoundscapePalette* SoundscapePaletteIn, class UActiveSoundscapePalette*& SoundscapePaletteAgentsOut);
    bool SpawnSoundscapeColor(class UObject* WorldContextObject, class USoundscapeColor* SoundscapeColorIn, class UActiveSoundscapeColor*& ActiveSoundscapeColor);
}; // Size: 0x28

class USoundscapeColor : public UObject
{
    class USoundBase* Sound;                                                          // 0x0028 (size: 0x8)
    float VolumeBase;                                                                 // 0x0030 (size: 0x4)
    float PitchBase;                                                                  // 0x0034 (size: 0x4)
    FSoundscapeColorModulationSettings ModulationBehavior;                            // 0x0038 (size: 0x30)
    FSoundscapeColorPlaybackSettings PlaybackBehavior;                                // 0x0068 (size: 0xC)
    FSoundscapeColorSpawnSettings SpawnBehavior;                                      // 0x0078 (size: 0x88)

}; // Size: 0x100

class USoundscapeColorPointComponent : public UActorComponent
{
    FGameplayTag ColorPoint;                                                          // 0x00A8 (size: 0x8)

}; // Size: 0xB0

class USoundscapeColorPointHashCellDensity : public UObject
{
    TMap<uint64, int32> ColorPointHashCellDensity;                                    // 0x0028 (size: 0x50)

}; // Size: 0x78

class USoundscapeColorPointHashMap : public UObject
{
    TMap<class FGameplayTag, class USoundscapeColorPointHashCellDensity*> ColorPointHashMap; // 0x0028 (size: 0x50)
    float HashCellSize;                                                               // 0x0078 (size: 0x4)
    int32 GridWidth;                                                                  // 0x007C (size: 0x4)
    int64 NumCells;                                                                   // 0x0080 (size: 0x8)
    float HashCellFactor;                                                             // 0x0088 (size: 0x4)
    FVector GridCenter;                                                               // 0x0090 (size: 0x18)
    FVector GridOriginOffset;                                                         // 0x00A8 (size: 0x18)

    void SetGridCenterpoint(const FVector& Location);
    int32 NumColorPointsInCell(const FVector& Location, const FGameplayTag ColorPoint);
    void InitializeHash(float HashCellSizeIn, FVector GridCenterIn);
    void ClearHash();
    uint64 CalculateHashIndex(const FVector& Location);
    bool AddColorPointToHash(const FVector& Location, const FGameplayTag ColorPoint);
    void AddColorPointArrayToHash(const TArray<FVector>& Locations, const FGameplayTag ColorPoint);
}; // Size: 0xC0

class USoundscapeColorPointHashMapCollection : public UObject
{
    class USoundscapeColorPointHashMap* ColorPointHashMapLOD1;                        // 0x0028 (size: 0x8)
    class USoundscapeColorPointHashMap* ColorPointHashMapLOD2;                        // 0x0030 (size: 0x8)
    class USoundscapeColorPointHashMap* ColorPointHashMapLOD3;                        // 0x0038 (size: 0x8)
    float LOD1ColorPointHashWidth;                                                    // 0x0040 (size: 0x4)
    float LOD1ColorPointHashDistance;                                                 // 0x0044 (size: 0x4)
    float LOD2ColorPointHashWidth;                                                    // 0x0048 (size: 0x4)
    float LOD2ColorPointHashDistance;                                                 // 0x004C (size: 0x4)
    float LOD3ColorPointHashWidth;                                                    // 0x0050 (size: 0x4)

}; // Size: 0x58

class USoundscapePalette : public UObject
{
    FGameplayTagQuery SoundscapePalettePlaybackConditions;                            // 0x0028 (size: 0x48)
    TArray<FSoundscapePaletteColor> Colors;                                           // 0x0070 (size: 0x10)

}; // Size: 0x80

class USoundscapeSettings : public UDeveloperSettings
{
    TSet<FSoftObjectPath> SoundscapePaletteCollection;                                // 0x0038 (size: 0x50)
    bool bDebugDraw;                                                                  // 0x0088 (size: 0x1)
    float LOD1ColorPointHashWidth;                                                    // 0x008C (size: 0x4)
    float LOD1ColorPointHashDistance;                                                 // 0x0090 (size: 0x4)
    float LOD2ColorPointHashWidth;                                                    // 0x0094 (size: 0x4)
    float LOD2ColorPointHashDistance;                                                 // 0x0098 (size: 0x4)
    float LOD3ColorPointHashWidth;                                                    // 0x009C (size: 0x4)
    float ActiveColorPointHashWidth;                                                  // 0x00A0 (size: 0x4)
    float ActiveColorPointHashUpdateTimeSeconds;                                      // 0x00A4 (size: 0x4)

}; // Size: 0xA8

class USoundscapeSubsystem : public UGameInstanceSubsystem
{
    TSet<USoundscapePalette*> LoadedPaletteCollectionSet;                             // 0x0038 (size: 0x50)
    TMap<class FName, class FSoundscapePaletteCollection> UnloadedPaletteCollections; // 0x0088 (size: 0x50)
    TMap<class USoundscapePalette*, class UActiveSoundscapePalette*> ActivePalettes;  // 0x00F8 (size: 0x50)
    TArray<class USoundscapeColorPointHashMapCollection*> ColorPointHashMapCollections; // 0x0150 (size: 0x10)
    class USoundscapeColorPointHashMap* ColorPointHashMapLOD1;                        // 0x01C0 (size: 0x8)
    class USoundscapeColorPointHashMap* ColorPointHashMapLOD2;                        // 0x01C8 (size: 0x8)
    class USoundscapeColorPointHashMap* ColorPointHashMapLOD3;                        // 0x01D0 (size: 0x8)
    class USoundscapeColorPointHashMap* ActiveColorPointHashMap;                      // 0x01D8 (size: 0x8)

    void SetState(FGameplayTag SoundscapeState);
    void RestartSoundscape();
    bool RemovePaletteCollection(FName PaletteCollectionName);
    bool RemoveColorPointCollection(FName ColorPointCollectionName);
    void ClearState(FGameplayTag SoundscapeState);
    int32 CheckColorPointDensity(FVector Location, FGameplayTag ColorPoint);
    bool AddPaletteCollection(FName PaletteCollectionName, FSoundscapePaletteCollection PaletteCollection);
    void AddColorPointCollection(FName ColorPointCollectionName, FSoundscapeColorPointCollection ColorPointCollection);
}; // Size: 0x218

#endif
