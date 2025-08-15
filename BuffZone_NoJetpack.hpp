#ifndef UE4SS_SDK_BuffZone_NoJetpack_HPP
#define UE4SS_SDK_BuffZone_NoJetpack_HPP

class ABuffZone_NoJetpack_C : public ABuffZone_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)

    void ExtraRemoveCheck(class AAbiotic_Character_ParentBP_C* Character, bool& ShouldRemoveBuff);
    void ProcessNewBuffZoneOverlap(class AActor* NewActor, FBuffDebuffRowHandle BuffToAdd);
    void ExecuteUbergraph_BuffZone_NoJetpack(int32 EntryPoint);
}; // Size: 0x330

#endif
