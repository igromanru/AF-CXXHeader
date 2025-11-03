#ifndef UE4SS_SDK_Abiotic_PlayerState_HPP
#define UE4SS_SDK_Abiotic_PlayerState_HPP

class AAbiotic_PlayerState_C : public AAbioticPlayerState
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0370 (size: 0x8)
    class AActor* CurrentRespawnPoint;                                                // 0x0378 (size: 0x8)
    FName PhD;                                                                        // 0x0380 (size: 0x8)
    bool HasSetUpSkills;                                                              // 0x0388 (size: 0x1)
    FString UniquePlayerID;                                                           // 0x0390 (size: 0x10)
    FSaveData_CharacterSave_Struct CurrentPlayerSaveData;                             // 0x03A0 (size: 0x2B0)
    bool HasBedSpawn;                                                                 // 0x0650 (size: 0x1)
    bool HasLoadedSave;                                                               // 0x0651 (size: 0x1)
    bool PendingPlayerDeletion;                                                       // 0x0652 (size: 0x1)
    FString PlayerSaveID;                                                             // 0x0658 (size: 0x10)
    FString FilteredPlayerName;                                                       // 0x0668 (size: 0x10)
    bool IsHardcoreDead;                                                              // 0x0678 (size: 0x1)
    class AAbiotic_PlayerCharacter_C* OwningPlayer;                                   // 0x0680 (size: 0x8)

    void OnRep_IsHardcoreDead();
    void ValidateTransmogArraySize(TArray<bool>& TransmogDisabledArray, TArray<bool>& OutputArray);
    void PutCharacterItemsInSpillBag(bool& Success);
    void Server_PerformPlayerDeletion(bool& Success);
    void ValidateInventorySize(TArray<FAbiotic_InventoryItemSlotStruct>& InventorySaveData, class UAbiotic_InventoryComponent_C* Inventory, TArray<FAbiotic_InventoryItemSlotStruct>& OutInventorySave);
    void ValidateRecipeList(TArray<FName>& InRecipes, TSet<FName>& OutRecipes);
    void VerifyResearchEntry(FName RecipeRow, bool& Valid);
    void VerifyResearchArray(TArray<FName>& inArray, TArray<FName>& OutArray);
    void ValidateSaveLocation();
    void OnBedDestroyed(class AActor* DestroyedActor);
    void UpdateBedState();
    void SavePlayerInventory(bool& Success, FSaveData_CharacterSave_Struct& SaveData_PlayerData_Struct);
    void SavePlayerData(bool InitialCreation, FVector OverrideSaveLocation, bool& Success, FSaveData_CharacterSave_Struct& SaveData_PlayerData_Struct);
    void Apply Save Data to Character();
    void LoadPlayerSaveData(bool& Success, FSaveData_CharacterSave_Struct& SavedData);
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
}; // Size: 0x688

#endif
