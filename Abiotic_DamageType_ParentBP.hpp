#ifndef UE4SS_SDK_Abiotic_DamageType_ParentBP_HPP
#define UE4SS_SDK_Abiotic_DamageType_ParentBP_HPP

class UAbiotic_DamageType_ParentBP_C : public UDamageType
{
    FText DamageTypeDisplayName;                                                      // 0x0040 (size: 0x10)
    TSoftObjectPtr<UTexture2D> DamageTypeIcon;                                        // 0x0050 (size: 0x28)
    FText KilledByMessage;                                                            // 0x0078 (size: 0x10)
    bool CanGib;                                                                      // 0x0088 (size: 0x1)
    bool InstantGibType;                                                              // 0x0089 (size: 0x1)
    bool BlocksDBNO;                                                                  // 0x008A (size: 0x1)
    double DeployableDamageMultiplier;                                                // 0x0090 (size: 0x8)
    bool CanHarmResourceNodes;                                                        // 0x0098 (size: 0x1)
    bool CanBeShieldBlocked;                                                          // 0x0099 (size: 0x1)
    bool InstantDeathType;                                                            // 0x009A (size: 0x1)
    bool DisallowDeathSaveLocation;                                                   // 0x009B (size: 0x1)
    bool CanConstruct;                                                                // 0x009C (size: 0x1)
    bool CanRepair;                                                                   // 0x009D (size: 0x1)
    bool IgnoreArmor;                                                                 // 0x009E (size: 0x1)
    bool IgnoreBodyShields;                                                           // 0x009F (size: 0x1)
    bool CanHeadshot;                                                                 // 0x00A0 (size: 0x1)
    double Construction_Multiplier;                                                   // 0x00A8 (size: 0x8)
    ECharacterSkills SkillToAddXPOnHit;                                               // 0x00B0 (size: 0x1)
    double SkillXPMultiplier;                                                         // 0x00B8 (size: 0x8)
    double FortitudeXPMultiplier;                                                     // 0x00C0 (size: 0x8)
    TArray<FName> DebuffsCanApply_LowDmg;                                             // 0x00C8 (size: 0x10)
    TArray<FName> DebuffsCanApply_MediumDmg;                                          // 0x00D8 (size: 0x10)
    TArray<FName> DebuffsCanApply_HighDmg;                                            // 0x00E8 (size: 0x10)
    TArray<FName> DebuffsCanApply_ExtremeDmg;                                         // 0x00F8 (size: 0x10)
    TMap<TEnumAsByte<ECriticalityLevels::Type>, double> SeverityLevels;               // 0x0108 (size: 0x50)
    TEnumAsByte<E_DamageFeedbackType::Type> DamageFeedbackType;                       // 0x0158 (size: 0x1)
    TEnumAsByte<E_DeathYellType::Type> DeathFeedbackType;                             // 0x0159 (size: 0x1)
    class USoundCue* LocalDamageSound;                                                // 0x0160 (size: 0x8)
    TMap<TEnumAsByte<EPhysicalSurface>, TSoftObjectPtr<UMaterialInstance>> SurfaceType; // 0x0168 (size: 0x50)
    double BodyShieldDamage_Multiplier;                                               // 0x01B8 (size: 0x8)
    FGameplayTagContainer DamageTags;                                                 // 0x01C0 (size: 0x20)
    class USoundCue* WeaknessHitSounds;                                               // 0x01E0 (size: 0x8)
    double RagdollImpulseMultiplier;                                                  // 0x01E8 (size: 0x8)
    double StaminaDamageMultiplier;                                                   // 0x01F0 (size: 0x8)
    bool ShouldStaggerTarget;                                                         // 0x01F8 (size: 0x1)
    TMap<TEnumAsByte<EPhysicalSurface>, TSoftObjectPtr<USoundBase>> SurfaceTypeSounds; // 0x0200 (size: 0x50)
    FStatModifierRowHandle DamageReductionStat;                                       // 0x0250 (size: 0x20)
    FGameplayTagContainer GameplayTags;                                               // 0x0270 (size: 0x20)

}; // Size: 0x290

#endif
