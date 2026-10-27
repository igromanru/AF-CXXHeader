#ifndef UE4SS_SDK_W_Mods_ListEntry_HPP
#define UE4SS_SDK_W_Mods_ListEntry_HPP

class UW_Mods_ListEntry_C : public UAbioticMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UW_MainMenuButton_C* Button_Info;                                           // 0x02E8 (size: 0x8)
    class UW_MainMenuButton_C* Button_Install;                                        // 0x02F0 (size: 0x8)
    class UImage* LazyImage;                                                          // 0x02F8 (size: 0x8)
    class UWidgetSwitcher* LazyImageDownload;                                         // 0x0300 (size: 0x8)
    class UCircularThrobber* LazyImageThrobber;                                       // 0x0308 (size: 0x8)
    class UTextBlock* Text_ModName;                                                   // 0x0310 (size: 0x8)
    FModioModInfo ModInfo;                                                            // 0x0318 (size: 0x1E8)
    bool IsModSubscribed;                                                             // 0x0500 (size: 0x1)

    void SetMod(FModioModInfo InModInfo);
    void ResetToDefault();
    void Construct();
    void BndEvt__W_Mods_ListEntry_Button_Install_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void OnModImageReceived(FModioErrorCode ErrorCode, FModioOptionalImage Path);
    void OnModImageDownloaded(class UTexture2DDynamic* Texture);
    void BndEvt__W_Mods_ListEntry_Button_Info_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature();
    void ExecuteUbergraph_W_Mods_ListEntry(int32 EntryPoint);
}; // Size: 0x501

#endif
