#ifndef UE4SS_SDK_Deployed_Turret_ParentBP_HPP
#define UE4SS_SDK_Deployed_Turret_ParentBP_HPP

class ADeployed_Turret_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UStaticMeshComponent* TurretTop;                                            // 0x0928 (size: 0x8)
    class UStaticMeshComponent* TurretRotator;                                        // 0x0930 (size: 0x8)
    class USkeletalMeshComponent* TurretSkeleton;                                     // 0x0938 (size: 0x8)
    class UTurret_Component_C* Turret_Component;                                      // 0x0940 (size: 0x8)
    class USceneComponent* ProjectileSpawnLocation;                                   // 0x0948 (size: 0x8)
    FVector TurretTopOffset;                                                          // 0x0950 (size: 0x18)
    bool TurretIsPowered;                                                             // 0x0968 (size: 0x1)

    void Target Is Enemy To Turret(class AActor* TargetToCheck, bool& Enemy);
    bool CheckForHidingTarget(class AActor* TargetToCheck, FHitResult& OutHit);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void GetClosestEnemy(double Radius, bool& IsValid, class AActor*& SelectedTarget);
    void OnLoaded_E36C7C9C4588B0D3E9E50BBE7E243680(UClass* Loaded);
    void TogglePowerFX();
    void Broadcast_FireFX();
    void StartFiringProjectile();
    void ExecuteUbergraph_Deployed_Turret_ParentBP(int32 EntryPoint);
}; // Size: 0x969

#endif
