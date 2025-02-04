#ifndef UE4SS_SDK_Deployed_Toilet_Portal_HPP
#define UE4SS_SDK_Deployed_Toilet_Portal_HPP

class ADeployed_Toilet_Portal_C : public AToilet_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0958 (size: 0x8)
    class UStaticMeshComponent* Storm1;                                               // 0x0960 (size: 0x8)
    class UStaticMeshComponent* Storm2;                                               // 0x0968 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0970 (size: 0x8)
    class UStaticMeshComponent* LaserPowerCollider;                                   // 0x0978 (size: 0x8)
    int32 ExtraContinenceDrainCounter;                                                // 0x0980 (size: 0x4)

    class UPrimitiveComponent* GetLaserReceiverPort();
    void DistantShoreCheck(class AAbiotic_Character_ParentBP_C* Character, bool& DistantShore);
    void TogglePowerFX();
    void DrainContinence(class AAbiotic_Character_ParentBP_C* Character);
    void InteractWith_A_LocalFX(bool Hold);
    void InteractTeleportUpdate(class AAbiotic_Character_ParentBP_C* InteractingCharacter, bool TryingToTeleport, bool TeleportSuccessful);
    void ExecuteUbergraph_Deployed_Toilet_Portal(int32 EntryPoint);
}; // Size: 0x984

#endif
