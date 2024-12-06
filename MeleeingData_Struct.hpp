#ifndef UE4SS_SDK_MeleeingData_Struct_HPP
#define UE4SS_SDK_MeleeingData_Struct_HPP

struct FMeleeingData_Struct
{
    bool Unarmed_1_0206BD564878DA245F975390247E4651;                                  // 0x0000 (size: 0x1)
    double MeleeRange_4_2D1CF18C4342ACC3B3954AB87FCBA236;                             // 0x0008 (size: 0x8)
    bool IsWindupEnd_7_FCE4F72E4D48FAF1539395909A7E8232;                              // 0x0010 (size: 0x1)
    double SwingDuration_40_62954EAA4D9FA4FC8CAD1CA0B74680F1;                         // 0x0018 (size: 0x8)
    TEnumAsByte<E_SwingDirections::Type> SwingDirection_17_6BF123D74BABEB03B36FDDAC2331A5A6; // 0x0020 (size: 0x1)
    double SwingTraceRadius_20_224ABF0C43CAB8C7B9B761A1BA5201E2;                      // 0x0028 (size: 0x8)
    bool EndSwingOnFirstHit_25_270E184C4A2C924BD9DCA1A8DFD8C629;                      // 0x0030 (size: 0x1)
    bool HitEnemyThisSwing_27_C99C41014ECE7E4ECE5A85BF52588795;                       // 0x0031 (size: 0x1)
    int32 SwingIndex_30_D6AA308E48F104CA6300179A679A8065;                             // 0x0034 (size: 0x4)
    TEnumAsByte<ETraceTypeQuery> TraceChannel_33_642FEF054496C3526EF7D6AEC33B1EB7;    // 0x0038 (size: 0x1)
    double StartTimestamp_36_D8B57998411FF7ABCBEF2C8420953379;                        // 0x0040 (size: 0x8)
    int32 TraceCount_39_503C4E7A4C639B2F279255BE0F1EB1DE;                             // 0x0048 (size: 0x4)

}; // Size: 0x4C

#endif
