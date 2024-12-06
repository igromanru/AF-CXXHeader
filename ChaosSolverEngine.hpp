#ifndef UE4SS_SDK_ChaosSolverEngine_HPP
#define UE4SS_SDK_ChaosSolverEngine_HPP

#include "ChaosSolverEngine_enums.hpp"

struct FBreakEventCallbackWrapper
{
}; // Size: 0x40

struct FChaosDebugSubstepControl
{
    bool bPause;                                                                      // 0x0000 (size: 0x1)
    bool bSubstep;                                                                    // 0x0001 (size: 0x1)
    bool bStep;                                                                       // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FChaosHandlerSet
{
    TSet<UObject*> ChaosHandlers;                                                     // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FChaosPhysicsCollisionInfo
{
    class UPrimitiveComponent* Component;                                             // 0x0000 (size: 0x8)
    class UPrimitiveComponent* OtherComponent;                                        // 0x0008 (size: 0x8)
    FVector Location;                                                                 // 0x0010 (size: 0x18)
    FVector Normal;                                                                   // 0x0028 (size: 0x18)
    FVector AccumulatedImpulse;                                                       // 0x0040 (size: 0x18)
    FVector Velocity;                                                                 // 0x0058 (size: 0x18)
    FVector OtherVelocity;                                                            // 0x0070 (size: 0x18)
    FVector AngularVelocity;                                                          // 0x0088 (size: 0x18)
    FVector OtherAngularVelocity;                                                     // 0x00A0 (size: 0x18)
    float Mass;                                                                       // 0x00B8 (size: 0x4)
    float OtherMass;                                                                  // 0x00BC (size: 0x4)

}; // Size: 0xC0

struct FCrumblingEventCallbackWrapper
{
}; // Size: 0x40

struct FRemovalEventCallbackWrapper
{
}; // Size: 0x40

class AChaosSolverActor : public AActor
{
    FChaosSolverConfiguration Properties;                                             // 0x0298 (size: 0x6C)
    float TimeStepMultiplier;                                                         // 0x0304 (size: 0x4)
    int32 CollisionIterations;                                                        // 0x0308 (size: 0x4)
    int32 PushOutIterations;                                                          // 0x030C (size: 0x4)
    int32 PushOutPairIterations;                                                      // 0x0310 (size: 0x4)
    float ClusterConnectionFactor;                                                    // 0x0314 (size: 0x4)
    EClusterConnectionTypeEnum ClusterUnionConnectionType;                            // 0x0318 (size: 0x1)
    bool DoGenerateCollisionData;                                                     // 0x0319 (size: 0x1)
    FSolverCollisionFilterSettings CollisionFilterSettings;                           // 0x031C (size: 0x10)
    bool DoGenerateBreakingData;                                                      // 0x032C (size: 0x1)
    FSolverBreakingFilterSettings BreakingFilterSettings;                             // 0x0330 (size: 0x10)
    bool DoGenerateTrailingData;                                                      // 0x0340 (size: 0x1)
    FSolverTrailingFilterSettings TrailingFilterSettings;                             // 0x0344 (size: 0x10)
    float MassScale;                                                                  // 0x0354 (size: 0x4)
    bool bHasFloor;                                                                   // 0x0358 (size: 0x1)
    float FloorHeight;                                                                // 0x035C (size: 0x4)
    FChaosDebugSubstepControl ChaosDebugSubstepControl;                               // 0x0360 (size: 0x3)
    class UBillboardComponent* SpriteComponent;                                       // 0x0368 (size: 0x8)
    class UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent;            // 0x0388 (size: 0x8)

    void SetSolverActive(bool bActive);
    void SetAsCurrentWorldSolver();
}; // Size: 0x398

class IChaosNotifyHandlerInterface : public IInterface
{
}; // Size: 0x28

class UChaosDebugDrawComponent : public UActorComponent
{
}; // Size: 0xB0

class UChaosEventListenerComponent : public UActorComponent
{
}; // Size: 0xB0

class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{
    TMap<class UPrimitiveComponent*, class FChaosHandlerSet> CollisionEventRegistrations; // 0x0170 (size: 0x50)
    TMap<class UPrimitiveComponent*, class FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x01C0 (size: 0x50)
    TMap<class UPrimitiveComponent*, class FRemovalEventCallbackWrapper> RemovalEventRegistrations; // 0x0210 (size: 0x50)
    TMap<class UPrimitiveComponent*, class FCrumblingEventCallbackWrapper> CrumblingEventRegistrations; // 0x0260 (size: 0x50)

}; // Size: 0x2C0

class UChaosSolver : public UObject
{
}; // Size: 0x28

class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{

    FHitResult ConvertPhysicsCollisionToHitResult(const FChaosPhysicsCollisionInfo& PhysicsCollision);
}; // Size: 0x28

class UChaosSolverSettings : public UDeveloperSettings
{
    FSoftClassPath DefaultChaosSolverActorClass;                                      // 0x0040 (size: 0x20)

}; // Size: 0x60

#endif
