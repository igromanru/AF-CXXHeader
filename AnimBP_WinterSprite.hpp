#ifndef UE4SS_SDK_AnimBP_WinterSprite_HPP
#define UE4SS_SDK_AnimBP_WinterSprite_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_100;                                                         // 0x0004 (size: 0x8)
    FName __NameProperty_101;                                                         // 0x000C (size: 0x8)
    TArray<float> __ArrayProperty_102;                                                // 0x0018 (size: 0x10)
    TArray<float> __ArrayProperty_103;                                                // 0x0028 (size: 0x10)
    class UBlendProfile* __BlendProfile_104;                                          // 0x0038 (size: 0x8)
    class UCurveFloat* __CurveFloat_105;                                              // 0x0040 (size: 0x8)
    EAlphaBlendOption __EnumProperty_106;                                             // 0x0048 (size: 0x1)
    EBlendListTransitionType __EnumProperty_107;                                      // 0x0049 (size: 0x1)
    TArray<float> __ArrayProperty_108;                                                // 0x0050 (size: 0x10)
    FAnimNodeFunctionRef __StructProperty_109;                                        // 0x0060 (size: 0x20)
    bool __BoolProperty_110;                                                          // 0x0080 (size: 0x1)
    float __FloatProperty_111;                                                        // 0x0084 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_112;                               // 0x0088 (size: 0x2C)
    float __FloatProperty_113;                                                        // 0x00B4 (size: 0x4)
    bool __BoolProperty_114;                                                          // 0x00B8 (size: 0x1)
    EAnimSyncMethod __EnumProperty_115;                                               // 0x00B9 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_116;                             // 0x00BA (size: 0x1)
    FName __NameProperty_117;                                                         // 0x00BC (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00C8 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0148 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0160 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                   // 0x0190 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseSnapshot;           // 0x01C0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_4;      // 0x01F0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_3;      // 0x0220 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_2;       // 0x0250 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer_1;     // 0x0280 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_2;      // 0x02B0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer;       // 0x02E0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_1;      // 0x0310 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;        // 0x0340 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_1;       // 0x0370 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;         // 0x03A0 (size: 0x30)

}; // Size: 0x3D0

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)
    bool __BoolProperty_0;                                                            // 0x0002 (size: 0x1)
    float __FloatProperty_1;                                                          // 0x0004 (size: 0x4)
    bool __BoolProperty_2;                                                            // 0x0008 (size: 0x1)
    float __FloatProperty_3;                                                          // 0x000C (size: 0x4)
    bool __BoolProperty_4;                                                            // 0x0010 (size: 0x1)
    bool __BoolProperty_5;                                                            // 0x0011 (size: 0x1)

}; // Size: 0x12

class UAnimBP_WinterSprite_C : public UAbioticCharacterAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0x14)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0390 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0398 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x03A0 (size: 0x20)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x03C0 (size: 0x48)
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;                                // 0x0408 (size: 0x90)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4;                        // 0x0498 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;                        // 0x04E0 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0528 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;                      // 0x0570 (size: 0x70)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;                        // 0x05E0 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0628 (size: 0x70)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x0698 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x06E0 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0728 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0770 (size: 0x48)
    TEnumAsByte<E_NettedStates::Type> K2Node_PropertyAccess_5;                        // 0x07B8 (size: 0x1)
    bool K2Node_PropertyAccess_4;                                                     // 0x07B9 (size: 0x1)
    FVector K2Node_PropertyAccess_3;                                                  // 0x07C0 (size: 0x18)
    bool K2Node_PropertyAccess_2;                                                     // 0x07D8 (size: 0x1)
    bool K2Node_PropertyAccess_1;                                                     // 0x07D9 (size: 0x1)
    bool K2Node_PropertyAccess;                                                       // 0x07DA (size: 0x1)
    double Speed;                                                                     // 0x07E0 (size: 0x8)
    bool IsInCombat;                                                                  // 0x07E8 (size: 0x1)
    bool Netted;                                                                      // 0x07E9 (size: 0x1)
    bool ShakeFootsteps;                                                              // 0x07EA (size: 0x1)
    class ANPC_Monster_WinterSprite_C* WinterSprite;                                  // 0x07F0 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
    void BlueprintInitializeAnimation();
    void AnimNotify_Footfall_Left();
    void AnimNotify_Footfall_Right();
    void ExecuteUbergraph_AnimBP_WinterSprite(int32 EntryPoint);
}; // Size: 0x7F8

#endif
