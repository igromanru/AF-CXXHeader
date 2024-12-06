#ifndef UE4SS_SDK_SecurityDoor_Animated_HPP
#define UE4SS_SDK_SecurityDoor_Animated_HPP

class ASecurityDoor_Animated_C : public ASecurityDoor_Small_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class USkeletalMeshComponent* AnimatedDoor;                                       // 0x0390 (size: 0x8)

    void OnLoaded_2073B777421B416FC44BF48434C9BC6D(class UObject* Loaded);
    void OnLoaded_7D86A73F43CA19E41DA8B0B5C12408EE(class UObject* Loaded);
    void DoorTimeline();
    void ExecuteUbergraph_SecurityDoor_Animated(int32 EntryPoint);
}; // Size: 0x398

#endif
