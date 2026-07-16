#ifndef UE4SS_SDK_Deployed_Spawn_Inhibitor_ParentBP_HPP
#define UE4SS_SDK_Deployed_Spawn_Inhibitor_ParentBP_HPP

class ADeployed_Spawn_Inhibitor_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0870 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0878 (size: 0x8)
    double SpawnBlockRadius;                                                          // 0x0880 (size: 0x8)
    TArray<FDataTableRowHandle> NPCBlockList;                                         // 0x0888 (size: 0x10)

    void Is Location Close Enough?(FVector LocationToCheck, FBenchUpgradeRowHandle Upgrade, bool DirectorDebugOn, double SpawnRadius, FName NameToCheck, bool& LocationNearby);
    void UserConstructionScript();
    void TogglePowerFX();
    void ExecuteUbergraph_Deployed_Spawn_Inhibitor_ParentBP(int32 EntryPoint);
}; // Size: 0x898

#endif
