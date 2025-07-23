#ifndef UE4SS_SDK_ShieldData_Parent_HPP
#define UE4SS_SDK_ShieldData_Parent_HPP

class UShieldData_Parent_C : public UPrimaryDataAsset
{
    FTransform IdleTransform;                                                         // 0x0030 (size: 0x60)
    FTransform BlockTransform;                                                        // 0x0090 (size: 0x60)
    FName ShieldSocket;                                                               // 0x00F0 (size: 0x8)
    class UAnimSequenceBase* EquipAnim;                                               // 0x00F8 (size: 0x8)
    class UAnimSequenceBase* WalkAnim;                                                // 0x0100 (size: 0x8)
    class UAnimSequenceBase* IdleAnim;                                                // 0x0108 (size: 0x8)
    class UAnimSequenceBase* BlockAnim;                                               // 0x0110 (size: 0x8)
    class UAnimSequenceBase* BlockHitAnim;                                            // 0x0118 (size: 0x8)
    class UAnimSequenceBase* OffscreenAnim;                                           // 0x0120 (size: 0x8)

}; // Size: 0x128

#endif
