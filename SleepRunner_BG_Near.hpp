#ifndef UE4SS_SDK_SleepRunner_BG_Near_HPP
#define UE4SS_SDK_SleepRunner_BG_Near_HPP

class ASleepRunner_BG_Near_C : public ASleepRunner_BG_Object_C
{
    FSleepRunner_BG_Near_CObstacleAvoided_0 ObstacleAvoided_0;                        // 0x02D8 (size: 0x10)
    void ObstacleAvoided_0();
    bool HitByPlayer;                                                                 // 0x02E8 (size: 0x1)
    FSleepRunner_BG_Near_CObstacleHit_0 ObstacleHit_0;                                // 0x02F0 (size: 0x10)
    void ObstacleHit_0();
    FString RelativeLocation;                                                         // 0x0300 (size: 0x10)

    void ObstacleHit_0__DelegateSignature();
    void ObstacleAvoided_0__DelegateSignature();
}; // Size: 0x310

#endif
