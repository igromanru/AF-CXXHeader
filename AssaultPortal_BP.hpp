#ifndef UE4SS_SDK_AssaultPortal_BP_HPP
#define UE4SS_SDK_AssaultPortal_BP_HPP

class AAssaultPortal_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class USphereComponent* ElectronOverlap;                                          // 0x02A0 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x02A8 (size: 0x8)
    class UPostProcessComponent* PostProcess;                                         // 0x02B0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x02B8 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x02C0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C8 (size: 0x8)
    bool ClosePortal;                                                                 // 0x02D0 (size: 0x1)
    FAssaultPortal_BP_CPortalForcedClosed PortalForcedClosed;                         // 0x02D8 (size: 0x10)
    void PortalForcedClosed(FVector Location);
    class UNiagaraComponent* Beam;                                                    // 0x02E8 (size: 0x8)

    void OnRep_ClosePortal();
    void ReceiveBeginPlay();
    void ClosePortalFX();
    void ForceClosePortal();
    void Broadcast_ExplodePortal(class AAbioticDeployed_CraftingBench_ParentBP_C* CraftingBench);
    void ReceiveDestroyed();
    void ExecuteUbergraph_AssaultPortal_BP(int32 EntryPoint);
    void PortalForcedClosed__DelegateSignature(FVector Location);
}; // Size: 0x2F0

#endif
