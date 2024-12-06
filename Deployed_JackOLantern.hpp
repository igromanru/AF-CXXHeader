#ifndef UE4SS_SDK_Deployed_JackOLantern_HPP
#define UE4SS_SDK_Deployed_JackOLantern_HPP

class ADeployed_JackOLantern_C : public ADeployed_Figurine_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0928 (size: 0x8)
    int32 CraftedPumpkinIndex;                                                        // 0x0930 (size: 0x4)

    void GetTextureOverrides(TArray<TSoftObjectPtr<UMaterialInterface>>& TextureOverride, bool& PaintApplied);
    void SetupPumpkinTexture();
    void OnRep_CraftedPumpkinIndex();
    void ReceiveBeginPlay();
    void Process Damage(float Damage, class UObject* DamageType, FVector HitLocation, FVector HitNormal, class UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, class AController* InstigatedBy, class UObject* DamageCauser, FHitResult HitInfo);
    void OnLoadedFromSave();
    void SetupPaintAndTexture();
    void ExecuteUbergraph_Deployed_JackOLantern(int32 EntryPoint);
}; // Size: 0x934

#endif
