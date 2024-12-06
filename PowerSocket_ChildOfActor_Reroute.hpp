#ifndef UE4SS_SDK_PowerSocket_ChildOfActor_Reroute_HPP
#define UE4SS_SDK_PowerSocket_ChildOfActor_Reroute_HPP

class APowerSocket_ChildOfActor_Reroute_C : public APowerSocket_ChildOfActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)

    void GetPowerCordHighlightColor(class UActorComponent*& Cable, int32& Color);
    void GetAttachedPowerCord(TArray<class UCableComponent*>& Power Cord Found);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_PowerSocket_ChildOfActor_Reroute(int32 EntryPoint);
}; // Size: 0x3C8

#endif
