#ifndef UE4SS_SDK_SaveData_Door_Struct_HPP
#define UE4SS_SDK_SaveData_Door_Struct_HPP

struct FSaveData_Door_Struct
{
    FSoftObjectPath ActorPath_23_AA99AF994766F5556796A89F89EF7645;                    // 0x0000 (size: 0x20)
    TEnumAsByte<E_DoorStates::Type> DoorState_16_FC20B6E3483FF18E4FBDF19E39E880E9;    // 0x0020 (size: 0x1)
    double DoorRotationRootYaw_17_FEB24A4F4081A0EFDC1475AB811846D1;                   // 0x0028 (size: 0x8)
    bool OneWayDoor_HasBeenUnlocked_9_128506D0489955F65729EEA611C542AC;               // 0x0030 (size: 0x1)
    bool NoReset_25_D7D89CE94FDDFF62450A9AA3A24C5FC8;                                 // 0x0031 (size: 0x1)

}; // Size: 0x32

#endif
