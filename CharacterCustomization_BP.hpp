#ifndef UE4SS_SDK_CharacterCustomization_BP_HPP
#define UE4SS_SDK_CharacterCustomization_BP_HPP

class ACharacterCustomization_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UChildActorComponent* camera_customization_fabric;                          // 0x02A0 (size: 0x8)
    class UChildActorComponent* Camera_Customization_Shoes;                           // 0x02A8 (size: 0x8)
    class UChildActorComponent* camera_customization_chest;                           // 0x02B0 (size: 0x8)
    class UChildActorComponent* camera_customization_watch;                           // 0x02B8 (size: 0x8)
    class UChildActorComponent* camera_customization_belt;                            // 0x02C0 (size: 0x8)
    class UChildActorComponent* camera_customization_head;                            // 0x02C8 (size: 0x8)
    class UChildActorComponent* Camera_Customization_Main;                            // 0x02D0 (size: 0x8)
    class USceneComponent* Cameras;                                                   // 0x02D8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02E0 (size: 0x8)

    void GetCameraList(TArray<class ACameraActor*>& Cameras);
    void ReceiveBeginPlay();
    void ViewCameraByTag(FName Tag);
    void ExecuteUbergraph_CharacterCustomization_BP(int32 EntryPoint);
}; // Size: 0x2E8

#endif
