#ifndef UE4SS_SDK_W_Mods_DetailInfo_HPP
#define UE4SS_SDK_W_Mods_DetailInfo_HPP

class UW_Mods_DetailInfo_C : public UAbioticMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* Mod_Description;                                                // 0x02E8 (size: 0x8)
    class UImage* Mod_Image;                                                          // 0x02F0 (size: 0x8)
    class UTextBlock* Mod_Name;                                                       // 0x02F8 (size: 0x8)
    class UTextBlock* Mod_Summary;                                                    // 0x0300 (size: 0x8)
    FModioModInfo ModInfo;                                                            // 0x0308 (size: 0x1E8)

    void DisplayModDetails(FModioModInfo InModInfo);
    void PreConstruct(bool IsDesignTime);
    void OnModImageReceived(FModioErrorCode ErrorCode, FModioOptionalImage Path);
    void OnModImageDownloaded(class UTexture2DDynamic* Texture);
    void ExecuteUbergraph_W_Mods_DetailInfo(int32 EntryPoint);
}; // Size: 0x4F0

#endif
