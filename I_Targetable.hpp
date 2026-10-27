#ifndef UE4SS_SDK_I_Targetable_HPP
#define UE4SS_SDK_I_Targetable_HPP

class II_Targetable_C : public IInterface
{

    void GetFriendlyFireDamageMultiplier(bool& Return, double& DamageMultiplier);
    void TargetableByTurrets(bool& Targetable);
    void SetNewWandererNPC(class ANPC_Base_ParentBP_C* PotentialWanderer);
    void GetWandererNPC(class ANPC_Base_ParentBP_C*& Wanderer);
    void GetTargetPriority(TEnumAsByte<E_TargetPriority::Type>& Priority);
    void Targetable By Triggers(bool& Targetable);
    void GetSpottability(double& Spottability, bool& Crouched);
    void GetCurrentLightLevel(double& LightLevel);
    void GetBuffOverlayMeshes(TArray<UMeshComponent*>& Meshes);
    void DoActionToSensedTarget(bool SuccessfullySensed);
    void IsStompable(class AAbiotic_Character_ParentBP_C* AskingCharacter, bool& IsStompable);
    void DoesAwardSkillXPWhenHit(bool& MeleeXP, bool& RangedXP, double& XPMultiplier);
    void RequiresRangedWeaponToEngage(bool& RequiresRanged);
    void TargetableByNPCs(bool Maintain, class AActor* TargetingNPC, bool& Targetable);
    void GetSpottablePoints(TArray<FVector>& SpottablePoints);
    void GetFactionTeam(EFactions& Faction);
}; // Size: 0x28

#endif
