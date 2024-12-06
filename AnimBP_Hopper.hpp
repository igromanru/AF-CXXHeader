#ifndef UE4SS_SDK_AnimBP_Hopper_HPP
#define UE4SS_SDK_AnimBP_Hopper_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_115;                                                         // 0x0004 (size: 0x8)
    TArray<float> __ArrayProperty_116;                                                // 0x0010 (size: 0x10)
    EAnimSyncMethod __EnumProperty_117;                                               // 0x0020 (size: 0x1)
    FName __NameProperty_118;                                                         // 0x0024 (size: 0x8)
    TArray<float> __ArrayProperty_119;                                                // 0x0030 (size: 0x10)
    bool __BoolProperty_120;                                                          // 0x0040 (size: 0x1)
    TArray<float> __ArrayProperty_121;                                                // 0x0048 (size: 0x10)
    TArray<float> __ArrayProperty_122;                                                // 0x0058 (size: 0x10)
    float __FloatProperty_123;                                                        // 0x0068 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_124;                               // 0x006C (size: 0x2C)
    float __FloatProperty_125;                                                        // 0x0098 (size: 0x4)
    EAnimSyncMethod __EnumProperty_126;                                               // 0x009C (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_127;                             // 0x009D (size: 0x1)
    FName __NameProperty_128;                                                         // 0x00A0 (size: 0x8)
    class UBlendProfile* __BlendProfile_129;                                          // 0x00A8 (size: 0x8)
    class UCurveFloat* __CurveFloat_130;                                              // 0x00B0 (size: 0x8)
    bool __BoolProperty_131;                                                          // 0x00B8 (size: 0x1)
    EAlphaBlendOption __EnumProperty_132;                                             // 0x00B9 (size: 0x1)
    EBlendListTransitionType __EnumProperty_133;                                      // 0x00BA (size: 0x1)
    TArray<float> __ArrayProperty_134;                                                // 0x00C0 (size: 0x10)
    FAnimNodeFunctionRef __StructProperty_135;                                        // 0x00D0 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00F0 (size: 0x80)
    FAnimSubsystem_BlendSpaceGraph AnimBlueprintExtension_BlendSpaceGraph;            // 0x0170 (size: 0x18)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0188 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x01A0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                   // 0x01D0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_4;      // 0x0200 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_4;       // 0x0230 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_3;       // 0x0260 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpaceSampleResult_1; // 0x0290 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_2;       // 0x02C0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpaceSampleResult; // 0x02F0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpaceGraph;        // 0x0320 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_3;      // 0x0350 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_1;       // 0x0380 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseSnapshot_1;         // 0x03B0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_2;      // 0x03E0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_1;      // 0x0410 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;         // 0x0440 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;        // 0x0470 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseSnapshot;           // 0x04A0 (size: 0x30)

}; // Size: 0x4D0

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)
    bool __BoolProperty_0;                                                            // 0x0002 (size: 0x1)
    bool __BoolProperty_1;                                                            // 0x0003 (size: 0x1)
    bool __BoolProperty_2;                                                            // 0x0004 (size: 0x1)
    bool __BoolProperty_3;                                                            // 0x0005 (size: 0x1)

}; // Size: 0x6

class UAnimBP_Hopper_C : public UAbioticCharacterAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0x6)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0380 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_BlendSpaceGraph;                    // 0x0388 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0390 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0398 (size: 0x20)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x03B8 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4;                        // 0x0400 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x0448 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0490 (size: 0x48)
    FAnimNode_BlendSpaceSampleResult AnimGraphNode_BlendSpaceSampleResult_1;          // 0x04D8 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x04F8 (size: 0x48)
    FAnimNode_BlendSpaceSampleResult AnimGraphNode_BlendSpaceSampleResult;            // 0x0540 (size: 0x20)
    FAnimNode_BlendSpaceGraph AnimGraphNode_BlendSpaceGraph;                          // 0x0560 (size: 0x68)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;                        // 0x05C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0610 (size: 0x48)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot_1;                              // 0x0658 (size: 0x90)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;                        // 0x06E8 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x0730 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0778 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x07C0 (size: 0x48)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;                                // 0x0808 (size: 0x90)
    double Speed;                                                                     // 0x0898 (size: 0x8)
    bool InFlight;                                                                    // 0x08A0 (size: 0x1)
    bool Netted;                                                                      // 0x08A1 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_AnimBP_Hopper(int32 EntryPoint);
}; // Size: 0x8A2

#endif
