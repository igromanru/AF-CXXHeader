#ifndef UE4SS_SDK_SK_Squid_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_SK_Squid_Skeleton_AnimBlueprint_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_95;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_96;                                                          // 0x000C (size: 0x8)
    bool __BoolProperty_97;                                                           // 0x0014 (size: 0x1)
    TArray<float> __ArrayProperty_98;                                                 // 0x0018 (size: 0x10)
    TArray<float> __ArrayProperty_99;                                                 // 0x0028 (size: 0x10)
    TArray<float> __ArrayProperty_100;                                                // 0x0038 (size: 0x10)
    class UBlendProfile* __BlendProfile_101;                                          // 0x0048 (size: 0x8)
    class UCurveFloat* __CurveFloat_102;                                              // 0x0050 (size: 0x8)
    EAlphaBlendOption __EnumProperty_103;                                             // 0x0058 (size: 0x1)
    EBlendListTransitionType __EnumProperty_104;                                      // 0x0059 (size: 0x1)
    TArray<float> __ArrayProperty_105;                                                // 0x0060 (size: 0x10)
    FAnimNodeFunctionRef __StructProperty_106;                                        // 0x0070 (size: 0x20)
    float __FloatProperty_107;                                                        // 0x0090 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_108;                               // 0x0094 (size: 0x2C)
    float __FloatProperty_109;                                                        // 0x00C0 (size: 0x4)
    bool __BoolProperty_110;                                                          // 0x00C4 (size: 0x1)
    EAnimSyncMethod __EnumProperty_111;                                               // 0x00C5 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_112;                             // 0x00C6 (size: 0x1)
    FName __NameProperty_113;                                                         // 0x00C8 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00D0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0150 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0168 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LayeredBoneBlend;       // 0x0198 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_1;       // 0x01C8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer;       // 0x01F8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_3;      // 0x0228 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot_2;                 // 0x0258 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseSnapshot_1;         // 0x0288 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_2;      // 0x02B8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot_1;                 // 0x02E8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SaveCachedPose;         // 0x0318 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_1;        // 0x0348 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose;          // 0x0378 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone;             // 0x03A8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace;  // 0x03D8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace;  // 0x0408 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                   // 0x0438 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_1;      // 0x0468 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;        // 0x0498 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseSnapshot;           // 0x04C8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;         // 0x04F8 (size: 0x30)

}; // Size: 0x528

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    bool __BoolProperty_0;                                                            // 0x0008 (size: 0x1)
    bool __BoolProperty_1;                                                            // 0x0009 (size: 0x1)
    bool __BoolProperty_2;                                                            // 0x000A (size: 0x1)
    bool __BoolProperty_3;                                                            // 0x000B (size: 0x1)

}; // Size: 0xC

class USK_Squid_Skeleton_AnimBlueprint_C : public UAbioticCharacterAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0xC)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0388 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0390 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0398 (size: 0x20)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x03B8 (size: 0xF0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x04A8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x04F0 (size: 0x70)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;                        // 0x0560 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_2;                                              // 0x05A8 (size: 0x48)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot_1;                              // 0x05F0 (size: 0x90)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;                        // 0x0680 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_1;                                              // 0x06C8 (size: 0x48)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x0710 (size: 0x80)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x0790 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x07B8 (size: 0x28)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x07E0 (size: 0x128)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0908 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0928 (size: 0x20)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0948 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x0990 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x09D8 (size: 0x48)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;                                // 0x0A20 (size: 0x90)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0AB0 (size: 0x48)
    double Speed;                                                                     // 0x0AF8 (size: 0x8)
    bool IsInCombat;                                                                  // 0x0B00 (size: 0x1)
    bool Netted;                                                                      // 0x0B01 (size: 0x1)
    bool IsDBNO;                                                                      // 0x0B02 (size: 0x1)
    bool RightFootLast;                                                               // 0x0B03 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void AnimNotify_Footfall_Left();
    void AnimNotify_Footfall_Right();
    void ExecuteUbergraph_SK_Squid_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0xB04

#endif
