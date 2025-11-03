#ifndef UE4SS_SDK_Deployed_CraftedChargingStation_HPP
#define UE4SS_SDK_Deployed_CraftedChargingStation_HPP

class ADeployed_CraftedChargingStation_C : public ADeployed_ChargingStation_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08E0 (size: 0x8)

    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void OnLoadedFromSave(double NewLifespan);
    void UpdatePercentageChargeFX();
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void PlayBeep();
    void SetTimer_BeepPeriodically(bool End);
    void ExecuteUbergraph_Deployed_CraftedChargingStation(int32 EntryPoint);
}; // Size: 0x8E8

#endif
