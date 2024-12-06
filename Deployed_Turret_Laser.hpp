#ifndef UE4SS_SDK_Deployed_Turret_Laser_HPP
#define UE4SS_SDK_Deployed_Turret_Laser_HPP

class ADeployed_Turret_Laser_C : public ADeployed_Turret_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0970 (size: 0x8)
    class ULaserComponent_C* LaserComponent;                                          // 0x0978 (size: 0x8)
    class UAudioComponent* Laser Sound;                                               // 0x0980 (size: 0x8)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void TogglePowerFX();
    void Broadcast_FireFX();
    void StartFiringProjectile();
    void ExecuteUbergraph_Deployed_Turret_Laser(int32 EntryPoint);
}; // Size: 0x988

#endif
