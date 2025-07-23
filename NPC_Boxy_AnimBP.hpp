#ifndef UE4SS_SDK_NPC_Boxy_AnimBP_HPP
#define UE4SS_SDK_NPC_Boxy_AnimBP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_70;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_71;                                                          // 0x000C (size: 0x8)
    TArray<float> __ArrayProperty_72;                                                 // 0x0018 (size: 0x10)
    class UBlendProfile* __BlendProfile_73;                                           // 0x0028 (size: 0x8)
    class UCurveFloat* __CurveFloat_74;                                               // 0x0030 (size: 0x8)
    EAlphaBlendOption __EnumProperty_75;                                              // 0x0038 (size: 0x1)
    EBlendListTransitionType __EnumProperty_76;                                       // 0x0039 (size: 0x1)
    TArray<float> __ArrayProperty_77;                                                 // 0x0040 (size: 0x10)
    bool __BoolProperty_78;                                                           // 0x0050 (size: 0x1)
    float __FloatProperty_79;                                                         // 0x0054 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_80;                                // 0x0058 (size: 0x2C)
    float __FloatProperty_81;                                                         // 0x0084 (size: 0x4)
    bool __BoolProperty_82;                                                           // 0x0088 (size: 0x1)
    EAnimSyncMethod __EnumProperty_83;                                                // 0x0089 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_84;                              // 0x008A (size: 0x1)
    FName __NameProperty_85;                                                          // 0x008C (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_86;                                         // 0x0098 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00B8 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0138 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0150 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer_1;     // 0x0180 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_2;      // 0x01B0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot_1;                 // 0x01E0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                   // 0x0210 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseSnapshot;           // 0x0240 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_1;      // 0x0270 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer;       // 0x02A0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_1;           // 0x02D0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace;  // 0x0300 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace;  // 0x0330 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;        // 0x0360 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;         // 0x0390 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone;             // 0x03C0 (size: 0x30)

}; // Size: 0x3F0

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    bool __BoolProperty_1;                                                            // 0x000C (size: 0x1)
    bool __BoolProperty_2;                                                            // 0x000D (size: 0x1)
    float __FloatProperty_3;                                                          // 0x0010 (size: 0x4)
    float __FloatProperty_4;                                                          // 0x0014 (size: 0x4)
    bool __BoolProperty_5;                                                            // 0x0018 (size: 0x1)

}; // Size: 0x19

class UNPC_Boxy_AnimBP_C : public UAbioticCharacterAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0x1C)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0398 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x03A0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x03A8 (size: 0x20)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;                      // 0x03C8 (size: 0x70)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;                        // 0x0438 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_1;                                              // 0x0480 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x04C8 (size: 0x48)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;                                // 0x0510 (size: 0x90)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x05A0 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x05E8 (size: 0x70)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x0658 (size: 0x128)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0780 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x07A0 (size: 0x20)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x07C0 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0808 (size: 0x48)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0850 (size: 0x128)
    double Time;                                                                      // 0x0978 (size: 0x8)
    class AAbiotic_Character_ParentBP_C* CharacterParent;                             // 0x0980 (size: 0x8)
    bool Crouching;                                                                   // 0x0988 (size: 0x1)
    double Speed;                                                                     // 0x0990 (size: 0x8)
    float Direction;                                                                  // 0x0998 (size: 0x4)
    bool BoxyIsAsleep;                                                                // 0x099C (size: 0x1)
    bool CanSeeTarget;                                                                // 0x099D (size: 0x1)
    FRotator PitchRotation;                                                           // 0x09A0 (size: 0x18)
    FRotator LidRotation;                                                             // 0x09B8 (size: 0x18)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void AnimNotify_Footfall_Left();
    void AnimNotify_Footfall_Right();
    void AnimNotify_GrabStart();
    void AnimNotify_GrabEnd();
    void ExecuteUbergraph_NPC_Boxy_AnimBP(int32 EntryPoint);
}; // Size: 0x9D0

#endif
