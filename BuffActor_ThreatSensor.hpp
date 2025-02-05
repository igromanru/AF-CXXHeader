#ifndef UE4SS_SDK_BuffActor_ThreatSensor_HPP
#define UE4SS_SDK_BuffActor_ThreatSensor_HPP

class ABuffActor_ThreatSensor_C : public ABuffActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class USphereComponent* OutlineOverlap;                                           // 0x02C8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02D0 (size: 0x8)
    TArray<class ANPC_Base_ParentBP_C*> LocalHiglightedNPCs;                          // 0x02D8 (size: 0x10)
    bool OnlyShowInCombat;                                                            // 0x02E8 (size: 0x1)

    void CheckTargetFaction(class AActor* PotentialFriend, bool& Friend);
    void CanOutlineTarget(class ANPC_Base_ParentBP_C*& TargetToCheck, bool& Outline);
    void Update Highlight State(bool Show, class AAbiotic_Character_ParentBP_C* Target Actor);
    void Show NPC Outline(class ANPC_Base_ParentBP_C* NPC, bool Show);
    void Local_OnBuffBeginPlay(FBuffDebuffRowHandle BuffRow);
    void Local_OnBuffEndPlay(FBuffDebuffRowHandle BuffRow);
    void BndEvt__Item_Helmet_Cascade_OutlineOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void CombatStateChanged_Event(class ANPC_Base_ParentBP_C* Target NPC);
    void BndEvt__Item_Helmet_Cascade_OutlineOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void LocalRemoveFromList(class ANPC_Base_ParentBP_C* Target NPC);
    void Local_UpdateOutlineState(class AAbiotic_Character_ParentBP_C* OutlinedCharacter, bool Outline);
    void ExecuteUbergraph_BuffActor_ThreatSensor(int32 EntryPoint);
}; // Size: 0x2E9

#endif
