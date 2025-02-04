#ifndef UE4SS_SDK_Announcement_Struct_HPP
#define UE4SS_SDK_Announcement_Struct_HPP

struct FAnnouncement_Struct
{
    TArray<TSoftObjectPtr<UDialogueWave>> AnnouncementDialogueInOrder_22_EA51979644A84E4D0CF8F883B6BE61C7; // 0x0000 (size: 0x10)
    TArray<FDataTableRowHandle> JournalEntriesToAddAfterHearing_12_81C9FFA54F4DFBB534C3DAB168BD370A; // 0x0010 (size: 0x10)
    TArray<FCompendiumEntryRowHandle> CompendiumUnlocksAfterHearing_17_C1B3ECEA43C97254F7E77D800184F6C8; // 0x0020 (size: 0x10)
    FText CharacterName_26_A8792ED14FFED9F28EF7AC8AFC520BA0;                          // 0x0030 (size: 0x10)

}; // Size: 0x40

#endif
