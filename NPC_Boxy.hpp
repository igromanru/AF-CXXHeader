#ifndef UE4SS_SDK_NPC_Boxy_HPP
#define UE4SS_SDK_NPC_Boxy_HPP

class ANPC_Boxy_C : public ANPC_Base_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x20E8 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x20F0 (size: 0x8)
    class UAudioComponent* EatingAudio;                                               // 0x20F8 (size: 0x8)
    float BoxyLifespan;                                                               // 0x2100 (size: 0x4)
    float BoxyDespawnDistance;                                                        // 0x2104 (size: 0x4)
    class ADayNightManager_C* DayNightManager;                                        // 0x2108 (size: 0x8)
    bool BoxyIsAsleep;                                                                // 0x2110 (size: 0x1)

    void CanBePushed(class AAbiotic_Character_ParentBP_C* PushingCharacter, bool& Pushable);
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
    void OnContainerOpened_Event();
    void ReceiveBeginPlay();
    void DayChanged();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void InteractWith_A_LocalFX(bool Hold);
    void ExecuteUbergraph_NPC_Boxy(int32 EntryPoint);
}; // Size: 0x2111

#endif
