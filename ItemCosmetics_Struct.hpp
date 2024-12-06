#ifndef UE4SS_SDK_ItemCosmetics_Struct_HPP
#define UE4SS_SDK_ItemCosmetics_Struct_HPP

struct FItemCosmetics_Struct
{
    bool OverrideInventory3DOrientation_10_CDF43A4B4B8EAB38251069A46E045431;          // 0x0000 (size: 0x1)
    FVector Inventory3DLocation_12_7966901043BB96F41D90DE8BEC0DE897;                  // 0x0008 (size: 0x18)
    FRotator Inventory3DRotation_15_EA490C2C4E0208AD96576797BBD23AE9;                 // 0x0020 (size: 0x18)
    TSoftObjectPtr<UStaticMesh> BrokenItemStaticMesh_8_3BDE15C74CD5BC1E17284EA8463B92EB; // 0x0038 (size: 0x28)
    FName HeadlampSocket_18_7A1DDD4C487A3131A804C3ABA0578CED;                         // 0x0060 (size: 0x8)
    bool ForceItemUpright_21_437B7F8643060AC35860719663E0B4F3;                        // 0x0068 (size: 0x1)
    TSoftObjectPtr<UMaterialInterface> LightFunction_30_0169003F45212D69D46EAE9C118B711F; // 0x0070 (size: 0x28)
    TSoftClassPtr<ADeployProxy_ParentBP_C> DeployProxy_33_38A074A84A4EAB9CEDF985ADC7896861; // 0x0098 (size: 0x28)
    class UCurveVector* ScopeSway_36_23264D024411B42B700FFC9ACC6AE9A0;                // 0x00C0 (size: 0x8)
    double ScopeSwaySpeed_39_39435A8F46DE2D2ACB613F9D1C076153;                        // 0x00C8 (size: 0x8)
    TSoftObjectPtr<USoundWave> SoundEffect_47_E7ECD482476A97BF11A125BBE0E28834;       // 0x00D0 (size: 0x28)
    TSoftObjectPtr<UNiagaraSystem> ParticleEffect_48_6D868AB84AF2A0F6716372932A7930D9; // 0x00F8 (size: 0x28)
    class UPrimaryDataAsset* DataAsset_51_083C190445D5CD182B8E95B43BD31D1F;           // 0x0120 (size: 0x8)

}; // Size: 0x128

#endif
