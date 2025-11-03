#ifndef UE4SS_SDK_Abiotic_PlayerCameraManager_HPP
#define UE4SS_SDK_Abiotic_PlayerCameraManager_HPP

class AAbiotic_PlayerCameraManager_C : public APlayerCameraManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x24D0 (size: 0x8)
    TArray<class ACameraActor*> CinematicCameraActors;                                // 0x24D8 (size: 0x10)

    void SetCinematicCamera();
    bool BlueprintUpdateCamera(class AActor* CameraTarget, FVector& NewCameraLocation, FRotator& NewCameraRotation, float& NewCameraFOV);
    void CloseCinematicCamera();
    void CycleCinematicCamera();
    void CycleCinematicCameraMode();
    void ExecuteUbergraph_Abiotic_PlayerCameraManager(int32 EntryPoint);
}; // Size: 0x24E8

#endif
