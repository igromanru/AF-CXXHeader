#ifndef UE4SS_SDK_Deployed_Toilet_Portal_HPP
#define UE4SS_SDK_Deployed_Toilet_Portal_HPP

class ADeployed_Toilet_Portal_C : public AToilet_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0878 (size: 0x8)
    class UStaticMeshComponent* Storm1;                                               // 0x0880 (size: 0x8)
    class UStaticMeshComponent* Storm2;                                               // 0x0888 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0890 (size: 0x8)
    class UStaticMeshComponent* LaserPowerCollider;                                   // 0x0898 (size: 0x8)
    int32 ExtraContinenceDrainCounter;                                                // 0x08A0 (size: 0x4)

    class UPrimitiveComponent* GetLaserReceiverPort();
    void DistantShoreCheck(class AAbiotic_Character_ParentBP_C* Character, bool& DistantShore);
    void TogglePowerFX();
    void DrainContinence(class AAbiotic_Character_ParentBP_C* Character);
    void InteractWith_A_LocalFX(bool Hold);
    void InteractTeleportUpdate(class AAbiotic_Character_ParentBP_C* InteractingCharacter, bool TryingToTeleport, bool TeleportSuccessful);
    void ExecuteUbergraph_Deployed_Toilet_Portal(int32 EntryPoint);
}; // Size: 0x8A4

#endif
