#ifndef UE4SS_SDK_AnimBP_Shield_Hardlight_HPP
#define UE4SS_SDK_AnimBP_Shield_Hardlight_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_45;                                                          // 0x0004 (size: 0x8)
    int32 __IntProperty_46;                                                           // 0x000C (size: 0x4)
    float __FloatProperty_47;                                                         // 0x0010 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_48;                                // 0x0014 (size: 0x2C)
    float __FloatProperty_49;                                                         // 0x0040 (size: 0x4)
    float __FloatProperty_50;                                                         // 0x0044 (size: 0x4)
    bool __BoolProperty_51;                                                           // 0x0048 (size: 0x1)
    EAnimSyncMethod __EnumProperty_52;                                                // 0x0049 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_53;                              // 0x004A (size: 0x1)
    FName __NameProperty_54;                                                          // 0x004C (size: 0x8)
    FName __NameProperty_55;                                                          // 0x0054 (size: 0x8)
    FName __NameProperty_56;                                                          // 0x005C (size: 0x8)
    int32 __IntProperty_57;                                                           // 0x0064 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_58;                                         // 0x0068 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0088 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0108 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0120 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_1;     // 0x0150 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult;       // 0x0180 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_1;       // 0x01B0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_1;          // 0x01E0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;         // 0x0210 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult;            // 0x0240 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateMachine;           // 0x0270 (size: 0x30)

}; // Size: 0x2A0

class UAnimBP_Shield_Hardlight_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0378 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0380 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0388 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x03A8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x03D0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x03F8 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0440 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0460 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x04A8 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x04C8 (size: 0xC8)
    bool ShieldActive;                                                                // 0x0590 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_AnimBP_Shield_Hardlight(int32 EntryPoint);
}; // Size: 0x591

#endif
