#ifndef UE4SS_SDK_Deployed_StorageCrate_Makeshift_T3_HPP
#define UE4SS_SDK_Deployed_StorageCrate_Makeshift_T3_HPP

class ADeployed_StorageCrate_Makeshift_T3_C : public ADeployed_Container_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UStaticMeshComponent* Lid;                                                  // 0x0928 (size: 0x8)
    float Timeline_NewTrack_0_418C20754A8429E65494A0B251032A48;                       // 0x0930 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline__Direction_418C20754A8429E65494A0B251032A48; // 0x0934 (size: 0x1)
    class UTimelineComponent* Timeline;                                               // 0x0938 (size: 0x8)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void UserConstructionScript();
    void Timeline__FinishedFunc();
    void Timeline__UpdateFunc();
    void ToggleOpenFX(bool Open);
    void ExecuteUbergraph_Deployed_StorageCrate_Makeshift_T3(int32 EntryPoint);
}; // Size: 0x940

#endif
