#ifndef UE4SS_SDK_BP_Teleporter_HomeWorld_HPP
#define UE4SS_SDK_BP_Teleporter_HomeWorld_HPP

class ABP_Teleporter_HomeWorld_C : public ABP_Teleporter_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0410 (size: 0x8)
    FGameEntitlementRowHandle RequiredDLC;                                            // 0x0418 (size: 0x20)

    void SavePortalState(bool ForceWorldSave);
    void OnServerEntitlementsUpdated();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Teleporter_HomeWorld(int32 EntryPoint);
}; // Size: 0x438

#endif
