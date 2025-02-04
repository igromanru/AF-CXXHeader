#ifndef UE4SS_SDK_ResourceNode_DesktopPC_Note_HPP
#define UE4SS_SDK_ResourceNode_DesktopPC_Note_HPP

class AResourceNode_DesktopPC_Note_C : public AResourceNode_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D0 (size: 0x8)
    class UTextRenderComponent* Note;                                                 // 0x04D8 (size: 0x8)
    class UStaticMeshComponent* NotePaper;                                            // 0x04E0 (size: 0x8)
    class UStaticMeshComponent* DiskDrive;                                            // 0x04E8 (size: 0x8)

    void RefreshDepletedStateFX();
    void ExecuteUbergraph_ResourceNode_DesktopPC_Note(int32 EntryPoint);
}; // Size: 0x4F0

#endif
