#ifndef UE4SS_SDK_Emote_Struct_HPP
#define UE4SS_SDK_Emote_Struct_HPP

struct FEmote_Struct
{
    FText EmoteDisplayName_28_866BAA1542A65AECD9D6D9A6E557A9A6;                       // 0x0000 (size: 0x10)
    FText EmoteSubtext_34_A7DAC7E4436F6FEF726D7F807551C8F6;                           // 0x0010 (size: 0x10)
    class UTexture2D* EmoteIcon_31_03FCAEBE4489755DF299F0AA6424A09A;                  // 0x0020 (size: 0x8)
    TSoftObjectPtr<UAnimMontage> EmoteMontage_6_9C7EE3F94C31CFC2CD55CEBCA60A789E;     // 0x0028 (size: 0x28)
    bool EndEmoteWhenMontageEnds_36_814AF2BC40A37D907D52DFBED7ADEE2A;                 // 0x0050 (size: 0x1)
    TSoftObjectPtr<UAnimMontage> FirstPersonMontage_40_9ED6EF37451E48ABCEA8C8B4C6B3A85D; // 0x0058 (size: 0x28)
    TArray<FDataTableRowHandle> PossibleVoiceLines_19_441ADB5C4E95132227C5F4A69CD32709; // 0x0080 (size: 0x10)
    bool InterruptableByAction_41_57763A9B453935E7AC89CA978DBBF607;                   // 0x0090 (size: 0x1)
    TArray<FName> BuffsToApplyWhileEmoting_22_CE9CC9E3405255496675A2ACB3011FFD;       // 0x0098 (size: 0x10)
    bool OverrideCameraHeight_46_A50289CE4349952959DE108FA051BD16;                    // 0x00A8 (size: 0x1)
    double FPCameraHeight_25_D29E1571418203A2434DB3BD2BA83F15;                        // 0x00B0 (size: 0x8)
    bool ForceEndCrouch_44_9F23E2F042E363BAA19FFCB75DBAED12;                          // 0x00B8 (size: 0x1)
    bool HideItemInHandDuringEmote_48_0F885A1840DF4C8713084DBF5AE8E74E;               // 0x00B9 (size: 0x1)
    bool ForceThirdPerson_50_572A109E45771F39B4F4848BCF0CA779;                        // 0x00BA (size: 0x1)
    FGameplayTagContainer OverrideTag_58_DD75DE31408E650C24212497E7EDE8E6;            // 0x00C0 (size: 0x20)
    FDataTableRowHandle OverrideRow_61_94432F9C43E188682ED51481571D4541;              // 0x00E0 (size: 0x10)

}; // Size: 0xF0

#endif
