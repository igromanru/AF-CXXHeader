#ifndef UE4SS_SDK_W_Compendium_Index_HPP
#define UE4SS_SDK_W_Compendium_Index_HPP

class UW_Compendium_Index_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UW_Compendium_Index_Button_C* Button_Characters;                            // 0x02E8 (size: 0x8)
    class UW_Compendium_Index_Button_C* Button_Entities;                              // 0x02F0 (size: 0x8)
    class UW_Compendium_Index_Button_C* Button_Fish;                                  // 0x02F8 (size: 0x8)
    class UW_Compendium_Index_Button_C* Button_Location;                              // 0x0300 (size: 0x8)
    class UW_Compendium_Index_Button_C* Button_Mail;                                  // 0x0308 (size: 0x8)
    class UW_Compendium_Index_Button_C* Button_Registry;                              // 0x0310 (size: 0x8)
    class UW_Compendium_Index_Button_C* Button_SoupBook;                              // 0x0318 (size: 0x8)
    class UW_Compendium_Index_Button_C* Button_Theory;                                // 0x0320 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0328 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0330 (size: 0x8)
    class UW_Player_Journal_Main_C* ParentJournal;                                    // 0x0338 (size: 0x8)
    FW_Compendium_Index_CUpdateUnreadStatusOnMain UpdateUnreadStatusOnMain;           // 0x0340 (size: 0x10)
    void UpdateUnreadStatusOnMain();

    void UpdateCompendiumIndecesUnreadVisual(bool& HasUnreadEntries);
    void UpdateCompendiumIndexUnreadStatus(FGameplayTag Filter, bool& Unread);
    void Construct();
    void OpenRegistry();
    void OpenEntities();
    void OpenLocations();
    void OpenEmails();
    void OpenCharacters();
    void OpenTheories();
    void OpenSoupBook();
    void OpenFishDatabase();
    void ExecuteUbergraph_W_Compendium_Index(int32 EntryPoint);
    void UpdateUnreadStatusOnMain__DelegateSignature();
}; // Size: 0x350

#endif
