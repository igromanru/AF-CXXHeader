#ifndef UE4SS_SDK_BP_FishingHotspot_HPP
#define UE4SS_SDK_BP_FishingHotspot_HPP

class ABP_FishingHotspot_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x02A0 (size: 0x8)
    class UNiagaraComponent* Niagara_Water_FishingSpot;                               // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    bool HotspotActive;                                                               // 0x02B8 (size: 0x1)
    bool Registered;                                                                  // 0x02B9 (size: 0x1)
    double Cooldown;                                                                  // 0x02C0 (size: 0x8)
    int32 UseAmount;                                                                  // 0x02C8 (size: 0x4)
    double CooldownStartTime;                                                         // 0x02D0 (size: 0x8)

    void CanUseThisHotspot(bool& CanUse);
    void OnRep_HotspotActive();
    void IsHotspotOnCooldown(bool& OnCooldown);
    void UpdateHotspotVisiblity();
    void ReceiveBeginPlay();
    void OnBuffTagContainerRefreshed_Event();
    void ServerUseHotspot();
    void ExecuteUbergraph_BP_FishingHotspot(int32 EntryPoint);
}; // Size: 0x2D8

#endif
