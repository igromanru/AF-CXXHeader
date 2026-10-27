#ifndef UE4SS_SDK_Abiotic_PlayerState_HPP
#define UE4SS_SDK_Abiotic_PlayerState_HPP

class AAbiotic_PlayerState_C : public AAbioticPlayerState
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0370 (size: 0x8)
    class AActor* CurrentRespawnPoint;                                                // 0x0378 (size: 0x8)
    FPhDRowHandle PhD;                                                                // 0x0380 (size: 0x10)
    bool HasSetUpSkills;                                                              // 0x0390 (size: 0x1)
    FString UniquePlayerID;                                                           // 0x0398 (size: 0x10)
    FAbioticCharacterSaveData CurrentPlayerSaveData;                                  // 0x03A8 (size: 0x2E8)
    bool HasBedSpawn;                                                                 // 0x0690 (size: 0x1)
    bool HasLoadedSave;                                                               // 0x0691 (size: 0x1)
    bool PendingPlayerDeletion;                                                       // 0x0692 (size: 0x1)
    FString PlayerSaveID;                                                             // 0x0698 (size: 0x10)
    FString FilteredPlayerName;                                                       // 0x06A8 (size: 0x10)
    bool IsHardcoreDead;                                                              // 0x06B8 (size: 0x1)
    class AAbiotic_PlayerCharacter_C* OwningPlayer;                                   // 0x06C0 (size: 0x8)

    void FindServerQuest(FQuestRowHandle& Array Element);
    void SetQuestLineFromLoad(FQuestLineRowHandle QuestLine, FQuestRowHandle LastServerQuest, class AAbiotic_PlayerController_C* Controller);
    void OnRep_IsHardcoreDead();
    void ValidateTransmogArraySize(TArray<bool>& TransmogDisabledArray, TArray<bool>& OutputArray);
    void PutCharacterItemsInSpillBag(bool& Success);
    void Server_PerformPlayerDeletion(bool& Success);
    void ValidateInventorySize(TArray<FAbioticInventoryItemSlot>& InventorySaveData, class UAbiotic_InventoryComponent_C* Inventory, TArray<FAbioticInventoryItemSlot>& OutInventorySave);
    void ValidateRecipeList(TArray<FName>& InRecipes, TSet<FName>& OutRecipes);
    void VerifyResearchEntry(FName RecipeRow, bool& Valid);
    void VerifyResearchArray(TArray<FName>& inArray, TArray<FName>& OutArray);
    void ValidateSaveLocation();
    void OnBedDestroyed(class AActor* DestroyedActor);
    void UpdateBedState();
    void SavePlayerInventory(bool& Success, FAbioticCharacterSaveData& SaveData_PlayerData_Struct);
    void SavePlayerData(bool InitialCreation, FVector OverrideSaveLocation, bool& Success, FAbioticCharacterSaveData& SaveData_PlayerData_Struct);
    void Apply Save Data to Character();
    void LoadPlayerSaveData(bool& Success, FAbioticCharacterSaveData& SavedData);
    void GetSteamID_(String)(FString& ID);
    void OnRep_CurrentRespawnPoint();
    void OnFailure_BF78271947A55DF4DA39B3A5770FA5D9(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void OnSuccess_BF78271947A55DF4DA39B3A5770FA5D9(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void OnBlockedPlayerConnected();
    void OnPlayerNameUpdated();
    void DeadAlive_Changed_Event(class AAbiotic_Character_ParentBP_C* Character);
    void AdminReviveFromHardcoreDeath();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Abiotic_PlayerState(int32 EntryPoint);
}; // Size: 0x6C8

#endif
