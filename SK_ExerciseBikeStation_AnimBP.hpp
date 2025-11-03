#ifndef UE4SS_SDK_SK_ExerciseBikeStation_AnimBP_HPP
#define UE4SS_SDK_SK_ExerciseBikeStation_AnimBP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_23;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_24;                                                          // 0x000C (size: 0x8)
    float __FloatProperty_25;                                                         // 0x0014 (size: 0x4)
    TEnumAsByte<ESequenceEvalReinit::Type> __ByteProperty_26;                         // 0x0018 (size: 0x1)
    bool __BoolProperty_27;                                                           // 0x0019 (size: 0x1)
    int32 __IntProperty_28;                                                           // 0x001C (size: 0x4)
    EAnimSyncMethod __EnumProperty_29;                                                // 0x0020 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_30;                              // 0x0021 (size: 0x1)
    FName __NameProperty_31;                                                          // 0x0024 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_32;                                         // 0x0030 (size: 0x20)
    class UBlendProfile* __BlendProfile_33;                                           // 0x0050 (size: 0x8)
    class UCurveFloat* __CurveFloat_34;                                               // 0x0058 (size: 0x8)
    bool __BoolProperty_35;                                                           // 0x0060 (size: 0x1)
    EAlphaBlendOption __EnumProperty_36;                                              // 0x0061 (size: 0x1)
    EBlendListTransitionType __EnumProperty_37;                                       // 0x0062 (size: 0x1)
    TArray<float> __ArrayProperty_38;                                                 // 0x0068 (size: 0x10)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0078 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00F8 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0110 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequenceEvaluator_1;    // 0x0140 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequenceEvaluator;      // 0x0170 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;        // 0x01A0 (size: 0x30)

}; // Size: 0x1D0

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    class UAnimSequenceBase* __AnimSequenceBase_0;                                    // 0x0008 (size: 0x8)
    float __FloatProperty_1;                                                          // 0x0010 (size: 0x4)
    class UAnimSequenceBase* __AnimSequenceBase_2;                                    // 0x0018 (size: 0x8)
    bool __BoolProperty_3;                                                            // 0x0020 (size: 0x1)

}; // Size: 0x21

class USK_ExerciseBikeStation_AnimBP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0x28)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x03A0 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x03A8 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x03B0 (size: 0x20)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;                    // 0x03D0 (size: 0x40)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;                      // 0x0410 (size: 0x40)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0450 (size: 0x48)
    bool Is Strong Anim;                                                              // 0x0498 (size: 0x1)
    double SyncTime;                                                                  // 0x04A0 (size: 0x8)
    class UAnimSequence* Weak Machine Anim;                                           // 0x04A8 (size: 0x8)
    class UAnimSequence* Strong Machine Anim;                                         // 0x04B0 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_SK_ExerciseBikeStation_AnimBP(int32 EntryPoint);
}; // Size: 0x4B8

#endif
