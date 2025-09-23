#ifndef UE4SS_SDK_AnimBP_ExorMonk_HPP
#define UE4SS_SDK_AnimBP_ExorMonk_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_109;                                                         // 0x0004 (size: 0x8)
    TArray<float> __ArrayProperty_110;                                                // 0x0010 (size: 0x10)
    TArray<float> __ArrayProperty_111;                                                // 0x0020 (size: 0x10)
    TArray<float> __ArrayProperty_112;                                                // 0x0030 (size: 0x10)
    TArray<float> __ArrayProperty_113;                                                // 0x0040 (size: 0x10)
    bool __BoolProperty_114;                                                          // 0x0050 (size: 0x1)
    float __FloatProperty_115;                                                        // 0x0054 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_116;                               // 0x0058 (size: 0x2C)
    float __FloatProperty_117;                                                        // 0x0084 (size: 0x4)
    EAnimSyncMethod __EnumProperty_118;                                               // 0x0088 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_119;                             // 0x0089 (size: 0x1)
    FName __NameProperty_120;                                                         // 0x008C (size: 0x8)
    class UBlendProfile* __BlendProfile_121;                                          // 0x0098 (size: 0x8)
    class UCurveFloat* __CurveFloat_122;                                              // 0x00A0 (size: 0x8)
    bool __BoolProperty_123;                                                          // 0x00A8 (size: 0x1)
    EAlphaBlendOption __EnumProperty_124;                                             // 0x00A9 (size: 0x1)
    EBlendListTransitionType __EnumProperty_125;                                      // 0x00AA (size: 0x1)
    TArray<float> __ArrayProperty_126;                                                // 0x00B0 (size: 0x10)
    FAnimNodeFunctionRef __StructProperty_127;                                        // 0x00C0 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00E0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0160 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0178 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer_1;     // 0x01A8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                   // 0x01D8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_5;      // 0x0208 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer;       // 0x0238 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_4;      // 0x0268 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseSnapshot_1;         // 0x0298 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_3;      // 0x02C8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_2;      // 0x02F8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_2;       // 0x0328 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_1;      // 0x0358 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_1;       // 0x0388 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;         // 0x03B8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;        // 0x03E8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseSnapshot;           // 0x0418 (size: 0x30)

}; // Size: 0x448

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    bool __BoolProperty_1;                                                            // 0x000C (size: 0x1)
    float __FloatProperty_2;                                                          // 0x0010 (size: 0x4)
    float __FloatProperty_3;                                                          // 0x0014 (size: 0x4)
    bool __BoolProperty_4;                                                            // 0x0018 (size: 0x1)
    bool __BoolProperty_5;                                                            // 0x0019 (size: 0x1)
    bool __BoolProperty_6;                                                            // 0x001A (size: 0x1)
    bool __BoolProperty_7;                                                            // 0x001B (size: 0x1)
    bool __BoolProperty_8;                                                            // 0x001C (size: 0x1)

}; // Size: 0x1D

class UAnimBP_ExorMonk_C : public UAbioticCharacterAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0x20)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0398 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x03A0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x03A8 (size: 0x20)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;                      // 0x03C8 (size: 0x70)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0438 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5;                        // 0x0480 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x04C8 (size: 0x70)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4;                        // 0x0538 (size: 0x48)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot_1;                              // 0x0580 (size: 0x90)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;                        // 0x0610 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;                        // 0x0658 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x06A0 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x06E8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0730 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0778 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x07C0 (size: 0x48)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;                                // 0x0808 (size: 0x90)
    float Speed;                                                                      // 0x0898 (size: 0x4)
    float Direction;                                                                  // 0x089C (size: 0x4)
    bool InCombat;                                                                    // 0x08A0 (size: 0x1)
    bool Netted;                                                                      // 0x08A1 (size: 0x1)
    bool HeadshotDeath;                                                               // 0x08A2 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_AnimBP_ExorMonk(int32 EntryPoint);
}; // Size: 0x8A3

#endif
