#ifndef UE4SS_SDK_Peccary_AnimBP_HPP
#define UE4SS_SDK_Peccary_AnimBP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_146;                                                         // 0x0004 (size: 0x8)
    TArray<float> __ArrayProperty_147;                                                // 0x0010 (size: 0x10)
    TArray<float> __ArrayProperty_148;                                                // 0x0020 (size: 0x10)
    TArray<float> __ArrayProperty_149;                                                // 0x0030 (size: 0x10)
    class UBlendProfile* __BlendProfile_150;                                          // 0x0040 (size: 0x8)
    class UCurveFloat* __CurveFloat_151;                                              // 0x0048 (size: 0x8)
    EAlphaBlendOption __EnumProperty_152;                                             // 0x0050 (size: 0x1)
    EBlendListTransitionType __EnumProperty_153;                                      // 0x0051 (size: 0x1)
    TArray<float> __ArrayProperty_154;                                                // 0x0058 (size: 0x10)
    FAnimNodeFunctionRef __StructProperty_155;                                        // 0x0068 (size: 0x20)
    bool __BoolProperty_156;                                                          // 0x0088 (size: 0x1)
    float __FloatProperty_157;                                                        // 0x008C (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_158;                               // 0x0090 (size: 0x2C)
    float __FloatProperty_159;                                                        // 0x00BC (size: 0x4)
    bool __BoolProperty_160;                                                          // 0x00C0 (size: 0x1)
    EAnimSyncMethod __EnumProperty_161;                                               // 0x00C1 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_162;                             // 0x00C2 (size: 0x1)
    FName __NameProperty_163;                                                         // 0x00C4 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00D0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0150 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0168 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer_2;     // 0x0198 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer_1;     // 0x01C8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                   // 0x01F8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByInt;         // 0x0228 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer;       // 0x0258 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_5;      // 0x0288 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_3;       // 0x02B8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseSnapshot_1;         // 0x02E8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_4;      // 0x0318 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_3;      // 0x0348 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseSnapshot;           // 0x0378 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_2;      // 0x03A8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_2;       // 0x03D8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_1;      // 0x0408 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_1;       // 0x0438 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;        // 0x0468 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;         // 0x0498 (size: 0x30)

}; // Size: 0x4C8

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
    bool __BoolProperty_8;                                                            // 0x0019 (size: 0x1)

}; // Size: 0x1A

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
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5;                        // 0x05A8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x05F0 (size: 0x48)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot_1;                              // 0x0638 (size: 0x90)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4;                        // 0x06C8 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;                        // 0x0710 (size: 0x48)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;                                // 0x0758 (size: 0x90)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;                        // 0x07E8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0830 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x0878 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x08C0 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0908 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0950 (size: 0x48)
    bool K2Node_PropertyAccess_6;                                                     // 0x0998 (size: 0x1)
    bool K2Node_PropertyAccess_5;                                                     // 0x0999 (size: 0x1)
    bool K2Node_PropertyAccess_4;                                                     // 0x099A (size: 0x1)
    TEnumAsByte<E_NettedStates::Type> K2Node_PropertyAccess_3;                        // 0x099B (size: 0x1)
    bool K2Node_PropertyAccess_2;                                                     // 0x099C (size: 0x1)
    FVector K2Node_PropertyAccess_1;                                                  // 0x09A0 (size: 0x18)
    bool K2Node_PropertyAccess;                                                       // 0x09B8 (size: 0x1)
    double Speed;                                                                     // 0x09C0 (size: 0x8)
    bool IsInCombat;                                                                  // 0x09C8 (size: 0x1)
    int32 BlendspaceState;                                                            // 0x09CC (size: 0x4)
    bool Netted;                                                                      // 0x09D0 (size: 0x1)
    class ANPC_Monster_Peccary_C* PeccaryOwner;                                       // 0x09D8 (size: 0x8)
    bool IsDBNO;                                                                      // 0x09E0 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
    void BlueprintBeginPlay();
    void AnimNotify_Footfall_Left();
    void AnimNotify_Footfall_Right();
    void AnimNotify_Footfall_LeftHand();
    void AnimNotify_Footfall_RightHand();
    void ExecuteUbergraph_Peccary_AnimBP(int32 EntryPoint);
}; // Size: 0x9E1

#endif
