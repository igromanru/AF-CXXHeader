#ifndef UE4SS_SDK_EffectsFunctionLibrary_HPP
#define UE4SS_SDK_EffectsFunctionLibrary_HPP

class UEffectsFunctionLibrary_C : public UBlueprintFunctionLibrary
{

    void GetSurfaceBloodSplatDecal(TEnumAsByte<EBloodSplatterType::Type> SplatterType, class UObject* __WorldContext, class UMaterialInterface*& BloodDecal);
    void LerpLevelFX(const FLevelFXData_Struct& FromFX, const FLevelFXData_Struct& ToFX, double Alpha, bool IsDebugLevel, class UObject* __WorldContext, FLevelFXData_Struct& OutFX);
    void GetBloodColor(TEnumAsByte<EBloodSplatterType::Type> Blood Splatter Type, class UObject* __WorldContext, FLinearColor& Color);
    class USoundBase* GetSurfaceLandingSound(TEnumAsByte<EPhysicalSurface> surface, class UObject* __WorldContext);
    class USoundBase* GetSurfaceWalkSound(TEnumAsByte<EPhysicalSurface> surface, bool Sprinting, class UObject* __WorldContext);
    TSoftObjectPtr<USoundBase> GetSurfaceHitSound(TEnumAsByte<EPhysicalSurface> surface, TSubclassOf<class UAbiotic_DamageType_ParentBP_C> DamageType, class UObject* __WorldContext);
    class UNiagaraSystem* GetSurfaceHitParticle(TEnumAsByte<EPhysicalSurface> surface, TEnumAsByte<EBloodSplatterType::Type> BloodColor, class UObject* __WorldContext);
}; // Size: 0x28

#endif
