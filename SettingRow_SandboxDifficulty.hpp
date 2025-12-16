#ifndef UE4SS_SDK_SettingRow_SandboxDifficulty_HPP
#define UE4SS_SDK_SettingRow_SandboxDifficulty_HPP

class USettingRow_SandboxDifficulty_C : public USettingRow_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0498 (size: 0x8)

    void Construct();
    void PreviewSettingUpdated();
    void ExecuteUbergraph_SettingRow_SandboxDifficulty(int32 EntryPoint);
}; // Size: 0x4A0

#endif
