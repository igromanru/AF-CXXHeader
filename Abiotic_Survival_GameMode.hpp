#ifndef UE4SS_SDK_Abiotic_Survival_GameMode_HPP
#define UE4SS_SDK_Abiotic_Survival_GameMode_HPP

class AAbiotic_Survival_GameMode_C : public AAbioticGameMode
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0380 (size: 0x8)
    class AAbiotic_AIDirector_C* AI_Director;                                         // 0x0388 (size: 0x8)
    FString ServerID;                                                                 // 0x0390 (size: 0x10)
    FString RCON_ChatLog;                                                             // 0x03A0 (size: 0x10)
    bool PersistentSaveDataLoaded;                                                    // 0x03B0 (size: 0x1)
    FTimerHandle AnalyticsHeartbeatHandle;                                            // 0x03B8 (size: 0x8)
    bool DebugSaving;                                                                 // 0x03C0 (size: 0x1)
    TArray<FString> CurrentModerators;                                                // 0x03C8 (size: 0x10)
    bool ServerConfigIsLoaded;                                                        // 0x03D8 (size: 0x1)
    TArray<FString> OldTeleporterStrings;                                             // 0x03E0 (size: 0x10)

    void RemovePlayerDLCEntitlements(FString PlayerId);
    void AddPlayerDLCEntitlements(FString PlayerId, FUserEntitlements Entitlements);
    void InitDLCEntitlements();
    void ApplyWorldSaveData|CustomInventory(class UAbiotic_WorldSave_C*& Save);
    void UpdateCustomInventoryToWorldSave(class AActor* Actor, bool RemoveFromSpawn, class UAbiotic_WorldSave_C* Save);
    void IsActorReadyToSave(class AActor* ActorToCheck, bool& Ready);
    void ApplyWorldSaveData|EncounterDirectors(class UAbiotic_WorldSave_C*& SaveGame, class UObject* WorldObject);
    void UpdateEncounterDirectorToWorldSave(class AActor* Actor, class UAbiotic_WorldSave_C* Save);
    void ApplyWorldSaveData|TravelingNPCs(class UAbiotic_WorldSave_C* Save);
    void UpdateTravelingNPCsToWorldSave();
    void ApplyWorldSaveData|Corpses(class UAbiotic_WorldSave_C*& Save, class UObject* LevelObject);
    void UpdateCorpseToWorldSave(class AActor* Actor, class UAbiotic_WorldSave_C* Save);
    void UpdateActiveLeyakContainmentID();
    void GetElapsedMinutes(int32& Minutes);
    void CheckModeratorState(class AAbiotic_PlayerController_C* Controller, FString UniqueID);
    void IsPlayerBanned(const FString& PlayerIDToCheck, bool& Banned);
    void SaveServerConfig();
    void LoadServerConfig();
    void ApplyWorldSaveData|DroppedItems(class UAbiotic_WorldSave_C*& Save, class UObject* LevelObject);
    void UpdateDroppedItemToWorldSave(class AActor* Actor, bool RemoveFromSave, class UAbiotic_WorldSave_C* Save);
    void Apply World Save Data| Pets(class UAbiotic_WorldSave_C*& Save, class UObject* LevelObject);
    void UpdatePetToWorldSave(class AActor* Actor, bool RemoveFromSpawn, class UAbiotic_WorldSave_C* Save);
    void GetStoryProgressionRow(FName& RowName);
    void ApplyWorldSaveData|Trams(class UAbiotic_WorldSave_C*& Save, class UObject* LevelObject);
    bool DoesVehicleSaveExist(FString VehicleID, FSaveData_Vehicle_Struct& VehicleSave);
    void SaveAllActors();
    void UpdateActorToWorldSave(class AActor* Actor, bool RemoveFromSave, TEnumAsByte<E_SaveType::Type> SaveType);
    void UpdateTramToWorldSave(class AActor* Actor, class UAbiotic_WorldSave_C* Save);
    void UpdateSimpleDoorToWorldSave(class AActor* Actor, class UAbiotic_WorldSave_C* Save);
    void ApplyWorldSaveData|Vehicles(class UAbiotic_WorldSave_C*& Save, class UObject* LevelObject);
    FSaveData_Vehicle_Struct MakeVehicleSaveData(class AActor* Vehicle, FString VehicleID, bool Destroyed);
    void ApplySaveDataToInventories(TArray<class UAbiotic_InventoryComponent_C*>& Inventories, TArray<FSaveData_Inventories_Struct>& SaveData);
    TArray<FSaveData_Inventories_Struct> GatherSaveDataFromInventories(TArray<class UAbiotic_InventoryComponent_C*>& Inventories);
    bool DoesVehicleIDExist(FString VehicleID, class AActor*& Vehicle);
    void UpdateVehicleToWorldSave(class AActor* Actor, bool RemoveFromSpawn, class UAbiotic_WorldSave_C* Save);
    void CreateVoiceActor(class AController* Controller);
    void ApplyWorldSaveData|Elevators(class UAbiotic_WorldSave_C*& Save, class UObject* LevelObject);
    void Update Elevator State to World Save(class AActor* Actor, class UAbiotic_WorldSave_C* Save);
    void UpdateFlagsToWorldSave();
    void UpdatePortalToWorldSave(class AActor* Actor, class UAbiotic_WorldSave_C* Save);
    void ApplyWorldSaveData|Portals(class UAbiotic_WorldSave_C*& Save, class UObject* LevelObject);
    void UpdateSpawnPointToWorldSave(class AActor* Actor, class UAbiotic_WorldSave_C* Save);
    void ApplyWorldSaveData|NPCSpawns(class UAbiotic_WorldSave_C*& Save, class UObject* LevelObject);
    void UpdateTriggerToWorldSave(class AActor* Actor, class UAbiotic_WorldSave_C* Save);
    void ApplyWorldSaveData|Triggers(class UAbiotic_WorldSave_C*& Save, class UObject* LevelObject);
    void Find Existing Player Placed Deployable(FString AssetID, const class UObject* LevelObject, TEnumAsByte<E_DeployableOrigin::Type>& State, class AAbioticDeployed_ParentBP_C*& DeployedActor);
    void FindMatchingDeployableData(FSaveData_Deployable_Struct& ExistingData, FSaveData_Deployable_Struct& WorldObjectData, TEnumAsByte<E_DeployableOrigin::Type>& DeployableOrigin);
    void ApplyWorldSaveData|PowerSockets(class UAbiotic_WorldSave_C*& Save, class UObject* LevelObject);
    void UpdatePowerSocketToWorldSave(class AActor* Actor, class UAbiotic_WorldSave_C* Save);
    void Apply World Save Data| NPCs(class UAbiotic_WorldSave_C*& Save, class UObject* LevelObject);
    void UpdateNarrativeNPCsToWorldSave(class AActor* Actor, class UAbiotic_WorldSave_C* Save);
    class AAbiotic_Item_Dropped_C* SpawnItem(const FTransform& InTransform, const FDataTableRowHandle& ItemRow, int32 StackSize, double Durability, bool NoPhysics, bool NoCollision, class USceneComponent* ConnectToComponent, FName ConnectToBone, int32 LiquidLevel, TEnumAsByte<E_LiquidType::Type> CurrentLiquid, bool& Success);
    void Save All Item Proxy to World Save(FString LevelName, class AAbioticDeployed_ParentBP_C* Deployable, TArray<FSaveData_ItemProxy_Struct>& Output Item Proxies, TArray<bool>& Output Item Active Spot);
    void Update Actors to World Save(class AActor* Actor, class UAbiotic_WorldSave_C* Save);
    void Update Item Proxy to World Save(class AItemProxyParent_BP_C* Item Proxy, FString Level Name, int32 Spot Index, FSaveData_ItemProxy_Struct& Output_Get);
    void ApplyWorldSaveData|Buttons(class UAbiotic_WorldSave_C*& Save, class UObject* LevelObject);
    void Update Button to World Save(class AActor* Actor, class UAbiotic_WorldSave_C* Save);
    void RCON_AddChatMessage(FString Prefix, FString Message);
    void RCON_HeartBeat_GetPlayers(FString& Data);
    void OnReciveRCONConnection(uint8 Type, bool Success, FString Message, FString SessionId, FString ServerID);
    void OnReciveRCONRequest(FString SessionId, FString ServerID, int32 RequestID, FString Request);
    void SetupSocketTCPRCONServer(FString IP, int32 Port);
    void LSV_OnLevelUnloaded(class ULevelStreaming* Level);
    void LSV_OnLevelHidden(class ULevelStreaming* Level, bool Visible);
    void LSV_OnLevelLoaded(class ULevelStreaming* Level);
    void ApplyWorldSaveData|DayNightCycle(class UAbiotic_WorldSave_C*& Save);
    void SetTimeOfDayOnWorldSave();
    void ApplyWorldSaveData|SecurityDoor(class UAbiotic_WorldSave_C*& Save, class UObject* LevelObject);
    void Update Security Door State to World Save(class AActor* Actor, class UAbiotic_WorldSave_C* Save);
    void ApplyWorldSaveData|Destructibles(class UAbiotic_WorldSave_C*& Save, class UObject* LevelObject);
    void Update Destructible to World Save(class AActor* Actor, class UAbiotic_WorldSave_C* Save);
    void Load Deployable Settings(FAbiotic_InventoryChangeableDataStruct& ChangeableData, class AAbioticDeployed_ParentBP_C* DeployedItem, TArray<FSaveData_Inventories_Struct>& ContainerInventories, TArray<FSaveData_ItemProxy_Struct>& ItemProxiesData, TArray<bool>& ActiveSeats, FString& CustomTextDisplay, bool FoundByPlayer, TArray<FVector>& Supports, double SpawnedTime);
    void ApplyWorldSaveData|ResourceNode(class UAbiotic_WorldSave_C*& Save, class UObject* LevelObject);
    void ApplyWorldSaveData|Deployables(class UAbiotic_WorldSave_C*& Save, class UObject* LevelObject);
    void Update Resource Node to World Save(class AActor* Actor, class UAbiotic_WorldSave_C* Save);
    void Update Deployable To World Save(class AActor* Actor, class UAbiotic_WorldSave_C* Save, bool RemoveFromSave);
    void ApplyWorldSaveData|SimpleDoors(class UAbiotic_WorldSave_C*& Save, class UObject* LevelObject);
    void ApplyAllWorldSaveData(FString Level, int32 Iteration (0-4), bool DoAllIterationsAtOnce, class UAbiotic_WorldSave_C* Save, class UObject* LevelObject, bool Persistent);
    void LevelLoad_ApplySavedWorldData(FString LevelName, int32 Iteration (0-4), bool DoAllIterationsAtOnce, bool Persistent);
    void CalculateItemDrop(const FAbiotic_ItemDropStruct& ItemDropStruct, FGameplayTagContainer Ignore Drop Chance Tags, FGameplayTagContainer& GameplayTags, double ExtraLootChance, bool& DropSuccess, FDataTableRowHandle& ItemStruct, int32& Count);
    void GenerateLootDrop(const FDataTableRowHandle& SalvageDropRow, FVector Origin, FVector BoxExtent, bool HasLifespan, bool TryPlaceInInventory, class AAbiotic_PlayerCharacter_C* inventoryOwner, bool IsMicroNode, bool IsNotReceivingDamage, FDataTableRowHandle TextureVariant, int32 ExtraStackCount, FGameplayTagContainer Ignore Drop Chance Item Tags, bool RandomRotation, FRotator RotationOverride, bool AlwaysDropOverflow, FGameplayTagContainer& BuffTags, double ExtraLootChance, TArray<FDynamicProperty>& DynamicProperties, bool& LootIsGenerated?);
    void FindRespawnPointForPlayer(class AAbiotic_PlayerState_C* PlayerState, bool ForcePlayerStartOnly, FName DestinationID, bool& Valid, FVector& RespawnLocation);
    void OnFailure_B055BD084F90B3B2266C78903EFE91F0();
    void OnSuccess_B055BD084F90B3B2266C78903EFE91F0();
    void SendTextChatMessageToAllPlayers(bool FactionCheck, TEnumAsByte<E_Factions::Type> FactionOnlySee, FString Prefix, FLinearColor PrefixColor, FString Message, FLinearColor MessageColor, FString ExcludedCallerName, class APlayerState* PlayerState, bool IsPlayerChatTextMessage);
    void K2_OnLogout(class AController* ExitingController);
    void K2_PostLogin(class APlayerController* NewPlayer);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnWorldFlagsLoaded_Event();
    void OnWorldFlagsUpdated_Event();
    void UpdateSessionSettings(bool Delay);
    void SendAnalytics();
    void DemoFinished_SendAnalytics();
    void OnPlayerBanned(class APlayerController* BannedPlayer, const FText& BanReason);
    void ExecuteUbergraph_Abiotic_Survival_GameMode(int32 EntryPoint);
}; // Size: 0x3F0

#endif
