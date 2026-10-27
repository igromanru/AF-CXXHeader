#ifndef UE4SS_SDK_Abiotic_CharacterProgressionComponent_HPP
#define UE4SS_SDK_Abiotic_CharacterProgressionComponent_HPP

class UAbiotic_CharacterProgressionComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    TSet<FName> ItemsPickedUp;                                                        // 0x00B0 (size: 0x50)
    TSet<FName> RecipesUnlocked;                                                      // 0x0100 (size: 0x50)
    TArray<FAnyTraitRowHandle> Traits;                                                // 0x0150 (size: 0x10)
    TMap<ECharacterSkills, FAbioticCharacterSkill> CharacterSkills;                   // 0x0160 (size: 0x50)
    TArray<ECharacterSkills> CharacterSkills_Keys;                                    // 0x01B0 (size: 0x10)
    TArray<FAbioticCharacterSkill> CharacterSkills_Values;                            // 0x01C0 (size: 0x10)
    FAbiotic_CharacterProgressionComponent_CSkillLevelUp SkillLevelUp;                // 0x01D0 (size: 0x10)
    void SkillLevelUp(ECharacterSkills Skill, int32 NewLevel);
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
    TSet<FName> Local_JournalEntries;                                                 // 0x0280 (size: 0x50)
    TArray<FName> RecipesRequiringResearch_Array;                                     // 0x02D0 (size: 0x10)
    bool InitializedTraits;                                                           // 0x02E0 (size: 0x1)
    FName Ph D;                                                                       // 0x02E4 (size: 0x8)
    bool FirstTimeTraitsRunning;                                                      // 0x02EC (size: 0x1)
    TArray<FName> CurrentMaps;                                                        // 0x02F0 (size: 0x10)
    TArray<FName> CraftedItems;                                                       // 0x0300 (size: 0x10)
    TMap<ECharacterSkills, FAbioticCharacterSkill> Local_Character Skills;            // 0x0310 (size: 0x50)
    bool RecentlyLoadedFromSave;                                                      // 0x0360 (size: 0x1)
    TArray<FGlobalItemRowHandle> StartingWeaponList;                                  // 0x0368 (size: 0x10)
    bool DebugCompendium;                                                             // 0x0378 (size: 0x1)
    TArray<FName> Compendium_ExplorationSections;                                     // 0x0380 (size: 0x10)
    TArray<FName> Compendium_EmailSections;                                           // 0x0390 (size: 0x10)
    TArray<FName> Compendium_NarrativeNPCSections;                                    // 0x03A0 (size: 0x10)
    TArray<FName> Compendium_KillSections;                                            // 0x03B0 (size: 0x10)
    TArray<FCompendiumKillCount> Compendium_KillCount;                                // 0x03C0 (size: 0x10)
    TSet<FName> Local_AllCompendiumEntries;                                           // 0x03D0 (size: 0x50)
    TArray<FName> UnreadJournalEntries;                                               // 0x0420 (size: 0x10)
    TArray<FName> UnreadCompendiumEntries;                                            // 0x0430 (size: 0x10)
    TSet<FName> Local_UnreadCompendiumEntries;                                        // 0x0440 (size: 0x50)
    TArray<FName> PreviouslyLoadedRecipes;                                            // 0x0490 (size: 0x10)
    TSet<FName> FishCaught;                                                           // 0x04A0 (size: 0x50)
    TArray<FName> FishCaughtArray;                                                    // 0x04F0 (size: 0x10)
    TArray<FName> LocalFishCaughtArray;                                               // 0x0500 (size: 0x10)
    TArray<FName> Local Newest Fish;                                                  // 0x0510 (size: 0x10)
    TArray<FName> AllowedCompendiumKills;                                             // 0x0520 (size: 0x10)
    TArray<FName> PinnedRecipes;                                                      // 0x0530 (size: 0x10)
    class UCurveFloat* ThrowingXPDamage_Curve;                                        // 0x0540 (size: 0x8)
    class UCurveFloat* ThrowingXPDistance_Curve;                                      // 0x0548 (size: 0x8)
    TArray<FAnyRecipeRowHandle> PendingRecipesToUnlock;                               // 0x0550 (size: 0x10)
    bool HasCachedRecipeItemMap;                                                      // 0x0560 (size: 0x1)
    TMap<FName, FName> CachedRecipeItemMap;                                           // 0x0568 (size: 0x50)
    TArray<FName> PendingItemsToCheck;                                                // 0x05B8 (size: 0x10)
    TMap<FName, FName> StrippedRecipes;                                               // 0x05C8 (size: 0x50)
    FAbiotic_CharacterProgressionComponent_COnNewEmailRead OnNewEmailRead;            // 0x0618 (size: 0x10)
    void OnNewEmailRead(class UAbiotic_CharacterProgressionComponent_C* ProgressionComponent, FName NewEmail);
    bool InitialisedCompendiumUnread;                                                 // 0x0628 (size: 0x1)
    TArray<FName> UnreadFishEntries;                                                  // 0x0630 (size: 0x10)
    TArray<FName> ItemsDistilled;                                                     // 0x0640 (size: 0x10)
    FAbiotic_CharacterProgressionComponent_COnItemsDistilledUpdated OnItemsDistilledUpdated; // 0x0650 (size: 0x10)
    void OnItemsDistilledUpdated();
    TSet<FName> LocalFishEntries;                                                     // 0x0660 (size: 0x50)

    void DelayedLinkedRecipeCheck();
    void Server_AddItemDistilled(FName ItemRow);
    void OnRep_ItemsDistilled();
    void MarkJournalEntriesRead(EJournalEntryCategories JournalPage);
    void OnRep_UnreadFishEntries();
    void OnRep_UnreadJournalEntries();
    void OnRep_UnreadCompendiumEntries();
    void MarkCompendiumInitialized(bool Initialised);
    void ReadCompendiumEntry(const FName& CompendiumRow);
    void Server_SetMaxLevelForAllSkills(int32 MaxLevel);
    void SetTraits(TArray<FAnyTraitRowHandle>& NewTraits);
    void Server_AddAllJournalEntriesFromCategory(EJournalEntryCategories Category, bool& Success);
    void Server_OnLoadedFromSave();
    void AddPendingItemToCheck(FName ItemRowName);
    void AddPendingRecipesToUnlock(FAnyRecipeRowHandle RecipeRowName);
    void Server_CheckForNewSalvageItems(FName ItemPickedUpRow);
    void Server_CheckForAllRecipeOutput();
    void Server_CheckForItemRecipeOutput(FName ItemPickedUpRow);
    void Server_CheckForFoundRecipeItems(bool ForceCheckAllRecipes);
    void Server_TryAwardThrownXP(const class AActor* TargetableActor, double DamageAmount, TSubclassOf<class UAbioticDamageType> DamageType, class AAbioticProjectile_ParentBP_C* Projectile, bool& Success);
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
    void Total XP To Be Gained(ECharacterSkills Skill, float Initial XP Gained, bool IgnoreModifiers);
    void Local_CheckForNewlyCraftedItems();
    void OnRep_CraftedItems();
    void Server_AddMapToJournal(const FName& MapRow);
    void OnRep_CurrentMaps();
    void GetTraits(bool IncludePhD);
    void InitializeTraits(FName PhD, bool FirstTime, bool AmnesiaThreshold);
    void Server_RemoveAllXPFromSkill(ECharacterSkills Skill);
    void ApplySkillPerksAfterLoad();
    void PlayerHasRecipeForItem(FGlobalItemRowHandle ItemName, bool& Found, TArray<FName>& RecipesFound);
    void Server_TryCompleteRecipeResearch(FName RecipeRowName);
    void OnRep_RecipesRequiringResearch_Array();
    void Server_CheckForUnlockedRecipes(ECharacterSkills SkillToCheck, int32 CurrentLevel, bool& Success);
    void Server_CheckForSkillPerks(ECharacterSkills SkillToCheck, int32 CurrentLevel, class AAbiotic_PlayerCharacter_C*& Owner, bool& Success);
    void Server_ModifySkillXP();
    void OnRep_NewestRecipes();
    void ModifySkillXPMultiplier(ECharacterSkills Skill, double AmountToAdd, bool& Success);
    void Server_InitializeDefaultStats();
    void Server_CheckForSprintingXPGain(bool& GainedXP);
    void Server_AddNoteToJournal(const FName& JournalRow);
    void OnRep_JournalEntries();
    void Server_AddEmailToReadList(const FName& EmailRow);
    void Local_CheckForRecipeUnlockNotify();
    void Server_TryUnlockRecipe(FAnyRecipeRowHandle RecipeRowName);
    void Server_CheckForNewInventedRecipes(FName ItemPickedUpRow);
    void OnRep_ItemsPickedUpArray();
    void OnRep_RecipesUnlockedArray();
    void Get Chef Cooking Skill(int32& CookingSkillLevel, ECookingState& ChefSkill);
    void CheckForTrait_FearOfViolence(int32 CurrentLevel, ECharacterSkills Skill, bool& TraitBlocked);
    void PrintSkillInfo(ECharacterSkills Skill);
    void OnRep_CharacterSkills_Keys();
    void OnRep_CharacterSkills_Values();
    void Server_AddXPToSkill(ECharacterSkills Skill, double XPToAdd, bool IgnoreModifiers, bool& Success);
    void GetCurrentSkillLevel(ECharacterSkills Skill, bool IgnoreStats, int32& Level, double& XPToNextLevel, double& NextLevelXP, double& LastLevelXP, bool& max, double& CurrentXP, double& CurrentXPMultiplier);
    void ReceiveBeginPlay();
    void Server_CheckNewItemPickedUp(const FName& ItemRowName);
    void Request_RemoveRecipeFromNewestList(FName RecipeRowName);
    void Request_UnlockNewRecipe(FAnyRecipeRowHandle RecipeRow);
    void Request_UnlockCompendiumEmail(FName CompendiumRow);
    void Request_ResetAllSkills(bool AmnesiaThreshold);
    void Request_UnlockNewFish(FName FishRowName);
    void Request_UnlockCompendiumSection(FName CompendiumRow, ECompendiumUnlockType UnlockType);
    void Request_InitDefaultNewRecipes();
    void Request_InitPinnedRecipes();
    void Client_RecipePinUpdate(FName RecipeName, bool UnpinAllRecipes);
    void Client_InitPinnedRecipes(class AAbiotic_PlayerCharacter_C* OwningClient);
    void ProcessRecipesToUnlock();
    void ProcessItemsToCheck();
    void Request_ReadCompendiumEntry(const FName& CompendiumRow);
    void Client_MarkCompendiumInitialized(bool Initialised);
    void Request_ReadFishEntry(const FName Fish);
    void Request_ReadJournalEntries(EJournalEntryCategories JournalPage);
    void JournalUpdateNotifyIconStatus();
    void ExecuteUbergraph_Abiotic_CharacterProgressionComponent(int32 EntryPoint);
    void OnItemsDistilledUpdated__DelegateSignature();
    void OnNewEmailRead__DelegateSignature(class UAbiotic_CharacterProgressionComponent_C* ProgressionComponent, FName NewEmail);
    void SkillLevelUp__DelegateSignature(ECharacterSkills Skill, int32 NewLevel);
}; // Size: 0x6B0

#endif
