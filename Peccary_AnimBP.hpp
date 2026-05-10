#ifndef UE4SS_SDK_Peccary_AnimBP_HPP
#define UE4SS_SDK_Peccary_AnimBP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_124;                                                         // 0x0004 (size: 0x8)
    TArray<float> __ArrayProperty_125;                                                // 0x0010 (size: 0x10)
    TArray<float> __ArrayProperty_126;                                                // 0x0020 (size: 0x10)
    TArray<float> __ArrayProperty_127;                                                // 0x0030 (size: 0x10)
    class UBlendProfile* __BlendProfile_128;                                          // 0x0040 (size: 0x8)
    class UCurveFloat* __CurveFloat_129;                                              // 0x0048 (size: 0x8)
    bool __BoolProperty_130;                                                          // 0x0050 (size: 0x1)
    EAlphaBlendOption __EnumProperty_131;                                             // 0x0051 (size: 0x1)
    EBlendListTransitionType __EnumProperty_132;                                      // 0x0052 (size: 0x1)
    TArray<float> __ArrayProperty_133;                                                // 0x0058 (size: 0x10)
    FAnimNodeFunctionRef __StructProperty_134;                                        // 0x0068 (size: 0x20)
    float __FloatProperty_135;                                                        // 0x0088 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_136;                               // 0x008C (size: 0x2C)
    float __FloatProperty_137;                                                        // 0x00B8 (size: 0x4)
    bool __BoolProperty_138;                                                          // 0x00BC (size: 0x1)
    EAnimSyncMethod __EnumProperty_139;                                               // 0x00BD (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_140;                             // 0x00BE (size: 0x1)
    FName __NameProperty_141;                                                         // 0x00C0 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00C8 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0148 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0160 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer_2;     // 0x0190 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer_1;     // 0x01C0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                   // 0x01F0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByInt;         // 0x0220 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer;       // 0x0250 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_4;      // 0x0280 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_2;       // 0x02B0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseSnapshot_1;         // 0x02E0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_3;      // 0x0310 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_2;      // 0x0340 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseSnapshot;           // 0x0370 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_1;      // 0x03A0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_1;       // 0x03D0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;        // 0x0400 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;         // 0x0430 (size: 0x30)

}; // Size: 0x460

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    int32 __IntProperty_1;                                                            // 0x000C (size: 0x4)
    float __FloatProperty_2;                                                          // 0x0010 (size: 0x4)
    bool __BoolProperty_3;                                                            // 0x0014 (size: 0x1)
    bool __BoolProperty_4;                                                            // 0x0015 (size: 0x1)
    bool __BoolProperty_5;                                                            // 0x0016 (size: 0x1)
    bool __BoolProperty_6;                                                            // 0x0017 (size: 0x1)
    bool __BoolProperty_7;                                                            // 0x0018 (size: 0x1)

}; // Size: 0x19

class UPeccary_AnimBP_C : public UAbioticCharacterAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0x1C)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0398 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x03A0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x03A8 (size: 0x20)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;                      // 0x03C8 (size: 0x70)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;                      // 0x0438 (size: 0x70)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x04A8 (size: 0x48)
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;                            // 0x04F0 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0538 (size: 0x70)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4;                        // 0x05A8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x05F0 (size: 0x48)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot_1;                              // 0x0638 (size: 0x90)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;                        // 0x06C8 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;                        // 0x0710 (size: 0x48)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;                                // 0x0758 (size: 0x90)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x07E8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0830 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0878 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x08C0 (size: 0x48)
    bool K2Node_PropertyAccess_5;                                                     // 0x0908 (size: 0x1)
    bool K2Node_PropertyAccess_4;                                                     // 0x0909 (size: 0x1)
    bool K2Node_PropertyAccess_3;                                                     // 0x090A (size: 0x1)
    TEnumAsByte<E_NettedStates::Type> K2Node_PropertyAccess_2;                        // 0x090B (size: 0x1)
    bool K2Node_PropertyAccess_1;                                                     // 0x090C (size: 0x1)
    FVector K2Node_PropertyAccess;                                                    // 0x0910 (size: 0x18)
    double Speed;                                                                     // 0x0928 (size: 0x8)
    bool IsInCombat;                                                                  // 0x0930 (size: 0x1)
    int32 BlendspaceState;                                                            // 0x0934 (size: 0x4)
    bool Netted;                                                                      // 0x0938 (size: 0x1)
    class ANPC_Monster_Peccary_C* PeccaryOwner;                                       // 0x0940 (size: 0x8)
    bool IsDBNO;                                                                      // 0x0948 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
    void BlueprintBeginPlay();
    void AnimNotify_Footfall_Left();
    void AnimNotify_Footfall_Right();
    void AnimNotify_Footfall_LeftHand();
    void AnimNotify_Footfall_RightHand();
    void ExecuteUbergraph_Peccary_AnimBP(int32 EntryPoint);
}; // Size: 0x949

#endif
