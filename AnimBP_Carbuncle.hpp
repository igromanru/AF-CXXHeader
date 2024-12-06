#ifndef UE4SS_SDK_AnimBP_Carbuncle_HPP
#define UE4SS_SDK_AnimBP_Carbuncle_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_111;                                                         // 0x0004 (size: 0x8)
    FName __NameProperty_112;                                                         // 0x000C (size: 0x8)
    int32 __IntProperty_113;                                                          // 0x0014 (size: 0x4)
    FName __NameProperty_114;                                                         // 0x0018 (size: 0x8)
    int32 __IntProperty_115;                                                          // 0x0020 (size: 0x4)
    FName __NameProperty_116;                                                         // 0x0024 (size: 0x8)
    FName __NameProperty_117;                                                         // 0x002C (size: 0x8)
    int32 __IntProperty_118;                                                          // 0x0034 (size: 0x4)
    TArray<float> __ArrayProperty_119;                                                // 0x0038 (size: 0x10)
    bool __BoolProperty_120;                                                          // 0x0048 (size: 0x1)
    float __FloatProperty_121;                                                        // 0x004C (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_122;                               // 0x0050 (size: 0x2C)
    float __FloatProperty_123;                                                        // 0x007C (size: 0x4)
    EAnimSyncMethod __EnumProperty_124;                                               // 0x0080 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_125;                             // 0x0081 (size: 0x1)
    FName __NameProperty_126;                                                         // 0x0084 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_127;                                        // 0x0090 (size: 0x20)
    class UBlendProfile* __BlendProfile_128;                                          // 0x00B0 (size: 0x8)
    class UCurveFloat* __CurveFloat_129;                                              // 0x00B8 (size: 0x8)
    bool __BoolProperty_130;                                                          // 0x00C0 (size: 0x1)
    EAlphaBlendOption __EnumProperty_131;                                             // 0x00C1 (size: 0x1)
    EBlendListTransitionType __EnumProperty_132;                                      // 0x00C2 (size: 0x1)
    TArray<float> __ArrayProperty_133;                                                // 0x00C8 (size: 0x10)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00D8 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0158 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0170 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_5;     // 0x01A0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_4;     // 0x01D0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_3;     // 0x0200 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_2;     // 0x0230 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_1;     // 0x0260 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult;       // 0x0290 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_3;       // 0x02C0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_2;          // 0x02F0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_2;       // 0x0320 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_1;          // 0x0350 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_1;       // 0x0380 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult;            // 0x03B0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateMachine;           // 0x03E0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot_1;                 // 0x0410 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                   // 0x0440 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_1;      // 0x0470 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;         // 0x04A0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseSnapshot;           // 0x04D0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;        // 0x0500 (size: 0x30)

}; // Size: 0x530

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)
    bool __BoolProperty_0;                                                            // 0x0002 (size: 0x1)

}; // Size: 0x3

class UAnimBP_Carbuncle_C : public UAbioticCharacterAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0x3)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0380 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0388 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0390 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x03B0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x03D8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0400 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0428 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0450 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0478 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x04A0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x04E8 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0508 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0550 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0570 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x05B8 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x05D8 (size: 0xC8)
    FAnimNode_Slot AnimGraphNode_Slot_1;                                              // 0x06A0 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x06E8 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x0730 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0778 (size: 0x48)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;                                // 0x07C0 (size: 0x90)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0850 (size: 0x48)
    bool IsDead;                                                                      // 0x0898 (size: 0x1)
    bool HasTetherTarget;                                                             // 0x0899 (size: 0x1)
    bool Netted;                                                                      // 0x089A (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Carbuncle_AnimGraphNode_TransitionResult_B2198A244A7C45592061808012700CCD();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_AnimBP_Carbuncle(int32 EntryPoint);
}; // Size: 0x89B

#endif
