#ifndef UE4SS_SDK_LeyakSafetyZone_HPP
#define UE4SS_SDK_LeyakSafetyZone_HPP

class ALeyakSafetyZone_C : public ABuffZone_ParentBP_C
{
    class UTextRenderComponent* TextRender;                                           // 0x0308 (size: 0x8)

    void ExtraRemoveCheck(class AAbiotic_Character_ParentBP_C* Character, bool& ShouldRemoveBuff);
}; // Size: 0x310

#endif
