#ifndef UE4SS_SDK_SaveData_Vehicle_Struct_HPP
#define UE4SS_SDK_SaveData_Vehicle_Struct_HPP

struct FSaveData_Vehicle_Struct
{
    TSoftClassPtr<AActor> Class_164_84FAE6234D772064CD9B659BA5046B1C;                 // 0x0000 (size: 0x28)
    FString VehicleID_160_F41359174DBD46A5207ABD9F4C6FFBDC;                           // 0x0028 (size: 0x10)
    FTransform Transform_50_85E8B13D40141C9B1308F4BB943BD753;                         // 0x0040 (size: 0x60)
    TArray<FSaveData_Inventories_Struct> ContainerInventories_110_3A680B7244ACB095D963B786D9BB6ECB; // 0x00A0 (size: 0x10)
    bool VehicleDriveable_163_E36AC928417142344C1AAFB155C332D4;                       // 0x00B0 (size: 0x1)
    bool VehicleDestroyed_167_2CCD4A754C3A1E6D797F12BBA7A9CC05;                       // 0x00B1 (size: 0x1)

}; // Size: 0xB2

#endif
