#ifndef UE4SS_SDK_Peccary_AnimBP_HPP
#define UE4SS_SDK_Peccary_AnimBP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_102;                                                         // 0x0004 (size: 0x8)
    TArray<float> __ArrayProperty_103;                                                // 0x0010 (size: 0x10)
    bool __BoolProperty_104;                                                          // 0x0020 (size: 0x1)
    TArray<float> __ArrayProperty_105;                                                // 0x0028 (size: 0x10)
    TArray<float> __ArrayProperty_106;                                                // 0x0038 (size: 0x10)
    class UBlendProfile* __BlendProfile_107;                                          // 0x0048 (size: 0x8)
    class UCurveFloat* __CurveFloat_108;                                              // 0x0050 (size: 0x8)
    EAlphaBlendOption __EnumProperty_109;                                             // 0x0058 (size: 0x1)
    EBlendListTransitionType __EnumProperty_110;                                      // 0x0059 (size: 0x1)
    TArray<float> __ArrayProperty_111;                                                // 0x0060 (size: 0x10)
    FAnimNodeFunctionRef __StructProperty_112;                                        // 0x0070 (size: 0x20)
    float __FloatProperty_113;                                                        // 0x0090 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_114;                               // 0x0094 (size: 0x2C)
    float __FloatProperty_115;                                                        // 0x00C0 (size: 0x4)
    bool __BoolProperty_116;                                                          // 0x00C4 (size: 0x1)
    EAnimSyncMethod __EnumProperty_117;                                               // 0x00C5 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_118;                             // 0x00C6 (size: 0x1)
    FName __NameProperty_119;                                                         // 0x00C8 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00D0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0150 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0168 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer_2;     // 0x0198 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer_1;     // 0x01C8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                   // 0x01F8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByInt;         // 0x0228 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer;       // 0x0258 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_3;      // 0x0288 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_1;       // 0x02B8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseSnapshot_1;         // 0x02E8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_2;      // 0x0318 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_1;      // 0x0348 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseSnapshot;           // 0x0378 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;        // 0x03A8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;         // 0x03D8 (size: 0x30)

}; // Size: 0x408

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    int32 __IntProperty_1;                                                            // 0x000C (size: 0x4)
    float __FloatProperty_2;                                                          // 0x0010 (size: 0x4)
    bool __BoolProperty_3;                                                            // 0x0014 (size: 0x1)
    bool __BoolProperty_4;                                                            // 0x0015 (size: 0x1)
    bool __BoolProperty_5;                                                            // 0x0016 (size: 0x1)
    bool __BoolProperty_6;                                                            // 0x0017 (size: 0x1)

}; // Size: 0x18

class UPeccary_AnimBP_C : public UAbioticCharacterAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0x18)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0390 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0398 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x03A0 (size: 0x20)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;                      // 0x03C0 (size: 0x70)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;                      // 0x0430 (size: 0x70)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x04A0 (size: 0x48)
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;                            // 0x04E8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0530 (size: 0x70)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;                        // 0x05A0 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x05E8 (size: 0x48)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot_1;                              // 0x0630 (size: 0x90)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;                        // 0x06C0 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x0708 (size: 0x48)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;                                // 0x0750 (size: 0x90)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x07E0 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0828 (size: 0x48)
    double Speed;                                                                     // 0x0870 (size: 0x8)
    bool IsInCombat;                                                                  // 0x0878 (size: 0x1)
    int32 BlendspaceState;                                                            // 0x087C (size: 0x4)
    bool Netted;                                                                      // 0x0880 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_Peccary_AnimBP(int32 EntryPoint);
}; // Size: 0x881

#endif
