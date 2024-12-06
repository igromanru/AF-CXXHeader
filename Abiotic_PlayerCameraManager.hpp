#ifndef UE4SS_SDK_Abiotic_PlayerCameraManager_HPP
#define UE4SS_SDK_Abiotic_PlayerCameraManager_HPP

class AAbiotic_PlayerCameraManager_C : public APlayerCameraManager
{

    bool BlueprintUpdateCamera(class AActor* CameraTarget, FVector& NewCameraLocation, FRotator& NewCameraRotation, float& NewCameraFOV);
}; // Size: 0x24D0

#endif
