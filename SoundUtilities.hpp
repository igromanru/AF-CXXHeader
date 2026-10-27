#ifndef UE4SS_SDK_SoundUtilities_HPP
#define UE4SS_SDK_SoundUtilities_HPP

struct FSoundVariation
{
    class USoundWave* SoundWave;                                                      // 0x0000 (size: 0x8)
    float ProbabilityWeight;                                                          // 0x0008 (size: 0x4)
    FVector2D VolumeRange;                                                            // 0x0010 (size: 0x10)
    FVector2D PitchRange;                                                             // 0x0020 (size: 0x10)

}; // Size: 0x30

class USoundSimple : public USoundBase
{
    TArray<FSoundVariation> Variations;                                               // 0x0168 (size: 0x10)
    class USoundWave* SoundWave;                                                      // 0x0178 (size: 0x8)

}; // Size: 0x180

class USoundUtilitiesBPFunctionLibrary : public UBlueprintFunctionLibrary
{

    void GetQFromBandwidth(const float InBandwidth);
    void GetPitchScaleFromMIDIPitch(const int32 BaseMidiNote, const int32 TargetMidiNote);
    void GetMIDIPitchFromFrequency(const float Frequency);
    void GetLogFrequencyClamped(const float InValue, const FVector2D& InDomain, const FVector2D& InRange);
    void GetLinearFrequencyClamped(const float InValue, const FVector2D& InDomain, const FVector2D& InRange);
    void GetGainFromMidiVelocity(int32 InVelocity);
    void GetFrequencyMultiplierFromSemitones(const float InPitchSemitones);
    void GetFrequencyFromMIDIPitch(const int32 MidiNote);
    void GetBeatTempo(float BeatsPerMinute, int32 BeatMultiplier, int32 DivisionsOfWholeNote);
    void GetBandwidthFromQ(const float InQ);
    void ConvertLinearToDecibels(const float InLinear, const float InFloor);
    void ConvertDecibelsToLinear(const float InDecibels);
}; // Size: 0x28

#endif
