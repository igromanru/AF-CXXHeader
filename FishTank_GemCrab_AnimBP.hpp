#ifndef UE4SS_SDK_FishTank_GemCrab_AnimBP_HPP
#define UE4SS_SDK_FishTank_GemCrab_AnimBP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_15;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_16;                                                          // 0x000C (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_17;                                         // 0x0018 (size: 0x20)
    bool __BoolProperty_18;                                                           // 0x0038 (size: 0x1)
    float __FloatProperty_19;                                                         // 0x003C (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_20;                                // 0x0040 (size: 0x2C)
    float __FloatProperty_21;                                                         // 0x006C (size: 0x4)
    bool __BoolProperty_22;                                                           // 0x0070 (size: 0x1)
    EAnimSyncMethod __EnumProperty_23;                                                // 0x0071 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_24;                              // 0x0072 (size: 0x1)
    FName __NameProperty_25;                                                          // 0x0074 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0080 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0100 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0118 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone;             // 0x0148 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace;  // 0x0178 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace;  // 0x01A8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;         // 0x01D8 (size: 0x30)

}; // Size: 0x208

class UFishTank_GemCrab_AnimBP_C : public UFishTankAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03B0 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x03B8 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x03C8 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x03E8 (size: 0x128)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0510 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0530 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0550 (size: 0x48)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_FishTank_GemCrab_AnimBP(int32 EntryPoint);
}; // Size: 0x598

#endif
