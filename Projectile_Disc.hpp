#ifndef UE4SS_SDK_Projectile_Disc_HPP
#define UE4SS_SDK_Projectile_Disc_HPP

class AProjectile_Disc_C : public AAbioticProjectile_ParentBP_C
{
    class UNiagaraComponent* Niagara;                                                 // 0x0790 (size: 0x8)
    FVector Impact Point;                                                             // 0x0798 (size: 0x18)
    double Length;                                                                    // 0x07B0 (size: 0x8)

}; // Size: 0x7B8

#endif
