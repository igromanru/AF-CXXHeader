#ifndef UE4SS_SDK_W_Debug_PlayerStats_HPP
#define UE4SS_SDK_W_Debug_PlayerStats_HPP

class UW_Debug_PlayerStats_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG_1;                                                               // 0x02E8 (size: 0x8)
    class UButton* Button_Flags;                                                      // 0x02F0 (size: 0x8)
    class UButton* Button_Levels;                                                     // 0x02F8 (size: 0x8)
    class UButton* Button_MyStats;                                                    // 0x0300 (size: 0x8)
    class UButton* Button_Sandbox;                                                    // 0x0308 (size: 0x8)
    class UButton* Button_Skills;                                                     // 0x0310 (size: 0x8)
    class UWidgetSwitcher* ListSwitcher;                                              // 0x0318 (size: 0x8)
    class UImage* MyStatsBG;                                                          // 0x0320 (size: 0x8)
    class UBackgroundBlur* MyStatsBGBlur;                                             // 0x0328 (size: 0x8)
    class UScrollBox* MyStatsScrollBox;                                               // 0x0330 (size: 0x8)
    class UScrollBox* ScrollBox_Sandbox;                                              // 0x0338 (size: 0x8)
    class UScrollBox* ScrollBox_Skills;                                               // 0x0340 (size: 0x8)
    class UScrollBox* ScrollBox_WorldFlags;                                           // 0x0348 (size: 0x8)
    class UTextBlock* Text_AdditionalTemp;                                            // 0x0350 (size: 0x8)
    class UTextBlock* Text_AmbientTemp;                                               // 0x0358 (size: 0x8)
    class UTextBlock* Text_Armor;                                                     // 0x0360 (size: 0x8)
    class UTextBlock* Text_Armor_1;                                                   // 0x0368 (size: 0x8)
    class UTextBlock* Text_Armor_2;                                                   // 0x0370 (size: 0x8)
    class UTextBlock* Text_Armor_3;                                                   // 0x0378 (size: 0x8)
    class UTextBlock* Text_Armor_4;                                                   // 0x0380 (size: 0x8)
    class UTextBlock* Text_Armor_5;                                                   // 0x0388 (size: 0x8)
    class UTextBlock* Text_ArmorValue;                                                // 0x0390 (size: 0x8)
    class UTextBlock* Text_Bloody;                                                    // 0x0398 (size: 0x8)
    class UTextBlock* Text_BodyTemp;                                                  // 0x03A0 (size: 0x8)
    class UTextBlock* Text_BuffTemp;                                                  // 0x03A8 (size: 0x8)
    class UTextBlock* Text_Continence;                                                // 0x03B0 (size: 0x8)
    class UTextBlock* Text_ContinenceMod;                                             // 0x03B8 (size: 0x8)
    class UTextBlock* Text_ContinenceMod_2;                                           // 0x03C0 (size: 0x8)
    class UTextBlock* Text_Fatigue;                                                   // 0x03C8 (size: 0x8)
    class UTextBlock* Text_Health;                                                    // 0x03D0 (size: 0x8)
    class UTextBlock* Text_Hunger;                                                    // 0x03D8 (size: 0x8)
    class UTextBlock* Text_Radiation;                                                 // 0x03E0 (size: 0x8)
    class UTextBlock* Text_Radiation_1;                                               // 0x03E8 (size: 0x8)
    class UTextBlock* Text_Sanity;                                                    // 0x03F0 (size: 0x8)
    class UTextBlock* Text_Stamina;                                                   // 0x03F8 (size: 0x8)
    class UTextBlock* Text_StamMod;                                                   // 0x0400 (size: 0x8)
    class UTextBlock* Text_Thirst;                                                    // 0x0408 (size: 0x8)
    class UTextBlock* Title_Health;                                                   // 0x0410 (size: 0x8)
    class UVerticalBox* VBOX_Buffs;                                                   // 0x0418 (size: 0x8)
    class UVerticalBox* VBox_Flags;                                                   // 0x0420 (size: 0x8)
    class UVerticalBox* VBox_Sandbox;                                                 // 0x0428 (size: 0x8)
    class UVerticalBox* Vbox_Skills;                                                  // 0x0430 (size: 0x8)
    class UVerticalBox* VBox_Stats;                                                   // 0x0438 (size: 0x8)
    class UVerticalBox* VBox_Traits;                                                  // 0x0440 (size: 0x8)
    class UW_CheatMenu_C* ParentCheatMenu;                                            // 0x0448 (size: 0x8)

    void Get_Text_AdditionalTemp_Text();
    void Get_Text_BuffTemp_Text();
    void Get_Text_Bloody_Text();
    void Get_Text_Radiation_Text_0();
    void Get_Text_Radiation_1_Text_0();
    void Get_Text_AmbientTemp_Text_0();
    void Get_Text_BodyTemp_Text_0();
    void Get_Text_Sanity_Text_0();
    void Get_Text_Armor_1_Text_0();
    void Get_Text_ArmorValue_Text_0();
    void Get_Text_ContinenceMod_2_Text_0();
    void Get_Text_Continence_Text_0();
    void Get_Text_Fatigue_Text_0();
    void Get_Text_Thirst_Text_0();
    void Get_Text_Hunger_Text_0();
    void Get_Text_StamMod_Text_0();
    void Get_Text_Stamina_Text_0();
    void Get_Text_Health_Text_0();
    void Construct();
    void RefreshDebuffsList();
    void RefreshSkillStats();
    void BndEvt__W_Debug_PlayerStats_Button_Skills_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Debug_PlayerStats_Button_Levels_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Debug_PlayerStats_Button_Flags_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void RefreshWorldFlags();
    void RefreshSandboxSettings();
    void BndEvt__W_Debug_PlayerStats_Button_Sandbox_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Debug_PlayerStats_Button_Skills_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_W_Debug_PlayerStats(int32 EntryPoint);
}; // Size: 0x450

#endif
