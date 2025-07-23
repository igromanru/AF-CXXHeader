#ifndef UE4SS_SDK_W_PlayerHUD_RecipeVBox_HPP
#define UE4SS_SDK_W_PlayerHUD_RecipeVBox_HPP

class UW_PlayerHUD_RecipeVBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UVerticalBox* VBox_Recipe;                                                  // 0x02E8 (size: 0x8)
    int32 MaxRecipesToShow;                                                           // 0x02F0 (size: 0x4)
    TArray<FHUDNotifyData_Struct> NotifyQueue;                                        // 0x02F8 (size: 0x10)
    class USoundBase* RecipeNotifyUnlockSound;                                        // 0x0308 (size: 0x8)
    class USoundBase* MapPickupSound;                                                 // 0x0310 (size: 0x8)
    double TimeCreated;                                                               // 0x0318 (size: 0x8)

    void CreateFishNotify(FName FishRow);
    void CreateCompendiumNotify(FName CompendiumEntryRow);
    void JournalUpdateNotifyIconStatus();
    void CreateCustomizationNotify(FDataTableRowHandle CustomizationRow);
    void CreateMapNotify();
    void CreateJournalNotify(FName JournalRow);
    void CreateRecipeNotify(FName RecipeRow);
    void OnNotifyRemoved();
    void QueueHUDNotify(FHUDNotifyData_Struct RecipeRow);
    void UpdateNotifyQueue();
    void Construct();
    void ExecuteUbergraph_W_PlayerHUD_RecipeVBox(int32 EntryPoint);
}; // Size: 0x320

#endif
