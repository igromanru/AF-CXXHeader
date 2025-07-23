#ifndef UE4SS_SDK_Abiotic_Survival_GameState_HPP
#define UE4SS_SDK_Abiotic_Survival_GameState_HPP

class AAbiotic_Survival_GameState_C : public AAbioticGameState
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UAbiotic_InventoryComponent_C* Inventory_Void;                              // 0x04C0 (size: 0x8)
    class UAbiotic_InventoryComponent_C* Inventory_Boxy;                              // 0x04C8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x04D0 (size: 0x8)
    double PlayerBleedoutTime;                                                        // 0x04D8 (size: 0x8)
    TArray<class AAbiotic_PlayerCharacter_C*> PlayerCharacterInGame;                  // 0x04E0 (size: 0x10)
    TArray<class AAbiotic_PlayerCharacter_C*> AlivePlayerCharacters;                  // 0x04F0 (size: 0x10)
    TArray<class AAbiotic_PlayerCharacter_C*> DeadPlayerCharacters;                   // 0x0500 (size: 0x10)
    double PlayerRespawnDuration;                                                     // 0x0510 (size: 0x8)
    int32 StartingTraitPoints;                                                        // 0x0518 (size: 0x4)
    TEnumAsByte<E_FriendlyFireTypes::Type> FriendlyFireMode;                          // 0x051C (size: 0x1)
    FQuestRowHandle CurrentQuest;                                                     // 0x0520 (size: 0x20)
    FString WorldSaveName;                                                            // 0x0540 (size: 0x10)
    FString HostName;                                                                 // 0x0550 (size: 0x10)
    double LastAutoSaveTime;                                                          // 0x0560 (size: 0x8)
    FAbiotic_Survival_GameState_COnAutosave OnAutosave;                               // 0x0568 (size: 0x10)
    void OnAutosave();
    TArray<class USoundBase*> RandomOneOffSounds;                                     // 0x0578 (size: 0x10)
    TSet<FName> GlobalRecipesUnlocked;                                                // 0x0588 (size: 0x50)
    TSet<FName> GlobalRecipesResearched;                                              // 0x05D8 (size: 0x50)
    TArray<FName> GlobalItemsPickedUp;                                                // 0x0628 (size: 0x10)
    TArray<FName> GlobalEmailsRead;                                                   // 0x0638 (size: 0x10)
    TArray<FName> GlobalJournalEntries;                                               // 0x0648 (size: 0x10)
    TArray<FName> GlobalCompendiumEmail;                                              // 0x0658 (size: 0x10)
    TArray<FName> GlobalCompendiumNarrative;                                          // 0x0668 (size: 0x10)
    TArray<FName> GlobalCompendiumExploration;                                        // 0x0678 (size: 0x10)
    TSet<FName> ExcludeListRecipes;                                                   // 0x0688 (size: 0x50)
    int32 NPCDebug_QuickCount;                                                        // 0x06D8 (size: 0x4)
    int32 NPCDebug_ModerateCount;                                                     // 0x06DC (size: 0x4)
    int32 NPCDebug_SlowCount;                                                         // 0x06E0 (size: 0x4)
    int32 NPCDebug_CurrentQuick;                                                      // 0x06E4 (size: 0x4)
    int32 NPCDebug_CurrentModerate;                                                   // 0x06E8 (size: 0x4)
    int32 NPCDebug_CurrentSlow;                                                       // 0x06EC (size: 0x4)
    int32 NPCDebug_NPCCount;                                                          // 0x06F0 (size: 0x4)
    int32 NPCDebug_NPCCap;                                                            // 0x06F4 (size: 0x4)
    FString ActiveLeyakContainmentID;                                                 // 0x06F8 (size: 0x10)
    FAbiotic_Survival_GameState_COnUserLeftContainer OnUserLeftContainer;             // 0x0708 (size: 0x10)
    void OnUserLeftContainer(const class AAbiotic_Character_ParentBP_C*& ContainerUser);

    void CreateHitscanTracer(FVector StartLocation, const FVector& EndLocation, double Velocity, bool RicochetEnabled, bool CreateBulletWhizzAudio, TSubclassOf<class ABP_BulletTracer_C> BulletTracerClass);
    void Set Leyak Containment ID(FString NewID);
    void UpdateNPCDebugInfo();
    void FillRecipeExclusionList();
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
    void UpdateAutoSaveTimestamp();
    void Broadcast_Autosaved();
    void AttemptRandomSound();
    void Server_UserLeftContainer(const class AAbiotic_Character_ParentBP_C*& ContainerUser);
    void ExecuteUbergraph_Abiotic_Survival_GameState(int32 EntryPoint);
    void OnUserLeftContainer__DelegateSignature(const class AAbiotic_Character_ParentBP_C*& ContainerUser);
    void OnAutosave__DelegateSignature();
}; // Size: 0x718

#endif
