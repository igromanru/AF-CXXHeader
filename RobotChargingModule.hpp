#ifndef UE4SS_SDK_RobotChargingModule_HPP
#define UE4SS_SDK_RobotChargingModule_HPP

class ARobotChargingModule_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class USkeletalMeshComponent* Robot;                                              // 0x0858 (size: 0x8)
    class USceneComponent* SpawnLocation;                                             // 0x0860 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0868 (size: 0x8)
    class USceneComponent* OutsideSoundLoc;                                           // 0x0870 (size: 0x8)
    class UAudioComponent* HumAudio;                                                  // 0x0878 (size: 0x8)
    class UNiagaraComponent* Niagara_Electricity1;                                    // 0x0880 (size: 0x8)
    class UNiagaraComponent* Niagara_Electricity;                                     // 0x0888 (size: 0x8)
    class AAbiotic_NPCSpawn_ParentBP_C* LinkedSpawner;                                // 0x0890 (size: 0x8)
    bool RobotActive;                                                                 // 0x0898 (size: 0x1)
    double StartingDurability;                                                        // 0x08A0 (size: 0x8)
    class UMaterialInterface* TopLightMaterial;                                       // 0x08A8 (size: 0x8)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void SpawnerCooldownUpdated();
    void OnRep_RobotActive();
    void UpdateDestroyedState();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Local_TookDamage(bool PlayDamageSound);
    void ExecuteUbergraph_RobotChargingModule(int32 EntryPoint);
}; // Size: 0x8B0

#endif
