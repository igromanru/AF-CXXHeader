#ifndef UE4SS_SDK_Stove_Industrial_8Spots_HPP
#define UE4SS_SDK_Stove_Industrial_8Spots_HPP

class AStove_Industrial_8Spots_C : public AStove_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A40 (size: 0x8)
    class UStaticMeshComponent* Knob8;                                                // 0x0A48 (size: 0x8)
    class UStaticMeshComponent* Knob7;                                                // 0x0A50 (size: 0x8)
    class UStaticMeshComponent* Knob6;                                                // 0x0A58 (size: 0x8)
    class UStaticMeshComponent* Knob5;                                                // 0x0A60 (size: 0x8)
    class UStaticMeshComponent* Knob4;                                                // 0x0A68 (size: 0x8)
    class UStaticMeshComponent* Knob3;                                                // 0x0A70 (size: 0x8)
    class UStaticMeshComponent* Knob2;                                                // 0x0A78 (size: 0x8)
    class UStaticMeshComponent* Knob1;                                                // 0x0A80 (size: 0x8)
    class UStaticMeshComponent* CookSpot8;                                            // 0x0A88 (size: 0x8)
    class UStaticMeshComponent* CookSpot7;                                            // 0x0A90 (size: 0x8)
    class UStaticMeshComponent* CookSpot6;                                            // 0x0A98 (size: 0x8)
    class UStaticMeshComponent* CookSpot5;                                            // 0x0AA0 (size: 0x8)
    class UStaticMeshComponent* CookSpot4;                                            // 0x0AA8 (size: 0x8)
    class UStaticMeshComponent* CookSpot3;                                            // 0x0AB0 (size: 0x8)
    class UStaticMeshComponent* CookSpot2;                                            // 0x0AB8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Stove_Industrial_8Spots(int32 EntryPoint);
}; // Size: 0xAC0

#endif
