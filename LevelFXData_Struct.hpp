#ifndef UE4SS_SDK_LevelFXData_Struct_HPP
#define UE4SS_SDK_LevelFXData_Struct_HPP

struct FLevelFXData_Struct
{
    double DirLight_Intensity_14_55CBF853479173E9C065E28EFE7D8736;                    // 0x0000 (size: 0x8)
    FLinearColor DirLight_Color_12_3AFBE5AB435B34AE8682E2B07434A881;                  // 0x0008 (size: 0x10)
    FRotator DirLight_Angle_17_EEBAAAFA410235681790719AED884A19;                      // 0x0018 (size: 0x18)
    double DirLight_DynamicShadowDistance_84_AE8E4F1F4A41E14D5F79D79F0B14B37D;        // 0x0030 (size: 0x8)
    double SkyLight_Intensity_22_5D7CE6774332D53F0FD6A789CAEE8EF5;                    // 0x0038 (size: 0x8)
    FLinearColor SkyLight_Color_21_9276E6504760D11E775EBDACC13F1A7C;                  // 0x0040 (size: 0x10)
    TSoftObjectPtr<UTextureCube> SkyLight_Cubemap_24_7B920D00411EE520D274838CA8070D11; // 0x0050 (size: 0x28)
    double Fog_Density_26_6DC19F454EA6E8A87E881598B5088215;                           // 0x0078 (size: 0x8)
    double Fog_Falloff_45_2DC72BC14F48B9D8D3F6A1BBDDADC82B;                           // 0x0080 (size: 0x8)
    FLinearColor Fog_Color_36_46D6A7F04788B9928E6F65B14F012CF0;                       // 0x0088 (size: 0x10)
    double Fog_MaxOpacity_43_18C91F974B4510B5BE6F68AD7B6BCE8F;                        // 0x0098 (size: 0x8)
    double Fog_StartDistance_44_9C468D594D3CB0D1E4B5FA924ABCE4BF;                     // 0x00A0 (size: 0x8)
    double Fog_ZHeight_35_2521F7334B03DD34FD3D42AB0B155630;                           // 0x00A8 (size: 0x8)
    TArray<TSoftObjectPtr<USoundBase>> MusicTracks_46_F8438FF04274ED49E328D083C12787B6; // 0x00B0 (size: 0x10)
    TSoftObjectPtr<USoundBase> AmbientSoundTrack_57_C7ED35674A8E386597D6339FB8AFCE64; // 0x00C0 (size: 0x28)
    bool HasFacilityShakes_50_EB09ADA4413FD4B932D543B8C584443F;                       // 0x00E8 (size: 0x1)
    int32 AmbientTemperature_81_B40D46EB42FB1F79EB9E738FF13DDFD2;                     // 0x00EC (size: 0x4)
    bool IsVignette_59_877127B44189E39CE0F6DF90D9BF19D1;                              // 0x00F0 (size: 0x1)
    FName EntranceTeleporter_62_377C02784845FADEF472FAA60DE888DB;                     // 0x00F4 (size: 0x8)
    TSoftObjectPtr<UTexture> LUTOverride_67_9AE81DEF4772B99EE903168F538AB3DD;         // 0x0100 (size: 0x28)
    FDataTableRowHandle DayAnnouncement_70_9AA6A26541EB4E5D26E6C4929824AEAC;          // 0x0128 (size: 0x10)
    FDataTableRowHandle NightAnnouncement_72_E65EAF7646A9B45584F614ADDCB80EA4;        // 0x0138 (size: 0x10)
    TSoftObjectPtr<UNiagaraSystem> WeatherParticle_76_59580B5D4B385C678A2AE4B65C9DE2AE; // 0x0148 (size: 0x28)
    bool WeatherRenderTargetCulling_80_C226FD054276FEAA01CCA388B3F563EA;              // 0x0170 (size: 0x1)

}; // Size: 0x171

#endif
