#ifndef UE4SS_SDK_NPC_Optimizator_HPP
#define UE4SS_SDK_NPC_Optimizator_HPP

#include "NPC_Optimizator_enums.hpp"

class UOptimizationProxyComponent : public UActorComponent
{
    float DistanceToFirstOptimization;                                                // 0x00B0 (size: 0x4)
    float DistanceToSecondOptimization;                                               // 0x00B4 (size: 0x4)
    float DistanceToThirdOptimization;                                                // 0x00B8 (size: 0x4)
    float MaxVisibleDistance;                                                         // 0x00BC (size: 0x4)
    EOptimizationBaseType OptimizationBasedOn;                                        // 0x00C0 (size: 0x4)
    bool UseOptimizationByTag;                                                        // 0x00C4 (size: 0x1)
    FName OptimizationTag;                                                            // 0x00C8 (size: 0x8)
    FName IgnoreOptimizationTag;                                                      // 0x00D0 (size: 0x8)
    bool DisableMovementWhenNotVisible;                                               // 0x00D8 (size: 0x1)
    bool IgnoreCameraSight;                                                           // 0x00D9 (size: 0x1)
    bool IgnoreCameraSightOnSmallDistance;                                            // 0x00DA (size: 0x1)
    bool DisableSkeletalMeshTickWhenNotVisible;                                       // 0x00DB (size: 0x1)
    bool DisableGroomTickWhenNotVisible;                                              // 0x00DC (size: 0x1)
    bool HideAllStaticMeshes;                                                         // 0x00DD (size: 0x1)
    bool bDisableOptimizationOnListenServer;                                          // 0x00DE (size: 0x1)
    bool bDisableOptimizationOnDedicatedServer;                                       // 0x00DF (size: 0x1)
    bool bDisableOptimizationInSimulationMode;                                        // 0x00E0 (size: 0x1)
    bool bOptimizeAIController;                                                       // 0x00E1 (size: 0x1)
    bool bOptimizePathFollowComponent;                                                // 0x00E2 (size: 0x1)
    bool FirstWave_AlwaysCheckFloor;                                                  // 0x00E3 (size: 0x1)
    bool FirstWave_EnablePhysicsInteraction;                                          // 0x00E4 (size: 0x1)
    float FirstWave_MaxSimulationTimeStep;                                            // 0x00E8 (size: 0x4)
    int32 FirstWave_MaxSimulationIterations;                                          // 0x00EC (size: 0x4)
    bool FirstWave_RunPhysicsWithNoController;                                        // 0x00F0 (size: 0x1)
    bool FirstWave_SweepWhileNavWalking;                                              // 0x00F1 (size: 0x1)
    float FirstWave_OptimizatedMovementTick;                                          // 0x00F4 (size: 0x4)
    float FirstWave_OptimizatedMovementTickMin;                                       // 0x00F8 (size: 0x4)
    float FirstWave_OptimizatedMovementTickMax;                                       // 0x00FC (size: 0x4)
    bool FirstWave_UseRandomOptimizationTickForMovement;                              // 0x0100 (size: 0x1)
    bool FirstWave_HideShadows;                                                       // 0x0101 (size: 0x1)
    bool FirstWaveGroom_HideShadows;                                                  // 0x0102 (size: 0x1)
    bool FirstWaveGroom_Hide;                                                         // 0x0103 (size: 0x1)
    bool FirstWave_DisableMeshCollision;                                              // 0x0104 (size: 0x1)
    bool FirstWaveGroom_DisableMeshCollision;                                         // 0x0105 (size: 0x1)
    bool FirstWave_NeedHideStaticMeshes;                                              // 0x0106 (size: 0x1)
    bool FirstWave_UseUpdateRateOptimizations;                                        // 0x0107 (size: 0x1)
    bool FirstWave_UsePerBoneMotionBlur;                                              // 0x0108 (size: 0x1)
    bool FirstWave_DisableClothSimulation;                                            // 0x0109 (size: 0x1)
    bool FirstWave_DisableMorphTarget;                                                // 0x010A (size: 0x1)
    bool FirstWave_SkipKinematicUpdateWhenInterpolating;                              // 0x010B (size: 0x1)
    bool FirstWave_SkipBoundsUpdateWhenInterpolating;                                 // 0x010C (size: 0x1)
    bool FirstWave_AllowRigidBodyAnimNode;                                            // 0x010D (size: 0x1)
    bool FirstWave_GenerateOverlapEvents;                                             // 0x010E (size: 0x1)
    bool FirstWaveGroom_GenerateOverlapEvents;                                        // 0x010F (size: 0x1)
    EVisibilityBasedAnimTickOption FirstWave_VisibilityBasedAnimTickOption;           // 0x0110 (size: 0x1)
    bool SecondWave_AlwaysCheckFloor;                                                 // 0x0111 (size: 0x1)
    bool SecondWave_EnablePhysicsInteraction;                                         // 0x0112 (size: 0x1)
    float SecondWave_MaxSimulationTimeStep;                                           // 0x0114 (size: 0x4)
    int32 SecondWave_MaxSimulationIterations;                                         // 0x0118 (size: 0x4)
    bool SecondWave_RunPhysicsWithNoController;                                       // 0x011C (size: 0x1)
    bool SecondWave_SweepWhileNavWalking;                                             // 0x011D (size: 0x1)
    float SecondWave_OptimizatedMovementTick;                                         // 0x0120 (size: 0x4)
    float SecondWave_OptimizatedMovementTickMin;                                      // 0x0124 (size: 0x4)
    float SecondWave_OptimizatedMovementTickMax;                                      // 0x0128 (size: 0x4)
    bool SecondWave_UseRandomOptimizationTickForMovement;                             // 0x012C (size: 0x1)
    bool SecondWave_HideShadows;                                                      // 0x012D (size: 0x1)
    bool SecondWaveGroom_HideShadows;                                                 // 0x012E (size: 0x1)
    bool SecondWaveGroom_Hide;                                                        // 0x012F (size: 0x1)
    bool SecondWave_DisableMeshCollision;                                             // 0x0130 (size: 0x1)
    bool SecondWaveGroom_DisableMeshCollision;                                        // 0x0131 (size: 0x1)
    bool SecondWave_NeedHideStaticMeshes;                                             // 0x0132 (size: 0x1)
    bool SecondWave_UseUpdateRateOptimizations;                                       // 0x0133 (size: 0x1)
    bool SecondWave_UsePerBoneMotionBlur;                                             // 0x0134 (size: 0x1)
    bool SecondWave_DisableClothSimulation;                                           // 0x0135 (size: 0x1)
    bool SecondWave_DisableMorphTarget;                                               // 0x0136 (size: 0x1)
    bool SecondWave_SkipKinematicUpdateWhenInterpolating;                             // 0x0137 (size: 0x1)
    bool SecondWave_SkipBoundsUpdateWhenInterpolating;                                // 0x0138 (size: 0x1)
    bool SecondWave_AllowRigidBodyAnimNode;                                           // 0x0139 (size: 0x1)
    bool SecondWave_GenerateOverlapEvents;                                            // 0x013A (size: 0x1)
    bool SecondWaveGroom_GenerateOverlapEvents;                                       // 0x013B (size: 0x1)
    EVisibilityBasedAnimTickOption SecondWave_VisibilityBasedAnimTickOption;          // 0x013C (size: 0x1)
    bool ThirdWave_AlwaysCheckFloor;                                                  // 0x013D (size: 0x1)
    bool ThirdWave_EnablePhysicsInteraction;                                          // 0x013E (size: 0x1)
    float ThirdWave_MaxSimulationTimeStep;                                            // 0x0140 (size: 0x4)
    int32 ThirdWave_MaxSimulationIterations;                                          // 0x0144 (size: 0x4)
    bool ThirdWave_RunPhysicsWithNoController;                                        // 0x0148 (size: 0x1)
    bool ThirdWave_SweepWhileNavWalking;                                              // 0x0149 (size: 0x1)
    float ThirdWave_OptimizatedMovementTick;                                          // 0x014C (size: 0x4)
    float ThirdWave_OptimizatedMovementTickMin;                                       // 0x0150 (size: 0x4)
    float ThirdWave_OptimizatedMovementTickMax;                                       // 0x0154 (size: 0x4)
    bool ThirdWave_UseRandomOptimizationTickForMovement;                              // 0x0158 (size: 0x1)
    bool ThirdWave_HideShadows;                                                       // 0x0159 (size: 0x1)
    bool ThirdWaveGroom_HideShadows;                                                  // 0x015A (size: 0x1)
    bool ThirdWaveGroom_Hide;                                                         // 0x015B (size: 0x1)
    bool ThirdWave_DisableMeshCollision;                                              // 0x015C (size: 0x1)
    bool ThirdWaveGroom_DisableMeshCollision;                                         // 0x015D (size: 0x1)
    bool ThirdWave_NeedHideStaticMeshes;                                              // 0x015E (size: 0x1)
    bool ThirdWave_UseUpdateRateOptimizations;                                        // 0x015F (size: 0x1)
    bool ThirdWave_UsePerBoneMotionBlur;                                              // 0x0160 (size: 0x1)
    bool ThirdWave_DisableClothSimulation;                                            // 0x0161 (size: 0x1)
    bool ThirdWave_DisableMorphTarget;                                                // 0x0162 (size: 0x1)
    bool ThirdWave_SkipKinematicUpdateWhenInterpolating;                              // 0x0163 (size: 0x1)
    bool ThirdWave_SkipBoundsUpdateWhenInterpolating;                                 // 0x0164 (size: 0x1)
    bool ThirdWave_AllowRigidBodyAnimNode;                                            // 0x0165 (size: 0x1)
    bool ThirdWave_GenerateOverlapEvents;                                             // 0x0166 (size: 0x1)
    bool ThirdWaveGroom_GenerateOverlapEvents;                                        // 0x0167 (size: 0x1)
    EVisibilityBasedAnimTickOption ThirdWave_VisibilityBasedAnimTickOption;           // 0x0168 (size: 0x1)
    bool Invisible_AlwaysCheckFloor;                                                  // 0x0169 (size: 0x1)
    bool Invisible_EnablePhysicsInteraction;                                          // 0x016A (size: 0x1)
    float Invisible_MaxSimulationTimeStep;                                            // 0x016C (size: 0x4)
    int32 Invisible_MaxSimulationIterations;                                          // 0x0170 (size: 0x4)
    bool Invisible_RunPhysicsWithNoController;                                        // 0x0174 (size: 0x1)
    bool Invisible_SweepWhileNavWalking;                                              // 0x0175 (size: 0x1)
    float Invisible_OptimizatedMovementTick;                                          // 0x0178 (size: 0x4)
    float Invisible_OptimizatedMovementTickMin;                                       // 0x017C (size: 0x4)
    float Invisible_OptimizatedMovementTickMax;                                       // 0x0180 (size: 0x4)
    bool Invisible_UseRandomOptimizationTickForMovement;                              // 0x0184 (size: 0x1)
    bool Invisible_HideSkeletalMesh;                                                  // 0x0185 (size: 0x1)
    bool InvisibleGroom_Hide;                                                         // 0x0186 (size: 0x1)
    bool Invisible_HideShadows;                                                       // 0x0187 (size: 0x1)
    bool InvisibleGroom_HideShadows;                                                  // 0x0188 (size: 0x1)
    bool Invisible_DisableMeshCollision;                                              // 0x0189 (size: 0x1)
    bool InvisibleGroom_DisableMeshCollision;                                         // 0x018A (size: 0x1)
    bool Invisible_NeedHideStaticMeshes;                                              // 0x018B (size: 0x1)
    bool Invisible_UseUpdateRateOptimizations;                                        // 0x018C (size: 0x1)
    bool Invisible_UsePerBoneMotionBlur;                                              // 0x018D (size: 0x1)
    bool Invisible_DisableClothSimulation;                                            // 0x018E (size: 0x1)
    bool Invisible_DisableMorphTarget;                                                // 0x018F (size: 0x1)
    bool Invisible_SkipKinematicUpdateWhenInterpolating;                              // 0x0190 (size: 0x1)
    bool Invisible_SkipBoundsUpdateWhenInterpolating;                                 // 0x0191 (size: 0x1)
    EVisibilityBasedAnimTickOption Invisible_VisibilityBasedAnimTickOption;           // 0x0192 (size: 0x1)
    bool Invisible_AllowRigidBodyAnimNode;                                            // 0x0193 (size: 0x1)
    bool Invisible_GenerateOverlapEvents;                                             // 0x0194 (size: 0x1)
    bool InvisibleGroom_GenerateOverlapEvents;                                        // 0x0195 (size: 0x1)
    bool NoOptimization_DrawDebug;                                                    // 0x0196 (size: 0x1)
    bool FirstWave_DrawDebug;                                                         // 0x0197 (size: 0x1)
    bool SecondWave_DrawDebug;                                                        // 0x0198 (size: 0x1)
    bool ThirdWave_DrawDebug;                                                         // 0x0199 (size: 0x1)
    bool Invisible_DrawDebug;                                                         // 0x019A (size: 0x1)
    FOptimizationProxyComponentOnChangeWave OnChangeWave;                             // 0x01A0 (size: 0x10)
    void OptimizationChangeWave(EOptimizationWave NewWave);
    bool bIsNPCDisabled;                                                              // 0x01B0 (size: 0x1)

    void EnableOptimizations();
    void EnableForceOptimizationWave(EOptimizationWave Wave, bool Enable);
    void DisableAllOptimizations();
}; // Size: 0x210

#endif
