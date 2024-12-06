#ifndef UE4SS_SDK_FacilityQuaker_HPP
#define UE4SS_SDK_FacilityQuaker_HPP

class AFacilityQuaker_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    FTimerHandle FacilityShakeTimer;                                                  // 0x02B0 (size: 0x8)
    FFacilityQuaker_COnFacilityShake OnFacilityShake;                                 // 0x02B8 (size: 0x10)
    void OnFacilityShake();

    void CheckBadTimeForQuake(bool& BadTime);
    void Trigger_FacilityShake();
    void ReceiveBeginPlay();
    void Server_DoFacilityShake();
    void ExecuteUbergraph_FacilityQuaker(int32 EntryPoint);
    void OnFacilityShake__DelegateSignature();
}; // Size: 0x2C8

#endif
