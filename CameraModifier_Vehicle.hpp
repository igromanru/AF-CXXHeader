#ifndef UE4SS_SDK_CameraModifier_Vehicle_HPP
#define UE4SS_SDK_CameraModifier_Vehicle_HPP

class UCameraModifier_Vehicle_C : public UCameraModifier
{

    void BlueprintModifyCamera(float DeltaTime, FVector ViewLocation, FRotator ViewRotation, float FOV, FVector& NewViewLocation, FRotator& NewViewRotation, float& NewFOV);
    void BlueprintModifyPostProcess(float DeltaTime, float& PostProcessBlendWeight, FPostProcessSettings& PostProcessSettings);
}; // Size: 0x48

#endif
