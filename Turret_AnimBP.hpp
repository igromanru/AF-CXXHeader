#ifndef UE4SS_SDK_Turret_AnimBP_HPP
#define UE4SS_SDK_Turret_AnimBP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_51;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_52;                                                          // 0x000C (size: 0x8)
    TArray<float> __ArrayProperty_53;                                                 // 0x0018 (size: 0x10)
    class UBlendProfile* __BlendProfile_54;                                           // 0x0028 (size: 0x8)
    class UCurveFloat* __CurveFloat_55;                                               // 0x0030 (size: 0x8)
    bool __BoolProperty_56;                                                           // 0x0038 (size: 0x1)
    EAlphaBlendOption __EnumProperty_57;                                              // 0x0039 (size: 0x1)
    EBlendListTransitionType __EnumProperty_58;                                       // 0x003A (size: 0x1)
    TArray<float> __ArrayProperty_59;                                                 // 0x0040 (size: 0x10)
    FAnimNodeFunctionRef __StructProperty_60;                                         // 0x0050 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0070 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00F0 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0108 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_2;           // 0x0138 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace_2; // 0x0168 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LookAt_1;               // 0x0198 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LookAt;                 // 0x01C8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_1;      // 0x01F8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_1;           // 0x0228 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace_1; // 0x0258 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone;             // 0x0288 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace;  // 0x02B8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SaveCachedPose;         // 0x02E8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_1;        // 0x0318 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;        // 0x0348 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace_1; // 0x0378 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose;          // 0x03A8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace;  // 0x03D8 (size: 0x30)

}; // Size: 0x408

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)
    bool __BoolProperty_0;                                                            // 0x0002 (size: 0x1)

}; // Size: 0x3

class UTurret_AnimBP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0x3)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0380 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0388 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0390 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x03B0 (size: 0x128)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;     // 0x04D8 (size: 0x20)
    FAnimNode_LookAt AnimGraphNode_LookAt_1;                                          // 0x0500 (size: 0x250)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x0750 (size: 0x250)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x09A0 (size: 0x48)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x09E8 (size: 0x128)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;     // 0x0B10 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0B30 (size: 0x128)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0C58 (size: 0x20)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x0C78 (size: 0x80)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x0CF8 (size: 0x28)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0D20 (size: 0x48)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;     // 0x0D68 (size: 0x20)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x0D88 (size: 0x28)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0DB0 (size: 0x20)
    FVector TurretTopOffset;                                                          // 0x0DD0 (size: 0x18)
    FVector TargetLocation;                                                           // 0x0DE8 (size: 0x18)
    bool PatrolMode;                                                                  // 0x0E00 (size: 0x1)
    bool Powered;                                                                     // 0x0E01 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_Turret_AnimBP(int32 EntryPoint);
}; // Size: 0xE02

#endif
