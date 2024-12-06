#ifndef UE4SS_SDK_CheatComponent_HPP
#define UE4SS_SDK_CheatComponent_HPP

class UCheatComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    class UW_CheatMenu_C* CheatWidget;                                                // 0x00B0 (size: 0x8)

    void Server_Spawn_GlobalActors();
    void Spawn_GlobalActors();
    void ExecuteUbergraph_CheatComponent(int32 EntryPoint);
}; // Size: 0xB8

#endif
