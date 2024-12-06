#ifndef UE4SS_SDK_SleepRunner_ObstacleBP_HPP
#define UE4SS_SDK_SleepRunner_ObstacleBP_HPP

class ASleepRunner_ObstacleBP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UPaperFlipbookComponent* PaperFlipbook;                                     // 0x02A0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    FSleepRunner_ObstacleBP_CObstacleAvoided ObstacleAvoided;                         // 0x02B8 (size: 0x10)
    void ObstacleAvoided();
    bool HitByPlayer;                                                                 // 0x02C8 (size: 0x1)
    FSleepRunner_ObstacleBP_CObstacleHit ObstacleHit;                                 // 0x02D0 (size: 0x10)
    void ObstacleHit();
    FString RelativeLocation;                                                         // 0x02E0 (size: 0x10)

    void HitFadeOut();
    void AvoidedSuccessfully();
    void ReceiveTick(float DeltaSeconds);
    void Collided();
    void ExecuteUbergraph_SleepRunner_ObstacleBP(int32 EntryPoint);
    void ObstacleHit__DelegateSignature();
    void ObstacleAvoided__DelegateSignature();
}; // Size: 0x2F0

#endif
