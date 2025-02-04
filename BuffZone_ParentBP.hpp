#ifndef UE4SS_SDK_BuffZone_ParentBP_HPP
#define UE4SS_SDK_BuffZone_ParentBP_HPP

class ABuffZone_ParentBP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x02A0 (size: 0x8)
    class UBoxComponent* BuffVolume;                                                  // 0x02A8 (size: 0x8)
    FVector RadiationZoneSize;                                                        // 0x02B0 (size: 0x18)
    FBuffDebuffRowHandle BuffToApply;                                                 // 0x02C8 (size: 0x20)
    FBuffZone_ParentBP_CCharacterLeftVolume CharacterLeftVolume;                      // 0x02E8 (size: 0x10)
    void CharacterLeftVolume(class AAbiotic_Character_ParentBP_C* Character);
    FBuffZone_ParentBP_CCharacterEnteredVolume CharacterEnteredVolume;                // 0x02F8 (size: 0x10)
    void CharacterEnteredVolume(class AAbiotic_Character_ParentBP_C* Character);
    FGameplayTagContainer BuffBlockingTags;                                           // 0x0308 (size: 0x20)

    void ProcessBuffZoneEndOverlap(class UObject* NewActor, FBuffDebuffRowHandle BuffToRemove);
    void ProcessNewBuffZoneOverlap(class AActor* NewActor, FBuffDebuffRowHandle BuffToAdd);
    void IsValidCharacterInsideZone?(class AAbiotic_Character_ParentBP_C* CharacterToCheck, bool& Valid);
    void ExtraRemoveCheck(class AAbiotic_Character_ParentBP_C* Character, bool& ShouldRemoveBuff);
    void UserConstructionScript();
    void BndEvt__RadiationZone_ParentBP_RadiationVolume_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__RadiationZone_ParentBP_RadiationVolume_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void AdditionalOnOverlap(class AActor* Actor);
    void ExecuteUbergraph_BuffZone_ParentBP(int32 EntryPoint);
    void CharacterEnteredVolume__DelegateSignature(class AAbiotic_Character_ParentBP_C* Character);
    void CharacterLeftVolume__DelegateSignature(class AAbiotic_Character_ParentBP_C* Character);
}; // Size: 0x328

#endif
