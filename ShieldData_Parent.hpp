#ifndef UE4SS_SDK_ShieldData_Parent_HPP
#define UE4SS_SDK_ShieldData_Parent_HPP

class UShieldData_Parent_C : public UPrimaryDataAsset
{
    FTransform IdleTransform;                                                         // 0x0030 (size: 0x60)
    FTransform BlockTransform;                                                        // 0x0090 (size: 0x60)
    FName ShieldSocket;                                                               // 0x00F0 (size: 0x8)

}; // Size: 0xF8

#endif
