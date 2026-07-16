#ifndef UE4SS_SDK_Deployed_Turret_Laser_HPP
#define UE4SS_SDK_Deployed_Turret_Laser_HPP

class ADeployed_Turret_Laser_C : public ADeployed_Turret_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08C0 (size: 0x8)
    class ULaserComponent_C* LaserComponent;                                          // 0x08C8 (size: 0x8)
    class UAudioComponent* Laser Sound;                                               // 0x08D0 (size: 0x8)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components, bool& DontHighlightPowerCord);
    void TogglePowerFX();
    void Broadcast_FireFX();
    void StartFiringProjectile();
    void ExecuteUbergraph_Deployed_Turret_Laser(int32 EntryPoint);
}; // Size: 0x8D8

#endif
