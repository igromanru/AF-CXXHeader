#ifndef UE4SS_SDK_Deployed_TheRedChair_HPP
#define UE4SS_SDK_Deployed_TheRedChair_HPP

class ADeployed_TheRedChair_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class USceneComponent* SitSpot;                                                   // 0x0928 (size: 0x8)

    void HasSitLocations(bool& IsSittable);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ExecuteSittingIndividual(class AAbiotic_PlayerCharacter_C* Character);
    void ExecuteUbergraph_Deployed_TheRedChair(int32 EntryPoint);
}; // Size: 0x930

#endif
