#ifndef UE4SS_SDK_Deployed_PestTrap_HPP
#define UE4SS_SDK_Deployed_PestTrap_HPP

class ADeployed_PestTrap_C : public ADeployed_PetContainer_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09E8 (size: 0x8)
    class UStaticMeshComponent* Nachos;                                               // 0x09F0 (size: 0x8)
    class UStaticMeshComponent* Lid;                                                  // 0x09F8 (size: 0x8)
    float Timeline_NewTrack_0_708C79E34916B07041A04A88B07AFA17;                       // 0x0A00 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline__Direction_708C79E34916B07041A04A88B07AFA17; // 0x0A04 (size: 0x1)
    class UTimelineComponent* Timeline;                                               // 0x0A08 (size: 0x8)

    void OnSetPetInBed();
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanLongInteractWith_A(bool& Success);
    void CanContainPet(class ANPC_Base_ParentBP_C*& IncomingPet, bool& Return);
    void Timeline__FinishedFunc();
    void Timeline__UpdateFunc();
    void OnLoaded_99C3FB95429BCD63092D18A58F3BCE61(class UObject* Loaded);
    void NoClicked_Event();
    void ToggleCageStateFX(bool Closed);
    void YesClicked_Event();
    void OnTextChanged_Event(const FText& Text);
    void AsyncSetPetSleepAnim();
    void InteractWith_A_LocalFX(bool Hold);
    void RestartIdleMontage_OnChangeWave();
    void ExecuteUbergraph_Deployed_PestTrap(int32 EntryPoint);
}; // Size: 0xA10

#endif
