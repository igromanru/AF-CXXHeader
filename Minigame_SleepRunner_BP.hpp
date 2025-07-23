#ifndef UE4SS_SDK_Minigame_SleepRunner_BP_HPP
#define UE4SS_SDK_Minigame_SleepRunner_BP_HPP

class AMinigame_SleepRunner_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UPaperFlipbookComponent* Krasue;                                            // 0x02A0 (size: 0x8)
    class UAudioComponent* DreamAmbientAudio;                                         // 0x02A8 (size: 0x8)
    class UArrowComponent* SpawnArrow_BG_Far;                                         // 0x02B0 (size: 0x8)
    class UArrowComponent* SpawnArrow_BG_Near;                                        // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* Cube10;                                               // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* Cube19;                                               // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* Cube18;                                               // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* Cube17;                                               // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* Cube16;                                               // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* Cube15;                                               // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* Cube14;                                               // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* Cube13;                                               // 0x02F8 (size: 0x8)
    class UStaticMeshComponent* Cube12;                                               // 0x0300 (size: 0x8)
    class UStaticMeshComponent* Cube11;                                               // 0x0308 (size: 0x8)
    class UStaticMeshComponent* Cube6;                                                // 0x0310 (size: 0x8)
    class UPaperFlipbookComponent* Leyak;                                             // 0x0318 (size: 0x8)
    class UPaperSpriteComponent* Sun;                                                 // 0x0320 (size: 0x8)
    class USceneCaptureComponent2D* DreamCamera;                                      // 0x0328 (size: 0x8)
    class UStaticMeshComponent* Cube9;                                                // 0x0330 (size: 0x8)
    class UStaticMeshComponent* Cube8;                                                // 0x0338 (size: 0x8)
    class UStaticMeshComponent* Cube7;                                                // 0x0340 (size: 0x8)
    class UPaperFlipbookComponent* PaperFlipbook;                                     // 0x0348 (size: 0x8)
    class UStaticMeshComponent* Sky;                                                  // 0x0350 (size: 0x8)
    class UStaticMeshComponent* Cube5;                                                // 0x0358 (size: 0x8)
    class UStaticMeshComponent* Cube4;                                                // 0x0360 (size: 0x8)
    class UStaticMeshComponent* Cube3;                                                // 0x0368 (size: 0x8)
    class UStaticMeshComponent* Cube2;                                                // 0x0370 (size: 0x8)
    class UStaticMeshComponent* Cube1;                                                // 0x0378 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0380 (size: 0x8)
    class UArrowComponent* SpawnArrow;                                                // 0x0388 (size: 0x8)
    class UStaticMeshComponent* ControlledChar;                                       // 0x0390 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0398 (size: 0x8)
    float JumpTimeline_JumpLerp_EE4FAEAE44BDD18B8CF112876699C2E0;                     // 0x03A0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> JumpTimeline__Direction_EE4FAEAE44BDD18B8CF112876699C2E0; // 0x03A4 (size: 0x1)
    class UTimelineComponent* JumpTimeline;                                           // 0x03A8 (size: 0x8)
    int32 Score;                                                                      // 0x03B0 (size: 0x4)
    int32 MaxObstacleCount;                                                           // 0x03B4 (size: 0x4)
    FVector CharacterGroundLocation;                                                  // 0x03B8 (size: 0x18)
    FVector CharacterCurrentLocation;                                                 // 0x03D0 (size: 0x18)
    FVector CharacterJumpApexLocation;                                                // 0x03E8 (size: 0x18)
    bool MinigameActive;                                                              // 0x0400 (size: 0x1)
    bool EnableMinigame;                                                              // 0x0401 (size: 0x1)
    bool StartJump;                                                                   // 0x0402 (size: 0x1)
    bool FallingDown;                                                                 // 0x0403 (size: 0x1)
    TArray<class ASleepRunner_ObstacleBP_C*> Obstacles;                               // 0x0408 (size: 0x10)
    TArray<class ASleepRunner_ObstacleBP_C*> AvoidedObstacles;                        // 0x0418 (size: 0x10)
    FTimerHandle MovementRateIncrementTimer;                                          // 0x0428 (size: 0x8)
    FTimerHandle ObstacleSpawnTimer;                                                  // 0x0430 (size: 0x8)
    double JumpHeight;                                                                // 0x0438 (size: 0x8)
    double MinHorizontalDistBetweenObstacles;                                         // 0x0440 (size: 0x8)
    float MovementRate;                                                               // 0x0448 (size: 0x4)
    float SpawnFrequency;                                                             // 0x044C (size: 0x4)
    int32 SuccessfulJumpsInRow;                                                       // 0x0450 (size: 0x4)
    FVector Sun_Lowest;                                                               // 0x0458 (size: 0x18)
    FVector Sun_Highest;                                                              // 0x0470 (size: 0x18)
    class UMaterialInstanceDynamic* SkyMat;                                           // 0x0488 (size: 0x8)
    class ANPC_Leyak_C* ActiveLeyak;                                                  // 0x0490 (size: 0x8)
    FVector Leyak_Start;                                                              // 0x0498 (size: 0x18)
    FVector Leyak_End;                                                                // 0x04B0 (size: 0x18)
    TEnumAsByte<E_DreamStyle::Type> LastDreamStyle;                                   // 0x04C8 (size: 0x1)
    FTimerHandle BG_Spawner_Near;                                                     // 0x04D0 (size: 0x8)
    FTimerHandle BG_Spawner_Far;                                                      // 0x04D8 (size: 0x8)
    TArray<class ASleepRunner_BG_Object_C*> BG_Objects_Near;                          // 0x04E0 (size: 0x10)
    TArray<class ASleepRunner_BG_Object_C*> BG_Objects_Far;                           // 0x04F0 (size: 0x10)
    TArray<class UPaperSprite*> NearSprites;                                          // 0x0500 (size: 0x10)
    TArray<class UPaperSprite*> FarSprites;                                           // 0x0510 (size: 0x10)
    class ANPC_Leyak_C* ActiveKrasue;                                                 // 0x0520 (size: 0x8)

    void Tick_ActiveLeyak(TEnumAsByte<E_LeyakType::Type> Class);
    void ToggleLeyak(TEnumAsByte<E_LeyakType::Type> LeyakToModify, bool Show);
    void ClearAllObjects();
    void Tick_ParallaxBackgroundObjects(double Delta Time);
    void SetDreamStyle(TEnumAsByte<E_DreamStyle::Type> DreamStyle);
    void CheckDreamStyle(class AAbiotic_PlayerCharacter_C* Character, TEnumAsByte<E_DreamStyle::Type>& SelectedDreamStyle);
    void UpdateFatigueProgress(double CurrentFatigue, double MaxFatigue);
    void Set Movement Rate();
    void OnObstacleAvoided();
    void Tick_PropelObstaclesForward(double DeltaTime);
    void Check if Obstacle Is Out Of Sight(class ASleepRunner_ObstacleBP_C* Obstacle, bool& NotVisible);
    bool GetSpawnObstacleChance();
    void UserConstructionScript();
    void JumpTimeline__FinishedFunc();
    void JumpTimeline__UpdateFunc();
    void SpawnObstacle();
    void StartMinigame();
    void RecalcSpeed();
    void RefreshSpawnObstacle();
    void EndMinigame();
    void Jump();
    void TryStopJumping();
    void RanIntoObstacle();
    void ReceiveBeginPlay();
    void Setup_Minigame(class APlayerController* Controller);
    void ReceiveTick(float DeltaSeconds);
    void SpawnBG_Near();
    void SpawnBG_Far();
    void ExecuteUbergraph_Minigame_SleepRunner_BP(int32 EntryPoint);
}; // Size: 0x528

#endif
