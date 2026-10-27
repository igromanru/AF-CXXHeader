#ifndef UE4SS_SDK_Abiotic_WorldSave_HPP
#define UE4SS_SDK_Abiotic_WorldSave_HPP

class UAbiotic_WorldSave_C : public UAbioticWorldSave
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x07F0 (size: 0x8)

    void ResetButtonMap();
    void ResetSecurityDoorMap();
    void ResetDeployedObjectMap();
    void ResetSimpleDoorMap();
    void ApplyVersion2Upgrade();
    void ResetVignette();
    void GenerateLevelGUID();
    void AddWorldFlag(FWorldFlagRowHandle WorldFlagToSet);
    void ExecuteUbergraph_Abiotic_WorldSave(int32 EntryPoint);
}; // Size: 0x7F8

#endif
