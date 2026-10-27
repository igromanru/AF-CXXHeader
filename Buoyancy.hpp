#ifndef UE4SS_SDK_Buoyancy_HPP
#define UE4SS_SDK_Buoyancy_HPP

#include "Buoyancy_enums.hpp"

class IBuoyancyEventInterface : public IInterface
{

    void OnSurfaceTouching(class AWaterBody* WaterBodyActor, class UPrimitiveComponent* WaterComponent, class UPrimitiveComponent* SubmergedComponent, float SubmergedVolume, const FVector& SubmergedCenterOfMass, const FVector& SubmergedVelocity);
    void OnSurfaceTouchEnd(class AWaterBody* WaterBodyActor, class UPrimitiveComponent* WaterComponent, class UPrimitiveComponent* SubmergedComponent, float SubmergedVolume, const FVector& SubmergedCenterOfMass, const FVector& SubmergedVelocity);
    void OnSurfaceTouchBegin(class AWaterBody* WaterBodyActor, class UPrimitiveComponent* WaterComponent, class UPrimitiveComponent* SubmergedComponent, float SubmergedVolume, const FVector& SubmergedCenterOfMass, const FVector& SubmergedVelocity);
}; // Size: 0x28

class UBuoyancyRuntimeSettings : public UDeveloperSettings
{
    bool bBuoyancyEnabled;                                                            // 0x0038 (size: 0x1)
    bool bKeepFloatingObjectsAwake;                                                   // 0x0039 (size: 0x1)
    float WaterDensity;                                                               // 0x003C (size: 0x4)
    float WaterDrag;                                                                  // 0x0040 (size: 0x4)
    TEnumAsByte<ECollisionChannel> CollisionChannelForWaterObjects;                   // 0x0044 (size: 0x1)
    int32 MaxNumBoundsSubdivisions;                                                   // 0x0048 (size: 0x4)
    float MinBoundsSubdivisionVol;                                                    // 0x004C (size: 0x4)
    uint8 SurfaceTouchCallbackFlags;                                                  // 0x0050 (size: 0x1)
    float MinVelocityForSurfaceTouchCallback;                                         // 0x0054 (size: 0x4)
    bool bEnableSplineKeyCacheGrid;                                                   // 0x0058 (size: 0x1)
    float SplineKeyCacheGridSize;                                                     // 0x005C (size: 0x4)
    uint32 SplineKeyCacheLimit;                                                       // 0x0060 (size: 0x4)

}; // Size: 0x68

class UBuoyancySubsystem : public UTickableWorldSubsystem
{

    void IsEnabled();
}; // Size: 0x90

#endif
