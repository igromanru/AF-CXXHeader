#ifndef UE4SS_SDK_Deployed_BenchPress_HPP
#define UE4SS_SDK_Deployed_BenchPress_HPP

class ADeployed_BenchPress_C : public ADeployed_ExerciseBike_C
{
    bool LastLiftWasSuccess;                                                          // 0x0909 (size: 0x1)
    TArray<class UStaticMesh*> WeightMeshes;                                          // 0x0910 (size: 0x10)
    TArray<class UStaticMeshComponent*> WeightSMComponents;                           // 0x0920 (size: 0x10)
    TArray<class UStaticMesh*> BaseWeightMeshes;                                      // 0x0930 (size: 0x10)
    int32 WeightsLevel;                                                               // 0x0940 (size: 0x4)

    void Local_SeatOccupierChanged();
    void OnRep_WeightsLevel();
    void OnLevelUp(TEnumAsByte<E_CharacterSkills::Type> Skill, int32 NewLevel);
    void UpdateWeights(int32 StrengthLevel);
}; // Size: 0x944

#endif
