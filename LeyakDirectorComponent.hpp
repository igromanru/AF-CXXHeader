#ifndef UE4SS_SDK_LeyakDirectorComponent_HPP
#define UE4SS_SDK_LeyakDirectorComponent_HPP

class ULeyakDirectorComponent_C : public UStalkingNpcDirector_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0110 (size: 0x8)
    double TimeLastLeyakSpawn;                                                        // 0x0118 (size: 0x8)
    int32 LeyakViewCounter;                                                           // 0x0120 (size: 0x4)
    double LeyakTauntCooldownMultiplier;                                              // 0x0128 (size: 0x8)
    double LeyakCooldown;                                                             // 0x0130 (size: 0x8)
    FString ActiveLeyakContainmentID;                                                 // 0x0138 (size: 0x10)

    void SetLeyakContainmentID(FString NewID);
    void IncreaseLeyakViewCounter();
    void ResetLeyakViewCounter();
    void SpawnNPC_Internal(TSubclassOf<class ANPC_Base_ParentBP_C> Class, FVector Location, FRotator Rotation);
    bool CanSpawn();
    void LeyakFailsafeRemove();
    void SetLeyakOnCooldown(double CooldownReductionMultiplier);
    void PlayerTauntedLeyak();
    void CheckForStuckNPC();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_LeyakDirectorComponent(int32 EntryPoint);
}; // Size: 0x148

#endif
