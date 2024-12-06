#ifndef UE4SS_SDK_Leyak_AnimBP_HPP
#define UE4SS_SDK_Leyak_AnimBP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_81;                                                          // 0x0004 (size: 0x8)
    TArray<float> __ArrayProperty_82;                                                 // 0x0010 (size: 0x10)
    TArray<float> __ArrayProperty_83;                                                 // 0x0020 (size: 0x10)
    class UBlendProfile* __BlendProfile_84;                                           // 0x0030 (size: 0x8)
    class UCurveFloat* __CurveFloat_85;                                               // 0x0038 (size: 0x8)
    EAlphaBlendOption __EnumProperty_86;                                              // 0x0040 (size: 0x1)
    EBlendListTransitionType __EnumProperty_87;                                       // 0x0041 (size: 0x1)
    TArray<float> __ArrayProperty_88;                                                 // 0x0048 (size: 0x10)
    FAnimNodeFunctionRef __StructProperty_89;                                         // 0x0058 (size: 0x20)
    bool __BoolProperty_90;                                                           // 0x0078 (size: 0x1)
    float __FloatProperty_91;                                                         // 0x007C (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_92;                                // 0x0080 (size: 0x2C)
    float __FloatProperty_93;                                                         // 0x00AC (size: 0x4)
    bool __BoolProperty_94;                                                           // 0x00B0 (size: 0x1)
    EAnimSyncMethod __EnumProperty_95;                                                // 0x00B1 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_96;                              // 0x00B2 (size: 0x1)
    FName __NameProperty_97;                                                          // 0x00B4 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00C0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0140 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0158 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                   // 0x0188 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseSnapshot;           // 0x01B8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_3;      // 0x01E8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_3;       // 0x0218 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_2;      // 0x0248 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_2;       // 0x0278 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_1;      // 0x02A8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_1;       // 0x02D8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;        // 0x0308 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;         // 0x0338 (size: 0x30)

}; // Size: 0x368

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)
    bool __BoolProperty_0;                                                            // 0x0002 (size: 0x1)
    bool __BoolProperty_1;                                                            // 0x0003 (size: 0x1)
    bool __BoolProperty_2;                                                            // 0x0004 (size: 0x1)

}; // Size: 0x5

class ULeyak_AnimBP_C : public UAbioticCharacterAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0x5)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0380 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0388 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0390 (size: 0x20)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x03B0 (size: 0x48)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;                                // 0x03F8 (size: 0x90)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;                        // 0x0488 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x04D0 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;                        // 0x0518 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0560 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x05A8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x05F0 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0638 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0680 (size: 0x48)
    double Speed;                                                                     // 0x06C8 (size: 0x8)
    double Direction;                                                                 // 0x06D0 (size: 0x8)
    bool CombatMode;                                                                  // 0x06D8 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Leyak_AnimBP_AnimGraphNode_BlendListByBool_155678934771E23DB03E28A230E90AB6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Leyak_AnimBP_AnimGraphNode_BlendListByBool_412BD53A4353A967DB5E519D0991D08A();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void AnimNotify_GrabStart();
    void AnimNotify_GrabEnd();
    void ExecuteUbergraph_Leyak_AnimBP(int32 EntryPoint);
}; // Size: 0x6D9

#endif
