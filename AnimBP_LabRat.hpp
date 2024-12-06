#ifndef UE4SS_SDK_AnimBP_LabRat_HPP
#define UE4SS_SDK_AnimBP_LabRat_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_124;                                                         // 0x0004 (size: 0x8)
    TArray<float> __ArrayProperty_125;                                                // 0x0010 (size: 0x10)
    TArray<float> __ArrayProperty_126;                                                // 0x0020 (size: 0x10)
    bool __BoolProperty_127;                                                          // 0x0030 (size: 0x1)
    TArray<float> __ArrayProperty_128;                                                // 0x0038 (size: 0x10)
    TArray<float> __ArrayProperty_129;                                                // 0x0048 (size: 0x10)
    class UBlendProfile* __BlendProfile_130;                                          // 0x0058 (size: 0x8)
    class UCurveFloat* __CurveFloat_131;                                              // 0x0060 (size: 0x8)
    EAlphaBlendOption __EnumProperty_132;                                             // 0x0068 (size: 0x1)
    EBlendListTransitionType __EnumProperty_133;                                      // 0x0069 (size: 0x1)
    TArray<float> __ArrayProperty_134;                                                // 0x0070 (size: 0x10)
    FAnimNodeFunctionRef __StructProperty_135;                                        // 0x0080 (size: 0x20)
    float __FloatProperty_136;                                                        // 0x00A0 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_137;                               // 0x00A4 (size: 0x2C)
    float __FloatProperty_138;                                                        // 0x00D0 (size: 0x4)
    bool __BoolProperty_139;                                                          // 0x00D4 (size: 0x1)
    EAnimSyncMethod __EnumProperty_140;                                               // 0x00D5 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_141;                             // 0x00D6 (size: 0x1)
    FName __NameProperty_142;                                                         // 0x00D8 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00E0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0160 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0178 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_5;      // 0x01A8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot_1;                 // 0x01D8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_4;      // 0x0208 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                   // 0x0238 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_3;       // 0x0268 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_3;      // 0x0298 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_2;       // 0x02C8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer_1;     // 0x02F8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer;       // 0x0328 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_2;      // 0x0358 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_1;       // 0x0388 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseSnapshot;           // 0x03B8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_1;      // 0x03E8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;        // 0x0418 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;         // 0x0448 (size: 0x30)

}; // Size: 0x478

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)
    bool __BoolProperty_0;                                                            // 0x0002 (size: 0x1)
    bool __BoolProperty_1;                                                            // 0x0003 (size: 0x1)
    float __FloatProperty_2;                                                          // 0x0004 (size: 0x4)
    float __FloatProperty_3;                                                          // 0x0008 (size: 0x4)
    bool __BoolProperty_4;                                                            // 0x000C (size: 0x1)
    bool __BoolProperty_5;                                                            // 0x000D (size: 0x1)
    bool __BoolProperty_6;                                                            // 0x000E (size: 0x1)

}; // Size: 0xF

class UAnimBP_LabRat_C : public UAbioticCharacterAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0x10)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0388 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0390 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0398 (size: 0x20)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5;                        // 0x03B8 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_1;                                              // 0x0400 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4;                        // 0x0448 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0490 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x04D8 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;                        // 0x0520 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0568 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;                      // 0x05B0 (size: 0x70)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0620 (size: 0x70)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;                        // 0x0690 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x06D8 (size: 0x48)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;                                // 0x0720 (size: 0x90)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x07B0 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x07F8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0840 (size: 0x48)
    double Speed;                                                                     // 0x0888 (size: 0x8)
    bool IsCrouching;                                                                 // 0x0890 (size: 0x1)
    bool IsInCombat;                                                                  // 0x0891 (size: 0x1)
    bool Is DBNO;                                                                     // 0x0892 (size: 0x1)
    bool RightFootLast;                                                               // 0x0893 (size: 0x1)
    bool Netted;                                                                      // 0x0894 (size: 0x1)
    bool Grabbed;                                                                     // 0x0895 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void AnimNotify_Footfall_Left();
    void AnimNotify_Footfall_Right();
    void ExecuteUbergraph_AnimBP_LabRat(int32 EntryPoint);
}; // Size: 0x896

#endif
