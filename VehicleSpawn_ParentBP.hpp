#ifndef UE4SS_SDK_VehicleSpawn_ParentBP_HPP
#define UE4SS_SDK_VehicleSpawn_ParentBP_HPP

class AVehicleSpawn_ParentBP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UTextRenderComponent* DebugText;                                            // 0x02A0 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x02A8 (size: 0x8)
    class USceneComponent* SpawnNode;                                                 // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02B8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C0 (size: 0x8)
    TSoftClassPtr<AABF_Vehicle_ParentBP_C> SpawnClass;                                // 0x02C8 (size: 0x28)
    bool ApplySaveData;                                                               // 0x02F0 (size: 0x1)

    void ApplyRecallSave(class AABF_Vehicle_ParentBP_C* Vehicle);
    void AttemptRecall(class AAbiotic_PlayerCharacter_C* InteractingPlayer);
    FString GetVehicleID();
    void OnLoaded_A1C1702B413FA8732D3D70854653154D(UClass* Loaded);
    void OnVehicleDestroyed(class AActor* DestroyedActor);
    void CheckVehicleSpawn();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_VehicleSpawn_ParentBP(int32 EntryPoint);
}; // Size: 0x2F1

#endif
