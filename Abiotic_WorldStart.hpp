#ifndef UE4SS_SDK_Abiotic_WorldStart_HPP
#define UE4SS_SDK_Abiotic_WorldStart_HPP

class AAbiotic_WorldStart_C : public AActor
{
    class UCapsuleComponent* Capsule;                                                 // 0x0298 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x02A0 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x02A8 (size: 0x8)
    FName WorldStart_ID;                                                              // 0x02B0 (size: 0x8)
    TEnumAsByte<E_Factions::Type> Team;                                               // 0x02B8 (size: 0x1)

}; // Size: 0x2B9

#endif
