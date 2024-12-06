#ifndef UE4SS_SDK_BP_Mirage_Symphonist_HPP
#define UE4SS_SDK_BP_Mirage_Symphonist_HPP

class ABP_Mirage_Symphonist_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UNiagaraComponent* DissolveParticle;                                        // 0x02A0 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    float Timeline_NewTrack_1_D61AF395439E9B2C591FC2A2FF2C22E3;                       // 0x02B8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline__Direction_D61AF395439E9B2C591FC2A2FF2C22E3; // 0x02BC (size: 0x1)
    class UTimelineComponent* Timeline;                                               // 0x02C0 (size: 0x8)
    bool Despawning;                                                                  // 0x02C8 (size: 0x1)

    void OnRep_Despawning();
    void Timeline__FinishedFunc();
    void Timeline__UpdateFunc();
    void InitDissolveMaterials(bool Reset);
    void ActivateDissolveParticles();
    void PlayDissolveFX(bool Reverse);
    void ReceiveBeginPlay();
    void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
    void ExecuteUbergraph_BP_Mirage_Symphonist(int32 EntryPoint);
}; // Size: 0x2C9

#endif
