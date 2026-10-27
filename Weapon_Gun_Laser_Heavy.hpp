#ifndef UE4SS_SDK_Weapon_Gun_Laser_Heavy_HPP
#define UE4SS_SDK_Weapon_Gun_Laser_Heavy_HPP

class AWeapon_Gun_Laser_Heavy_C : public AWeapon_Gun_Laser_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0CD8 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0CE0 (size: 0x8)

    void PlaySFX();
    void GetSecondaryItemActionArray();
    void PlayFireAnim();
    void UpdateOverdrive();
    void PlayStopFireAnim();
    void UseToggleUpdated(bool NewActive);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Weapon_Gun_Laser_Heavy(int32 EntryPoint);
}; // Size: 0xCE8

#endif
