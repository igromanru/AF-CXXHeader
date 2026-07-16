#ifndef UE4SS_SDK_Deployed_PestTrap_HPP
#define UE4SS_SDK_Deployed_PestTrap_HPP

class ADeployed_PestTrap_C : public ADeployed_PetContainer_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A08 (size: 0x8)
    class UStaticMeshComponent* Nachos;                                               // 0x0A10 (size: 0x8)
    class UStaticMeshComponent* Lid;                                                  // 0x0A18 (size: 0x8)
    float Timeline_NewTrack_0_708C79E34916B07041A04A88B07AFA17;                       // 0x0A20 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline__Direction_708C79E34916B07041A04A88B07AFA17; // 0x0A24 (size: 0x1)
    class UTimelineComponent* Timeline;                                               // 0x0A28 (size: 0x8)

    bool CanPetClassEnterContainer(TSubclassOf<class ANPC_Base_ParentBP_C> PetNpcClass);
    void NewSeatOccupyStatus(bool Occupied, int32 Index, class AAbiotic_Character_ParentBP_C* Character);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanLongInteractWith_A(bool& Success);
    void CanContainPet(class ANPC_Base_ParentBP_C*& IncomingPet, bool& Return);
    void Timeline__FinishedFunc();
    void Timeline__UpdateFunc();
    void NoClicked_Event();
    void YesClicked_Event();
    void ToggleCageStateFX(bool Closed);
    void OnTextChanged_Event(const FText& Text);
    void InteractWith_A_LocalFX(bool Hold);
    void ExecuteUbergraph_Deployed_PestTrap(int32 EntryPoint);
}; // Size: 0xA30

#endif
