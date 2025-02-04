#ifndef UE4SS_SDK_Facility_HPP
#define UE4SS_SDK_Facility_HPP

class AFacility_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    class AStaticMeshActor* StaticMeshActor_222_ExecuteUbergraph_Facility_RefProperty; // 0x02A8 (size: 0x8)
    class ABP_Teleporter_ParentBP_C* BP_Teleporter_ParentBP_C_48_ExecuteUbergraph_Facility_RefProperty; // 0x02B0 (size: 0x8)
    class ADayNightManager_C* DayNightManager_C_1_ExecuteUbergraph_Facility_RefProperty; // 0x02B8 (size: 0x8)

    void OnFailure_FD4E33B947B8EA8361271DA9DE1F512A();
    void OnSuccess_FD4E33B947B8EA8361271DA9DE1F512A();
    void OpenRISE();
    void ReceiveBeginPlay();
    void DamFogChange();
    void CheckDamFogSheetOrientation();
    void ExecuteUbergraph_Facility(int32 EntryPoint);
}; // Size: 0x2C0

#endif
