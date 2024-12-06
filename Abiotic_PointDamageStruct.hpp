#ifndef UE4SS_SDK_Abiotic_PointDamageStruct_HPP
#define UE4SS_SDK_Abiotic_PointDamageStruct_HPP

struct FAbiotic_PointDamageStruct
{
    double IncomingDamage_13_40FC659E429FC966D1A7919E7D20512A;                        // 0x0000 (size: 0x8)
    class UDamageType* DamageType_8_D365F9FA447B130708B9119CE2C5FD32;                 // 0x0008 (size: 0x8)
    FVector HitLocation_14_FC58FD5A4E4D6128A2EFA7884BED176E;                          // 0x0010 (size: 0x18)
    FVector HitNormal_16_CE47D0CF4C89F34E5F3FB1A560D0C65C;                            // 0x0028 (size: 0x18)
    class UActorComponent* HitComponent_18_31142E194BE025BB0816ED8EFD37ED64;          // 0x0040 (size: 0x8)
    FName BoneHitName_20_0D8B247B428DBB8595D996AC935F9262;                            // 0x0048 (size: 0x8)
    FVector DirectionOfSource_22_28F829DC43117FAB55129ABB9DA86DF7;                    // 0x0050 (size: 0x18)
    class AActor* Instigator_24_014D6B7B488F673AB53897A80FC59368;                     // 0x0068 (size: 0x8)
    class AActor* DamageCauser_27_73AAB06A44D0ED209E32888875D3308B;                   // 0x0070 (size: 0x8)
    FHitResult HitInfo_29_46D9459348E51B5BE7EF218FBD8DD5D2;                           // 0x0078 (size: 0xF8)
    bool WasFriendlyFire_33_85CB580749851F010C6F47833C207943;                         // 0x0170 (size: 0x1)
    EBodyLimbs LimbHit_37_44C5CB234DFEB5822E7240ACB59BD752;                           // 0x0171 (size: 0x1)

}; // Size: 0x172

#endif
