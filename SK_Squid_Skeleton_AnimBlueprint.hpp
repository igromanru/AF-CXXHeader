#ifndef UE4SS_SDK_SK_Squid_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_SK_Squid_Skeleton_AnimBlueprint_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_103;                                                         // 0x0004 (size: 0x8)
    FName __NameProperty_104;                                                         // 0x000C (size: 0x8)
    TArray<float> __ArrayProperty_105;                                                // 0x0018 (size: 0x10)
    TArray<float> __ArrayProperty_106;                                                // 0x0028 (size: 0x10)
    TArray<float> __ArrayProperty_107;                                                // 0x0038 (size: 0x10)
    class UBlendProfile* __BlendProfile_108;                                          // 0x0048 (size: 0x8)
    class UCurveFloat* __CurveFloat_109;                                              // 0x0050 (size: 0x8)
    EAlphaBlendOption __EnumProperty_110;                                             // 0x0058 (size: 0x1)
    EBlendListTransitionType __EnumProperty_111;                                      // 0x0059 (size: 0x1)
    TArray<float> __ArrayProperty_112;                                                // 0x0060 (size: 0x10)
    FInputScaleBiasClampConstants __StructProperty_113;                               // 0x0070 (size: 0x2C)
    FAnimNodeFunctionRef __StructProperty_114;                                        // 0x00A0 (size: 0x20)
    bool __BoolProperty_115;                                                          // 0x00C0 (size: 0x1)
    float __FloatProperty_116;                                                        // 0x00C4 (size: 0x4)
    float __FloatProperty_117;                                                        // 0x00C8 (size: 0x4)
    bool __BoolProperty_118;                                                          // 0x00CC (size: 0x1)
    EAnimSyncMethod __EnumProperty_119;                                               // 0x00CD (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_120;                             // 0x00CE (size: 0x1)
    FName __NameProperty_121;                                                         // 0x00D0 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00D8 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0158 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LayeredBoneBlend;       // 0x0170 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x01A0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer_1;     // 0x01D0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_3;      // 0x0200 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot_2;                 // 0x0230 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseSnapshot_1;         // 0x0260 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_2;      // 0x0290 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot_1;                 // 0x02C0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SaveCachedPose;         // 0x02F0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_1;        // 0x0320 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose;          // 0x0350 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone;             // 0x0380 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace_1; // 0x03B0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace_1; // 0x03E0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                   // 0x0410 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_1;      // 0x0440 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;        // 0x0470 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseSnapshot;           // 0x04A0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;         // 0x04D0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_AnimDynamics;           // 0x0500 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace;  // 0x0530 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace;  // 0x0560 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer;       // 0x0590 (size: 0x30)

}; // Size: 0x5C0

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    bool __BoolProperty_0;                                                            // 0x0008 (size: 0x1)
    bool __BoolProperty_1;                                                            // 0x0009 (size: 0x1)
    bool __BoolProperty_2;                                                            // 0x000A (size: 0x1)
    bool __BoolProperty_3;                                                            // 0x000B (size: 0x1)
    float __FloatProperty_4;                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

class USK_Squid_Skeleton_AnimBlueprint_C : public UAbioticCharacterAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0x10)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0388 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0390 (size: 0x8)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x0398 (size: 0xF0)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0488 (size: 0x20)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;                      // 0x04A8 (size: 0x70)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;                        // 0x0518 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_2;                                              // 0x0560 (size: 0x48)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot_1;                              // 0x05A8 (size: 0x90)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;                        // 0x0638 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_1;                                              // 0x0680 (size: 0x48)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x06C8 (size: 0x80)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x0748 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x0770 (size: 0x28)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0798 (size: 0x128)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;     // 0x08C0 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;     // 0x08E0 (size: 0x20)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0900 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x0948 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0990 (size: 0x48)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;                                // 0x09D8 (size: 0x90)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0A68 (size: 0x48)
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics;                                // 0x0AB0 (size: 0x520)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0FD0 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0FF0 (size: 0x20)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x1010 (size: 0x70)
    double Speed;                                                                     // 0x1080 (size: 0x8)
    bool IsInCombat;                                                                  // 0x1088 (size: 0x1)
    bool Netted;                                                                      // 0x1089 (size: 0x1)
    bool IsDBNO;                                                                      // 0x108A (size: 0x1)
    bool RightFootLast;                                                               // 0x108B (size: 0x1)
    FVector Wobble;                                                                   // 0x1090 (size: 0x18)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void AnimNotify_Footfall_Left();
    void AnimNotify_Footfall_Right();
    void ExecuteUbergraph_SK_Squid_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x10A8

#endif
