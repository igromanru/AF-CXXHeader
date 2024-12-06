#ifndef UE4SS_SDK_Abiotic_PlayerState_HPP
#define UE4SS_SDK_Abiotic_PlayerState_HPP

class AAbiotic_PlayerState_C : public APlayerState
{
    class USceneComponent* DefaultSceneRoot;                                          // 0x0350 (size: 0x8)
    class AActor* CurrentRespawnPoint;                                                // 0x0358 (size: 0x8)
    FName PhD;                                                                        // 0x0360 (size: 0x8)
    bool HasSetUpSkills;                                                              // 0x0368 (size: 0x1)
    FString UniquePlayerID;                                                           // 0x0370 (size: 0x10)
    FSaveData_CharacterSave_Struct CurrentPlayerSaveData;                             // 0x0380 (size: 0x270)
    bool HasBedSpawn;                                                                 // 0x05F0 (size: 0x1)
    bool HasLoadedSave;                                                               // 0x05F1 (size: 0x1)
    bool PendingPlayerDeletion;                                                       // 0x05F2 (size: 0x1)

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
}; // Size: 0x5F3

#endif
