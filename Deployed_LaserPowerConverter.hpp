#ifndef UE4SS_SDK_Deployed_LaserPowerConverter_HPP
#define UE4SS_SDK_Deployed_LaserPowerConverter_HPP

class ADeployed_LaserPowerConverter_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x0928 (size: 0x8)
    bool ValidLaserPower;                                                             // 0x0930 (size: 0x1)
    TArray<class APowerSocket_ChildOfActor_C*> PlugStripPowerSockets;                 // 0x0938 (size: 0x10)

    void ReceiveLaserHit(class ULaserComponent_C* Laser, int32 CurrentBounce, FHitResult& HitResult, bool& Handled);
    void GetAttachedPowerCord(TArray<class UCableComponent*>& Power Cord Found);
    void GetPowerCordHighlightColor(class UActorComponent*& Cable, int32& Color);
    void OnRep_ValidLaserPower();
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void IsPowered(bool& PowerOn);
    void TogglePowerFX();
    void StopLaserHitUpdate(class ULaserComponent_C* Laser);
    void DestroyDeployable(bool NoLoot, int32 Extra Loot Quantity, bool LootBagLocationOverride, FVector LocationOverride);
    void ExecuteUbergraph_Deployed_LaserPowerConverter(int32 EntryPoint);
}; // Size: 0x948

#endif
