#ifndef UE4SS_SDK_W_PlayerHUD_BodyDiagram_HPP
#define UE4SS_SDK_W_PlayerHUD_BodyDiagram_HPP

class UW_PlayerHUD_BodyDiagram_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Body_Head;                                                          // 0x02E8 (size: 0x8)
    class UImage* Body_Hunger;                                                        // 0x02F0 (size: 0x8)
    class UImage* Body_LeftArm;                                                       // 0x02F8 (size: 0x8)
    class UImage* Body_LeftLeg;                                                       // 0x0300 (size: 0x8)
    class UImage* Body_RightArm;                                                      // 0x0308 (size: 0x8)
    class UImage* Body_RightLeg;                                                      // 0x0310 (size: 0x8)
    class UImage* Body_Thirst;                                                        // 0x0318 (size: 0x8)
    class UImage* Body_Torso;                                                         // 0x0320 (size: 0x8)
    class UImage* Wound_Head_Bleeding;                                                // 0x0328 (size: 0x8)
    class UImage* Wound_LeftArm_Bleeding;                                             // 0x0330 (size: 0x8)
    class UImage* Wound_LeftLeg_Bleeding;                                             // 0x0338 (size: 0x8)
    class UImage* Wound_RightArm_Bleeding;                                            // 0x0340 (size: 0x8)
    class UImage* Wound_RightLeg_Bleeding;                                            // 0x0348 (size: 0x8)
    class UImage* Wound_Torso_Bleeding;                                               // 0x0350 (size: 0x8)
    TEnumAsByte<ECriticalityLevels::Type> HeadStatus;                                 // 0x0358 (size: 0x1)
    TEnumAsByte<ECriticalityLevels::Type> TorsoStatus;                                // 0x0359 (size: 0x1)
    TEnumAsByte<ECriticalityLevels::Type> LeftArmStatus;                              // 0x035A (size: 0x1)
    TEnumAsByte<ECriticalityLevels::Type> RightArmStatus;                             // 0x035B (size: 0x1)
    TEnumAsByte<ECriticalityLevels::Type> LeftLegStatus;                              // 0x035C (size: 0x1)
    TEnumAsByte<ECriticalityLevels::Type> RightLegStatus;                             // 0x035D (size: 0x1)
    class UW_PlayerHUD_Main_C* ParentHUD;                                             // 0x0360 (size: 0x8)
    bool ShowsHungerIcon;                                                             // 0x0368 (size: 0x1)
    TArray<EBodyLimbs> On Limbs;                                                      // 0x0370 (size: 0x10)

    void Update Current State Icon(class UImage* Icon, EBuffSeverity& SeverityLevel);
    void GetCriticalityColor(TEnumAsByte<ECriticalityLevels::Type> Index, FLinearColor& Color, FSlateColor& SlateColor);
    void UpdateBodyStates(class AAbiotic_Character_ParentBP_C* Character);
    void UpdateBodyHungerThirstStates(class AAbiotic_Character_ParentBP_C* Character);
    void ExecuteUbergraph_W_PlayerHUD_BodyDiagram(int32 EntryPoint);
}; // Size: 0x380

#endif
