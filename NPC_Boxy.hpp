#ifndef UE4SS_SDK_NPC_Boxy_HPP
#define UE4SS_SDK_NPC_Boxy_HPP

class ANPC_Boxy_C : public ANPC_Base_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x20A8 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x20B0 (size: 0x8)
    class UAudioComponent* EatingAudio;                                               // 0x20B8 (size: 0x8)
    float BoxyLifespan;                                                               // 0x20C0 (size: 0x4)
    float BoxyDespawnDistance;                                                        // 0x20C4 (size: 0x4)
    class ADayNightManager_C* DayNightManager;                                        // 0x20C8 (size: 0x8)
    bool BoxyIsAsleep;                                                                // 0x20D0 (size: 0x1)

    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    bool IsNPCBusy();
    void Does Award Sneaking XP to Player(bool& Return, double& XP Gained);
    void TargetableByNPCs(bool Maintain, bool& Targetable);
    FText GetItemNameText();
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void FindBestMeleeAttack(class AActor* SwingAtActor, FVector SwingAtTarget, bool& TurnToFaceTarget);
    void GetBuffOverlayMeshes(TArray<class UMeshComponent*>& Meshes);
    void TryToDespawn();
    void UpdateDisabledState();
    void ReceiveBeginPlay();
    void OnContainerOpened_Event();
    void DayChanged();
    void ExecuteUbergraph_NPC_Boxy(int32 EntryPoint);
}; // Size: 0x20D1

#endif
