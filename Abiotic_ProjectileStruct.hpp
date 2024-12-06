#ifndef UE4SS_SDK_Abiotic_ProjectileStruct_HPP
#define UE4SS_SDK_Abiotic_ProjectileStruct_HPP

struct FAbiotic_ProjectileStruct
{
    FString ProjectileDeathLine_60_D98449FC45F2D3990B75ED9309E2F445;                  // 0x0000 (size: 0x10)
    TSoftClassPtr<AAbioticProjectile_ParentBP_C> OptionalProjectileClass_12_2F9A604742DA374A7EE94587BC761FDB; // 0x0010 (size: 0x28)
    double CollisionRadius_59_13099EB848995C0ED7612B88823E6AEC;                       // 0x0038 (size: 0x8)
    double InitialSpeed_21_5DC7DBA94DAE609C3AF75E89A68691A7;                          // 0x0040 (size: 0x8)
    double MaxSpeed_23_D2E63E7D4D56F4151FE6CBB2FE307B2E;                              // 0x0048 (size: 0x8)
    TSoftObjectPtr<UStaticMesh> StaticMesh_15_D5B120EC4A7DD418B2C5BBA83C1EE23D;       // 0x0050 (size: 0x28)
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh_18_9D8AD96845F1019039DC479DDA049786;   // 0x0078 (size: 0x28)
    bool RotationFollowVelocity_26_7A607A6E492EBFCE75EA85AB100FD625;                  // 0x00A0 (size: 0x1)
    bool RotationRemainsVertical_56_4832EC27461A4446AF35978CA0F19819;                 // 0x00A1 (size: 0x1)
    double ProjectileGravityScale_31_D7158C5148CB3F07BF79CB9B61C35410;                // 0x00A8 (size: 0x8)
    bool ShouldBounce_36_61C339324EA78E560CF2FE954EB1D548;                            // 0x00B0 (size: 0x1)
    int32 NumberOfBounce_106_A132B8824AF0027427A1088511B469AB;                        // 0x00B4 (size: 0x4)
    bool BounceAngleAffectsFriction_37_C3533D7A47A865236B4B00945019A104;              // 0x00B8 (size: 0x1)
    double Bounciness_40_95964CCB495BB31BA9C459BFF46D4A8F;                            // 0x00C0 (size: 0x8)
    double Friction_42_0BCACACF4E4D41C853F7E4B64131FD16;                              // 0x00C8 (size: 0x8)
    double BounceVelocityStopSimulatingThreshold_44_AF2B3ECB4F96127A287DF88A0D7E6516; // 0x00D0 (size: 0x8)
    bool ForceSubStepping_52_AA13713748250D987B51B1B43ABD3884;                        // 0x00D8 (size: 0x1)
    bool IsHomingProjectile_54_04981F5D478DFA1F676D2E85C75EA577;                      // 0x00D9 (size: 0x1)
    double HomingAccelerationMagnitude_55_06EA46E54F277BC4670EFF8862BD94D9;           // 0x00E0 (size: 0x8)
    bool GlintProjectile_62_E1034F4246A7721AFADA54A1AE9674CE;                         // 0x00E8 (size: 0x1)
    bool AreaOfEffectDamage_66_9D10072C4BCE8210B5D02F8890ABB3B9;                      // 0x00E9 (size: 0x1)
    double AoEMinimumDamage_79_A2BFD9FA4566429A21D1BBAF3BFFEAE4;                      // 0x00F0 (size: 0x8)
    double DamageFalloff_69_2F433F7E4AD27E5079FBC8933E0FB92A;                         // 0x00F8 (size: 0x8)
    double AoE_InnerRadius_77_CAE50D6B46894572B2592083DE5ECD39;                       // 0x0100 (size: 0x8)
    double AoE_OuterRadius_78_9794512B4B4EE92BBB113195C7EEA50E;                       // 0x0108 (size: 0x8)
    TSoftClassPtr<UAbiotic_DamageType_ParentBP_C> DamageType_82_EDF5BD044B17E179644B32B42649593D; // 0x0110 (size: 0x28)
    bool CanHarmDeployables_84_BD20F506477079DA789C548416DE8246;                      // 0x0138 (size: 0x1)
    bool ReducedDamageToDeployables_86_34C0BB0D4B0ECC041DAC718AD680D5BE;              // 0x0139 (size: 0x1)
    TArray<FName> BuffDebuffToApply_101_C6C9E6F34E073829A7976682FC1D2FF1;             // 0x0140 (size: 0x10)
    bool CanDealDamage_103_E75522E840C7207AC2F800937F3F5A69;                          // 0x0150 (size: 0x1)

}; // Size: 0x151

#endif
