#ifndef UE4SS_SDK_NPC_Flying_ParentBP_HPP
#define UE4SS_SDK_NPC_Flying_ParentBP_HPP

class ANPC_Flying_ParentBP_C : public ANPC_Base_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x21B8 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void LocalUpdateWalkSpeed();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_NPC_Flying_ParentBP(int32 EntryPoint);
}; // Size: 0x21C0

#endif
