#ifndef UE4SS_SDK_FPArmsPostProcess_AnimBP_HPP
#define UE4SS_SDK_FPArmsPostProcess_AnimBP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_13;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_14;                                                          // 0x000C (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_15;                                         // 0x0018 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0038 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00B8 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x00D0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone;             // 0x0100 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace;  // 0x0130 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace;  // 0x0160 (size: 0x30)
    FAnimNodeExposedValueHandler AnimGraphNode_LinkedInputPose;                       // 0x0190 (size: 0x8)

}; // Size: 0x198

class UFPArmsPostProcess_AnimBP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0378 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0380 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0388 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x03A8 (size: 0x128)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x04D0 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x04F0 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0510 (size: 0xB8)
    bool ViewingWristwatch;                                                           // 0x05C8 (size: 0x1)
    bool HasShield;                                                                   // 0x05C9 (size: 0x1)
    bool IsDeadDBNO;                                                                  // 0x05CA (size: 0x1)
    bool FishMode;                                                                    // 0x05CB (size: 0x1)
    FVector WristwatchArmLocation;                                                    // 0x05D0 (size: 0x18)
    FRotator WristwatchArmRotation;                                                   // 0x05E8 (size: 0x18)
    float WristwatchArmAlpha;                                                         // 0x0600 (size: 0x4)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_FPArmsPostProcess_AnimBP(int32 EntryPoint);
}; // Size: 0x604

#endif
