#ifndef UE4SS_SDK_SleepRunner_BG_Object_HPP
#define UE4SS_SDK_SleepRunner_BG_Object_HPP

class ASleepRunner_BG_Object_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UPaperSpriteComponent* PaperSprite;                                         // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    FSleepRunner_BG_Object_CObstacleAvoided ObstacleAvoided;                          // 0x02B0 (size: 0x10)
    void ObstacleAvoided();
    FSleepRunner_BG_Object_CObstacleHit ObstacleHit;                                  // 0x02C0 (size: 0x10)
    void ObstacleHit();
    class UPaperSprite* Sprite;                                                       // 0x02D0 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_SleepRunner_BG_Object(int32 EntryPoint);
    void ObstacleHit__DelegateSignature();
    void ObstacleAvoided__DelegateSignature();
}; // Size: 0x2D8

#endif
