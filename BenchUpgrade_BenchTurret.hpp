#ifndef UE4SS_SDK_BenchUpgrade_BenchTurret_HPP
#define UE4SS_SDK_BenchUpgrade_BenchTurret_HPP

class ABenchUpgrade_BenchTurret_C : public ABenchUpgrade_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)
    class UTurret_Component_C* Turret_Component;                                      // 0x02D0 (size: 0x8)
    class ULaserComponent_C* LaserComponent;                                          // 0x02D8 (size: 0x8)
    class USceneComponent* ProjectileSpawnLocation;                                   // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* TurretTop;                                            // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* TurretRotator;                                        // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* FurnitureMesh;                                        // 0x02F8 (size: 0x8)
    class UThermalEmitterComponent* ThermalEmitter;                                   // 0x0300 (size: 0x8)
    class USphereComponent* HeatRadiusSphere;                                         // 0x0308 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x0310 (size: 0x8)

    void TargetableByTurrets(bool& Targetable);
    void GetWandererNPC(class ANPC_Base_ParentBP_C*& Wanderer);
    bool GetTargetPriority(TEnumAsByte<E_TargetPriority::Type>& Priority);
    void Targetable By Triggers(bool& Targetable);
    void GetFactionTeam(TEnumAsByte<E_Factions::Type>& Faction);
    void GetSpottablePoints(TArray<FVector>& SpottablePoints);
    void TargetableByNPCs(bool Maintain, bool& Targetable);
    void RequiresRangedWeaponToEngage(bool& RequiresRanged);
    void DoesAwardSkillXPWhenHit(bool& MeleeXP, bool& RangedXP, double& XPMultiplier);
    void IsStompable(class AAbiotic_Character_ParentBP_C* AskingCharacter, bool& IsStompable);
    void GetBuffOverlayMeshes(TArray<class UMeshComponent*>& Meshes);
    bool GetCurrentLightLevel(double& LightLevel);
    bool GetSpottability(double& Spottability, bool& Crouched);
    float GetAmbientTemperature();
    void GetThermalOverlapPrimitives(TArray<class UPrimitiveComponent*>& OutPrimitives);
    void DoActionToSensedTarget(bool SuccessfullySensed);
    void SetNewWandererNPC(class ANPC_Base_ParentBP_C* PotentialWanderer);
    void ApplyNewTemperature(float NewTemperature);
    void ThermalEmitterActiveUpdated(bool bActive);
    void TogglePowerFX();
    void StartFiringProjectile();
    void Broadcast_FireFX();
    void ExecuteUbergraph_BenchUpgrade_BenchTurret(int32 EntryPoint);
}; // Size: 0x318

#endif
