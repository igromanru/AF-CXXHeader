#ifndef UE4SS_SDK_Trigger_CompendiumExploration_HPP
#define UE4SS_SDK_Trigger_CompendiumExploration_HPP

class ATrigger_CompendiumExploration_C : public AAbiotic_TriggerVolume_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    FCompendiumEntryRowHandle CompendiumRow;                                          // 0x0350 (size: 0x20)

    void BndEvt__Trigger_CompendiumExploration_TriggerVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_Trigger_CompendiumExploration(int32 EntryPoint);
}; // Size: 0x370

#endif
