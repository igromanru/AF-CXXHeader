#ifndef UE4SS_SDK_AI_Controller_PowerLeech_HPP
#define UE4SS_SDK_AI_Controller_PowerLeech_HPP

class AAI_Controller_PowerLeech_C : public AAbiotic_AI_Controller_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08B8 (size: 0x8)
    double LeyakAggroRange;                                                           // 0x08C0 (size: 0x8)
    bool WantsToDespawn;                                                              // 0x08C8 (size: 0x1)
    double MaxLeyakChaseDistance_Aggrod;                                              // 0x08D0 (size: 0x8)

    void JustTookDamage(class AAbiotic_Character_ParentBP_C* FromCharacter, FVector FromLocation, double Damage, bool FriendlyFire, bool SkipPainLine);
    void TargetableByTurrets(bool& Targetable);
    void TargetableByNPCs(bool Maintain, bool& Targetable);
    void BT_CheckObstruction();
    void GetFactionTeam(TEnumAsByte<E_Factions::Type>& Faction);
    void TurnToFaceDirection(FVector Direction, bool AllowTurnDuringMontage, bool TurningToAttack);
    void ExecuteUbergraph_AI_Controller_PowerLeech(int32 EntryPoint);
}; // Size: 0x8D8

#endif
