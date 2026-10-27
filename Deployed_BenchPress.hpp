#ifndef UE4SS_SDK_Deployed_BenchPress_HPP
#define UE4SS_SDK_Deployed_BenchPress_HPP

class ADeployed_BenchPress_C : public ADeployed_ExerciseBike_C
{
    bool LastLiftWasSuccess;                                                          // 0x08E9 (size: 0x1)
    TArray<UStaticMesh*> WeightMeshes;                                                // 0x08F0 (size: 0x10)
    TArray<UStaticMeshComponent*> WeightSMComponents;                                 // 0x0900 (size: 0x10)
    TArray<UStaticMesh*> BaseWeightMeshes;                                            // 0x0910 (size: 0x10)
    int32 WeightsLevel;                                                               // 0x0920 (size: 0x4)

    void Local_SeatOccupierChanged();
    void OnRep_WeightsLevel();
    void OnLevelUp(ECharacterSkills Skill, int32 NewLevel);
    void UpdateWeights(int32 StrengthLevel);
}; // Size: 0x924

#endif
