#ifndef UE4SS_SDK_PlayerReaperTeleportSpawn_HPP
#define UE4SS_SDK_PlayerReaperTeleportSpawn_HPP

class APlayerReaperTeleportSpawn_C : public AActor
{
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0298 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    FWorldFlagRowHandle WorldFlagRequired;                                            // 0x02B0 (size: 0x20)
    int32 ActiveFlagIndex;                                                            // 0x02D0 (size: 0x4)

}; // Size: 0x2D4

#endif
