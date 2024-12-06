#ifndef UE4SS_SDK_Turret_Component_HPP
#define UE4SS_SDK_Turret_Component_HPP

class UTurret_Component_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    class AActor* CurrentTarget;                                                      // 0x00B0 (size: 0x8)
    FTimerHandle FindTargetTimer;                                                     // 0x00B8 (size: 0x8)
    bool PatrolMode;                                                                  // 0x00C0 (size: 0x1)
    FVector TargetLocation;                                                           // 0x00C8 (size: 0x18)
    FTimerHandle TurretRotateTimer;                                                   // 0x00E0 (size: 0x8)
    FRotator TargetTurretRotation;                                                    // 0x00E8 (size: 0x18)
    bool Firing;                                                                      // 0x0100 (size: 0x1)
    double MaxRangeFromItem;                                                          // 0x0108 (size: 0x8)

    void OnRep_PatrolMode();
    void UpdatePatrolMode(bool Enable);
    class AActor* GetOwningActor();
    void GetTurretTop(class USceneComponent*& TurretTop);
    void LookForTargetNearby(bool& Success);
    void Get Owner Item Data(FAbiotic_InventoryItemStruct& ItemData);
    void GetClosestEnemy(double Radius, bool& IsValid, class AActor*& SelectedTarget);
    bool CheckForHidingTarget(class AActor* TargetToCheck, FHitResult& OutHit);
    void StartRotateTuret();
    void FindClosestTarget();
    void TurretTimerState(bool PowerOn);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Turret_Component(int32 EntryPoint);
}; // Size: 0x110

#endif
