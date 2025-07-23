#ifndef UE4SS_SDK_Facility_Office1_HPP
#define UE4SS_SDK_Facility_Office1_HPP

class AFacility_Office1_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    FTimerHandle SoftlockPreventionTimer;                                             // 0x02A8 (size: 0x8)
    FTimerHandle SoftlockRespawnTimer;                                                // 0x02B0 (size: 0x8)
    class AResourceNode_DesktopPC_Note_C* ResourceNode_DesktopPC_Note_C_1_ExecuteUbergraph_Facility_Office1_RefProperty; // 0x02B8 (size: 0x8)
    class AResourceNode_MetalVent_C* Destructible_Vent_C_2_ExecuteUbergraph_Facility_Office1_RefProperty; // 0x02C0 (size: 0x8)
    class ATrigger_FacilityEarthquake_C* Trigger_FacilityEarthquake_C_2_ExecuteUbergraph_Facility_Office1_RefProperty; // 0x02C8 (size: 0x8)
    class ATrigger_NarrativeNPCUpdate_C* Trigger_NarrativeNPCUpdate_C_0_ExecuteUbergraph_Facility_Office1_RefProperty; // 0x02D0 (size: 0x8)
    class ATrigger_WorldFlag_C* Trigger_WorldFlag_C_3_ExecuteUbergraph_Facility_Office1_RefProperty; // 0x02D8 (size: 0x8)
    class ANPC_Monster_Carbuncle_C* NPC_Monster_Carbuncle_C_1_ExecuteUbergraph_Facility_Office1_RefProperty; // 0x02E0 (size: 0x8)
    class ASkeletalMeshActor* SkeletalMeshActor_8_ExecuteUbergraph_Facility_Office1_RefProperty; // 0x02E8 (size: 0x8)
    class ANarrativeNPC_Human_ParentBP_C* NarrativeNPC_Human_ParentBP_C_0_ExecuteUbergraph_Facility_Office1_RefProperty; // 0x02F0 (size: 0x8)
    class ATrigger_WorldFlag_C* Abiotic_TriggerVolume_ParentBP_C_1_ExecuteUbergraph_Facility_Office1_RefProperty; // 0x02F8 (size: 0x8)
    class ATV_ParentBP_C* TV_ParentBP_C_1_ExecuteUbergraph_Facility_Office1_RefProperty; // 0x0300 (size: 0x8)
    class ADestructible_CafeteriaDoor_C* Destructible_CafeteriaDoor_C_1_ExecuteUbergraph_Facility_Office1_RefProperty; // 0x0308 (size: 0x8)
    class AResourceNode_DesktopPC_Note_C* ResourceNode_DesktopPC_Note_C_0_ExecuteUbergraph_Facility_Office1_RefProperty; // 0x0310 (size: 0x8)

    void ReceiveBeginPlay();
    void PlayersBuiltPowerBrick(class AAbioticCharacter* Player, FName ItemName, int32 Amount);
    void PlayAnnouncement_EnhancedSecurity();
    void ZapPlayer(class AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
    void ShowJagerBlood(class AAbiotic_Character_ParentBP_C* Character);
    void ResetTVTip();
    void ExecuteUbergraph_Facility_Office1(int32 EntryPoint);
}; // Size: 0x318

#endif
