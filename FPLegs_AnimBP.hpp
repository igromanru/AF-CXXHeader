#ifndef UE4SS_SDK_FPLegs_AnimBP_HPP
#define UE4SS_SDK_FPLegs_AnimBP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_13;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_14;                                                          // 0x000C (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_15;                                         // 0x0018 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0038 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00B8 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x00D0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_CopyPoseFromMesh;       // 0x0100 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace;  // 0x0130 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone;             // 0x0160 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace;  // 0x0190 (size: 0x30)

}; // Size: 0x1C0

class UFPLegs_AnimBP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0378 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0380 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0388 (size: 0x20)
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;                        // 0x03A8 (size: 0x158)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0500 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0520 (size: 0x128)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0648 (size: 0x20)
    class USkeletalMeshComponent* SourceMesh;                                         // 0x0668 (size: 0x8)
    bool IsFirstPerson;                                                               // 0x0670 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_FPLegs_AnimBP(int32 EntryPoint);
}; // Size: 0x671

#endif
