#ifndef UE4SS_SDK_Reaper_AnimBP_HPP
#define UE4SS_SDK_Reaper_AnimBP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_35;                                                          // 0x0004 (size: 0x8)
    TArray<float> __ArrayProperty_36;                                                 // 0x0010 (size: 0x10)
    float __FloatProperty_37;                                                         // 0x0020 (size: 0x4)
    bool __BoolProperty_38;                                                           // 0x0024 (size: 0x1)
    float __FloatProperty_39;                                                         // 0x0028 (size: 0x4)
    EAnimSyncMethod __EnumProperty_40;                                                // 0x002C (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_41;                              // 0x002D (size: 0x1)
    FName __NameProperty_42;                                                          // 0x0030 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_43;                                         // 0x0038 (size: 0x20)
    class UBlendProfile* __BlendProfile_44;                                           // 0x0058 (size: 0x8)
    class UCurveFloat* __CurveFloat_45;                                               // 0x0060 (size: 0x8)
    bool __BoolProperty_46;                                                           // 0x0068 (size: 0x1)
    EAlphaBlendOption __EnumProperty_47;                                              // 0x0069 (size: 0x1)
    EBlendListTransitionType __EnumProperty_48;                                       // 0x006A (size: 0x1)
    TArray<float> __ArrayProperty_49;                                                 // 0x0070 (size: 0x10)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0080 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0100 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0118 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_1;      // 0x0148 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                   // 0x0178 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer_1;     // 0x01A8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer;       // 0x01D8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseSnapshot;           // 0x0208 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;        // 0x0238 (size: 0x30)

}; // Size: 0x268

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)
    float __FloatProperty_0;                                                          // 0x0004 (size: 0x4)
    float __FloatProperty_1;                                                          // 0x0008 (size: 0x4)
    float __FloatProperty_2;                                                          // 0x000C (size: 0x4)
    float __FloatProperty_3;                                                          // 0x0010 (size: 0x4)
    bool __BoolProperty_4;                                                            // 0x0014 (size: 0x1)

}; // Size: 0x15

class UReaper_AnimBP_C : public UAbioticCharacterAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0x18)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0390 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0398 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x03A0 (size: 0x20)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x03C0 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0408 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;                      // 0x0450 (size: 0x70)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x04C0 (size: 0x70)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;                                // 0x0530 (size: 0x90)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x05C0 (size: 0x48)
    double Speed;                                                                     // 0x0608 (size: 0x8)
    double Direction;                                                                 // 0x0610 (size: 0x8)
    bool CombatMode;                                                                  // 0x0618 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void AnimNotify_GrabStart();
    void AnimNotify_GrabEnd();
    void ExecuteUbergraph_Reaper_AnimBP(int32 EntryPoint);
}; // Size: 0x619

#endif
