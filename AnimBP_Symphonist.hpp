#ifndef UE4SS_SDK_AnimBP_Symphonist_HPP
#define UE4SS_SDK_AnimBP_Symphonist_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_55;                                                          // 0x0004 (size: 0x8)
    TArray<float> __ArrayProperty_56;                                                 // 0x0010 (size: 0x10)
    TArray<float> __ArrayProperty_57;                                                 // 0x0020 (size: 0x10)
    bool __BoolProperty_58;                                                           // 0x0030 (size: 0x1)
    class UBlendProfile* __BlendProfile_59;                                           // 0x0038 (size: 0x8)
    class UCurveFloat* __CurveFloat_60;                                               // 0x0040 (size: 0x8)
    EAlphaBlendOption __EnumProperty_61;                                              // 0x0048 (size: 0x1)
    EBlendListTransitionType __EnumProperty_62;                                       // 0x0049 (size: 0x1)
    TArray<float> __ArrayProperty_63;                                                 // 0x0050 (size: 0x10)
    FAnimNodeFunctionRef __StructProperty_64;                                         // 0x0060 (size: 0x20)
    float __FloatProperty_65;                                                         // 0x0080 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_66;                                // 0x0084 (size: 0x2C)
    float __FloatProperty_67;                                                         // 0x00B0 (size: 0x4)
    bool __BoolProperty_68;                                                           // 0x00B4 (size: 0x1)
    EAnimSyncMethod __EnumProperty_69;                                                // 0x00B5 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_70;                              // 0x00B6 (size: 0x1)
    FName __NameProperty_71;                                                          // 0x00B8 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00C0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0140 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0158 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_2;      // 0x0188 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                   // 0x01B8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseSnapshot;           // 0x01E8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_1;      // 0x0218 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer_1;     // 0x0248 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer;       // 0x0278 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;        // 0x02A8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;         // 0x02D8 (size: 0x30)

}; // Size: 0x308

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)
    bool __BoolProperty_0;                                                            // 0x0002 (size: 0x1)
    float __FloatProperty_1;                                                          // 0x0004 (size: 0x4)
    float __FloatProperty_2;                                                          // 0x0008 (size: 0x4)
    float __FloatProperty_3;                                                          // 0x000C (size: 0x4)
    float __FloatProperty_4;                                                          // 0x0010 (size: 0x4)
    bool __BoolProperty_5;                                                            // 0x0014 (size: 0x1)

}; // Size: 0x15

class UAnimBP_Symphonist_C : public UAbioticCharacterAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0x18)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0390 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0398 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x03A0 (size: 0x20)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;                        // 0x03C0 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0408 (size: 0x48)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;                                // 0x0450 (size: 0x90)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x04E0 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;                      // 0x0528 (size: 0x70)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0598 (size: 0x70)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0608 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0650 (size: 0x48)
    double Speed;                                                                     // 0x0698 (size: 0x8)
    double Direction;                                                                 // 0x06A0 (size: 0x8)
    bool CombatMode;                                                                  // 0x06A8 (size: 0x1)
    bool IsDead;                                                                      // 0x06A9 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void TryScreenshake();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void AnimNotify_GrabStart();
    void AnimNotify_GrabEnd();
    void AnimNotify_WalkScreenShake();
    void AnimNotify_AggroScreenShake();
    void ExecuteUbergraph_AnimBP_Symphonist(int32 EntryPoint);
}; // Size: 0x6AA

#endif
