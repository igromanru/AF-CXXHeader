#ifndef UE4SS_SDK_ABF_CinematicSequence_HPP
#define UE4SS_SDK_ABF_CinematicSequence_HPP

class AABF_CinematicSequence_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x02A0 (size: 0x8)
    FABF_CinematicSequence_CCinematicComplete CinematicComplete;                      // 0x02A8 (size: 0x10)
    void CinematicComplete();
    class AAbiotic_TriggerVolume_ParentBP_C* BeginTrigger;                            // 0x02B8 (size: 0x8)
    class AAbiotic_GenericDestructible_BP_C* DestructiblesToDestroy;                  // 0x02C0 (size: 0x8)
    bool FinishedPlaying;                                                             // 0x02C8 (size: 0x1)
    double DestructibleDestroyDelay;                                                  // 0x02D0 (size: 0x8)
    TArray<class ANarrativeNPC_ParentBP_C*> NarrativeNPCsToKill;                      // 0x02D8 (size: 0x10)
    double NPCKillDelay;                                                              // 0x02E8 (size: 0x8)
    TMap<class AAbiotic_NPCSpawn_ParentBP_C*, class UAnimMontage*> NPCSpawnsToTrigger; // 0x02F0 (size: 0x50)
    double NPCSpawnDelay;                                                             // 0x0340 (size: 0x8)
    bool ForceNPCAggression;                                                          // 0x0348 (size: 0x1)
    double ForcedNearbyAggressionDistance;                                            // 0x0350 (size: 0x8)
    class ALevelSequenceActor* SequenceToTrigger;                                     // 0x0358 (size: 0x8)
    double SequenceDelay;                                                             // 0x0360 (size: 0x8)
    bool PlayersFadeToBlack;                                                          // 0x0368 (size: 0x1)
    double FadeToBlackDuration;                                                       // 0x0370 (size: 0x8)
    double FadeToBlackDelay;                                                          // 0x0378 (size: 0x8)
    class USoundBase* NewSoundtrackToStart;                                           // 0x0380 (size: 0x8)
    double SoundtrackStartDelay;                                                      // 0x0388 (size: 0x8)
    bool PermaMuteAllNPCs;                                                            // 0x0390 (size: 0x1)
    TArray<class ANavModifierVolume*> NavModifiersToDestroy;                          // 0x0398 (size: 0x10)
    FABF_CinematicSequence_CCinematicBegin CinematicBegin;                            // 0x03A8 (size: 0x10)
    void CinematicBegin();

    void AlertNPCToNearbyPlayers(class ANPC_Base_ParentBP_C* NPC);
    void BeginCinematic();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ABF_CinematicSequence(int32 EntryPoint);
    void CinematicBegin__DelegateSignature();
    void CinematicComplete__DelegateSignature();
}; // Size: 0x3B8

#endif
