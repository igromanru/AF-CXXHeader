#ifndef UE4SS_SDK_Turret_Megalight_AnimBP_HPP
#define UE4SS_SDK_Turret_Megalight_AnimBP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_48;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_49;                                                          // 0x000C (size: 0x8)
    TArray<float> __ArrayProperty_50;                                                 // 0x0018 (size: 0x10)
    FAnimNodeFunctionRef __StructProperty_51;                                         // 0x0028 (size: 0x20)
    class UBlendProfile* __BlendProfile_52;                                           // 0x0048 (size: 0x8)
    class UCurveFloat* __CurveFloat_53;                                               // 0x0050 (size: 0x8)
    bool __BoolProperty_54;                                                           // 0x0058 (size: 0x1)
    EAlphaBlendOption __EnumProperty_55;                                              // 0x0059 (size: 0x1)
    EBlendListTransitionType __EnumProperty_56;                                       // 0x005A (size: 0x1)
    TArray<float> __ArrayProperty_57;                                                 // 0x0060 (size: 0x10)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0070 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00F0 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0108 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace_2; // 0x0138 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LookAt_1;               // 0x0168 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LookAt;                 // 0x0198 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_1;      // 0x01C8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_1;           // 0x01F8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace_1; // 0x0228 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone;             // 0x0258 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace;  // 0x0288 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SaveCachedPose;         // 0x02B8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_1;        // 0x02E8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace_1; // 0x0318 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose;          // 0x0348 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace;  // 0x0378 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;        // 0x03A8 (size: 0x30)

}; // Size: 0x3D8

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)
    bool __BoolProperty_0;                                                            // 0x0002 (size: 0x1)

}; // Size: 0x3

class UTurret_Megalight_AnimBP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0x3)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0380 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0388 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0390 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;     // 0x03B0 (size: 0x20)
    FAnimNode_LookAt AnimGraphNode_LookAt_1;                                          // 0x03D0 (size: 0x250)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x0620 (size: 0x250)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x0870 (size: 0x48)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x08B8 (size: 0x128)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;     // 0x09E0 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0A00 (size: 0x128)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0B28 (size: 0x20)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x0B48 (size: 0x80)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x0BC8 (size: 0x28)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;     // 0x0BF0 (size: 0x20)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x0C10 (size: 0x28)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0C38 (size: 0x20)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0C58 (size: 0x48)
    FVector TargetLocation;                                                           // 0x0CA0 (size: 0x18)
    bool PatrolMode;                                                                  // 0x0CB8 (size: 0x1)
    FRotator TurretRotation;                                                          // 0x0CC0 (size: 0x18)
    bool Powered;                                                                     // 0x0CD8 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_Turret_Megalight_AnimBP(int32 EntryPoint);
}; // Size: 0xCD9

#endif
