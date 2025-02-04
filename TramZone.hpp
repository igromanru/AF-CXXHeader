#ifndef UE4SS_SDK_TramZone_HPP
#define UE4SS_SDK_TramZone_HPP

class ATramZone_C : public ABuffZone_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)

    void ExtraRemoveCheck(class AAbiotic_Character_ParentBP_C* Character, bool& ShouldRemoveBuff);
    void AdditionalOnOverlap(class AActor* Actor);
    void ExecuteUbergraph_TramZone(int32 EntryPoint);
}; // Size: 0x330

#endif
