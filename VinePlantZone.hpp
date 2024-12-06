#ifndef UE4SS_SDK_VinePlantZone_HPP
#define UE4SS_SDK_VinePlantZone_HPP

class AVinePlantZone_C : public ABuffZone_ParentBP_C
{

    void ExtraRemoveCheck(class AAbiotic_Character_ParentBP_C* Character, bool& ShouldRemoveBuff);
    void IsValidCharacterInsideZone?(class AAbiotic_Character_ParentBP_C* CharacterToCheck, bool& Valid);
}; // Size: 0x308

#endif
