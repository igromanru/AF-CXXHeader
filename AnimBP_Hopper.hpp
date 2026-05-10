#ifndef UE4SS_SDK_AnimBP_Hopper_HPP
#define UE4SS_SDK_AnimBP_Hopper_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_137;                                                         // 0x0004 (size: 0x8)
    TArray<float> __ArrayProperty_138;                                                // 0x0010 (size: 0x10)
    EAnimSyncMethod __EnumProperty_139;                                               // 0x0020 (size: 0x1)
    FName __NameProperty_140;                                                         // 0x0024 (size: 0x8)
    TArray<float> __ArrayProperty_141;                                                // 0x0030 (size: 0x10)
    TArray<float> __ArrayProperty_142;                                                // 0x0040 (size: 0x10)
    TArray<float> __ArrayProperty_143;                                                // 0x0050 (size: 0x10)
    class UBlendProfile* __BlendProfile_144;                                          // 0x0060 (size: 0x8)
    class UCurveFloat* __CurveFloat_145;                                              // 0x0068 (size: 0x8)
    bool __BoolProperty_146;                                                          // 0x0070 (size: 0x1)
    EAlphaBlendOption __EnumProperty_147;                                             // 0x0071 (size: 0x1)
    EBlendListTransitionType __EnumProperty_148;                                      // 0x0072 (size: 0x1)
    TArray<float> __ArrayProperty_149;                                                // 0x0078 (size: 0x10)
    FAnimNodeFunctionRef __StructProperty_150;                                        // 0x0088 (size: 0x20)
    float __FloatProperty_151;                                                        // 0x00A8 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_152;                               // 0x00AC (size: 0x2C)
    float __FloatProperty_153;                                                        // 0x00D8 (size: 0x4)
    bool __BoolProperty_154;                                                          // 0x00DC (size: 0x1)
    EAnimSyncMethod __EnumProperty_155;                                               // 0x00DD (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_156;                             // 0x00DE (size: 0x1)
    FName __NameProperty_157;                                                         // 0x00E0 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00E8 (size: 0x80)
    FAnimSubsystem_BlendSpaceGraph AnimBlueprintExtension_BlendSpaceGraph;            // 0x0168 (size: 0x18)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0180 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0198 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                   // 0x01C8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_5;      // 0x01F8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_5;       // 0x0228 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_4;       // 0x0258 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpaceSampleResult_1; // 0x0288 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_3;       // 0x02B8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpaceSampleResult; // 0x02E8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpaceGraph;        // 0x0318 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_4;      // 0x0348 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_2;       // 0x0378 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseSnapshot_1;         // 0x03A8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_3;      // 0x03D8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_2;      // 0x0408 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_1;       // 0x0438 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_1;      // 0x0468 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseSnapshot;           // 0x0498 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;        // 0x04C8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;         // 0x04F8 (size: 0x30)

}; // Size: 0x528

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)
    bool __BoolProperty_0;                                                            // 0x0002 (size: 0x1)
    bool __BoolProperty_1;                                                            // 0x0003 (size: 0x1)
    bool __BoolProperty_2;                                                            // 0x0004 (size: 0x1)
    bool __BoolProperty_3;                                                            // 0x0005 (size: 0x1)
    bool __BoolProperty_4;                                                            // 0x0006 (size: 0x1)

}; // Size: 0x7

class UAnimBP_Hopper_C : public UAbioticCharacterAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0x7)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0380 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_BlendSpaceGraph;                    // 0x0388 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0390 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0398 (size: 0x20)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x03B8 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5;                        // 0x0400 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;                          // 0x0448 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x0490 (size: 0x48)
    FAnimNode_BlendSpaceSampleResult AnimGraphNode_BlendSpaceSampleResult_1;          // 0x04D8 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x04F8 (size: 0x48)
    FAnimNode_BlendSpaceSampleResult AnimGraphNode_BlendSpaceSampleResult;            // 0x0540 (size: 0x20)
    FAnimNode_BlendSpaceGraph AnimGraphNode_BlendSpaceGraph;                          // 0x0560 (size: 0x68)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4;                        // 0x05C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0610 (size: 0x48)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot_1;                              // 0x0658 (size: 0x90)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;                        // 0x06E8 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;                        // 0x0730 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0778 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x07C0 (size: 0x48)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;                                // 0x0808 (size: 0x90)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0898 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x08E0 (size: 0x48)
    bool K2Node_PropertyAccess_3;                                                     // 0x0928 (size: 0x1)
    bool K2Node_PropertyAccess_2;                                                     // 0x0929 (size: 0x1)
    TEnumAsByte<E_NettedStates::Type> K2Node_PropertyAccess_1;                        // 0x092A (size: 0x1)
    FVector K2Node_PropertyAccess;                                                    // 0x0930 (size: 0x18)
    double Speed;                                                                     // 0x0948 (size: 0x8)
    bool InFlight;                                                                    // 0x0950 (size: 0x1)
    bool Netted;                                                                      // 0x0951 (size: 0x1)
    class ANPC_Monster_Pest_C* CachedPest;                                            // 0x0958 (size: 0x8)
    bool IsDBNO;                                                                      // 0x0960 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
    void BlueprintBeginPlay();
    void AnimNotify_Footfall();
    void ExecuteUbergraph_AnimBP_Hopper(int32 EntryPoint);
}; // Size: 0x961

#endif
