#ifndef UE4SS_SDK_Abiotic_Survival_GameState_HPP
#define UE4SS_SDK_Abiotic_Survival_GameState_HPP

class AAbiotic_Survival_GameState_C : public AAbioticGameState
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03A8 (size: 0x8)
    double PlayerBleedoutTime;                                                        // 0x03B0 (size: 0x8)
    TArray<class AAbiotic_PlayerCharacter_C*> PlayerCharacterInGame;                  // 0x03B8 (size: 0x10)
    TArray<class AAbiotic_PlayerCharacter_C*> AlivePlayerCharacters;                  // 0x03C8 (size: 0x10)
    TArray<class AAbiotic_PlayerCharacter_C*> DeadPlayerCharacters;                   // 0x03D8 (size: 0x10)
    double PlayerRespawnDuration;                                                     // 0x03E8 (size: 0x8)
    int32 StartingTraitPoints;                                                        // 0x03F0 (size: 0x4)
    TEnumAsByte<E_FriendlyFireTypes::Type> FriendlyFireMode;                          // 0x03F4 (size: 0x1)
    FQuestRowHandle CurrentQuest;                                                     // 0x03F8 (size: 0x20)
    FString WorldSaveName;                                                            // 0x0418 (size: 0x10)
    FString HostName;                                                                 // 0x0428 (size: 0x10)
    double LastAutoSaveTime;                                                          // 0x0438 (size: 0x8)
    FAbiotic_Survival_GameState_COnAutosave OnAutosave;                               // 0x0440 (size: 0x10)
    void OnAutosave();
    TArray<class USoundBase*> RandomOneOffSounds;                                     // 0x0450 (size: 0x10)
    TSet<FName> GlobalRecipesUnlocked;                                                // 0x0460 (size: 0x50)
    TSet<FName> GlobalRecipesResearched;                                              // 0x04B0 (size: 0x50)
    TArray<FName> GlobalItemsPickedUp;                                                // 0x0500 (size: 0x10)
    TArray<FName> GlobalEmailsRead;                                                   // 0x0510 (size: 0x10)
    TArray<FName> GlobalJournalEntries;                                               // 0x0520 (size: 0x10)
    TArray<FName> GlobalCompendiumEmail;                                              // 0x0530 (size: 0x10)
    TArray<FName> GlobalCompendiumNarrative;                                          // 0x0540 (size: 0x10)
    TArray<FName> GlobalCompendiumExploration;                                        // 0x0550 (size: 0x10)
    TSet<FName> BlacklistedRecipes;                                                   // 0x0560 (size: 0x50)
    int32 NPCDebug_QuickCount;                                                        // 0x05B0 (size: 0x4)
    int32 NPCDebug_ModerateCount;                                                     // 0x05B4 (size: 0x4)
    int32 NPCDebug_SlowCount;                                                         // 0x05B8 (size: 0x4)
    int32 NPCDebug_CurrentQuick;                                                      // 0x05BC (size: 0x4)
    int32 NPCDebug_CurrentModerate;                                                   // 0x05C0 (size: 0x4)
    int32 NPCDebug_CurrentSlow;                                                       // 0x05C4 (size: 0x4)
    int32 NPCDebug_NPCCount;                                                          // 0x05C8 (size: 0x4)
    int32 NPCDebug_NPCCap;                                                            // 0x05CC (size: 0x4)
    FString ActiveLeyakContainmentID;                                                 // 0x05D0 (size: 0x10)

    void CreateHitscanTracer(FVector StartLocation, const FVector& EndLocation, double Velocity, bool RicochetEnabled, bool CreateBulletWhizzAudio);
    void Set Leyak Containment ID(FString NewID);
    void UpdateNPCDebugInfo();
    void FillBlacklistRecipeList();
    void TriggerRandomAmbientSound(bool& Succeeded);
    void OnRep_CurrentQuest();
    void CalculateLivingAndDeadPlayers();
    void OnRep_PlayerCharacterInGame();
    void RefreshPlayerCharactersList();
    void Broadcast_PlaySoundAtLocation(class USoundBase* Sound, FVector Location, bool LoudAmbientSound);
    void Broadcast_SpawnParticleSystemAtLocation(class UNiagaraSystem* NiagaraSystem, class USoundBase* SoundToPlay, FTransform Transform);
    void Broadcast_SequencePlay(class ALevelSequenceActor* LevelSequence);
    void ServerShutdown();
    void Broadcast_ResetAllVOIP();
    void Broadcast_PlaySound2D(class USoundCue* Sound);
    void ReceiveBeginPlay();
    void UpdateAutosaveTimestamp();
    void Broadcast_Autosaved();
    void AttemptRandomSound();
    void ExecuteUbergraph_Abiotic_Survival_GameState(int32 EntryPoint);
    void OnAutosave__DelegateSignature();
}; // Size: 0x5E0

#endif
