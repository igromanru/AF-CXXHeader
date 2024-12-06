#ifndef UE4SS_SDK_RobotChargingModule_HPP
#define UE4SS_SDK_RobotChargingModule_HPP

class ARobotChargingModule_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class USkeletalMeshComponent* Robot;                                              // 0x0928 (size: 0x8)
    class USceneComponent* SpawnLocation;                                             // 0x0930 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0938 (size: 0x8)
    class USceneComponent* OutsideSoundLoc;                                           // 0x0940 (size: 0x8)
    class UAudioComponent* HumAudio;                                                  // 0x0948 (size: 0x8)
    class UNiagaraComponent* Niagara_Electricity1;                                    // 0x0950 (size: 0x8)
    class UNiagaraComponent* Niagara_Electricity;                                     // 0x0958 (size: 0x8)
    class AAbiotic_NPCSpawn_ParentBP_C* LinkedSpawner;                                // 0x0960 (size: 0x8)
    bool RobotActive;                                                                 // 0x0968 (size: 0x1)
    double StartingDurability;                                                        // 0x0970 (size: 0x8)
    class UMaterialInterface* TopLightMaterial;                                       // 0x0978 (size: 0x8)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void SpawnerCooldownUpdated();
    void OnRep_RobotActive();
    void UpdateDestroyedState();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Local_TookDamage(bool PlayDamageSound);
    void ExecuteUbergraph_RobotChargingModule(int32 EntryPoint);
}; // Size: 0x980

#endif
