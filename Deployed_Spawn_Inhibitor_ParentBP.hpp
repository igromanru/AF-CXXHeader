#ifndef UE4SS_SDK_Deployed_Spawn_Inhibitor_ParentBP_HPP
#define UE4SS_SDK_Deployed_Spawn_Inhibitor_ParentBP_HPP

class ADeployed_Spawn_Inhibitor_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0858 (size: 0x8)
    double SpawnBlockRadius;                                                          // 0x0860 (size: 0x8)
    TArray<FDataTableRowHandle> NPCBlockList;                                         // 0x0868 (size: 0x10)

    void Is Location Close Enough?(FVector LocationToCheck, FBenchUpgradeRowHandle Upgrade, bool DirectorDebugOn, double SpawnRadius, FName NameToCheck, bool& LocationNearby);
    void UserConstructionScript();
    void TogglePowerFX();
    void ExecuteUbergraph_Deployed_Spawn_Inhibitor_ParentBP(int32 EntryPoint);
}; // Size: 0x878

#endif
