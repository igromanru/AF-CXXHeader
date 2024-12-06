#ifndef UE4SS_SDK_I_Laser_HPP
#define UE4SS_SDK_I_Laser_HPP

class II_Laser_C : public IInterface
{

    void StopLaserHitUpdate(class ULaserComponent_C* Laser);
    void ReceiveLaserHit(class ULaserComponent_C* Laser, int32 CurrentBounce, FHitResult& HitResult, bool& Handled);
}; // Size: 0x28

#endif
