#ifndef UE4SS_SDK_Stove_Industrial_8Spots_HPP
#define UE4SS_SDK_Stove_Industrial_8Spots_HPP

class AStove_Industrial_8Spots_C : public AStove_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0970 (size: 0x8)
    class UStaticMeshComponent* Knob8;                                                // 0x0978 (size: 0x8)
    class UStaticMeshComponent* Knob7;                                                // 0x0980 (size: 0x8)
    class UStaticMeshComponent* Knob6;                                                // 0x0988 (size: 0x8)
    class UStaticMeshComponent* Knob5;                                                // 0x0990 (size: 0x8)
    class UStaticMeshComponent* Knob4;                                                // 0x0998 (size: 0x8)
    class UStaticMeshComponent* Knob3;                                                // 0x09A0 (size: 0x8)
    class UStaticMeshComponent* Knob2;                                                // 0x09A8 (size: 0x8)
    class UStaticMeshComponent* Knob1;                                                // 0x09B0 (size: 0x8)
    class UStaticMeshComponent* CookSpot8;                                            // 0x09B8 (size: 0x8)
    class UStaticMeshComponent* CookSpot7;                                            // 0x09C0 (size: 0x8)
    class UStaticMeshComponent* CookSpot6;                                            // 0x09C8 (size: 0x8)
    class UStaticMeshComponent* CookSpot5;                                            // 0x09D0 (size: 0x8)
    class UStaticMeshComponent* CookSpot4;                                            // 0x09D8 (size: 0x8)
    class UStaticMeshComponent* CookSpot3;                                            // 0x09E0 (size: 0x8)
    class UStaticMeshComponent* CookSpot2;                                            // 0x09E8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Stove_Industrial_8Spots(int32 EntryPoint);
}; // Size: 0x9F0

#endif
