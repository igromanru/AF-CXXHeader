#ifndef UE4SS_SDK_EffectsFunctionLibrary_HPP
#define UE4SS_SDK_EffectsFunctionLibrary_HPP

class UEffectsFunctionLibrary_C : public UBlueprintFunctionLibrary
{

    void GetSurfaceBloodSplatDecal(TEnumAsByte<EBloodSplatterType::Type> SplatterType, class UObject* __WorldContext, class UMaterialInterface*& BloodDecal);
    void LerpLevelFX(const FLevelFXData& FromFX, const FLevelFXData& ToFX, double Alpha, bool IsDebugLevel, class UObject* __WorldContext, FLevelFXData& OutFX);
    void GetBloodColor(TEnumAsByte<EBloodSplatterType::Type> Blood Splatter Type, class UObject* __WorldContext, FLinearColor& Color);
    void GetSurfaceLandingSound(TEnumAsByte<EPhysicalSurface> surface, class UObject* __WorldContext);
    void GetSurfaceWalkSound(TEnumAsByte<EPhysicalSurface> surface, bool Sprinting, class UObject* __WorldContext);
    void GetSurfaceHitSound(TEnumAsByte<EPhysicalSurface> surface, TSubclassOf<class UAbioticDamageType> DamageType, class UObject* __WorldContext);
    void GetSurfaceHitParticle(TEnumAsByte<EPhysicalSurface> surface, TEnumAsByte<EBloodSplatterType::Type> BloodColor, class UObject* __WorldContext);
}; // Size: 0x28

#endif
