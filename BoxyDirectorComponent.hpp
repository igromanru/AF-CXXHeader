#ifndef UE4SS_SDK_BoxyDirectorComponent_HPP
#define UE4SS_SDK_BoxyDirectorComponent_HPP

class UBoxyDirectorComponent_C : public UStalkingNpcDirector_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0118 (size: 0x8)
    class ADayNightManager_C* DayNightManager;                                        // 0x0120 (size: 0x8)
    double LastBoxySpawnTime;                                                         // 0x0128 (size: 0x8)
    double BoxySpawnFrequency;                                                        // 0x0130 (size: 0x8)
    double BoxySpawnFrequency_Encumbered;                                             // 0x0138 (size: 0x8)

    void SpawnNPC_Internal(TSubclassOf<class ANPC_Base_ParentBP_C> Class, FVector Location, FRotator Rotation);
    void IsValidTarget(class AAbioticCharacter* Player, bool AllowDuringCombat);
    void CanSpawn();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BoxyDirectorComponent(int32 EntryPoint);
}; // Size: 0x140

#endif
