#ifndef UE4SS_SDK_W_CustomGameCommandShortcuts_HPP
#define UE4SS_SDK_W_CustomGameCommandShortcuts_HPP

class UW_CustomGameCommandShortcuts_C : public UW_GameCommand_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UUniformGridPanel* UniformGridPanel_165;                                    // 0x0320 (size: 0x8)
    int32 MaxWrap;                                                                    // 0x0328 (size: 0x4)

    void LoadShortcuts();
    void LoadCustomShortcuts(TArray<FGameCommandShortcutData>& GameCommands);
    void SetContentFromCommandType(EGameCommandType CommandType);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_CustomGameCommandShortcuts(int32 EntryPoint);
}; // Size: 0x32C

#endif
