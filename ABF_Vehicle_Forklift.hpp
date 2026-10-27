#ifndef UE4SS_SDK_ABF_Vehicle_Forklift_HPP
#define UE4SS_SDK_ABF_Vehicle_Forklift_HPP

class AABF_Vehicle_Forklift_C : public AABF_Vehicle_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0588 (size: 0x8)
    class UStaticMeshComponent* headlightbeam;                                        // 0x0590 (size: 0x8)
    class UBoxComponent* ImpactBox;                                                   // 0x0598 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_ABF_Vehicle_Forklift(int32 EntryPoint);
}; // Size: 0x5A0

#endif
