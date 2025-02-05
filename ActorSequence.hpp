#ifndef UE4SS_SDK_ActorSequence_HPP
#define UE4SS_SDK_ActorSequence_HPP

#include "ActorSequence_enums.hpp"

struct FActorSequenceObjectReference
{
    EActorSequenceObjectReferenceType Type;                                           // 0x0000 (size: 0x1)
    FGuid ActorId;                                                                    // 0x0004 (size: 0x10)
    FString PathToComponent;                                                          // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FActorSequenceObjectReferenceMap
{
    TArray<FGuid> BindingIds;                                                         // 0x0000 (size: 0x10)
    TArray<FActorSequenceObjectReferences> References;                                // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FActorSequenceObjectReferences
{
    TArray<FActorSequenceObjectReference> Array;                                      // 0x0000 (size: 0x10)

}; // Size: 0x10

class UActorSequence : public UMovieSceneSequence
{
    class UMovieScene* MovieScene;                                                    // 0x0068 (size: 0x8)
    FActorSequenceObjectReferenceMap ObjectReferences;                                // 0x0070 (size: 0x20)

}; // Size: 0x90

class UActorSequenceComponent : public UActorComponent
{
    FMovieSceneSequencePlaybackSettings PlaybackSettings;                             // 0x00A8 (size: 0x28)
    class UActorSequence* Sequence;                                                   // 0x00D0 (size: 0x8)
    class UActorSequencePlayer* SequencePlayer;                                       // 0x00D8 (size: 0x8)

    void StopSequence();
    void PlaySequence();
    void PauseSequence();
}; // Size: 0xE0

class UActorSequencePlayer : public UMovieSceneSequencePlayer
{
}; // Size: 0x468

#endif
