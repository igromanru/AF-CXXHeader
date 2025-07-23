#ifndef UE4SS_SDK_W_SettingsPage_Audio_HPP
#define UE4SS_SDK_W_SettingsPage_Audio_HPP

class UW_SettingsPage_Audio_C : public UW_SettingsPage_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UVerticalBox* SettingsList;                                                 // 0x0320 (size: 0x8)

    void GetSettingsFromTable();
    void Construct();
    void ExecuteUbergraph_W_SettingsPage_Audio(int32 EntryPoint);
}; // Size: 0x328

#endif
