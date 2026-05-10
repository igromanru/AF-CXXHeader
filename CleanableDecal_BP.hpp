#ifndef UE4SS_SDK_CleanableDecal_BP_HPP
#define UE4SS_SDK_CleanableDecal_BP_HPP

class ACleanableDecal_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)

    void Server_RemoveDecal();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_CleanableDecal_BP(int32 EntryPoint);
}; // Size: 0x2A8

#endif
