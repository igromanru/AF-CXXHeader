#ifndef UE4SS_SDK_SoundCueTemplates_HPP
#define UE4SS_SDK_SoundCueTemplates_HPP

#include "SoundCueTemplates_enums.hpp"

struct FSoundCueCrossfadeInfo
{
    FDistanceDatum DistanceInfo;                                                      // 0x0000 (size: 0x14)
    class USoundWave* Sound;                                                          // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FSoundCueTemplateQualitySettings
{
    FText DisplayName;                                                                // 0x0000 (size: 0x10)
    int32 MaxConcatenatedVariations;                                                  // 0x0010 (size: 0x4)
    int32 MaxRandomizedVariations;                                                    // 0x0014 (size: 0x4)
    int32 MaxMixVariations;                                                           // 0x0018 (size: 0x4)

}; // Size: 0x20

class USoundCueContainer : public USoundCueTemplate
{
}; // Size: 0x560

class USoundCueDistanceCrossfade : public USoundCueTemplate
{
}; // Size: 0x560

class USoundCueTemplate : public USoundCue
{
}; // Size: 0x560

class USoundCueTemplateSettings : public UDeveloperSettings
{
}; // Size: 0x38

#endif
