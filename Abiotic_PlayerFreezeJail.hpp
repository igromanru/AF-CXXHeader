#ifndef UE4SS_SDK_Abiotic_PlayerFreezeJail_HPP
#define UE4SS_SDK_Abiotic_PlayerFreezeJail_HPP

class AAbiotic_PlayerFreezeJail_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Cube5;                                                // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* Cube4;                                                // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* Cube3;                                                // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* Cube2;                                                // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* Cube1;                                                // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x02C8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02D0 (size: 0x8)
    bool RecentlyTeleported;                                                          // 0x02D8 (size: 0x1)

    void CheckRecentlyTeleported();
    void OnRep_RecentlyTeleported();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Abiotic_PlayerFreezeJail(int32 EntryPoint);
}; // Size: 0x2D9

#endif
