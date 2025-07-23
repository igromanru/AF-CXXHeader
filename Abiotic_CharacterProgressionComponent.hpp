#ifndef UE4SS_SDK_Abiotic_CharacterProgressionComponent_HPP
#define UE4SS_SDK_Abiotic_CharacterProgressionComponent_HPP

class UAbiotic_CharacterProgressionComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    TSet<FName> ItemsPickedUp;                                                        // 0x00B0 (size: 0x50)
    TSet<FName> RecipesUnlocked;                                                      // 0x0100 (size: 0x50)
    TArray<FName> Traits;                                                             // 0x0150 (size: 0x10)
    TMap<TEnumAsByte<E_CharacterSkills::Type>, FAbiotic_CharacterSkill_Struct> CharacterSkills; // 0x0160 (size: 0x50)
    TArray<TEnumAsByte<E_CharacterSkills::Type>> CharacterSkills_Keys;                // 0x01B0 (size: 0x10)
    TArray<FAbiotic_CharacterSkill_Struct> CharacterSkills_Values;                    // 0x01C0 (size: 0x10)
    FAbiotic_CharacterProgressionComponent_CSkillLevelUp SkillLevelUp;                // 0x01D0 (size: 0x10)
    void SkillLevelUp(TEnumAsByte<E_CharacterSkills::Type> Skill, int32 NewLevel);
    int32 Trait_FearOfViolence_MaxLevel;                                              // 0x01E0 (size: 0x4)
    TArray<FName> RecipesUnlockedArray;                                               // 0x01E8 (size: 0x10)
    TArray<FName> ItemsPickedUpArray;                                                 // 0x01F8 (size: 0x10)
    TArray<FName> Local_LastKnownRecipeList;                                          // 0x0208 (size: 0x10)
    TArray<FName> EmailsRead;                                                         // 0x0218 (size: 0x10)
    TArray<FName> JournalEntries;                                                     // 0x0228 (size: 0x10)
    double TimeOfLastSprintingXPCheck;                                                // 0x0238 (size: 0x8)
    double SprintingXPCheckInterval;                                                  // 0x0240 (size: 0x8)
    TArray<FName> Local_UnreadJournalEntries;                                         // 0x0248 (size: 0x10)
    bool SkillXPMultipliers;                                                          // 0x0258 (size: 0x1)
    TArray<FName> NewestRecipes;                                                      // 0x0260 (size: 0x10)
    TArray<FName> FavouriteRecipes;                                                   // 0x0270 (size: 0x10)
    class UDataTable* RecipeTable;                                                    // 0x0280 (size: 0x8)
    TArray<FName> Local_JournalEntries;                                               // 0x0288 (size: 0x10)
    TArray<FName> RecipesRequiringResearch_Array;                                     // 0x0298 (size: 0x10)
    bool InitializedTraits;                                                           // 0x02A8 (size: 0x1)
    FName Ph D;                                                                       // 0x02AC (size: 0x8)
    bool FirstTimeTraitsRunning;                                                      // 0x02B4 (size: 0x1)
    TArray<FName> CurrentMaps;                                                        // 0x02B8 (size: 0x10)
    TArray<FName> CraftedItems;                                                       // 0x02C8 (size: 0x10)
    TMap<TEnumAsByte<E_CharacterSkills::Type>, FAbiotic_CharacterSkill_Struct> Local_Character Skills; // 0x02D8 (size: 0x50)
    bool RecentlyLoadedFromSave;                                                      // 0x0328 (size: 0x1)
    TArray<FName> StartingWeaponList;                                                 // 0x0330 (size: 0x10)
    bool DebugCompendium;                                                             // 0x0340 (size: 0x1)
    TArray<FName> Compendium_ExplorationSections;                                     // 0x0348 (size: 0x10)
    TArray<FName> Compendium_EmailSections;                                           // 0x0358 (size: 0x10)
    TArray<FName> Compendium_NarrativeNPCSections;                                    // 0x0368 (size: 0x10)
    TArray<FName> Compendium_KillSections;                                            // 0x0378 (size: 0x10)
    TArray<FCompendiumKillCount> Compendium_KillCount;                                // 0x0388 (size: 0x10)
    TArray<FName> Local_AllCompendiumEntries;                                         // 0x0398 (size: 0x10)
    TArray<FName> Local_UnreadCompendiumEntries;                                      // 0x03A8 (size: 0x10)
    TArray<FName> PreviouslyLoadedRecipes;                                            // 0x03B8 (size: 0x10)
    TSet<FName> FishCaught;                                                           // 0x03C8 (size: 0x50)
    TArray<FName> FishCaughtArray;                                                    // 0x0418 (size: 0x10)
    TArray<FName> LocalFishCaughtArray;                                               // 0x0428 (size: 0x10)
    TArray<FName> Local Newest Fish;                                                  // 0x0438 (size: 0x10)
    TArray<FName> AllowedCompendiumKills;                                             // 0x0448 (size: 0x10)
    TArray<FName> PinnedRecipes;                                                      // 0x0458 (size: 0x10)
    class UCurveFloat* ThrowingXPDamage_Curve;                                        // 0x0468 (size: 0x8)
    class UCurveFloat* ThrowingXPDistance_Curve;                                      // 0x0470 (size: 0x8)
    TArray<FName> PendingRecipesToUnlock;                                             // 0x0478 (size: 0x10)
    bool HasCachedRecipeItemMap;                                                      // 0x0488 (size: 0x1)
    TMap<class FName, class FName> CachedRecipeItemMap;                               // 0x0490 (size: 0x50)
    TArray<FName> PendingItemsToCheck;                                                // 0x04E0 (size: 0x10)
    TMap<class FName, class FName> StrippedRecipes;                                   // 0x04F0 (size: 0x50)
    FAbiotic_CharacterProgressionComponent_COnNewEmailRead OnNewEmailRead;            // 0x0540 (size: 0x10)
    void OnNewEmailRead(class UAbiotic_CharacterProgressionComponent_C* ProgressionComponent, FName NewEmail);

    void ServerSetMinLevelForAllSkills(int32 MinLevel);
    void SetTraits(TArray<FName>& NewTraits);
    void Server_AddAllJournalEntriesFromCategory(TEnumAsByte<E_JournalEntryCategories::Type> Category, bool& Success);
    void Server_OnLoadedFromSave();
    void AddPendingItemToCheck(FName ItemRowName);
    void AddPendingRecipesToUnlock(FName RecipeRowName);
    void Server_CheckForNewSalvageItems(FName ItemPickedUpRow);
    void Server_CheckForAllRecipeOutput();
    void Server_CheckForItemRecipeOutput(FName ItemPickedUpRow);
    void Server_CheckForFoundRecipeItems(bool ForceCheckAllRecipes);
    void Server_TryAwardThrownXP(const class AActor* TargetableActor, double DamageAmount, TSubclassOf<class UAbiotic_DamageType_ParentBP_C> DamageType, class AAbioticProjectile_ParentBP_C* Projectile, bool& Success);
    void CalculateLowXPCatchup_KylieTrinket(double XPToGain, ECharacterSkills Skill, double& OutputXP);
    void Server_CheckCompendiumKills();
    void Server_AddCompendiumKill(FCompendiumEntryRowHandle Entry);
    void Server_CheckForCompendiumUnlocks();
    void Local_CheckForNewFishNotify();
    void OnRep_FishCaughtArray();
    void Server_TryUnlockFish(FName FishRowName);
    void CheckForCompendiumNotify();
    void OnRep_Compendium_KillSections();
    void OnRep_Compendium_NarrativeNPCSections();
    void OnRep_Compendium_EmailSections();
    void OnRep_Compendium_ExplorationSections();
    void HasCompendiumSectionUnlocked(FName CompendiumRowName, ECompendiumUnlockType UnlockType, bool& Unlocked);
    void Server Try Unlock Compendium Section(const FName& CompendiumRow, ECompendiumUnlockType UnlockType, bool& AddedSuccessfully);
    double Total XP To Be Gained(TEnumAsByte<E_CharacterSkills::Type> Skill, float Initial XP Gained, bool IgnoreModifiers);
    void Local_CheckForNewlyCraftedItems();
    void OnRep_CraftedItems();
    void Server_AddMapToJournal(const FName& MapRow);
    void OnRep_CurrentMaps();
    TArray<FName> GetTraits(bool IncludePhD);
    void InitializeTraits(FName PhD, bool FirstTime, bool AmnesiaThreshold);
    void Server_RemoveAllXPFromSkill(ECharacterSkills Skill);
    void ApplySkillPerksAfterLoad();
    void PlayerHasRecipeForItem(FName ItemName, bool& Found, TArray<FName>& RecipesFound);
    void Server_TryCompleteRecipeResearch(FName RecipeRowName);
    void OnRep_RecipesRequiringResearch_Array();
    void Server_CheckForUnlockedRecipes(TEnumAsByte<E_CharacterSkills::Type> SkillToCheck, int32 CurrentLevel, bool& Success);
    void Server_CheckForSkillPerks(TEnumAsByte<E_CharacterSkills::Type> SkillToCheck, int32 CurrentLevel, class AAbiotic_PlayerCharacter_C*& Owner, bool& Success);
    void Server_ModifySkillXP();
    void OnRep_NewestRecipes();
    void ModifySkillXPMultiplier(TEnumAsByte<E_CharacterSkills::Type> Skill, double AmountToAdd, bool& Success);
    void Server_InitializeDefaultStats();
    void Server_CheckForSprintingXPGain(bool& GainedXP);
    void Server_AddNoteToJournal(const FName& JournalRow);
    void OnRep_JournalEntries();
    void Server_AddEmailToReadList(const FName& EmailRow);
    void Local_CheckForRecipeUnlockNotify();
    void Server_TryUnlockRecipe(FName RecipeRowName);
    void Server_CheckForNewInventedRecipes(FName ItemPickedUpRow);
    void OnRep_ItemsPickedUpArray();
    void OnRep_RecipesUnlockedArray();
    void Get Chef Cooking Skill(int32& CookingSkillLevel, ECookingState& ChefSkill);
    void CheckForTrait_FearOfViolence(int32 CurrentLevel, TEnumAsByte<E_CharacterSkills::Type> Skill, bool& TraitBlocked);
    void PrintSkillInfo(TEnumAsByte<E_CharacterSkills::Type> Skill);
    void OnRep_CharacterSkills_Keys();
    void OnRep_CharacterSkills_Values();
    void Server_AddXPToSkill(TEnumAsByte<E_CharacterSkills::Type> Skill, double XPToAdd, bool IgnoreModifiers, bool& Success);
    void GetCurrentSkillLevel(TEnumAsByte<E_CharacterSkills::Type> Skill, bool IgnoreStats, int32& Level, double& XPToNextLevel, double& NextLevelXP, double& LastLevelXP, bool& max, double& CurrentXP, double& CurrentXPMultiplier);
    void ReceiveBeginPlay();
    void Server_CheckNewItemPickedUp(const FName& ItemRowName);
    void Request_RemoveRecipeFromNewestList(FName RecipeRowName);
    void Request_UnlockNewRecipe(FName RecipeRow);
    void Request_UnlockCompendiumEmail(FName CompendiumRow);
    void Request_ResetAllSkills();
    void Request_UnlockNewFish(FName FishRowName);
    void Request_UnlockCompendiumSection(FName CompendiumRow, ECompendiumUnlockType UnlockType);
    void Request_InitDefaultNewRecipes();
    void Request_InitPinnedRecipes();
    void Client_RecipePinUpdate(FName RecipeName, bool UnpinAllRecipes);
    void Client_InitPinnedRecipes(class AAbiotic_PlayerCharacter_C* OwningClient);
    void ProcessRecipesToUnlock();
    void ProcessItemsToCheck();
    void ExecuteUbergraph_Abiotic_CharacterProgressionComponent(int32 EntryPoint);
    void OnNewEmailRead__DelegateSignature(class UAbiotic_CharacterProgressionComponent_C* ProgressionComponent, FName NewEmail);
    void SkillLevelUp__DelegateSignature(TEnumAsByte<E_CharacterSkills::Type> Skill, int32 NewLevel);
}; // Size: 0x550

#endif
