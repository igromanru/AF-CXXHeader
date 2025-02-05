#ifndef UE4SS_SDK_Deployed_LaserPowerConverter_HPP
#define UE4SS_SDK_Deployed_LaserPowerConverter_HPP

class ADeployed_LaserPowerConverter_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0930 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x0938 (size: 0x8)
    TArray<class APowerSocket_ChildOfActor_C*> PlugStripPowerSockets;                 // 0x0940 (size: 0x10)

    void GetPoweringActors(TArray<class AActor*>& PowerSourceParents);
    void GetAttachedPowerCord(TArray<class UCableComponent*>& Power Cord Found);
    void IsPowerCord(class UActorComponent*& Cable, bool& Return, TEnumAsByte<E_OutlineMode::Type>& CableInteractionType);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void IsPowered(bool& PowerOn);
    void TogglePowerFX();
    void DestroyDeployable(bool NoLoot, int32 Extra Loot Quantity, bool LootBagLocationOverride, FVector LocationOverride);
    void ExecuteUbergraph_Deployed_LaserPowerConverter(int32 EntryPoint);
}; // Size: 0x950

#endif
