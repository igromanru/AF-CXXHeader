#ifndef UE4SS_SDK_Resource_Micronode_LeyakEssence_HPP
#define UE4SS_SDK_Resource_Micronode_LeyakEssence_HPP

class AResource_Micronode_LeyakEssence_C : public AResource_MicroNode_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x04E0 (size: 0x8)
    float FloatDownTimeline_NewTrack_0_945DD8F345F91028E12829B01DC2DC20;              // 0x04E8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FloatDownTimeline__Direction_945DD8F345F91028E12829B01DC2DC20; // 0x04EC (size: 0x1)
    class UTimelineComponent* FloatDownTimeline;                                      // 0x04F0 (size: 0x8)

    void FloatDownTimeline__FinishedFunc();
    void FloatDownTimeline__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Resource_Micronode_LeyakEssence(int32 EntryPoint);
}; // Size: 0x4F8

#endif
