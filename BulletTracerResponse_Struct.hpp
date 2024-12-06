#ifndef UE4SS_SDK_BulletTracerResponse_Struct_HPP
#define UE4SS_SDK_BulletTracerResponse_Struct_HPP

struct FBulletTracerResponse_Struct
{
    TEnumAsByte<EPhysicalSurface> Surface_5_A13BA84C444F7DFF70888788C6FCCCC2;         // 0x0000 (size: 0x1)
    double RicochetConeAngleMulti_17_32A0AE944DE3022C18C793B5CA5018A6;                // 0x0008 (size: 0x8)
    double RicochetDecideAngleMulti_18_8EE57C55424CA7D67636B5964626EDB6;              // 0x0010 (size: 0x8)
    double RicochetVelocityMultiply_21_9A5B02584E10D7CC4C3F4686274BCC61;              // 0x0018 (size: 0x8)
    double BaseArmour_28_373117FC4706CE9BA693BB8D49C42E78;                            // 0x0020 (size: 0x8)
    double Resistance_30_2DC2D4E1415EF3C1AFB5C0BED0C65727;                            // 0x0028 (size: 0x8)
    double TrajectoryModifier_32_BB5E20884B7958AD5DC4ABAF2EE5135C;                    // 0x0030 (size: 0x8)
    double FragmentationModifier_35_D7D2831849763BD514ACC4A86D5A8008;                 // 0x0038 (size: 0x8)
    bool WildRicochets_85_3A62A0124D4BC86DA3DE6B85035C13D3;                           // 0x0040 (size: 0x1)
    double WildRicochetChance_88_744E437446EE5CE88A5A2C99213530C6;                    // 0x0048 (size: 0x8)

}; // Size: 0x50

#endif
