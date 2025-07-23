#ifndef UE4SS_SDK_Deployed_Turret_ParentBP_HPP
#define UE4SS_SDK_Deployed_Turret_ParentBP_HPP

class ADeployed_Turret_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class UStaticMeshComponent* TurretTop;                                            // 0x0858 (size: 0x8)
    class UStaticMeshComponent* TurretRotator;                                        // 0x0860 (size: 0x8)
    class USkeletalMeshComponent* TurretSkeleton;                                     // 0x0868 (size: 0x8)
    class UTurret_Component_C* Turret_Component;                                      // 0x0870 (size: 0x8)
    class USceneComponent* ProjectileSpawnLocation;                                   // 0x0878 (size: 0x8)
    FVector TurretTopOffset;                                                          // 0x0880 (size: 0x18)
    bool TurretIsPowered;                                                             // 0x0898 (size: 0x1)

    void Target Is Enemy To Turret(class AActor* TargetToCheck, bool& Enemy);
    bool CheckForHidingTarget(class AActor* TargetToCheck, FHitResult& OutHit);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void GetClosestEnemy(double Radius, bool& IsValid, class AActor*& SelectedTarget);
    void OnLoaded_E36C7C9C4588B0D3E9E50BBE7E243680(UClass* Loaded);
    void TogglePowerFX();
    void Broadcast_FireFX();
    void StartFiringProjectile();
    void ExecuteUbergraph_Deployed_Turret_ParentBP(int32 EntryPoint);
}; // Size: 0x899

#endif
