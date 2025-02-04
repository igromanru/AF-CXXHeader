#ifndef UE4SS_SDK_Deployed_ElectricFan_HPP
#define UE4SS_SDK_Deployed_ElectricFan_HPP

class ADeployed_ElectricFan_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0930 (size: 0x8)
    class UBoxComponent* FanFriendlyVolume;                                           // 0x0938 (size: 0x8)
    class UBoxComponent* FanBladeVolume;                                              // 0x0940 (size: 0x8)
    class UStaticMeshComponent* FanBlade;                                             // 0x0948 (size: 0x8)
    float Gradual_Fan_Blade_Spin_Speed_9A0AF7FD46A683A1E1778E8DCE50D471;              // 0x0950 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Gradual_Fan_Blade_Spin__Direction_9A0AF7FD46A683A1E1778E8DCE50D471; // 0x0954 (size: 0x1)
    class UTimelineComponent* Gradual Fan Blade Spin;                                 // 0x0958 (size: 0x8)
    TArray<class APowerSocket_ChildOfActor_C*> PlugStripPowerSockets;                 // 0x0960 (size: 0x10)
    TArray<class AActor*> ActorsInBladeZone;                                          // 0x0970 (size: 0x10)
    TArray<class AActor*> FriendliesInBladeZone;                                      // 0x0980 (size: 0x10)
    double LastDamageIntervalTime;                                                    // 0x0990 (size: 0x8)
    float Blade Speed;                                                                // 0x0998 (size: 0x4)

    bool IsFanSpinningFastEnoughToDamage?();
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void ApplyDamageToActor(class AActor* DamageActor, bool& Applied);
    void Gradual Fan Blade Spin__FinishedFunc();
    void Gradual Fan Blade Spin__UpdateFunc();
    void TogglePowerFX();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Deployed_ElectricFan_FanBladeVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Deployed_ElectricFan_FanBladeVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void RefreshIsBrokenState();
    void BndEvt__Deployed_ElectricFan_FanFriendlyVolume_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Deployed_ElectricFan_FanFriendlyVolume_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_Deployed_ElectricFan(int32 EntryPoint);
}; // Size: 0x99C

#endif
