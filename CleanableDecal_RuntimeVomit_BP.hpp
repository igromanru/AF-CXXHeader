#ifndef UE4SS_SDK_CleanableDecal_RuntimeVomit_BP_HPP
#define UE4SS_SDK_CleanableDecal_RuntimeVomit_BP_HPP

class ACleanableDecal_RuntimeVomit_BP_C : public ACleanableDecal_Blood_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)

    void Server_RemoveDecal();
    void ReceiveBeginPlay();
    void ToggleVomit(bool NewValue);
    void ExecuteUbergraph_CleanableDecal_RuntimeVomit_BP(int32 EntryPoint);
}; // Size: 0x2C8

#endif
