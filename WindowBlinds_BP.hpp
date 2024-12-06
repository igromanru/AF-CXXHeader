#ifndef UE4SS_SDK_WindowBlinds_BP_HPP
#define UE4SS_SDK_WindowBlinds_BP_HPP

class AWindowBlinds_BP_C : public AActor
{
    class UStaticMeshComponent* Blinds;                                               // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Blinds_Mount;                                         // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    TEnumAsByte<E_WindowBlindType::Type> BlindsType;                                  // 0x02B0 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x2B1

#endif
