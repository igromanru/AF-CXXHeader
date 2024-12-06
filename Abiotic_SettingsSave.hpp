#ifndef UE4SS_SDK_Abiotic_SettingsSave_HPP
#define UE4SS_SDK_Abiotic_SettingsSave_HPP

class UAbiotic_SettingsSave_C : public UAbiotic_SaveGame_C
{
    TArray<FName> FavouriteRecipesList;                                               // 0x0028 (size: 0x10)
    bool HasCreatedACharacter;                                                        // 0x0038 (size: 0x1)
    bool HasPlayedTutorial;                                                           // 0x0039 (size: 0x1)
    TArray<FName> UIPopupsSeen;                                                       // 0x0040 (size: 0x10)
    FHostPreferences_Struct HostPreferences;                                          // 0x0050 (size: 0x20)
    TArray<FName> TutorialHintPopupsSeen;                                             // 0x0070 (size: 0x10)
    TArray<FName> TutorialPanelsSeen;                                                 // 0x0080 (size: 0x10)
    FName SelectedMainMenuBackground;                                                 // 0x0090 (size: 0x8)
    TArray<FName> PinnedRecipeList;                                                   // 0x0098 (size: 0x10)

}; // Size: 0xA8

#endif
