#ifndef UE4SS_SDK_AnimBP_Hopper_Leyak_HPP
#define UE4SS_SDK_AnimBP_Hopper_Leyak_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    TArray<float> __ArrayProperty_134;                                                // 0x0008 (size: 0x10)
    TArray<float> __ArrayProperty_135;                                                // 0x0018 (size: 0x10)
    TArray<float> __ArrayProperty_136;                                                // 0x0028 (size: 0x10)
    FName __NameProperty_137;                                                         // 0x0038 (size: 0x8)
    TArray<float> __ArrayProperty_138;                                                // 0x0040 (size: 0x10)
    class UBlendProfile* __BlendProfile_139;                                          // 0x0050 (size: 0x8)
    class UCurveFloat* __CurveFloat_140;                                              // 0x0058 (size: 0x8)
    EAlphaBlendOption __EnumProperty_141;                                             // 0x0060 (size: 0x1)
    EBlendListTransitionType __EnumProperty_142;                                      // 0x0061 (size: 0x1)
    TArray<float> __ArrayProperty_143;                                                // 0x0068 (size: 0x10)
    FAnimNodeFunctionRef __StructProperty_144;                                        // 0x0078 (size: 0x20)
    bool __BoolProperty_145;                                                          // 0x0098 (size: 0x1)
    float __FloatProperty_146;                                                        // 0x009C (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_147;                               // 0x00A0 (size: 0x2C)
    float __FloatProperty_148;                                                        // 0x00CC (size: 0x4)
    bool __BoolProperty_149;                                                          // 0x00D0 (size: 0x1)
    EAnimSyncMethod __EnumProperty_150;                                               // 0x00D1 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_151;                             // 0x00D2 (size: 0x1)
    FName __NameProperty_152;                                                         // 0x00D4 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00E0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0160 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_4;       // 0x0178 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseSnapshot_1;         // 0x01A8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_6;      // 0x01D8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_5;      // 0x0208 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_3;       // 0x0238 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_4;      // 0x0268 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseSnapshot;           // 0x0298 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_3;      // 0x02C8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_2;       // 0x02F8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_1;       // 0x0328 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_2;      // 0x0358 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                   // 0x0388 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x03B8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_1;      // 0x03E8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer;       // 0x0418 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;        // 0x0448 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;         // 0x0478 (size: 0x30)

}; // Size: 0x4A8

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)
    bool __BoolProperty_0;                                                            // 0x0002 (size: 0x1)
    bool __BoolProperty_1;                                                            // 0x0003 (size: 0x1)
    bool __BoolProperty_2;                                                            // 0x0004 (size: 0x1)
    bool __BoolProperty_3;                                                            // 0x0005 (size: 0x1)
    bool __BoolProperty_4;                                                            // 0x0006 (size: 0x1)
    float __FloatProperty_5;                                                          // 0x0008 (size: 0x4)
    bool __BoolProperty_6;                                                            // 0x000C (size: 0x1)

}; // Size: 0xD

class UAnimBP_Hopper_Leyak_C : public UAbioticCharacterAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0x10)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0388 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0390 (size: 0x8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x0398 (size: 0x48)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot_1;                              // 0x03E0 (size: 0x90)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6;                        // 0x0470 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5;                        // 0x04B8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0500 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4;                        // 0x0548 (size: 0x48)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;                                // 0x0590 (size: 0x90)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;                        // 0x0620 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0668 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x06B0 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;                        // 0x06F8 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0740 (size: 0x48)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0788 (size: 0x20)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x07A8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x07F0 (size: 0x70)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0860 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x08A8 (size: 0x48)
    bool K2Node_PropertyAccess_4;                                                     // 0x08F0 (size: 0x1)
    bool K2Node_PropertyAccess_3;                                                     // 0x08F1 (size: 0x1)
    bool K2Node_PropertyAccess_2;                                                     // 0x08F2 (size: 0x1)
    TEnumAsByte<E_NettedStates::Type> K2Node_PropertyAccess_1;                        // 0x08F3 (size: 0x1)
    FVector K2Node_PropertyAccess;                                                    // 0x08F8 (size: 0x18)
    double Speed;                                                                     // 0x0910 (size: 0x8)
    bool InFlight;                                                                    // 0x0918 (size: 0x1)
    bool Netted;                                                                      // 0x0919 (size: 0x1)
    class ANPC_Monster_Pest_C* CachedPest;                                            // 0x0920 (size: 0x8)
    bool IsDBNO;                                                                      // 0x0928 (size: 0x1)
    bool Combat State;                                                                // 0x0929 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
    void BlueprintBeginPlay();
    void ExecuteUbergraph_AnimBP_Hopper_Leyak(int32 EntryPoint);
}; // Size: 0x92A

#endif
