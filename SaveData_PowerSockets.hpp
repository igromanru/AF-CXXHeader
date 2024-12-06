#ifndef UE4SS_SDK_SaveData_PowerSockets_HPP
#define UE4SS_SDK_SaveData_PowerSockets_HPP

struct FSaveData_PowerSockets
{
    FString PowerSocket_23_0F6755A14AF8031F65674CB6F8553D7A;                          // 0x0000 (size: 0x10)
    FString PluggedInDeviceAssetID_20_EDF3C1474C00B1AC29424D8B05460265;               // 0x0010 (size: 0x10)
    bool HasTimer_9_3EE13A6A4C191C0D16A106BF214E9F81;                                 // 0x0020 (size: 0x1)
    TEnumAsByte<E_PowerTimerModes::Type> TimerMode_8_B4F1798A4364D14CC93168AD9E666B81; // 0x0021 (size: 0x1)
    TArray<FString> ExtraPoweredDeviceAssetIDs_22_3D4D3BEC466CE522948FDDA95A85853E;   // 0x0028 (size: 0x10)

}; // Size: 0x38

#endif
