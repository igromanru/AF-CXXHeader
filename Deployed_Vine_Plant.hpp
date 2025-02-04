#ifndef UE4SS_SDK_Deployed_Vine_Plant_HPP
#define UE4SS_SDK_Deployed_Vine_Plant_HPP

class ADeployed_Vine_Plant_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0930 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x0938 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0940 (size: 0x8)
    float GrowVines_NewTrack_0_99E253FB4E8B58AF959E27BE5AF19D1B;                      // 0x0948 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> GrowVines__Direction_99E253FB4E8B58AF959E27BE5AF19D1B; // 0x094C (size: 0x1)
    class UTimelineComponent* GrowVines;                                              // 0x0950 (size: 0x8)

    void GrowVines__FinishedFunc();
    void GrowVines__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Deployed_Vine_Plant(int32 EntryPoint);
}; // Size: 0x958

#endif
