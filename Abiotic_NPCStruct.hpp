#ifndef UE4SS_SDK_Abiotic_NPCStruct_HPP
#define UE4SS_SDK_Abiotic_NPCStruct_HPP

struct FAbiotic_NPCStruct
{
    FText DisplayName_9_5C4263DF4E1C7D38B677D7A3755C44E8;                             // 0x0000 (size: 0x10)
    TEnumAsByte<E_Factions::Type> DefaultFaction_12_4111F03F450FC48D854F62B533ADF4A7; // 0x0010 (size: 0x1)
    TSoftClassPtr<ANPC_Base_ParentBP_C> NPCSpawnClass_103_10FAD50F422D07F0C72954B40FFDE312; // 0x0018 (size: 0x28)
    double HP_Head_42_B6C672214D769CFF8ADD09BC740F0855;                               // 0x0040 (size: 0x8)
    double HP_Torso_41_F869473149C739C907DE8FADA897657E;                              // 0x0048 (size: 0x8)
    double HP_LeftArm_43_3759F0B24516CB52D327D19BC0D7B199;                            // 0x0050 (size: 0x8)
    double HP_RightArm_44_91DEABCD44E1CAECCD5AC5997D2763FE;                           // 0x0058 (size: 0x8)
    double HP_LeftLeg_45_DC2A3E8642BBF43316D529937D64ADB6;                            // 0x0060 (size: 0x8)
    double HP_RightLeg_47_BDF050784072C9B3BA05C5813B7B599A;                           // 0x0068 (size: 0x8)
    double MeleeAttackDamagePerHit_67_EDB3FAC04077970C606CD38276E2CCAD;               // 0x0070 (size: 0x8)
    double RangeToMeleeAttack_19_BD3B04004681AA59651B098842F63F06;                    // 0x0078 (size: 0x8)
    double RangedAttackDamagePerHit_66_D033996345E36DA6D1E422A35BE68466;              // 0x0080 (size: 0x8)
    bool HasRangedAttack_25_A22819164FDBB42E27EA22A68EF90767;                         // 0x0088 (size: 0x1)
    double RangedAttackCooldown_115_323C598445E2D5A3C66A97ABAC4F0BC1;                 // 0x0090 (size: 0x8)
    double RangeToRangedAttack_20_6B3CAF6F44DB3656355981A94BB6B080;                   // 0x0098 (size: 0x8)
    double DefaultWalkSpeed_17_311EDFE249A63474E18512B1E0BA66D4;                      // 0x00A0 (size: 0x8)
    double DefaultSprintSpeed_18_F44E4C8A4F87079E4A5710984C1DF4EC;                    // 0x00A8 (size: 0x8)
    TArray<FNPCVoiceRowHandle> VoiceRows_133_B75D9A784D17918F4A7B409B45F7E606;        // 0x00B0 (size: 0x10)
    FAbiotic_NPCDialogStruct VoiceLines_29_DD52970C470363E69342FC96F39AE4EC;          // 0x00C0 (size: 0xD0)
    bool HasDBNOState_53_969EEA6044826C92D7C791A275736E87;                            // 0x0190 (size: 0x1)
    bool HasHunger_59_72FED75441463BEE65F5FBAD35466545;                               // 0x0191 (size: 0x1)
    bool HasThirst_57_D2FB59C749FC318CE94D728BADD4C4B7;                               // 0x0192 (size: 0x1)
    bool HasFatigue_58_4CC9FFF9435E3DFA1A982B93036A189A;                              // 0x0193 (size: 0x1)
    bool CanOpenDoors_77_CAD75EB947C7C78F76846FA22BBF8DAE;                            // 0x0194 (size: 0x1)
    bool CanBashOpenDoors_110_0C2F50854675CCB520EEFC8B762677C4;                       // 0x0195 (size: 0x1)
    TSubclassOf<class UAbiotic_DamageType_ParentBP_C> DamageType_Ranged_85_E98D2E5C42F02821A9EC4CA77F454AF0; // 0x0198 (size: 0x8)
    TSubclassOf<class UAbiotic_DamageType_ParentBP_C> DamageType_Melee_84_C959B7F94F2B504041ADBAAA9C5AF7DE; // 0x01A0 (size: 0x8)
    TArray<FDataTableRowHandle> PotentialLootWhenKilled_100_B9754AE04FDF9860B1EC8F93900698C7; // 0x01A8 (size: 0x10)
    FAbiotic_Gib_Struct GibInfo_93_85C59FF64049C8D27AA681B7FAE7780D;                  // 0x01B8 (size: 0x18)
    double NPC_Hit_XP_Multiplier_108_D2C5D29B412F4D63256DB3B968495DEA;                // 0x01D0 (size: 0x8)
    TArray<class TSubclassOf<UAbiotic_DamageType_ParentBP_C>> DamageType_Weaknesses_124_9DEAD9684BCC3CC4F455998D952268DE; // 0x01D8 (size: 0x10)
    TArray<class TSubclassOf<UAbiotic_DamageType_ParentBP_C>> DamageType_Resistances_125_477176FE4AA235093E0CE7BEEA861BE4; // 0x01E8 (size: 0x10)
    TArray<class TSubclassOf<UAbiotic_DamageType_ParentBP_C>> DamageType_Immune_129_F125CE8D4FA3F4D9ACE1D39C2C3AAFD5; // 0x01F8 (size: 0x10)
    FAchievementStatRowHandle AchievementStat_136_246B5AD74BC67B9850CA0CA33E4755AC;   // 0x0208 (size: 0x20)
    FCompendiumEntryRowHandle CompendiumKill_142_C1A9B2AB45F0A33DE67D23BF710B930D;    // 0x0228 (size: 0x20)
    bool StrippedFromBuild_138_E461DDCE4DCBBA0B7E413193E03EE7A6;                      // 0x0248 (size: 0x1)

}; // Size: 0x249

#endif
