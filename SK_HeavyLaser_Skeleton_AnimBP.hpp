#ifndef UE4SS_SDK_SK_HeavyLaser_Skeleton_AnimBP_HPP
#define UE4SS_SDK_SK_HeavyLaser_Skeleton_AnimBP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_28;                                                          // 0x0004 (size: 0x8)
    class UBlendProfile* __BlendProfile_29;                                           // 0x0010 (size: 0x8)
    class UCurveFloat* __CurveFloat_30;                                               // 0x0018 (size: 0x8)
    EAlphaBlendOption __EnumProperty_31;                                              // 0x0020 (size: 0x1)
    EBlendListTransitionType __EnumProperty_32;                                       // 0x0021 (size: 0x1)
    TArray<float> __ArrayProperty_33;                                                 // 0x0028 (size: 0x10)
    FAnimNodeFunctionRef __StructProperty_34;                                         // 0x0038 (size: 0x20)
    float __FloatProperty_35;                                                         // 0x0058 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_36;                                // 0x005C (size: 0x2C)
    float __FloatProperty_37;                                                         // 0x0088 (size: 0x4)
    bool __BoolProperty_38;                                                           // 0x008C (size: 0x1)
    EAnimSyncMethod __EnumProperty_39;                                                // 0x008D (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_40;                              // 0x008E (size: 0x1)
    FName __NameProperty_41;                                                          // 0x0090 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0098 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0118 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0130 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                   // 0x0160 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;        // 0x0190 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_1;       // 0x01C0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;         // 0x01F0 (size: 0x30)

}; // Size: 0x220

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)

}; // Size: 0x2

class USK_HeavyLaser_Skeleton_AnimBP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0x2)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0380 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0388 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0390 (size: 0x20)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x03B0 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x03F8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0440 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0488 (size: 0x48)
    bool Overdrive;                                                                   // 0x04D0 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_SK_HeavyLaser_Skeleton_AnimBP(int32 EntryPoint);
}; // Size: 0x4D1

#endif
